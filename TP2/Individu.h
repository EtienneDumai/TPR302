#ifndef INDIVIDU_H
#define INDIVIDU_H
#include <iostream>
using namespace std;
class Individu
{
private:
    string nom; 
    string prenom;
public:
    Individu(string, string);
    ~Individu();
    string toString();
    string getNom();
    string getPrenom();
    void setNom(string);
    void setPrenom(string);
};

#endif // INDIVIDU_H