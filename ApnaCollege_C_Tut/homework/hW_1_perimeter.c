#include <stdio.h>

int main() {
    int a, b, perimeter;
 
    printf("Enter length :", a);
    scanf("%d", &a);

     printf("Enter breadth :", b);
    scanf("%d", &b);

    perimeter = 2 * (a + b);

     printf("Perimeter is: %d", perimeter);


    return 0;
}