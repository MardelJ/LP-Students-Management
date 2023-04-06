#include <iostream>
#include <string>
#include "Usuario.h"
#include "estudante.h"

using namespace std;

 void menuDocente(){

    cout<<"docente"<<endl;
 }
 
 void menuEstudante(){
    
    cout<<"estudante"<<endl;
 }

 void menuSecretaria(){
    
    cout<<"menu secretaria"<<endl;
 }


int main(){
    Usuario usuario;
    int ans;
    do
     {
            cout<< "===================================================\t\t\t" <<endl;
            cout << "\t\tSEJA BEM-VINDO AO SGA\t\t\t"<<endl;
            cout<< "===================================================\t\t\t\n" <<endl;

            cout << "1. Fazer Login como secretaria"<<endl;
            cout << "2. Fazer Login como estudante"<<endl;
            cout << "3. Fazer Login como docente"<<endl;
            cout << "4. Sair" << endl;
            cin >> ans;
            
            switch(ans){
                case 1:
                    

                    menuSecretaria(); break;
                case 2:
                    usuario.loginEstudante();
                    menuEstudante();break;
                case 3:
                    menuDocente();break;
                case 4: cout <<"Volte Sempre!" << endl; break;
                default:
                    cout << "Entrada Invalida!!!"<<endl;

            };

        } while (ans != 4);
    /*
        login como estudante
        login como docente
        logint como secretario
        esqueci pass
        sair
    */
    /*
     *1. Registar Estudante^
     *categoria = estudante;
     * loginEstudante.txt;
    */




    
   return 0; 
}