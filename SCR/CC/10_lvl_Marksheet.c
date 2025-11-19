#include<stdio.h>
int main(){
    int mark1, mark2, mark3;
    printf("Enter the mark1 :\n");
    scanf("%d", &mark1);
    scanf("%d", &mark2);
    printf("Enter the mark2 :\n");
    printf("Enter the mark3 :\n");
    scanf("%d", &mark3);
    // printf("Enter Marks : \n");
    // scanf("%d %d %d\n",&mark1,&mark2,&mark3);

    printf("THE VALUES OF MARKS ARE %d, %d and %d\n", mark1, mark2, mark3);

    if (mark1 < 33 || mark2 < 33 || mark3 < 33)
    {
        printf("You failed in individual subject due to less marks (Sorry)\n");
    }
    else if ((mark1 + mark2 + mark3) / 3 < 40)
    {
        printf("You failed due to less percentage (Sorry)\n");
    }
    else
    {
        printf("You are passed!\n");
    }

    return 0;
}
