    #include "Usuario.h"
    #include <iostream>
    
    Usuario::Usuario(string nome, string morada, int dd, int mm, int yyyy, char sexo, char categoria, int nuit){
        this->Nome = nome;
        this->morada = morada;
        this->diaDeNascimento = dd;
        this->mesDeNascimento = mm;
        this->anoDeNascimento = yyyy;
        this->sexo = sexo;
        this->categoria = categoria;
        this->nuit = nuit;
    };

    Usuario::Usuario(){};

    void Usuario::imprimir(){
        cout<< "Nome: " << Nome << endl;
        cout<< "Morada: " << morada << endl;
        cout<< "Categoria: " << categoria << endl;
        cout<< "Data de Nascimento: " << diaDeNascimento << "/" << mesDeNascimento << "/" << anoDeNascimento << endl;
        cout<< "Sexo: " << sexo << endl;
        cout<< "Nuit: " << nuit << endl;
        cout<< "Email: " << email << endl;
    };
    