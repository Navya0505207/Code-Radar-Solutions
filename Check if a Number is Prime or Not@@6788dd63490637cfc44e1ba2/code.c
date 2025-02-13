// Your code here...#include <stdio.h>
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11) {
        printf("Prime number\n");
    } else if (n < 2 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) {
        printf("Not a prime number\n");
    } else {
        printf("Prime number\n");
    }

    return 0;
}
