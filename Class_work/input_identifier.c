#include<stdio.h>
#include<conio.h>
int main() {
    char ch;
    printf("Enter a character \n");
    scanf("%c", &ch);
    if( ch >= 65 && ch <= 90) {
        printf("Upper Case Letter");
    }
    else if (ch >= 97 && ch <=122) {
        printf("Lowe Case Letter");
    }
    else if (ch >= 48 && ch <= 57) {
        printf("Digit");
    }
    else {
        printf("Special Character");    
    }
    return 0;
}