/* //Swapping of two numbers using third variable

# include<stdio.h>

int main() {
int a, b, c;

printf("Enter two numbers A and B \n");
scanf("%d %d", &a, &b);

c=a;
a=b;
b=c;

printf("The value of numbers after swapping is:  %d \n %d", a, b);
    return 0;
}
*/

//Swapping of two numbers without using third variable

# include<stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers A and B:");
    scanf("%d %d", &a, &b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("The value of numbers after swapping is: %d \n %d", a, b);
    return 0;
}