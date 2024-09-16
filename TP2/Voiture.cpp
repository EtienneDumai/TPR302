#include "Voiture.h"

Voiture::Voiture(string laMarque, string laPlaque)
{
    this->marque = laMarque;
    this->plaque = laPlaque;
}

string Voiture::toString()
{
    if (this->getPilote() != nullptr)
    {
        return "Voiture de marque : " + this->getMarque() + ", immatriculee : " + this->getPlaque() + ",pilotee par : " + getPilote()->toString();
    }
    else
    {
        return "Voiture de marque : " + this->getMarque() + ", immatriculee : " + this->getPlaque() + ", pas de pilote";
    }
}

Voiture::~Voiture()
{
}

string Voiture::getMarque()
{
    return marque;
}

string Voiture::getPlaque()
{
    return marque;
}

Individu *Voiture::getPilote()
{
    return monPilote;
}

void Voiture::setPilote(Individu *lePilote)
{
    this->monPilote = lePilote;
}

void Voiture::setMarque(string laMarque)
{
    this->marque = laMarque;
}

void Voiture::setPlaque(string laPlaque)
{
    this->plaque = laPlaque;
}