#include<stdio.h>
#include<conio.h>   
#include<math.h>
int main() {

    int m, n, i=1, sum = 0, term;

    printf("Enter the power of series");
    scanf("%d", &n);

    printf("Enter the last number of series");
    scanf("%d", &m);

    while(i <= m) {
        term = pow(i, n);
        sum = sum + term;
        i++;
    }
    printf("The sum of series is %d", sum);
}


