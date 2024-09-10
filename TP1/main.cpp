#include <iostream>
using namespace std;
#include "Sportif.h"
#include "SportifMenteur.h"
#include "Outils.h"
void afficheAgeSportifParValeur(Sportif sportif);
void afficheAgeSportifParReference(Sportif &sportif);
void afficheAgeSportifParAdresse(Sportif *sportif);
int main()
{
    Sportif sportif1("Jean", "Bon", 2007);
    SportifMenteur sportif2("Jean", "Fonce", 2000, "Tutu");
    SportifMenteur sportif3("Jean", "Tame", 2010, "Tata");
    ///Question Partie 1 du tp, 1.4
    /*cout << Outils::anneeActuelle() << endl;
    cout << "Annee actuelle : " << Outils::anneeActuelle() << ", Age sportif 1 :  " << sportif1.getAge() << endl;
    cout << "Annee actuelle : " << Outils::anneeActuelle() << ", Age sportif 2 :  " << sportif2.getAge() << endl;
    cout << "Annee actuelle : " << Outils::anneeActuelle() << ", Age sportif 3 :  " << sportif3.getAge() << endl;
    */
    ///Question Partie Polymorphisme du TP Partie 2, 2.3
    cout<<"Sportif 1 : \n";
    afficheAgeSportifParValeur(sportif1);
    cout<<"\n";
    afficheAgeSportifParReference(sportif1);
    cout<<"\n";
    afficheAgeSportifParAdresse(&sportif1);
    cout<< "Sportif 2 : \n";
    afficheAgeSportifParValeur(sportif2);
    cout<<"\n";
    afficheAgeSportifParReference(sportif2);
    cout<<"\n";
    afficheAgeSportifParAdresse(&sportif2);
    cout<<"\n";
    cout<<"Sportif 3 : \n";
    afficheAgeSportifParValeur(sportif3);
    cout<<"\n";
    afficheAgeSportifParReference(sportif3);
    cout<<"\n";
    afficheAgeSportifParAdresse(&sportif3);
    return 0;
}

void afficheAgeSportifParValeur(Sportif sportif)
{
    cout << "Annee actuelle : " << Outils::anneeActuelle() << endl;
    cout << "Dat de naissance : " << sportif.getAnneeNaissance() << endl;
    cout << "Age sportif : " << sportif.getAge() << endl;
}

void afficheAgeSportifParReference(Sportif &sportif)
{
    cout << "Annee actuelle : " << Outils::anneeActuelle() << endl;
    cout << "Date de naissance : " << sportif.getAnneeNaissance() << endl;
    cout << "Age sportif : " << sportif.getAge() << endl;
}

void afficheAgeSportifParAdresse(Sportif *sportif)
{
    cout << "Annee actuelle : " << Outils::anneeActuelle() << endl;
    cout << "Date de naissance : " << sportif->getAnneeNaissance() << endl;
    cout << "Age sportif : " << sportif->getAge() << endl;
}
