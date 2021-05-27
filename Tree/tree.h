#ifndef TREE
#define TREE

struct TreeNode area;

typedef struct TreeNode{
	
	int data;
	struct TreeNode *right;
	struct TreeNode *left;
	
}Tree;


Tree *initaliaze(int);

void preorder(Tree *);	
void inorder(Tree *);
void postorder(Tree *);

Tree *insert(Tree *, int);
int stepFind(Tree *, int);
int leafSum(Tree *);

int printByDepth(Tree *, int);
void printBiggerThanData(Tree *, int);


#endif
