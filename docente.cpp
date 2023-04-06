#include "docente.h"
#include <random>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

Docente::Docente(std::string Nome, std::string morada, int dd, int mm, int yyyy, char sexo, char categoria, int nuit, std::string email, std::string subcategoria, std::string lecionaDisciplina)
        :Trabalhador(std::string Nome, std::string morada, int dd, int mm, int yyyy, char sexo, char categoria, int nuit, std::string email, std::string subcategoria), lecionaDisciplina{lecionaDisciplina} {};

