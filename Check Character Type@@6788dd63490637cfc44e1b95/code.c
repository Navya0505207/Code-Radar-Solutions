#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);

    if(a=='a' || a=='e'|| a=='i'|| a=='o'|| a=='u'|| a=='O'||a=='A' || a=='E'|| a=='I'|| a=='U'){printf("Vowel");}
    else if(a>='b' && a<='z' || a>='A' && a<='Z'){printf("Consonant");}
    else if(a>='0' && a<='9'){printf("Digit");}
    else {printf("Special Character");}
    return 0;
}