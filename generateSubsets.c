#pragma once
#include "Header.h"

void subset_sum(int set[], int tuplet[], int set_size, int tuplet_size, int sum, int nodeCount, int const target_sum);

// Inputs for gererateSubsets
// set[]		-	Array countaining all source elements
// size			-	Size of the set Array
// target_sum	-	The sum reqyuired at the end

void generateSubsets(int set[], int size, int target_sum) {
	int *tuplet_vector = (int *)malloc(size * sizeof(int));
	subset_sum(set, tuplet_vector, size, 0, 0, 0, target_sum);
	free(tuplet_vector);  //test
}