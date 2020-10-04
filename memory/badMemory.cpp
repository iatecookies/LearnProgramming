#include <iostream>
#include <stdlib.h>
#include <string>

/* -------------HOW TO USE VALGRIND -------- */
using namespace std;


void test1(){
	const int NUM_HEIGHTS = 3;
	int *heights = (int *) malloc(NUM_HEIGHTS * sizeof(*heights)); //fix
	//int *heights = (int *) malloc(NUM_HEIGHTS); //bug
	// allocated 3 bytes, need size bytes, u can also sizeof(int)
	for (int i = 0; i<NUM_HEIGHTS; i++){
		heights[i] = i * 1;
		cout << "Test1 i: " << i << " heights: " << heights[i] << endl;
	
	}
	free(heights); //fix leak
}

/* 
invalid write size of 4 

Heap summary 

12 bytes in 1 block, leaked 12 bytes of memory
*/
void test2(){
	const int NUM_WEIGHTS = 5;
	long long *weights = (long long *) malloc(NUM_WEIGHTS * sizeof(*weights));
	for (int i = 0; i<NUM_WEIGHTS; i++){
		weights[i] = 100 + 1;
		cout << "Test2 i: " << i << " weights: " << weights[i] << endl;
	
	}
	//free(weights); //bug
	weights[0] = 0; // bug from line above, tried to access after freed
	free (weights);
}

/*
==20104== Invalid write of size 8
==20104==  Address 0x5b7ec80 is 0 bytes inside a block of size 40 free'd
*/



void test3(){
	const int NUM_HEIGHTS = 10;
	int *heights = (int *) malloc(NUM_HEIGHTS * sizeof(*heights));
	for (int i = 0; i<NUM_HEIGHTS; i++){
		//if ((heights = NULL)){ //bug
		if (heights == NULL){ 
			heights = (int *) malloc(NUM_HEIGHTS * sizeof(*heights));
		}
	
	}
	free (heights); //fix, if there is a leak

}

/*
40 bytes in 1 blocks are definitely lost in loss record 1 of 1
 by 0x108C13: test3() (in /home/jun/Documents/OefenPM/memory/bad)
*/

void *getString(){git 
	char message[100] = "Hello world";
	cout << message << endl;
	return message;
}

void test4(){
	cout << "String: " << getString() << endl;

}

/* FIX

you don't return strings/char-array in c. You make a char array before calling the method and passing its pointer as a parameter and this way you can change the string.


void getString(char *message){
	cout << message << endl;
}

void test4(){
	char message[100] = "hello world";
	getString(message);
}
*/


int main(){
	//test1();
	//test2();
	//test3();
	test4();
	return 0;

}
