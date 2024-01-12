# include<stdio.h>

int main() {
    int num, cube;
    printf("Enter the nunber: ", num);
    scanf("%d", &num);

    cube = num * num *num;

    printf("The cube of the nunber is :%d", cube);
    return 0;
}