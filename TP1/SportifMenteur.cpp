#include "SportifMenteur.h"
#include "Outils.h"
SportifMenteur::SportifMenteur(string lePrenom, string leNom, int lAnneeNaissance, string leTuteur) : Sportif(lePrenom, leNom, lAnneeNaissance)
{
    this->setTuteur(leTuteur);
}

SportifMenteur::~SportifMenteur()
{
}

string SportifMenteur::getTuteur()
{
    return _tuteur;
}

void SportifMenteur::setTuteur(string leTuteur)
{
    this->_tuteur = leTuteur;
}

string SportifMenteur::toString()
{
    string message = this->Sportif::toString();
    message +=" et a pour tuteur " + this->getTuteur();
    return message;
}
int SportifMenteur::getAge()
{
    return Outils::anneeActuelle() - this->getAnneeNaissance();
}