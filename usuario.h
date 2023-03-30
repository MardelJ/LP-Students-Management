#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>
using namespace std;
class Usuario
{
private:
    /* data */
public:
    string Nome, morada, email, password;
    int nuit, diaDeNascimento, mesDeNascimento, anoDeNascimento;
    char sexo, categoria;
    
    Usuario(string nome, string morada, int dd, int mm, int yyyy, char sexo, char categoria, int nuit);
    Usuario();
    ~Usuario() { };
    void imprimir();
    void setNome();
    void setEmail();
    void setCategoria();
};

#endif