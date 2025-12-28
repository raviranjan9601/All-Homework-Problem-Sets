//take a number (n) from user & output its cube (n*n*n)

#include <stdio.h>

int main(){

    float side;

    printf("enter a side of cube : ");
    scanf("%f", &side);

    printf("area of cube: %.2f", side * side * side);

    return 0;
    
}