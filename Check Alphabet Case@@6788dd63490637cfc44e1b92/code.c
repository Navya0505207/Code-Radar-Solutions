#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",a);

    if(a>='A' && a<='Z'){printf("Uppercase");}
    else{printf("Lowercase");}
    return 0;
}