// rule of varibale decleration.

#include <stdio.h>
#include <math.h>

int main(){
/*
    int a = 10;
    int b = a + 5;
    int c = b + 15;

    int d = a + b + c;
    
    printf("value of a: %d\n", a);
    printf("value of b: %d\n", b);
    printf("value of c: %d\n", c);
    printf("value of d: %d\n", d);
*/
/*
    int A, B, C, D, E;
    
    A = B = C = D = E = 10;

    printf("Value of A is: %d\n", A);

    printf("Value of B is: %d\n", B + 5);
    
    printf("Value of C is: %d\n", C + 10);
    
    printf("Value of D is: %d\n", D + 15);
    
    printf("Value of E is: %d\n", E + 20);
*/
    int a, b, c, d, x, y, z;
    
    a = 5;
    b = 3;
    
    c = a + b;
    y = a - b;
    x = a * b;
    z = a / b;
    d = a % b;
    
    printf("A + B = %d\n", c);
    
    printf("A - B = %d\n", y);
    
    printf("A * B = %d\n", x);
    
    printf("A / B = %d\n", z);

    printf("A reminder B = %d\n", d);
    
    int power = pow(a,b);
    
    printf("A ^ B = %d\n", power);

    return 0;
    
}