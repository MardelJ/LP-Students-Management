#ifndef DOCENTE_H
#define DOCENTE_H


#include <iostream>
#include <string>
#include "trabalhador.h"
#include "Usuario.h"

using namespace std;

class Docente : public Trabalhador{
    private:

    public:
        std::string lecionaDisciplina;
        Docente();
        Docente(std::string Nome, std::string morada, int dd, int mm, int yyyy, char sexo, char categoria, int nuit, std::string email, std::string subcategoria, std::string lecionaDisciplina);
        ~Docente();

        string getLeccionaDisciplia();
        void verTurmas();
        void registarDocente();

};



#endif