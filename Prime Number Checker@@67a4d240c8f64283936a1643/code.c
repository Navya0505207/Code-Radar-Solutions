#include <stdio.h>

// Function to check if a number is prime
int isPrime(int t) {
    if (t <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= t; i++) {  // Loop till sqrt(n)
        if (t % i == 0) 
            return 0; // Not prime
    }
    return 1; // Prime
}

int main() {
    int t;
    printf("Enter a number: ");
    scanf("%d", &t);

    if (isPrime(t))
        printf("%d is a Prime Number.\n", t);
    else
        printf("%d is Not a Prime Number.\n", t);

    return 0;
}
