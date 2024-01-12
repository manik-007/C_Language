# include<stdio.h> 
int main() {
int num;

printf("Enter the number:", num);
scanf("%d", &num);

if(num %2 == 0) {
    printf("The number is divisible by 2 (even)");
}
else(
    printf("The number is not divisible by 2 (odd)")
);

    return 0;
}