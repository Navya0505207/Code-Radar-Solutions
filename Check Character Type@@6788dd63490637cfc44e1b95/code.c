#include<stdio.h>
int main(){
    char a;
    scanf("%d",&a);

    if(a='a' || a='e'|| a='i'|| a='o'|| a='u'){printf("Vowel");}
    else if(a>='b' && a<='z'){printf("Consonant");}
    else if(a>='0' && a<='9'){printf("Digit");}
    else {printf("Special Character");}
    return 0;
}