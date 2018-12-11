#include <stdio.h>
#include <stdlib.h>

void array(int size, int baseValue, int increment) {

	/**
	 *define an array of any size
	*/
	int numbers[size];

	/*
	* define two iterators
	* 	one to keep track of the array index
	* 	the other to loop through the array after it is built
	* define a baseValue which will increment by a 
	*/
	int i = 0, j = 0;
	size_t n;

	/**
	 * Use a while loop to build the array of a defined size
	 * The values will increase by a defined increment
	 */
	while (i < size) {
		printf("The baseValue is now: %i\n", baseValue);
		numbers[i] = baseValue;
		baseValue += increment;
		i++;
	}
	/*

	* Using a loop, print the values of the built array
	*/
	n = sizeof(numbers) / sizeof(numbers[0]);
	while (j < n) {
		printf("The number at position %i is %i\n", j, numbers[j]);
		j++;
	}
	

}