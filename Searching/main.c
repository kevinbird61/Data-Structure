#include "print_tree.h"
#include "tree_DS.h"

BST* build_tree(BST *root , int arr[] , int length);

int main()
{
	printf("Welcome to use the print tree structure!\n");
	
	BST *root = NULL;
	
	/**/
	int input_arr[8] = {1,2,3,4,5,6,7,8};
	
	root = build_tree(root,input_arr,8);
	
}

BST* build_tree(BST *root , int arr[] , int length)
{
	int i;
	BST *shift = NULL;
	for(i = 0 ; i < length ; i++)
	{
		shift = root;
		while(1)
		{
			if(shift == NULL)
			{
				BST *temp = malloc(sizeof(BST));
				temp->value = arr[i];
				temp->left = NULL;
				temp->right = NULL;
				shift = temp;
				break;
			}
			else if(shift->value <= arr[i])
			{
				shift = shift->left;
			}
			else if(shift->value > arr[i])
			{
				shift = shift->right;
			}
		}
	} 
	
	return root;
}
