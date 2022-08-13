#include "push_swap.h"

int main()
{
	int i;
	int x[] = {5, 300, -200, 105, 7, 4, 1, -45, -521, 20, 4, -6, 0, 78, 2, 15};
	//int x[] = {5, 300, 200, 105, 7, 4, 1, 45, 521, 20, 4, 6, 2, 15};
	int len = sizeof(x)/sizeof(x[0]);

	t_stack stack_a;

	i = 0;
	while(x[i])
	{
		
		stack_a = add_stack_back(stack_a, );
	}
    
	printf("Original Array:\n");
    for (i = 0; i < len; i++)
		printf("%d%s\n", x[i], i == len - 1 ? "\n" : " ");
	
	gravity_sort(x, len);
	
	printf("\nSorted Array:\n");
	for (i = 0; i < len; i++)
		printf(" %d\n", x[i]);
 
	return 0;
}