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
    
    Usuario(/* args */);
    ~Usuario();
};

Usuario::Usuario(/* args */)
{
}

Usuario::~Usuario()
{
}
