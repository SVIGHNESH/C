#include<stdio.h>
void fact(int n ){
    int fact = 1 ;
           for (int i = 1; i <= n; ++i) {
            fact = fact * i ;
    }
   printf("The factorial of the given number is %d\n",fact);

}
int main(){

   
    int n;
    printf("Enter the number of which you want to find the Factorial:");
    scanf("%d",&n);
    fact(n);

}