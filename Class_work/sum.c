#include <stdio.h>
int a,b,sum;
int main() {

    printf("enter two numbers:");
    scanf("%d %d", &a, &b);

    //calculate the sum
    sum=a+b;
    printf("%d", sum);

    return 0;
}