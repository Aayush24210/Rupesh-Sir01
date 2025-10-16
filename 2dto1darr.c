#include <stdio.h>
int main()
{
    int arr[2][2] = {(1, 2),(3, 4)};
    int arr1[4];
    int k = 0;
    for (int i = 0; i < 0; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr1[k] = arr[i][j];
        k++;
        }

    }
    for (int i = 0; i <4; i++)
    {
        printf("%d",arr1[i]);
    }
    
    return 0;
}