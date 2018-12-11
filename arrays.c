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

void multiDimArr() {
	/* define a couple multi-dimensional arrays
	* multi-dimensional arrays follow this syntax
	* 
	* 		  |---------|---------|---------|---------|
	* 		  |  col 0  |  col 1  |  col 2  |  col 3  |
	* 	------|---------|---------|---------|---------|
	* 	row 0 | a[0][0] | a[0][1] | a[0][2] | a[0][3] |
	* 	------|---------|---------|---------|---------|
	* 	row 1 | a[1][0] | a[1][1] | a[1][2] | a[1][3] |
	* 	------|---------|---------|---------|---------|
	* 	row 2 | a[2][0] | a[2][1] | a[2][2] | a[2][3] |
	* 	------|---------|---------|---------|---------|
	*/
	int foo[1][2][3];
	char vowels[1][5] = {
		{'a', 'e', 'i', 'o', 'u'}
	};

	int x = 0, y = 0, scores = 8, numberOfStudents = 10;
	int grades[numberOfStudents][scores];
	for (x; x < numberOfStudents; x++) {
		for (y; y < scores; y++) {
			const int grade = (rand() % (100 + 1 - 50)) + 50;
			printf("THE GRADE %i\n", grade);
			grades[x][y] = grade;
		}
		printf("X, %i\n", x);
	}
	printf("The length of the grades array is %i\n", sizeof(grades)/sizeof(grades[0][0]));
	printf("The number of students is %i\n", sizeof(grades)/sizeof(grades[0]));
	printf("The number of grades per student is %i\n", sizeof((grades)[0])/sizeof(grades[0][0]));

	int row = sizeof(grades[0]) / sizeof(grades[0][0]), 
		col = sizeof(grades) / sizeof(grades[0]),
		average = 0;
	for (x = 0; x < row; x++) {
		int sum = 0;
		for (y = 0; y < col; y++) {
			printf("The grade is %i\n", grades[x][y]);
			sum += grades[x][y];
		}
		average = sum / col;
		printf("The average score for student %i is %i\n", x + 1, average);
	}


}