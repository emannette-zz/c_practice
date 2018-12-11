#include <stdio.h>

void array() {

	// define and initialize array
	// defines an array of 10 integers
	int numbers[10];

	// define an iterator and baseValue just for funsies
	int i = 0, baseValue = 10;
	while (i < 10) {
		// populate the array through a loop
		printf("The baseValue is now: %i\n", baseValue);
		numbers[i] = baseValue;
		baseValue += 10;
		i++;
	}
	printf("The seventh number in the array is %d\n", numbers[6]);


}