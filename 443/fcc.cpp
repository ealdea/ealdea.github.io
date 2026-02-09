#include <iostream> // entrees/sorties standard
#include "fcc.h" // inclusion de la definition de A

////////////////////////////////////////////////////////////////////////////////
// Definition de la classe A
//
// Notez que les methodes de A sont prefixees de l'operateur de resolution
// de portee :
// <retour> A::<nom de la methode>( <arguments> ) { /* ... */ }
////////////////////////////////////////////////////////////////////////////////

// Constructeur par défaut
A::A()
{
  std::cout << "A::A()\n";
}

// Destructeur
A::~A()
{
  std::cout << "A::~A()\n";
}

// Constructeur de copie
A::A( const A & src)
{
  std::cout << "A::A(const A&)\n";
}

// Operateur d'affectation
A& A::operator=(const A& src)
{
  // Attention a ne pas copier inutilement une instance
  if( this != &src)
  {
    std::cout << "A::operator=(const A& src)\n";
  }

  // Renvoi de l'instance recopiee
  return *this;
}
