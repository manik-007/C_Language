# include<stdio.h>

int main() {
    int a, b, c, avg;

    printf("Enter first number:",a);
    scanf("%d", &a);

    printf("Enter seocnd number:",b);
    scanf("%d", &b);

    printf("Enter third3 number:",c);
    scanf("%d", &c);

    //formula
    avg = ( a + b + c ) / 3;

    printf("Average of three number is: %d", avg);

    return 0;

}