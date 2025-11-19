// A funcion for finding a area of a Rectangle 
#include<stdio.h>
int main(){
// int length = 5 , breath = 6;
// printf("The area of rectangle is %d",length*breath);
int length,breath;
printf("Enter the length:\n");
scanf("%d" , &length);

printf("Enter the breath:\n");
scanf("%d" , &breath);

printf("The area of rectangle is : %d",length*breath);
return 0;
}