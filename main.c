#include "Header.h"

void printSubset(int A[], int size);

void subset_sum(int set[], int tuplet[], int s_size, int t_size, int sum, int nodeCount, int const target_sum);

void generateSubsets(int set[], int size, int target_sum);

int main() {
	int count, target;
	printf_s("Enter number of Elements in search Array	:");
	scanf_s("%d", &count);
	printf_s("----------   Initialize Search Array  ----------\n");
	int *input = malloc(count * sizeof(int));		// Creating 'input' Array with lenght as 'count'
	for (int i = 0; i<count; i = i + 1) {
		printf_s("Value for Element %d :", i);
		scanf_s("%d", &input[i]);
	}
	printf_s("---------- Search Array Initialized	----------\n");
	printf_s("Enter the Target 	:");
	scanf_s("%d", &target);
	printf_s("----------      Target Aquired     	----------\n");
	printf_s("----------    Generating Subsets  	----------\n");
	generateSubsets(input, count, target);
	printf_s("----------     Subsets Generated      ----------\n");
	printf_s("----------    Termintating Program    ----------\n");
	return 0;
}