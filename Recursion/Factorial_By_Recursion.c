#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int ans = factorial(n);
    printf(" The factorial of %d is %d\n",n, ans);

    return 0;
}

