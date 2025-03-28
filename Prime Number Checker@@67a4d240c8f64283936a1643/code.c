#include <stdio.h>
int prime(int t);



int main() { 
    

    printf("Enter a number: ");
    scanf("%d", &t);
     return 0;
}
   prime(int t){
    if (t <= 1) {
        isPrime = 0; // 0 and 1 are not prime
    } else {
        for (i = 2; i * i <= t; i++) {  // Optimized loop till sqrt(n)
            if (t % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a Prime Number.\n", n);
    else
        printf("%d is Not a Prime Number.\n", n);
   }
   