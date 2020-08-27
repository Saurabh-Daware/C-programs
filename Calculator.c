#include <stdio.h>

int main(){
    double num1,num2;
    char operator;
    printf("Enter an operator (+,-,*,/): ");
    scanf("%c",&operator);
    printf("Enter first number: ");
    scanf("%lf",&num1);
    printf("Enter second number: ");
    scanf("%lf",&num2);
    
    switch (operator){
        case '+':
            printf("%4.3lf",num1+num2);
            break;
        case '-':
            printf("%4.3lf",num1-num2);
            break;
        case '*':
            printf("%4.3lf",num1*num2);
            break;
        case '/':
            printf("%4.3lf",num1/num2);
            break;
        default:
            printf("Enter a valid operation");
            break;
    }
}