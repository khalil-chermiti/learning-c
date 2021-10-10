/*
- creating and intializing an array of different data types
- iterating through array
- accessing array's elements
- filling array
- modifying array's elements
- find Max Value
- find Min Value
*/


#include <stdio.h>

#define size 11

void main ()
{
    /***** creating an array with predefined zise *****/

    int arr1[size] = {0 , 1 , 2 , 3 , 4 , 5};
    printf("arr1[3] : %i \n" , arr1[3]) ;
    arr1[10] = 666 ;
    printf("arr1[10] : %i \n" , arr1[10]) ;

    /***** creating an array with w size *****/

    int w ; // width
    printf("\nPlease nenter the length of the array : ") ;
    scanf("%i" , &w ) ;
    printf("\n") ;

    int arr2[w] ;

    // filling the array
    for(int i = 0 ; i < w ; i++ ) {
        printf("Enter element number %i : " , i) ;
        scanf("%i" , &arr2[i]);
    }

    printf("\n\n**************** array's elements ****************\n\n") ;

    // printing array content
    for(int i = 0 ; i < w ; i++ ) {
        printf("arr2[%i] : %i \n" , i , arr2[i] ) ;
    }

    // find max and min value
    int min = arr2[0] , max = arr2[0] ;
    for(int i = 1 ; i < w ; i++ ) {
        if (arr2[i] > max) max = arr2[i] ;
        if (arr2[i] < min) min = arr2[i] ;
    }

    printf("\n\n**************** Max and Min ****************\n\n") ;

    printf("Max value is : %i \n" , max) ;
    printf("Min value is : %i \n" , min) ;

}
