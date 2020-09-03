#include <stdio.h>

int main(void){
    int number, times;
    printf("Enter number of which table you want: ");
    scanf("%d",&number);
    printf("You want table of %d till ? ",number);
    scanf("%d",&times);

    printf("Table of %d:\n",number);
    for(int i = 1; i <= times; i++){
        printf("%d x %d = %d\n", number, i, number*i);
    }
}