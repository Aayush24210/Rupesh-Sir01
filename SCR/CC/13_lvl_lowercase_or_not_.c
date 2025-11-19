#include<stdio.h>
int main(){
char ch;
printf("Enter The character :\n");
scanf("%c",&ch);

printf("The character is %c\n",ch);
printf("The value of character is %d\n",ch);
// 97 122
if (ch>=97 && ch<=122)
{
    printf("This character is lowercase \n");
}
else
{
    printf("The charcter is not lowercase \n ");

}

return 0;
}