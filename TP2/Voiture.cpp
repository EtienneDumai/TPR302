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

string Voiture::toStringAndLink()
{
    if (this->getPilote() != nullptr)
    {
        return this->toString() + ", pilote : " + this->getPilote()->toString();
    }
    else
    {
        return this->toString();
    }
}

Voiture::~Voiture()
{
    supprimerLien();
    delete monPilote;
    delete this;
}

string Voiture::getMarque()
{
    return marque;
}

string Voiture::getPlaque()
{
    return plaque;
}

Individu *Voiture::getPilote()
{
    return monPilote;
}

void Voiture::setPilote(Individu *lePilote)
{
    supprimerLien();
    this->majPilote(lePilote);
    lePilote->setVoiture(this);
}

void Voiture::setMarque(string laMarque)
{
    this->marque = laMarque;
}

void Voiture::setPlaque(string laPlaque)
{
    this->plaque = laPlaque;
}

void Voiture::majPilote(Individu *pilote)
{
    this->monPilote = pilote;
}

void Voiture::supprimerLien()
{
    this->monPilote = nullptr;
}
