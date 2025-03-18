#include<stdio.h>
int main()
{
    int i,j,n;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        char ch='A';
        for(j=0;j<=i;j++){
        printf("%c",ch);
        ch=ch+1;}
        printf("\n");}
        return 0;}