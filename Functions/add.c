#include<stdio.h>
int add(int x , int y ){
    int z = x+y;
    return z;
}
int main(){
    int a , b ;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("The Sum of the given numbers is %d \n",add(a,b));
}