#include "print_tree.h"
#include "operate_tree.h"
#include "Random_generate.h"

int main()
{
	printf("BST Data Structure Implementation!\n");
	/* Variable */
	BST *root = NULL;
	int arr_size = 150000;
	int range = 100000;
	clock_t start , end;
	
	/* Assume array will not repeat */
	int *input_arr = malloc(arr_size*sizeof(int));
	input_arr = random_array(arr_size,range);
	/* Build the search tree */
	root = build_tree(root,input_arr,arr_size);
	/* Print Tree */
	print_tree(root,0);
	/* Find */
	start = clock();
	int rand_search = rand()%range;
	Find(root, rand_search );
	end = clock();
	float seconds = (float)(end - start) / CLOCKS_PER_SEC;
	printf("With \"%d\" number of data , searching for \"%d\" ,it's time Consume is %f\n",arr_size , rand_search ,seconds);
}


