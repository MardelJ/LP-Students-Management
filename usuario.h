#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>
#include <string>
using namespace std;
class Usuario
{
private:
    /* data */
public:
     std::string Nome; 
     std::string morada;
     std::string email;
    char password[20];
    int nuit, diaDeNascimento, mesDeNascimento, anoDeNascimento;
    char sexo, categoria;
    
    Usuario(std::string nome, std::string morada, int dd, int mm, int yyyy, char sexo, char categoria, int nuit, std::string email);
    Usuario();
    ~Usuario() { };
    void imprimir();
    void setNome();
    void setEmail();
    void setCategoria();
    void registarUsuario();
};

#endif