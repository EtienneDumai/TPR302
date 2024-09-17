#include "Individu.h"
Individu::Individu(string leNom, string lePrenom)
{
    this->nom = leNom;
    this->prenom = lePrenom;
}

string Individu::toString()
{
    return "Nom : " + this->getNom() + " Prenom : " + this->getPrenom();
}

string Individu::toStringAndLink()
{
    if (this->getVoiture() != nullptr)
    {
        return this->toString() + this->getVoiture()->toString();
    }
    else
    {
        return this->toString();
    }
}

Individu::~Individu()
{
    supprimerLien();
    delete maVoiture;
    
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
    supprimerLien();
    this->majVoiture(laVoiture);
    laVoiture->majPilote(this);
}

void Individu::setNom(string leNom)
{
    this->nom = leNom;
}

void Individu::setPrenom(string lePrenom)
{
    this->prenom = lePrenom;
}

void Individu::majVoiture(Voiture *voiture)
{
    this->maVoiture = voiture;
}

void Individu::supprimerLien()
{
    this->maVoiture = nullptr;
}
