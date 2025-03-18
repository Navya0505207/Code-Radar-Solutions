#include<stdio.h>
int main()
{
    int i,j,n,mul=1;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        mul=mul*i;
        printf("%d x %d = %d",n,i,mul);
        
    }
    return 0;
}