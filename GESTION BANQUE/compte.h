#include <iostream>

using namespace std;

class Compte{
    private:
    char *id;
    char *nom;
    char *prenom;
    double numero;
    double solde;
    char *rib;
    public: 
    Compte(char * ,char *, char *, double, double, char *);
    float Credit();
    float Debit();
    float Consult();
    float Virement();
    void affiche();

};