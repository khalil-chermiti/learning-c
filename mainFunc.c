#include <stdio.h>

/*
    argc : holds the number of arguments passed to the function from the terminal
    argv : holds the values of the passed arguments
    argv[0] : holds the name of the program

    !!! : argv is an array of character that points to the arguments ;
*/


void main(int argc, char *argv[]) {

    argc <= 9 ? printf("%s" , argv[1]) : printf("no no")

}
