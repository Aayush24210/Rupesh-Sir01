#include <stdio.h>
int main()
{
    int a = 1;
    int b = 1;
    printf("The value of a and b is %d\n", a && b);//And operator
    printf("The value of a Or b is %d\n", a || b);//Or operator
    printf("The value of not(a) is %d\n", !a);// true to false 
    // same as writing
    //  if (a)
    //  {
    //     if (b)
    //     {
    //       //code
    //     }
    //  }
    return 0;
}