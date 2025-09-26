#include<stdio.h>
int main(){
for(int i=0;i<5;i++){
    for(int j=0;j<=i;j++)
    {
    printf("*");
    }
    for(int k=3;k>=i;k--){
    printf("  ");
    }
    
    
        for(int l =0;l<=i;l++){
            printf("*");
        }
    
 printf("\n");
 }for(int i=0;i<4;i++){
    for(int j=4;j>=i;j--)
    {
    printf("*");
    }
    for(int k=0;k<i;k++)
    {
    printf("  ");
    }
        for(int l =4;l>=i;l--)
        {
            printf("*");
        }printf("\n");
}}

// int main ()
// {
//     int n=5;
// for(int i=1;i<=n;i++)
// {
//     for(int j = 1 ; j<=n;j++){
//         printf("*");
//         if(i==1 || i==n || j==1||j==n){
//             printf(" ");
//         }else{
//             printf(" ");
//         }
//     } 
//     printf("\n");
// }

// }