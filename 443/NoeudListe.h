
#pragma once
template <class T> class NoeudListe{

private:
	NoeudListe* prev;
	NoeudListe* next;
	T val;

public:

	NoeudListe(NoeudListe* p, NoeudListe* n, const T& v){
		prev = p;
		next = n;
		val = v;
	}

	void setNext(NoeudListe* n){ next = n;}
	void setPrev(NoeudListe* p){ prev = p;}
	void setVal(const T& v){ val = v;}

	NoeudListe* getNext(){ return next;}
	NoeudListe* getPrev(){ return prev;}
	T getVal(){ return val;}

};
