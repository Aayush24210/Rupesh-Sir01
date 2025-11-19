#include<stdio.h>
int main(){
int a,b,c,d;
printf("Enter the values :\n");
scanf(" %d %d %d %d",&a,&b,&c,&d);
if (a>b && a>c && a>d)
{
    printf("The greatest of all is : %d",a);
}
if (b>a && b>c && b>d)
{
    printf("The greatest of all is : %d",b);
}
if (c>b && c>a && c>d)
{
    printf("The greatest of all is : %d",c);
}
if (d>b && d>c && d>a)
{
    printf("The greatest of all is : %d",d);
}

return 0;
}