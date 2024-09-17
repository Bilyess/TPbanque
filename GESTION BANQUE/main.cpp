#include <iostream>
#include "source.cpp"

using namespace std;

main()
{
    system("CLS");
    Compte moncompte("FR-AAAC9171G210","BAIBBOUT","Ilyes",123456789, 100, "FR76 3000 4028 3798 7654 3210 943");
    int cpt=0;
    while (cpt!=3){
        system("CLS");
        cout<<"\n\tEntrer le code de securite : ";
        int code;
        cin>>code;
        if(code==1234){
            system("CLS");
            cout<<"\n\tBienvenue\n\n\n";
            system("pause");
            moncompte.affiche();
            return 0;
        }
        else{
            system("CLS");
            cout<<"ERREUR\n\n il vous reste "<<2-cpt<<" essaie \n\n";
            system("pause");
            cpt++;
        }
    }
    return 0;
}

