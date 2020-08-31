#include <stdio.h>

int main(void){
   int n;
   int arr[20];
   int *ptr = arr;
   
    printf("Enter array length: ");
    scanf("%d",&n);                                             //asking of length of array
   for(int i = 0; i < n; i++){
       printf("Enter element no.%d: ",i+1);                     //taking array from user
       scanf("%d",ptr+i);
   }
   printf("\n=============================================\n");
   printf("your array is: \n");
   for(int i = 0; i < n; i++){
       if(i == 0){printf("[");}
       printf(" %d ",arr[i]);                                   //printing array
   }
        printf("]");
    printf("\n=============================================\n");
}