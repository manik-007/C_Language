// # include<stdio.h>

// int main() {
//     int isSunday = 1;
//     int isSnowing = 1;

//     printf("%d \n", isSunday && isSnowing);

//     return 0;
// }


// # include<stdio.h>

// int main() {
//     int isMonday = 1;
//     int isRaining = 1;

//     printf("%d \n", isMonday || isRaining);
    
//     return 0;
// }


# include<stdio.h>

int main() {
    int num;

    printf("Enter the number :", num);
    scanf("%d", &num);

//can be appicable for two digit number
    printf("%d \n", num > 9 && num < 100);
    
    return 0;
}