#include<stdio.h>
#include<conio.h>

int main()
{
    int n, f= 1, i = 1;
    printf("Enter the number to find factorial");   
    scanf("%d",&n);
    while(i <=n)
    {
        f = f*i;
        i++;
    }
    printf("factorial = %d",f);
    return 0;
}