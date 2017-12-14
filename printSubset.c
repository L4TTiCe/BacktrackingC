#pragma once
#include "Header.h"

// Inputs for printSubset
// set[]	-	Arrayto be printed
// size		-	The index of the Array untill which the elements are to be printed

void printSubset(int set[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%*d", 5, set[i]);
	}

	printf("\n");
}