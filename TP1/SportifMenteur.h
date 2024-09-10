#ifndef SPORTIFMENTEUR_H
#define SPORTIFMENTEUR_H
#include "Sportif.h"
#include <iostream>
using namespace std;
class SportifMenteur : public Sportif
{
private:
    string _tuteur;

public:
    SportifMenteur(string, string, int, string);
    ~SportifMenteur();
    string getTuteur();
    void setTuteur(string);
    string toString();
    int getAge();
};

#endif // SPORTIFMENTEUR_H