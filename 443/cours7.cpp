#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(){

	
////////////////////////////////////// nettoyage structure
	std::list<int> v3;
	
	for (int i = 0; i < 50000000; i++){
		v3.insert(v3.begin(),i);
		//if (i % 10000)
		//	std::cout << i << endl;
		//v3.push_front(i);
	}



/*	
	
	for (std::vector<int>::const_iterator it = v3.begin(); it != v3.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	



	
	list<int>::iterator it_end = v3.begin();
	
	--it_end;
*/

/*
	for (list<int>::iterator it = v3.begin(); it != v3.end(); it++) {
		if(*it == 7)
			v3.erase(it);
	}	
	
	
	for (std::list<int>::const_iterator it = v3.begin(); it != v3.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
*/		
	
	return 0; 
}
