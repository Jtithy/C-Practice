//Write a program to print calculate the factorial of a given number using while loop.
#include<stdio.h>

int main()

{
    int n;
    int product = 1;
    printf("Enter a number to calculate its factorial:\n");
    scanf("%d", &n);
    int i = 1;
    while(i <= n){
        product *=i;
        i++;
    }
    printf("Factorial of %d is %d\n", n, product);
    return 0;
}
