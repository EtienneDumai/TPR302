#include "Voiture.h"
#include "Individu.h"
#include <iostream>
using namespace std;


int main(){
    Voiture voit1("RenaultClio", "123AB64");
    Voiture voit2("Peugeot106", "678CD96");
    Voiture voit3("CitroenPicasso", "456EF75");
    Individu ind1("Dupont", "Pierre");
    Individu ind2("Martin", "Louis");
    Individu ind3("Durand", "Marcel");
    voit3.setPilote(&ind3);
    ind3.setVoiture(&voit3);
    cout<<ind1.getVoiture()->getPlaque()<<endl;
    voit3.setPlaque("77777NO22");
    cout << voit1.toString() << endl << voit2.toString() << endl << voit3.toString() << endl;
    cout << ind1.toString() << endl << ind2.toString() << endl << ind3.toString() << endl;
    return 0;
}