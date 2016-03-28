#include "print_tree.h"

void print_tree(BST *root,int level)
{
	/* Start to print the tree */
	if(root != NULL)
	{	
		printf("This is the root(Level %d), value is %d.\n", level , root->value);
		/* Do the left subtree first */
		print_tree(root->left,level+1);
		/* And then do the right subtree */
		print_tree(root->right,level+1);
	}
	else
	{
		return;
	}
}
