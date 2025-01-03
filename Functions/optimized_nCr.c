#include <stdio.h>


long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}


long long nCr(int n, int r) {
    if (r > n || n < 0 || r < 0) {
        printf("Error: Invalid input. Please ensure that n and r are non-negative integers, and r is not greater than n.\n");
        return -1;
    }
    long long num = factorial(n);
    long long den = factorial(r) * factorial(n - r);
    return num / den;
}

int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    long long result = nCr(n, r);
    if (result != -1) {
        printf("The nCr of the given values is %lld\n", result);
    }

  
}
