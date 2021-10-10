#include <stdio.h>
int main()
{
    int a ;

    printf ("enter a number within range [0-9] : ") ;
    scanf("%i" , &a) ;

    switch(a){
        case 0 : printf("the number you've entered is zero") ; break ;
        case 1 : printf("the number you've entered is one") ; break ;
        case 2 : printf("the number you've entered is two") ; break ;
        case 3 : printf("the number you've entered is three") ; break ;
        case 4 : printf("the number you've entered is four") ; break ;
        case 5 : printf("the number you've entered is five") ; break ;
        case 6 : printf("the number you've entered is six") ; break ;
        case 7 : printf("the number you've entered is seven") ; break ;
        case 8 : printf("the number you've entered is eight") ; break ;
        case 9 : printf("the number you've entered is nine") ; break ;
        default : printf("the number you've entered is out of range") ; break ;
    }

}
