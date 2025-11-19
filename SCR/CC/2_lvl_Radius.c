// A program for finding radius of a circle and volume of a cylender 
#include<stdio.h>
int main(){
 int r, height;
 printf("Enter the radius :\n");
 scanf("%d",&r);

  printf("Enter the height :\n");
 scanf("%d",&height);

 printf("The radius of a circle with radius %d is : %f\n", r , 3.1445*r*r);
 printf("The volume of a cylender with radius %d is : %f\n" ,r,3.1445*r*r*height);
return 0;
}