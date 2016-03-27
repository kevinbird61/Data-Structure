#include "print_tree.h"
#include "operate_tree.h"

int main()
{
	printf("Welcome to use the print tree structure!\n");
	
	BST *root = NULL;
	/* Assume array will not repeat */
	int input_arr[8] = {11,32,45,67,23,12,87,90};
	/* Build the search tree */
	root = build_tree(root,input_arr,8);
	
	if(root == NULL){
		printf("Yes!\n");
	}
	/* Print Tree */
	print_tree(root,0);	
}


