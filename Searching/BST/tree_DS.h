#ifndef _TREE_DS_
#define _TREE_DS_
#include <stdio.h>
#include <stdlib.h>

typedef struct tree BST;

struct tree{
	int value;
	BST *left;
	BST *right;
};
#endif
