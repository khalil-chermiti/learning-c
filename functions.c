
#include <stdio.h>

void main() {

    int incMumByOne(int a) {
        return ++a;
    }

    int a = 1 ;

    incMumByOne(a) ;

    printf("a is now equal to = %i\n\n" , a) ;


    // pass by reference

    int incNumByTwo(int *a) {
        return *a += 2 ;
    }

    int b = 1 ;

    incNumByTwo(&b) ;

    printf("b is now equal to = %i" ,b ) ;


}
