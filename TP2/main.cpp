#include "Voiture.h"
#include "Individu.h"
#include <iostream>
using namespace std;

int main()
{
     Voiture voit1("RenaultClio", "123AB64");
     Voiture voit2("Peugeot106", "678CD96");
     Voiture voit3("CitroenPicasso", "456EF75");
     Individu ind1("Dupont", "Pierre");
     Individu ind2("Martin", "Louis");
     Individu ind3("Durand", "Marcel");
     cout << voit1.toString() << endl
          << voit2.toString() << endl
          << voit3.toString() << endl;
     cout << ind1.toString() << endl
          << ind2.toString() << endl
          << ind3.toString() << endl;
     voit3.setPilote(&ind3);
     ind3.setVoiture(&voit3);
     cout << ind3.getVoiture()->getPlaque() << endl;
     voit3.setPlaque("77777NO22");
     cout << ind3.getVoiture()->getPlaque() << endl;
     cout<<ind3.toStringAndLink()<<endl;
     cout<<voit3.toStringAndLink()<<endl;
     voit2.setPilote(&ind2);
     ind2.setVoiture(&voit2);
     cout<<"Individu 1 : "<<endl;
     cout<<ind2.toStringAndLink()<<endl<<endl;
     cout<<"Voiture 2 : "<<endl;
     cout<<voit2.toStringAndLink()<<endl<<endl;
     voit2.setPilote(&ind1);
     cout<<"Individu 1 : "<<endl;
     cout<<ind1.toStringAndLink()<<endl<<endl;
     cout<<"Individu 2 : "<<endl;
     cout<<ind2.toStringAndLink()<<endl<<endl;
     cout<<"Voiture 2 : "<<endl;
     cout<<voit2.toStringAndLink()<<endl<<endl;
     // Destroy ind1 with its destructor
     cout<<"Destruction ind1..."<<endl;
     ind1.~Individu();
     cout<<"Voiture 2 : "<<endl;
     cout<<voit2.toStringAndLink()<<endl<<endl;
     return 0;
}