#include<stdio.h>
#include<conio.h>

int palindrome(int num);
int rev=0, rem=0;

int main() 
{
    int num;

    printf("enter a number");
    scanf("%d", &num);

    if(num == palindrome(num))
    {
     printf("%d is palindrome", num);
    }
    else
    printf("%d is not palindrome", num);

    return 0;
    }

    int palindrome(int num)
    {
        do
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        } 
        while(num > 0);

        return rev;

}