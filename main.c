#include <stdio.h>
#include "../include/library.h"

int main(int argc, char const *argv[]) {
	people h1;
	h1.name = "Trump";
	h1.old = 45;

	display(h1);

	return 0;
}
