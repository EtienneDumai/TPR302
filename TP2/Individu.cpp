#include "Individu.h"
Individu::Individu(string leNom, string lePrenom)
{
    this->nom = leNom;
    this->prenom = lePrenom;
}

string Individu::toString()
{
    if (this->getVoiture() != nullptr)
    {
        return "Nom : " + this->getNom() + " Prenom : " + this->getPrenom() + getVoiture()->toString();
    }
    else
    {
        return "Nom : " + this->getNom() + " Prenom : " + this->getPrenom();
    }
}

string Individu::getNom()
{
    return nom;
}

string Individu::getPrenom()
{
    return prenom;
}

Voiture *Individu::getVoiture()
{
    return maVoiture;
}

void Individu::setVoiture(Voiture *laVoiture)
{
    this->maVoiture = laVoiture;
}

void Individu::setNom(string leNom)
{
    this->nom = leNom;
}

void Individu::setPrenom(string lePrenom)
{
    this->prenom = lePrenom;
}
