#include <iostream>
#include <string.h>
#include <assert.h>
#include <vector>

using namespace std;

const char num1[] = {"COCA"};
const char num2[] = {"COLA"};
const char sum[] = {"LOVE"};
//const char num1[] = {"A"};
//const char num2[] = {"A"};
//const char sum[] = {"B"};
//const char num1[] = {"SEND"};
//const char num2[] = {"MORE"};
//const char sum[] = {"MONEY"};


class SolverSum{
private:

	/* definir membres prives necessaire ICI */


	/* implementer au fur et a mesure ces methodes*/
	/*
	bool ExplorationIsOver(int niveau);
	bool IsPossible(int choix, int niveau);
	void Include(int choix, int niveau);
	void Exclude(int choix, int niveau);
	void CheckSol(int choix, int niveau);
	*/


public:

	// a implementer
	//SolverSum(const char* num1, const char* num2, const char* sum);
		
	
		
	//deja implemente - ne pas modifier
	//void Backtracking(int niveau);

	
};




//implementation de la recherche exhaustive
//ne pas modifier
/*
void SolverSum::Backtracking(int k){
	if (ExplorationIsOver(k))
		return;

	for(int i=0;i<setSize;i++)
		if(IsPossible(i,k)){
			Include(i,k);
			Backtracking(k+1);
			Exclude(i,k);
		}
}
*/

int main(){
	//SolverSum obj(num1, num2, sum);
	//obj.Backtracking(0);	
	return 0;
}




