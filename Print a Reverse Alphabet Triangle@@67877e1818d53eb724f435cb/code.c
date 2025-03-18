#include<stdio.h>
int main()
{
    int i,j,n;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int ch = 'A';
        
        for(j=0;j<n-i;j++){
        printf("%c " ,ch);
        ch=ch+1;}
        printf("\n");}
        return 0;}