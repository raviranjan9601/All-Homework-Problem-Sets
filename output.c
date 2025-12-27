#include <stdio.h>
int main(){
    printf("HELLO C\n");
    printf("RAVI RANJAN\n");
    printf("I'm THE BEST CODE IN THIS WORLD\n");
    printf("I'm WINNER OF SIH\n");
    printf("I'm the best son of my mom and dad\n");
    int number = 14;
    long long long_number = 8210509601;

    char name[] = "RAVI RANJAN";
    char special_char = '&';
    char special_char1 = '$';
    char special_char2 = '*';
    long _long_num = 851128;
    long _long_N = 147852;


    float pi = 3.14;
    
    double PI = 3.1479147914791479;
    
    printf("this is actual value of PI:%lf\n", PI);



    printf("This is Value of Pi: %.2f\n", pi);

    long long Long_num = 8405920430;



    printf("%lld\n", Long_num);


    printf("%d\n", number); //%d is a formate Specifairs
    printf("%lld\n", long_number); 
    printf("%ld\n", _long_num);
/*

formate Specifiers

%d    int
%i    int (same as %d)
%u    unsigned int
%ld   long
%lld  long long
%lu   unsigned long

%f   // float
%lf  // double
%e   // scientific notation
%g   // shortest of %f or %e


%c   // char
%s   // string (char array or char pointer)

%o   // octal
%x   // hexadecimal (lowercase)
%X   // hexadecimal (uppercase)
%p   // pointer address
%%   // prints % symbol

*/
    
    printf("%ld\n", _long_N);
    
    printf("%s\n", name);
    printf("%c\n", special_char);



    #include <stdio.h>

int main() {
    int a = 10;
    long b = 123456789L;
    long long c = 9876543210LL;

    float f = 3.14;
    double d = 9.87654321;

    char ch = '*';
    char name[] = "RAVI RANJAN";

    printf("int value: %d\n", a);
    printf("long value: %ld\n", b);
    printf("long long value: %lld\n", c);

    printf("float value: %f\n", f);
    printf("double value: %lf\n", d);

    printf("char value: %c\n", ch);
    printf("string value: %s\n", name);

    return 0;
}
