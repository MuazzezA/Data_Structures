#include <stdio.h>
#include <stdbool.h>
#include "mainfunction.h"

/**
 * @author  Muazzez Aydin
 */


int main(int argc, char *argv[]) {
	
	start();
	
	push_inMainStack(2);	// 2 added
	push_inMainStack(4);	// 4 added
	push_inMainStack(6);	// 6 added
	push_inMainStack(1);	// 1 added
	push_inMainStack(7);	// 7 added
	push_inMainStack(3);	// 3 added
	
	printMainStack();
	
	pop_fromMainStack();	//	3 deleted
	pop_fromMainStack();	//	7 deleted
	pop_fromMainStack();	//	1 deleted
	pop_fromMainStack();	// 	6 deleted 
	
	printMainStack();
	
	push_inMainStack(5);	//	5 added
	
	printMainStack();
	printCopyStack();
	
	takeitBack_MainStack();	//	5 deleted
	takeitBack_MainStack();	// 	6 added
	takeitBack_MainStack();	//	1 added
	
	printMainStack();
	printCopyStack();
	
	takeitBack_MainStack();	//	7 added
	takeitBack_MainStack();	//	3 added
	takeitBack_MainStack();	//	3 deleted
	takeitBack_MainStack();	//	7 deleted
	takeitBack_MainStack();	//	1 deleted
	
	printMainStack();
	printCopyStack();
	
	return 0;
}
