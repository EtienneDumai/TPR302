#ifndef SPORTIF_H
#define SPORTIF_H
#include <iostream>
using namespace std;
class Sportif
{
private:
    string _prenom;
    string _nom;
    int _anneeNaissance;

public:
    /**
     * @brief Construct a new Sportif object
     * 
     */
    Sportif(string, string, int);
    virtual ~Sportif();
    /**
     * @brief Get the prenom attribute
     * 
     * @return string 
     */
    string getPrenom();
    /**
     * @brief Get the Nom attribute
     * 
     * @return string 
     */
    string getNom();
    /**
     * @brief Get the Annee Naissance attribute
     * 
     * @return int 
     */
    int getAnneeNaissance();
    /**
     * @brief Set the Prenom attribute
     * 
     * @param string 
     */
    void setPrenom(string);
    /**
     * @brief Set the Nom attribute
     * 
     * @param string 
     */
    void setNom(string);
    /**
     * @brief Set the Annee Naissance attribute
     * 
     * @param int 
     */
    void setAnneeNaissance(int);
    /**
     * @brief Method that returns the description of the object
     * 
     * @return string 
     */
    virtual string toString();
    
    virtual int getAge();
};
#endif //SPORTIF_H