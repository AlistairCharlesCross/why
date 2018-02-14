#include <stdio.h>

int main(int argc, char **argv)
{
	// TODO: decide on options
	if(argc < 2) {
		printf("usage: why [options] [program] [...]\n");
		return -1;
	}

	printf("I don't know why you installed this yet\n");
	return 0;
}
