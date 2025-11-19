#include<stdio.h>
int main(){
int income;              //this is a progressive tax 
float tax =0;            //Agr income 500000 h toh uska pichla tax bhi lagega yane 5%+20%
printf("Enter income : \n");
scanf("%d",&income);
if (income<250000)
{
    tax = 0;
}
else if (income>250000 && income<=500000)
{
    tax = 0.05 * (income - 250000);
}
else if (income>500000 && income<=1000000)
{
    tax = 0.05 * (500000- 250000) + 0.2* (income - 500000);
}
else 
{
    tax = 0.05 * ( 500000 - 250000) + 0.2 * (1000000-500000) + 0.3 *(income - 1000000);
}
printf("The total tax you need to pay is %.2f",tax);
  // this %.2f represents only 2 digit of value
return 0;
}