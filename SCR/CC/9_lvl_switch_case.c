#include <stdio.h>
int main()
{
    int a;
    printf("Enter a :");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("you entered 1 ");
        break;
    case 2:
        printf("you entered 2");
        break;
    default:
        printf("you entered out of code");
        break;
    }
    return 0;
}