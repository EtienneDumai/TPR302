#ifndef VOITURE_H
#define VOITURE_H
#include <iostream>
#include "Individu.h"
using namespace std;
class Individu;

class Voiture
{
private:
    string marque;
    string plaque;
    Individu* monPilote;
public:
    Voiture(string, string);
    ~Voiture();
    string toString();
    string toStringAndLink();
    string getMarque();
    string getPlaque();
    Individu* getPilote();
    void setPilote(Individu* lePilote);
    void setMarque(string);
    void setPlaque(string);
    void majPilote(Individu* pilote);
    void supprimerLien();
};

#endif // VOITURE_H