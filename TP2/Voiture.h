#ifndef VOITURE_H
#define VOITURE_H
#include <iostream>
using namespace std;

class Voiture
{
private:
    string marque;
    string plaque;
public:
    Voiture(string, string);
    ~Voiture();
    string toString();
    string getMarque();
    string getPlaque();
    void setMarque(string);
    void setPlaque(string);
};

#endif // VOITURE_H