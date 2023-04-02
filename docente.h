#ifndef DOCENTE_H
#define DOCENTE_H


#include <iostream>
#include <string>
#include "Usuario.h"
using namespace std;

class Docente : public Trabalhador{
    private:

    public:
        std::string lecionaDisciplina;

        string getLeccionaDisciplia();
        void verTurmas();
        void registarDocente();

}



#endif