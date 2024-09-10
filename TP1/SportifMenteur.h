#ifndef SPORTIFMENTEUR_H
#define SPORTIFMENTEUR_H
#include <iostream>
using namespace std;
class SportifMenteur : public Sportif
{
private:
    string _tuteur;

public:
    SportifMenteur(string);
    ~SportifMenteur();
};

#endif // SPORTIFMENTEUR_H