// Your code here...// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d",&a,&b);

    if(a==b && a==c && b==c){printf("Equilateral");}
    else if(a==b || a==c){printf("Isosceles");}
    
    else if(a!=b && a!= c) {printf("Scalene");}
    else{printf("None of these");}
    return 0;
}