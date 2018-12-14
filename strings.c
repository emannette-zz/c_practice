void string() {
	// use an * when defining a string to make it immutable
	char * test = "Some immutable string";
	// use array notation to define a mutable string
	char name[15] = "Ethan Mannette";
	int age = 26;

	printf("%s is %d years old.\n", name, age);
}