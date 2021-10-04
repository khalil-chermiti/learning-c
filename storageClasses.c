#include <stdio.h>
int main ()
{
    /*
    * auto class
    * life span == end of block
    * initialized with a garbage value
    */
    auto int a ;
    printf("garbage value of a is : %d \n" , a) ;

    /*
    - register class
    - life span == end of block
    - intialized with a garbage value
    - variable saved at the CPU register for faster access
    */
    register int b ;
    printf("garbage value of b is : %d \n" , b) ;

    /*
    - static class
    - this will change the life span of of variable from block to end of program
    - when a function return all its locals will be cleaned but not statics (like closures is c , but more general)
    */

    statik() ;
    statik() ;
    statik() ;
    statik() ;

    /*
    * extern class
    * used to import a variable from an other file (within the project files) ;

    *** example :
    file 1.c
    int a = 20 ;

    file 2.c
    extern int a ;
    */
}
// a function that has a static variable that can not be destroyed when a function return
int statik()
{
    static int k ;
    k = k + 1 ;
    printf("incrementing ... : %d \n" , k) ;
}
