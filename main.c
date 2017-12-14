#include "Header.h"

void printSubset(int A[], int size);

void subset_sum(int set[], int tuplet[], int s_size, int t_size, int sum, int nodeCount, int const target_sum);

void generateSubsets(int set[], int size, int target_sum);

int main() {
	int count, target, i;
	printf("Enter number of Elements in search Array	:");
	scanf("%d", &count);
	printf("----------   Initialize Search Array  ----------\n");
	int *input = malloc(count * sizeof(int));		// Creating 'input' Array with lenght as 'count'
	for (i = 0; i<count; i = i + 1) {
		printf("Value for Element %d :", i);
		scanf("%d", &input[i]);
	}
	printf("---------- Search Array Initialized	----------\n");
	printf("Enter the Target 	:");
	scanf("%d", &target);
	printf("----------      Target Aquired     	----------\n");
	printf("----------    Generating Subsets  	----------\n");
	generateSubsets(input, count, target);
	printf("----------     Subsets Generated      ----------\n");
	printf("----------    Termintating Program    ----------\n");
	return 0;
}