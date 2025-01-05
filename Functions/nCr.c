#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
     }//it is just multiplying  the all the number less than the fact and sotring the value of the multiply in fact.
    return fact;
}

int nCr(int n, int r) {
    int num = factorial(n);
    int den = factorial(r) * factorial(n-r);
    int ans = num/den;
    return ans;
}

int main() {
    int n, r;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    printf("Enter the value of r\n");
    scanf("%d", &r);
    printf("The nCR of the given values is %d\n", nCr(n,r));
    
}
