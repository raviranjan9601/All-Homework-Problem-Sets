// type conversition


#include<stdio.h>
#include<math.h>

int main(){
    int A, B;
// normal arthmatic operation preform
    A = 15;
    B = 10;


    printf("ADD Value : %d\n", A + B);
    printf("SUBTRACT Value : %d\n", A - B);
    printf("MULTIPLY Value : %d\n", A * B);
    printf("DIVISION Value : %d\n", A / B);
    printf("REMENDER Value : %d\n", A % B);
    
    // type conversion
    
    int a;
    float b;
    
    a = 15;
    b = 2.3;
    
    
    printf("ADD Value : %.2f\n", a + b);
    printf("SUBTRACT Value : %.2f\n", a - b);
    printf("MULTIPLY Value : %.2f\n", a * b);
    printf("DIVISION Value : %.2f\n", a / b);
    printf("REMAINDER Value : %d\n", a % (int)b); // changr fomate specifare 
    
    printf("REMAINDER Value : %.2f\n", (float)(a % (int)b));

    printf("REMENDER Value : %.2f\n", fmod(a, b)); //Use fmod() for float remainder
    
    return 0;
    
}