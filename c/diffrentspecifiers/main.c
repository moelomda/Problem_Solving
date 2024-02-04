#include <stdio.h>

int main() {
    /********declaring variables****************/
    int NumberOne = 45;
    unsigned int NumberTwo = 12;
    char C_number = 23;
    char s = 'A';
    float F_number = 1.14;
    double d_number = 3.101444;
    long l_number = 3242234;
    long double ld_number = 3.155555555554;
    /******Testing format specifiers ***************/
    printf("char specifier : %c \n", C_number);
    printf("integer specifier : %d \n", NumberOne);
    printf("float specifier : %f \n", F_number);
    printf("unsigned integer specifier : %u \n", NumberTwo);
    printf("double specifier : %lf \n", d_number);
    printf("long double specifier : %Lf \n", ld_number);
    printf("unsigned int specifier : %u \n", NumberTwo);
    printf("character specifier : %c\n", s);
    printf("long integer specifier : %ld \n", l_number);
    /*************end of program ****************/
    return 0;
}
