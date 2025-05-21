//Write a program to check whether a number is prime or not using while and do-while loops.
#include<stdio.h>

int main()

{
    int n;
    int isPrime = 1;
    printf("Enter a number to check:\n");
    scanf("%d", &n);
    // Using while loop
    if(n == 0 || n == 1){
        isPrime = 0;
    }
    else if(n == 2){
        isPrime = 1;
    }
    else{
        int i = 2;
        while(i < n){
            if(n % i == 0){
                isPrime = 0;
                break;
            }
            i++;
        }
    }
    if(isPrime == 1){
        printf("%d is a prime number\n", n);
    }
    else{
        printf("%d is not a prime number\n", n);
    }
    // Using do-while loop
    isPrime = 1;
    if(n == 0 || n == 1){
        isPrime = 0;
    }
    else if(n == 2){
        isPrime = 1;
    }
    else{
        int i = 2;
        do{
            if(n % i == 0){
                isPrime = 0;
                break;
            }
            i++;
        }while(i < n);
    }
    if(isPrime == 1){
        printf("%d is a prime number\n", n);
    }
    else{
        printf("%d is not a prime number\n", n);
    }       
    return 0;
}
