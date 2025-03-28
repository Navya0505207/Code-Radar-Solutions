int isPrime(int t) {
    if (t <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= t; i++) {  // Loop till sqrt(n)
        if (t % i == 0) 
            return 0; // Not prime
    }
    return 1; // Prime
}
