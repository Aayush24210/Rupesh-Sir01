//  Do while loop
 #include<stdio.h>
 int main(){
    int n,i=1;
    scanf("%d",&n);     /*first runs then checks condition
                        no data type  */
    do      
    {
        printf("%d\n",i);    
        i++;
    } while (i<=n);    
 return 0;
 }
