#include<stdio.h>
#include<math.h>
int main () {
    int a,b,c,r1,r2,r,d;
    printf("Enter the coefficients \n");
    scanf("%d %d %d", &a, &b, &c);

    d = b * b - (4 * a * c);

    printf("The value of d is : %d \n", d);

    if(d < 0) {
        printf("The roots are imaginary \n");
    } else {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots are %d and %d \n", r1, r2);
    }
    if(d == 0) {
        r = -b / (2 * a);
        printf("The roots are equal and the value is %d \n", r);
    }
    return 0;
}