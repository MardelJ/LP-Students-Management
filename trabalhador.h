#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <iostream>
#include<string>
#include "Usuario.h"

class Trabalhador : public Usuario{
    private:

    public:
        std::string subcategoria;
        Trabalhador();
        Trabalhador(std::string nome, std::string morada, int dd, int mm, int yyyy, char sexo, char categoria, int nuit, std::string email, std::string subcategoria);
        void registarTrabalhador();

};





#endif