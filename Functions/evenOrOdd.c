#include<stdio.h>
void evenOrOdd(int a){
    if(a%2 == 0 ){
        printf("The given number is even\n");

    }
    else{
        printf("The Given number is  odd \n");
    }


}

int main(){
    int a ;
    printf("Enter the number to be checked:");
    scanf("%d",&a);
    evenOrOdd(a);
}