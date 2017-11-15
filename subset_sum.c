#pragma once

void printSubset(int A[], int size);

// inputs for subset_sum
// set          - set vector containing all Source elements
// tuplet       - tuplet vector containing only elements relevent to current iteration (Note : This program as multiple such iterations)
// set_size     - set size (Note : It is constant for most part)
// tuplet_size  - tuplet size so far (Note : This is the size of the current iteration's tuplet)
// sum          - sum so far
// nodeCount    - nodes count
// target_sum   - sum to be found

void subset_sum(int set[], int tuplet[], int set_size, int tuplet_size, int sum, int nodeCount, int const target_sum) {
	if (target_sum == sum) {
		// Perfect Match!! 
		printSubset(tuplet, tuplet_size);
		// Exclude last item and continue seaching
		subset_sum(set, tuplet, set_size, tuplet_size - 1, sum - set[nodeCount], nodeCount + 1, target_sum);
		return;
	}
	else {
		// generate nodes along the breadth
		for (int i = nodeCount; i < set_size; i++) {
			tuplet[tuplet_size] = set[i];
			// consider next level node (along depth)
			subset_sum(set, tuplet, set_size, tuplet_size + 1, sum + set[i], i + 1, target_sum);
		}
	}
}