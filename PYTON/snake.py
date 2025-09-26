import pygame
import sys
import math

# Initialize Pygame
pygame.init()
WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Snake Following Cursor")

# Colors
BLACK = (0, 0, 0)
GREEN = (0, 255, 0)

# Snake settings
snake_length = 20
segment_size = 15
snake = [(WIDTH // 2, HEIGHT // 2)] * snake_length  # list of (x, y)

clock = pygame.time.Clock()

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

    # Get mouse position
    mx, my = pygame.mouse.get_pos()

    # Move head towards cursor
    hx, hy = snake[0]
    angle = math.atan2(my - hy, mx - hx)
    hx += math.cos(angle) * 5
    hy += math.sin(angle) * 5
    snake[0] = (hx, hy)

    # Move rest of body segments
    for i in range(1, snake_length):
        prev_x, prev_y = snake[i - 1]
        x, y = snake[i]
        angle = math.atan2(prev_y - y, prev_x - x)
        x = prev_x - math.cos(angle) * segment_size
        y = prev_y - math.sin(angle) * segment_size
        snake[i] = (x, y)

    # Draw everything
    screen.fill(BLACK)
    for (x, y) in snake:
        pygame.draw.circle(screen, GREEN, (int(x), int(y)), segment_size // 2)
    pygame.display.flip()

    clock.tick(60)
