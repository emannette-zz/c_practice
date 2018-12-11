#include <stdio.h>
#include "arrays.c"

int basic();

int main() {
	printf("Calling the basic method!\n");
	basic();
	printf("Calling the array method!\n");
	// array(arraySize, startValue, increment)
	array(5, 5, 10);

}

int basic() {
		// printf needs <stdio.h>
	printf("Hello World!\n");

	#define BOOL char
	#define FALSE 	0
	#define TRUE	1

	// declare variable
	int foo;
	// declare && initialize variable
	int bar = 1;

	// declare && initialize multiple variables of the same type
	// int a = 0, b = 1, c = 2, d = 3, e = 4;
	// a = b - c + d * e; // a = 1 - 2 + (3 * 4)
	// printf("%d", a);printf("\n");

	// simple math using additional number types
	int a = 3;
	float b = 4.5, sum;
	double c = 5.25;

	sum = a + b + c;
	printf("The sum of a, b, and c is %f.\n", sum);

	// Anything greater than 0 means that the program failed
	// This can be used for error handling
	return 0;
}
