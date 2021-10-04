#include <stdio.h>
int main()
// declaring a constant
#define name "khalil"
{
    // constants
    const int age = 21 ;
    printf("name is : %s \n" , name) ;
    printf("age is : %d \n" , age) ;

    // printing the size of types :
    printf("size of int is : %d bytes / octets \n" , sizeof(int)) ;

    // declaring some variables with basic data types
    int a = 5 ;
    float b = 5.5 ;

    printf("value of a is : %d \nvalue of b is : %.1f" , a , b) ;

    // variables modifiers
    /*
    short int c ;
    long long int d ;
    signed int e ;
    unsigned int f ;
    // yout have to mention int , exp : signed a ;

    // *****************

    short float g ;
    double h ;
    long double k ;
    */



}
