#ifndef INDIVIDU_H
#define INDIVIDU_H
#include <iostream>
#include "Voiture.h"
using namespace std;
class Voiture;
class Individu
{
private:
    string nom; 
    string prenom;
    Voiture* maVoiture;
public:
    Individu(string, string);
    ~Individu();
    string toString();
    string toStringAndLink();
    string getNom();
    string getPrenom();
    Voiture* getVoiture();
    void setVoiture(Voiture* laVoiture);
    void setNom(string);
    void setPrenom(string);
    void majVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H