#include "operate_tree.h"

BST* build_tree(BST *root,int arr[],int length)
{
	int i;
	for(i = 0; i < length ;i++)
	{
		root = Insert(root , arr[i]);
	}
	return root;
}

BST* Insert(BST* node , int data)
{
	if(node == NULL)
	{
		BST *temp;
		temp = (BST*)malloc(sizeof(BST)); 
		temp->value = data;
		temp->left = temp->right = NULL;
		return temp;
	}
	
	if(data > (node->value))
	{
		node->right = Insert(node->right , data);
	}
	else if(data < (node->value))
	{
		node->left = Insert(node->left , data);
	}
	
	return node;
}
