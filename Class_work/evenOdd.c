// #include <stdio.h>

// int main() {
//     int num;
//     printf("enter the number");
//     scanf("%d", &num);

//     if(num % 2 == 0) {
//         printf("The number is even");
//     }
//     else if(num = 0){
//         printf("The number is 0, kindly enter another number");
//     }
//     else
//     printf("The number is odd");
 
//     return 0;
// }

#include <stdio.h>

int main() {
    int num;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num % 2 == 0)
            printf("%d is an even number\n", num);
        else
            printf("%d is an odd number\n", num);

        printf("Do you want to check another number? (y/n): ");
        scanf(" %c", &choice);

    } while(choice == 'y' || choice == 'Y');

    return 0;
}

