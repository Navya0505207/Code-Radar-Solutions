#include<stdio.h>
int main()
{
    int i,j,n;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int s = 1;
        for(j=0;j<=i;j++){
        printf("%d ",s);
        s=s+1;}
        printf("\n");}
        return 0;}