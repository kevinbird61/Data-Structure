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

int Find(BST *root , int data)
{
	int judge = 0;
	if(root->value == data)
	{
		printf("Find the value %d in the BST\n",data);
		return 1;
	}
	
	if(data > (root->value))
	{
		judge = Find(root->right,data);
	}
	else if(data < (root->value))
	{
		judge = Find(root->left,data);
	}

	if(judge == 0)
	{
		printf("Not Found %d in the BST!\n",data);
	}
}
