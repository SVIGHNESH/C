#include<stdio.h>  
int main()    
{    
    int n, reverse=0, rem;    
    printf("Enter a number: ");    
    scanf("%d", &n); //this is just me testing the git function that it is going to work or not     
    while(n!=0)    
      {    
         rem=n%10;    
         reverse=reverse*10+rem;    
         n = n/10;    
      }    
    printf("Reversed Number: %d\n",reverse);    
    return 0;  
}   
