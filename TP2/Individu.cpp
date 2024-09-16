#include "Individu.h"
Individu::Individu(string leNom, string lePrenom)
{
    this->nom = leNom;
    this->prenom = lePrenom;
}

string Individu::toString()
{
    return "Nom : " + getNom() + " Prenom : " + getPrenom();
}

string Individu::getNom()
{
    return nom;
}

string Individu::getPrenom()
{
    return prenom;
}

void Individu::setNom(string leNom)
{
    this->nom = leNom;
}

void Individu::setPrenom(string lePrenom)
{
    this->prenom = lePrenom;
}
