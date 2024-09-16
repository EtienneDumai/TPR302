#include "Voiture.h"

Voiture::Voiture(string laMarque, string laPlaque)
{
    this->marque = laMarque;
    this->plaque = laPlaque;
}

string Voiture::toString()
{
    return "Voiture de marque : " + this->getMarque() + ", immatriculee : " + this->getPlaque();
}

string Voiture::getMarque()
{
    return marque;
}

string Voiture::getPlaque()
{
    return marque;
}

void Voiture::setMarque(string laMarque)
{
    this->marque = laMarque;
}

void Voiture::setPlaque(string laPlaque)
{
    this->plaque = laPlaque;
}

