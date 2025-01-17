#include <stdio.h>
#include <stdlib.h>

int main() {
	int *table = (int *)malloc(10 * sizeof(int));
	
	for (int i = 0; i < 10; i++) {
		table[i] = i + 1;
	}

	printf("Table contents:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", table[i]);
	}
	printf("\n");
	free(table);
	return 0;
}
