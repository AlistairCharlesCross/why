#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	// TODO: decide on options
	if(argc < 2) {
		printf("usage: why [options] [program] [...]\n");
		return -1;
	}
	
	while(i < argc) {
		// TODO: add each program to data structure to store them in this loop
		printf("%s\n", *(argv+i));
		i++;
	}

	printf("I don't know why you installed this yet\n");
	return 0;
}
