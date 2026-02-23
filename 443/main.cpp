#include "DynMatrix.h"
#include "LinearMatrix.h"


void test_poly(){
	//part1
	/*
	SafeMatrix** s= new SafeMatrix*[2];
	s[0] = new DynMatrix(3,3);
	s[1] = new LinearMatrix(3,3);

	for(int i = 0; i < 2; i++){
		s[i]->fill(i+5);
		cout<< *s[i] <<endl;
	}
	*/

	//part2
	/*
	LinearMatrix lm(3,3);
	lm.fill (0.5);

	for(int i = 0; i < 2; i++){
		LinearMatrix result = lm.add(*s[i]);
		cout<< result <<endl;
	}
	*/
	
}

int main(){

	test_poly(); 
	

	return 0;
}
