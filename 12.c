//White a program to print multiplication table of given number n.
#include<stdio.h>

int main()

{
    int N;
    printf("Enter the number;\n");
    scanf("%d", &N);
    printf("Multiplication table of %d:\n", N);
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", N, i, N*i);
    } 
    return 0;
}
