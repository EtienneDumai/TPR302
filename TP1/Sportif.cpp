#include "Sportif.h"
#include "Outils.h"
Sportif::Sportif(string lePrenom, string leNom, int lAnneeNaissance)
{
    (*this).setNom(leNom);
    (*this)._prenom = lePrenom;
    this->setAnneeNaissance(lAnneeNaissance);
}
string Sportif::getPrenom()
{
    return _prenom;
}
string Sportif::getNom()
{
    return _nom;
}
int Sportif::getAnneeNaissance()
{
    return _anneeNaissance;
}
void Sportif::setPrenom(string lePrenom)
{
    this->_prenom = lePrenom;
}
void Sportif::setNom(string leNom)
{
    this->_nom = leNom;
}
void Sportif::setAnneeNaissance(int lAnneeNaissance)
{
    this->_anneeNaissance = lAnneeNaissance;
}
string Sportif::toString()
{
    return this->_nom + " " + this->_prenom + " " + to_string(this->_anneeNaissance);
}
int Sportif::getAge()
{
    return Outils::anneeActuelle() - this->_anneeNaissance;
}