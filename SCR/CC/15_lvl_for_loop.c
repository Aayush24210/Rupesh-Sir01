// #include<stdio.h>
// int main(){
//     int n,i=1;
//     scanf("%d",&n);
//     for ( i = 0; i < n; i++)  //in for loop first define data type then checks the condition and then runs increment operator   
//     {
//         printf("the value of i is %d\n",i);
//     }
    
// return 0;
// }

#include<stdio.h>
int main(){
    int n ;
    printf("Enter a value to be reversed\n");
    scanf("%d",&n);                         //int n=7;

for (int i =n; i ; i--) //in decremeinting loop first give the count in the form of n , i checks values validite and and runns then decrement
{
    printf("i = %d\n",i);
}

return 0;
}   