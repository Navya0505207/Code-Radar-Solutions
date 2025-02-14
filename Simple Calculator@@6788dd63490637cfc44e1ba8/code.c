
#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d%d",&a,&b);
    scanf("%c",&c);

    if(c=='+'){printf("%d%d",a+b);}
    
    else{printf("Different Sign");}
    return 0;
}