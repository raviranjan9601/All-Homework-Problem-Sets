// Q3. Write a program to calcualte perimeter of rectangle.

// take side from user.

#include <stdio.h>

int main(){

    float height, wirth;

    printf("Enter Heigh of Rectangle: ");
    scanf("%f", &height);

    printf("Enter Wirth of Rectangle: ");
    scanf("%f", &wirth);

    printf("Area of rectangle : %.2f", height * wirth);
    return 0; 
    
}