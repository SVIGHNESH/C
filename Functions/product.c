#include<stdio.h>
int mul(int a,int b){
    int product = a*b;

    return product;
}

int main(){

    int a,b;

    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("The Sum of the given numbers is %d \n",mul(a,b));
}