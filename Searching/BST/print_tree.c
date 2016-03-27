#include "print_tree.h"

int count= 0 ;

void print_tree(BST *root,int level)
{
	printf("count = %d\n",count);
	/* Start to print the tree */
	if(root != NULL)
	{	
		if(count == 0)
		{
			printf("This is the root(Level %d),node number %d, value is %d.\n", level, count , root->value);
		}
		else{
			printf("This is the node(Level %d),node number %d, value is %d.\n", level, count , root->value);
		}
		/* Do the left subtree first */
		count++;
		print_tree(root->left,level+1);
		/* And then do the right subtree */
		count++;
		print_tree(root->right,level+1);
	}
	else
	{
		return;
	}
}
