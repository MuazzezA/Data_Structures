#ifndef header3
#define header3
		
#define SIZE 20


/**
 * @author  Muazzez Aydin
 */
 
 
struct MainStack mstack;
struct CopyStack cstack;


struct MainStack{
	
	int stackSize;
	int data[SIZE];

};
struct MainStack *mainStack = &mstack ;

	
struct CopyStack{
	
	int stackSize;
	int data[SIZE];
	bool copySign[SIZE];
	
};
struct CopyStack *copyStack = &cstack;


#endif
