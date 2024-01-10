#include <stdio.h>

int main() {
    int first, second, sum, sub, mul;
    float div;

    //data input 
    printf("Enter two numbers");
    scanf("%d %d",&first, &second);
    
    //formulas
    sum = first + second;
    sub = first - second;
    div = first / second;
    mul = first * second;

    //data output
    printf("Sum of two number is: %d \n", sum);
    printf("Subtraction of two number is: %d \n", sub);
    printf("Product of two number is: %d \n", mul);
    printf("Division of two number is: %f \n", div);
    
    return 0;
}
