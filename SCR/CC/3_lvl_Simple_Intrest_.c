// For finding Simple intrest 
#include<stdio.h>
int main(){
float p,r,t;
printf("Enter the principle amount :\n");
scanf("%f",&p);

printf("Enter the Rate :\n");
scanf("%f",&r);

printf("Enter the Time :\n");
scanf("%f",&t);

printf("The Simple intrest is : %f", (p*r*t)/100);
return 0;
}