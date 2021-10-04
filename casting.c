#include <stdio.h>

int main()
{
    int a = 5 ;
    int b = 2;

    // this will pint 2
    printf("**** wrong result **** \n") ;
    printf("the result is : %d \n" , a / b) ;
    // this will pint an incorrect value
    printf("the resutl is : %f \n \n" , a / b) ;

    /*
    * to fix this we either :
        - change the type of a or b to float
        - use casting
    */
    printf("**** right result **** \n") ;
    printf("the result is : %.1f \n" , a / (float)b) ;

    // we can use casting this way
    printf("casitng is gr%d", (int)8.5) ;



}
