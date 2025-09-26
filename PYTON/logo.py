from PIL import Image, ImageDraw, ImageFont, ImageFilter
import math
import numpy as np

def create_circular_text(text, radius, font, center, start_angle=0):
    """Create circular text effect"""
    chars = []
    angle_per_char = 360 / len(text)
    
    for i, char in enumerate(text):
        angle = math.radians(start_angle + i * angle_per_char)
        x = center[0] + radius * math.cos(angle)
        y = center[1] + radius * math.sin(angle)
        
        # Create character image
        char_img = Image.new('RGBA', (100, 100), (0, 0, 0, 0))
        char_draw = ImageDraw.Draw(char_img)
        char_draw.text((50, 50), char, font=font, fill=(0, 212, 255, 255), anchor="mm")
        
        # Rotate character
        rotated_char = char_img.rotate(-angle - 90, expand=True, fillcolor=(0, 0, 0, 0))
        chars.append((rotated_char, (x - rotated_char.width//2, y - rotated_char.height//2)))
    
    return chars

def create_lightning_bolt(size, color):
    """Create a lightning bolt symbol"""
    img = Image.new('RGBA', size, (0, 0, 0, 0))
    draw = ImageDraw.Draw(img)
    
    # Lightning bolt coordinates
    points = [
        (size[0]//2, size[1]//4),
        (size[0]//3, size[1]//2),
        (size[0]//2, size[1]//2),
        (size[0]//4, 3*size[1]//4),
        (size[0]//2, size[1]//2),
        (2*size[0]//3, 3*size[1]//4),
        (size[0]//2, 3*size[1]//4)
    ]
    
    draw.polygon(points, fill=color)
    return img

def create_tempest_logo():
    """Create full Tempest Gamerz circular logo"""
    size = 2000
    img = Image.new('RGB', (size, size), (10, 25, 47))  # Deep navy background
    draw = ImageDraw.Draw(img)
    
    # Draw circle border
    draw.ellipse((50, 50, size-50, size-50), outline=(0, 212, 255), width=8)
    
    # Load font
    try:
        font = ImageFont.truetype("Orbitron-Bold.ttf", 80)
    except:
        font = ImageFont.load_default()
    
    center = (size//2, size//2)
    
    # Create circular text
    top_text = create_circular_text("TEMPEST", 800, font, center, start_angle=180)
    bottom_text = create_circular_text("GAMERZ", 800, font, center, start_angle=0)
    
    # Draw text
    for char, pos in top_text:
        img.paste(char, pos, char)
    for char, pos in bottom_text:
        img.paste(char, pos, char)
    
    # Add lightning bolt in center
    lightning = create_lightning_bolt((300, 400), (0, 255, 255))
    img.paste(lightning, (size//2 - 150, size//2 - 200), lightning)
    
    # Add glow effect
    img = img.filter(ImageFilter.GaussianBlur(1))
    
    # Save with compression
    img.save("tempest_gamerz_full.png", "PNG", quality=95, optimize=True)
    print("Full logo created: tempest_gamerz_full.png")

def create_tg_logo():
    """Create TG monogram logo"""
    size = 1000
    img = Image.new('RGB', (size, size), (10, 25, 47))  # Deep navy background
    draw = ImageDraw.Draw(img)
    
    # Draw circle border
    draw.ellipse((30, 30, size-30, size-30), outline=(192, 192, 192), width=6)
    
    # Load font
    try:
        font = ImageFont.truetype("Orbitron-Bold.ttf", 400)
    except:
        font = ImageFont.load_default()
    
    # Create TG text
    tg_img = Image.new('RGBA', (size, size), (0, 0, 0, 0))
    tg_draw = ImageDraw.Draw(tg_img)
    tg_draw.text((size//2, size//2), "TG", font=font, fill=(0, 212, 255), anchor="mm")
    
    # Add gradient effect
    for y in range(size):
        alpha = int(255 * (1 - abs(y - size//2) / (size//2)))
        color = (0, 212, 255, alpha)
        tg_draw.line([(0, y), (size, y)], fill=color)
    
    img.paste(tg_img, (0, 0), tg_img)
    
    # Add small lightning bolt
    lightning = create_lightning_bolt((80, 100), (0, 255, 255))
    img.paste(lightning, (size//2 + 150, size//2 - 50), lightning)
    
    # Save with compression
    img.save("tempest_gamerz_tg.png", "PNG", quality=95, optimize=True)
    print("TG logo created: tempest_gamerz_tg.png")

# Generate both logos
if __name__ == "__main__":
    create_tempest_logo()
    create_tg_logo()