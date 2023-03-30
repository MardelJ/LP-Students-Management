#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

int main(){
    Usuario user;
    cout << "usuario criado: "<<endl;
    string nome = "MArdel";
    string morada= "malhangalene";
    int dia = 03;
    int mes = 05;
    int ano = 2001;
    char sexo = 'M';
    char categoria = 'E';
    int nuit = 98575;

    Usuario user1(string nome, string morada, int dia, int mes, int ano, char sexo, char categoria, int nuit);
    user1.imprimir();
    
   return 0; 
}