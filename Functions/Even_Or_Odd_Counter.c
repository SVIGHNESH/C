#include<stdio.h>
int Even_Or_Odd_Counter(int arr[], int size){
    int evenCount = 0 ;
    int oddCount = 0 ;
    for(int i = 0 ;i < size ; i++){
        if(arr[i]%2 == 0){
            evenCount++;

        }
        else{
            oddCount++;
        }
    }

    printf("The Even Count in the Given Array is %d\n",evenCount);
    printf("The Odd Count in the Given Array is %d\n",oddCount);

}

int main(){
    int arr[10];
    printf("Enter the Elements in the Array:\n");
    for (int  i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }

    Even_Or_Odd_Counter(arr,10);
 

    
}