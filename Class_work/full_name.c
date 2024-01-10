#include <stdio.h>

str firstName, lastName, fullName;

int main() {

    //data input 
    printf("Enter your first name:");
    scanf("%c",&firstName);

    printf("Enter your last name:");
    scanf("%c",&lastName);
    
    //formulae
    fullName = firstName + lastName;

    //text display
    printf("Your full name is: %c", fullName);

    return 0;
}