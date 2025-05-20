//Explain step by step evaluation of 3*x/y-z+k; where x=4, y=3, z=3, k=1
#include<stdio.h>

int main()

{
    int x=4, y=3, z=3, k=1;
    float A;
    A= 3*x/y-z+k;
    /* =3*x/y-z+k
       =3*4/3-3+1
       =12/3-3+1
       =4-3+1
       =1+1
       =2
    */
    printf("Value of A is %f\n", A);
    return 0;
}
