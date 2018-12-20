void string() {
	// use an * when defining a string to make it immutable
	char * test = "Some immutable string";
	// use array notation to define a mutable string
	char name[15] = "Ethan Mannette";
	int age = 26;

	printf("%s is %d years old.\n", name, age);

	char someName[100];
	char first_name[] = "John";
	char last_name[] = "Doe";

	last_name[0] = 'B';
	sprintf(someName, "%s %s", first_name, last_name);
	if (strncmp(someName, "John Boe", 100) == 0) {
		printf("Done!\n");
	}
	someName[0] = '\0';
	strncat(someName, first_name, 4);
	strncat(someName, last_name, 20);
	printf("This name is %s\n", someName);
}
