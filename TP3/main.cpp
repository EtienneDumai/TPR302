#include <list>
#include <iostream>
using namespace std;
template <class T, class A = allocator<T>>
class List
{

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
    //Déclaration de la liste (type) ListS contenant des chaines de caractères
    typedef list<string> ListS;
    //Déclaration de la liste (objet) uneListeS contenant des chaines de caractères
    ListS uneListeS;
    //Ajout de chaines de caractères dans la liste
    uneListeS.push_back(ListS::value_type("Pantxika"));
    uneListeS.push_back(ListS::value_type("Yann"));
    uneListeS.push_back(ListS::value_type("Philippe"));
    uneListeS.push_back(ListS::value_type("Patrick"));
    ListeS ::iterator iteratorListeS;
    iteratorListeS = uneListeS.begin();
    while (iteratorListeS != uneListeS.end())
    {
        //déréférencement du pointeur
        cout << *iterateurListeS << endl;
        //incrémentation du pointeur pour passer a la valeur suivante de la liste
        iterateurListeS++;
    }
}
