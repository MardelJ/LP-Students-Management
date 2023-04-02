#ifndef ESTUDANTE_H
#define ESTUDANTE_H
#include <iostream>
#include<string>
#include "Usuario.h"

using namespace std;


class Estudante : public Usuario{
    private:
        
        
    public:

        Estudante(std::string nome, std::string morada, int dd, int mm, int yyyy, char sexo, char categoria, int nuit, std::string email, std::string curso, std::string turma);
        Estudante(){};
        ~Estudante(){};
        std::string curso;
        std::string turma;
        void getCurso();
        void setCurso(std::string curso);
        void getTurma();
        void setTurma(std::string turma);
        void registarEstudante();
};


#endif