#include <stdio.h>
#include <stdlib.h>

typedef struct tree{
	int value;
	struct tree *left;
	struct tree *right;
}BST;
