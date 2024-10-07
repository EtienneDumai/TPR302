#include <list>
#include <iostream>
#include <utility>
using namespace std;
template <class T, class A = allocator<T>>
class List
{
public:
    typedef T value_type;
    typedef value_type *iterator;
    List();
    void push_back(const value_type &val);
    iterator begin();
    iterator end();
    void listeSimple();
};

template <class T, class A>
void List<T, A>::listeSimple()
{
    // Déclaration de la liste (type) ListS contenant des chaines de caractères
    typedef list<string> ListS;
    // Déclaration de la liste (objet) uneListeS contenant des chaines de caractères
    ListS uneListeS;
    // Ajout de chaines de caractères dans la liste
    uneListeS.push_back(ListS::value_type("Pantxika"));
    uneListeS.push_back(ListS::value_type("Yann"));
    uneListeS.push_back(ListS::value_type("Philippe"));
    uneListeS.push_back(ListS::value_type("Patrick"));
    ListS ::iterator iteratorListeS;
    iteratorListeS = uneListeS.begin();
    while (iteratorListeS != uneListeS.end())
    {
        // déréférencement du pointeur
        cout << *iteratorListeS << endl;
        // incrémentation du pointeur pour passer a la valeur suivante de la liste
        iteratorListeS++;
    }
}
template <class T1, class T2>
class Pair
{
public:
    typedef T1 fisrt_type;
    typedef T2 second_type;
    Pair(const fisrt_type &, const second_type &);
    void exemplePair();
    void listePaires();
};

template <class T1, class T2>
Pair<T1, T2>::Pair(const fisrt_type &, const second_type &)
{
    // constructeur qui instancie une paire
    typedef pair<fisrt_type, second_type> PairSI;
}

template <class T1, class T2>
void Pair<T1, T2>::exemplePair()
{
    typedef pair<string, string> PairSI;
    PairSI unPairSI("Pantxika", "20");
}

void listePaires()
{
    // déclaration d'un type de pair : PairSI = type de paire avec 2 string
    typedef pair<string, string> PairSI;
    // déclaration d'une liste de pair : ListeP = liste de paires de string
    typedef list<PairSI> ListeP;
    // déclaration d'une liste de paires
    ListeP listePaires;
    // déclaration de 4 paires
    PairSI pair1("Pantxika", "06.01.01.01.01");
    PairSI pair2("Yann", "06.02.02.02.02");
    PairSI pair3("Philippe", "06.03.03.03.03");
    PairSI pair4("Patrick", "06.04.04.04.04");
    // ajout des paires dans la liste
    listePaires.push_back(pair1);
    listePaires.push_back(pair2);
    listePaires.push_back(pair3);
    listePaires.push_back(pair4);
    // déclaration d'un itérateur pour parcourir la liste de paires
    ListeP::iterator iteratorListeP;
    // initialisation de l'itérateur avec le début de la liste
    iteratorListeP = listePaires.begin();
    // tant que l'itérateur n'est pas à la fin de la liste
    while (iteratorListeP != listePaires.end())
    {
        // affichage de la paire
        cout<< iteratorListeP->first << " "<< iteratorListeP->second << endl;
        iteratorListeP++;
    }
}

int main(void)
{
    listePaires();
    return 0;
}