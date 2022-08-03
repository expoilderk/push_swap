#include <stdio.h>  
#include <stdlib.h>
#include "push_swap.h"
#define INIT 0

void bead_sort(int *arr, int len)
{
	int index_i;
	int index_j;
	int max;
	int sum;
	unsigned char *beads;
    
	index_i = 1;
	max = arr[0];
	while(index_i < len)
	{
		if (arr[index_i] > max)
			max = arr[index_i];
		index_i++;
	}
 
	beads = calloc(1, max * len);
 
	/* mark the beads */
	index_i = INIT;
	while (index_i < len)
	{
		index_j = INIT;
		while (index_j < arr[index_i])
		{
			BEAD(index_i, index_j) = 1; //Trocar para BEAD original
			index_j++;
		}
		index_i++;
	}

	index_j = INIT;
	while (index_j < max)
	{
		sum = index_i = INIT;
		while (index_i < len) /* count how many beads are on each post */
		{
			sum += BEAD(index_i, index_j);
			BEAD(index_i, index_j) = 0;
			index_i++;
		}

		index_i = len - sum;
		while (index_i < len) /* mark bottom sum beads */
		{
			BEAD(index_i, index_j) = 1;
			index_i++;
		}
		index_j++;
	}

	index_i = INIT;
	while (index_i < len)
	{
		index_j = INIT;
		while (index_j < max && BEAD(index_i, index_j))
			index_j++;
		arr[index_i] = index_j;
		index_i++;
	}

	free(beads);
}

int main()
{
	int i;
	int x[] = {5, 300, -200, 105, 7, 4, 1, -45, -521, 20, 4, -6, 0, 78, 2, 15};
	//int x[] = {5, 300, 200, 105, 7, 4, 1, 45, 521, 20, 4, 6, 2, 15};
	int len = sizeof(x)/sizeof(x[0]);
    
	printf("Original Array:\n");
    for (i = 0; i < len; i++)
		printf("%d%s\n", x[i], i == len - 1 ? "\n" : " ");
	
	bead_sort(x, len);
	
	printf("\nSorted Array:\n");
	for (i = 0; i < len; i++)
		printf(" %d\n", x[i]);
 
	return 0;
}
