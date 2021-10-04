#include <stdio.h>

int main ()
{
    // 1- printing hello world on the console
    printf("line 1 : hello world ! \n") ;

    // 2- reading from input from user ;
    int a ;
    printf("line 2 : please enter a number : ") ;
    scanf("%i" , &a) ;
    printf("line 3 : entered value is : %d \n" , a);

    // 3- formatting output
    // %[flag][width].[precision][size]conversion character
    double b = 2.588 ;
    printf("line 4 : %+5.2lf \n" , b) ;
    // output is : +2.59 ;
}
