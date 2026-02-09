////////////////////////////////////////////////////////////////////////////////
// fcc.hpp
// 
// Ce fichier conteint la declaration d'une classe minimaliste reprenant les
// elements essentiels de la Forme Canonique de Coplien.
//
// La forme canonique de Coplien est la forme que doivent implementer les
// classes ayant une sémantique de valeur du premier ordre, c'est-à-dire :
//   * Avoir une valeur par défaut
//   * Etre copiable
//
// Cela implique de fournir :
//   * Un constructeur par defaut
//   * Un destructeur
//   * Un constructeur de copie
//   * Une surcharge de l'operateur d'affectation (=)
//
// A partir de cette semantique, les classes vérifiant la FCC sont utilisables
// sans effets indésirables dans les cas suivants :
//   * Creation d'une instance de la classe
//   * Utilisation de la classe comme valeur de retour de fonction
//   * Creation d'un tableau d'instances de la classe
//
////////////////////////////////////////////////////////////////////////////////

#pragma once
#include <iostream>

////////////////////////////////////////////////////////////////////////////////
// Declaration de la classe A
////////////////////////////////////////////////////////////////////////////////
class A
{
  public:

  // Constructeur par défaut
  A(); 
 
  // Destructeur
  ~A();

  // Constructeur de copie
  A(const A& src);

  // Operateur d'affectation
  A& operator=(const A& src);
};

