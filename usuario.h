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
    
    Usuario(string nome, string morada, int dd, int mm, int yyyy, char sexo, char categoria, int nuit){
        this->Nome = nome;
        this->morada = morada;
        this->diaDeNascimento = dd;
        this->mesDeNascimento = mm;
        this->anoDeNascimento = yyyy;
        this->sexo = sexo;
        this->categoria = categoria;
        this->nuit = nuit;
    };
    ~Usuario();
};

Usuario::Usuario(/* args */)
{
}

Usuario::~Usuario()
{
}
