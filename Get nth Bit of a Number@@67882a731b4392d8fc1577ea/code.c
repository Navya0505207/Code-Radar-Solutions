// Your code here...#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d",&a,&b);
    c=a>>b;
    if (c & 1){printf("1");}
    else{printf("0");}
    return 0;
}// Your code here...