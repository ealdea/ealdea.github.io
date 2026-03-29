#include <iostream>
#include <vector>
#include <list>

using namespace std;

template <class T1, class T2> T1 carre(T2 val){
	return val * val;
}

int f(float param){
	return 0;
}

int main(){

	float x = 3.7;
	
	
	
	std::cout << carre<float,float>(x) << std::endl;
	std::cout << carre<int,int>(x) << std::endl;
	
	std::vector<float> v;
	v.push_back(1.1);
	v.push_back(2.2);
	float* p = (float*)v.data();
	std::cout << p[1] << std::endl;
	
	std::vector<float> v2;
	//v2.reserve(9);
	
	for(int i = 0; i < 10;i ++){
	
		v2.push_back(7);
		//std::cout << "size = " << v2.size() << "; max_size = " << v2.max_size() << "; capacity = " << v2.capacity() << std::endl;
		std::cout << "size = " << v2.size() << "; max_size = " << v2.max_size() << std::endl;
	}
	
	
	
	for (std::vector<float>::const_iterator it = v2.begin(); it != v2.end(); ++it)
	{
		//*it = *it + 1;
		//std::cout << *it << std::endl;
	}
	
////////////////////////////////////// nettoyage structure
	std::vector<int> v3;
	v3.push_back(7);
	v3.push_back(3);
	v3.push_back(1);
	v3.push_back(7);
	v3.push_back(7);
	v3.push_back(5);
	v3.push_back(2);
	v3.push_back(0);
	v3.push_back(8);
	v3.push_back(7);
	
	//v3.erase(v3.begin());
    //std::cout << v3.front() << std::endl;
	
	std::vector<int>::iterator it = v3.begin();
	
	
	do{
		std::vector<int>::iterator crt = it;
		it++;
		
		if(*crt == 7)
			v3.erase(crt);
		else
			cout << *crt << endl;
		
		
	}
	while(it != v3.end());
	
	
	for (std::vector<int>::const_iterator it = v3.begin(); it != v3.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	



/*	
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
