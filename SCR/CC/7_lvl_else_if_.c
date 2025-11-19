#include<stdio.h>
int main(){
int age ;
printf("Enter your age :\n");
scanf("%d", &age);
if (age>60)
{
    printf("you can drive Dada ji :} ");
}
else if (age>30)
{
    printf("you can drive but carefully :]");
}
else if (age>17)
{
    printf("you can drive :)");
}
else {
    printf("you cannot drive :|");
}
return 0;
}