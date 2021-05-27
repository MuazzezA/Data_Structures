#include <stdio.h>
#include <stdlib.h>

#include "tree.h"

static Tree *root = &area;


int main() {
	
	insert(root, 10);
	insert(root, 3);
	insert(root, 23);
	insert(root, 8);
	insert(root, 2);
	insert(root, 9);
	insert(root, 56);

	printf("\npreorder\t");
	preorder(root);
	
	printf("\ninorder\t\t");
	inorder(root);
	
	printf("\npostorder\t");
	postorder(root);
	

	stepFind(root, 56);
	
	printf("\nSum of Leafs\t%d \n", leafSum(root));
	printf("\nElements of the Same Depth\t");
	printByDepth(root, 2);
	
	printf("\n\nBigger Elements\t\t\t");
	printBiggerThanData(root, 4);
	
	return 0;
}
