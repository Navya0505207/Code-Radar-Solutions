#include<stdio.h>
int main(){
    ch a;
    scanf("%d",&a);
    printf("%d",a);

    if(a>=65 && a<=90){printf("Uppercase");}
    else{printf("Lowercase");}
    return 0;
}