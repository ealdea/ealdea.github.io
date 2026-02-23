#pragma once
#include <iostream>
#define typevar float

using namespace std;

class SafeMatrix{
private:

	//pointeur sur la case d'une matrice
	virtual typevar* at(int i, int j) = 0;
	//utilisee par l'operateur << 
	virtual void print(std::ostream& str) = 0;

protected: 
	int rows;
	int cols;

public:

	//retourne la valeur d'une case de la matrice
	virtual typevar get(int i, int j) const = 0;
	
	int getRows() const{return rows;} ;
	int getCols() const {return cols;};

	//initialise toutes les valeurs de la matrice a val
	virtual void fill(typevar val) = 0;	

	//operateur d'affichage dans un flot de sortie (ecran, fichier etc)
	friend std::ostream& operator<<(std::ostream& str, SafeMatrix& paramMat)
        {
            paramMat.print(str);
            return str;
        }
};
