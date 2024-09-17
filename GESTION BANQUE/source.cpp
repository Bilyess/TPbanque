#include <iostream>
#include "compte.h"

using namespace std;

Compte::Compte(char *id, char *nomFami, char *Preno, double num, double sold, char *ribb ){ // constructeur
    id=id;
    nom=nomFami;
    prenom=Preno;
    numero=num;
    solde=sold;
    rib=ribb;
}

float Compte::Credit(){ // CREDITER LE COMPTE
    system("CLS");
    cout<<"\n\tCREDITER\n\n";
    cout<<" 1. Deposer une somme\n";
    cout<<" 2. Crediter un autre compte\n";
    cout<<" 3. Retour\n\n Choix : ";
    unsigned int choix;
    cin>>choix;
    if(choix==1){
        system("CLS");
        cout<<"\n\tDEPOSER UNE SOMME\n\n";
        cout<<"\t\n Combien voulez vous deposer ?\n\n ";
        cin>>choix;
        if(choix>=0){
            solde=solde+choix;
            cout<<"\n SOLDE AJOUTER\n\n Votre solde s'eleve a "<<solde<<"e\n";
        }
        else{
            cout<<"\n ERREUR SOLDE NEGATIF";
        }
        choix=0;
        system("pause");
    }
    else if(choix == 2){                                            // A REVOIR PAS FINI IL MANQUE PARAMETRE
        system("CLS");
        cout<<"\n\tCREDITER UN AUTRE COMPTE\n\n";
        cout<<"\t\n Quel compte voulez vous creditez ? ENTREZ LE NOM\n\n ";
        string autre;
        cin>>autre;
        system("CLS");
        cout<<"\t\n Combien voulez vous crediter ?\n\n ";
        cin>>choix;
        if(choix>=0){
            system("CLS");
            solde=solde+choix;
            cout<<"\n SOLDE AJOUTER\n\n Votre solde s'eleve a "<<solde<<"e\n";
            }
        else{
            system("CLS");
            cout<<"\n ERREUR SOLDE NEGATIF";
            }
        system("pause");
    }
    return 0;
}

float Compte::Debit(){
    system("CLS");
    cout<<"\n\tDEBITER\n\n";
    cout<<"\t\n Combien voulez vous retirez ?\n\n ";
    int choix;
    cin>>choix;
        if(choix>=0){
            solde=solde-choix;
            cout<<"\n SOLDE RETIRER\n\n Votre solde s'eleve a "<<solde<<"e\n";
        }
        else{
            cout<<"\n ERREUR SOLDE NEGATIF";
        }
        choix=0;
        system("pause");

}

float Compte::Virement(){
    system("CLS");
    cout<<"\t\n Quel compte voulez vous creditez ? ENTREZ LE NOM\n\n ";
    string autre;
    cin>>autre;
    system("CLS");
    cout<<"\t\n Montant du virement : ";
    double choixV;
    cin>>choixV;
        if(choixV>=0){
            system("CLS");
            solde=solde-choixV;
            cout<<"\n VIREMENT EFFECTUE\n\n Votre solde s'eleve a "<<solde<<"e\n\n";
        }
        else{
            cout<<"\n ERREUR SOLDE NEGATIF";
        }
        choixV=0;
    system("pause");

}

float Compte::Consult(){
    system("CLS");
    cout<<"\n\tINFO COMPTE\n\n";
    cout<<" 1. Consulter son solde\n";
    cout<<" 2. Consulter son RIB\n";
    cout<<" 3. Retour\n\n";
    int choix;
    cin>>choix;
    switch (choix)
    {
    case 1:
        system("CLS");
        cout<<"\n\tSOLDE\n";
        cout<<"\n Vous avez "<<solde<<"e sur votre compte\n\n";
        system("pause");
        break;
    case 2:
        system("CLS");
        cout<<"\n\tRIB\n\n";
        cout<<"\nVotre RIB est "<<rib<<endl<<endl;
        system("pause");
        break;
    default:
        break;
    }
}

void Compte::affiche(){
    int cpt=1;
    while (cpt !=0){
        system("CLS");
        cout<<"\n\tGESTION DU COMPTE DE "<<nom<<" "<<prenom<<"\n\n";
        cout<<" 1. Crediter son compte\n";
        cout<<" 2. Debiter son compte\n";
        cout<<" 3. Virement\n";
        cout<<" 4. Info Compte\n\n";
        cout<<" 5. Quitter \n\n Choix : ";
        int choix;
        cin>>choix;
        switch (choix){
        case 1:
            Credit();
            break;
        case 2:
            Debit();
            break;
        case 3:
            Virement();
            break;
        case 4:
            Consult();
            break;
        case 5:
            cpt=0;
            break;
        default:
            system("CLS");
            cout<<"\n\tERREUR\n\n";
            choix=0;
            system("pause");
            break;
        }
    }
}