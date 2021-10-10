#include <stdio.h>

int main () {
	int age ;

	// simple basic usage of if else statements

	printf("enter your age : ") ;
	scanf("%i" , &age) ;

	if (age >= 18 ) {
		printf("you okay to go") ;
	} else {
		printf("you are too young for this") ;
	}
}
