#include "trabalhador.h"
#include <random>
#include <iostream>
#include <sstream>
#include <fstream>

void Trabalhador::registarTrabalhador()
{
    int escolha = 0;
    int op = 0;
    fstream meuFicheiro, meuFicheiroUsuario, meuFicheiroLogin;
    cout << "===============================================================" << endl;
    cout << "                        Registar Trabalhador                   " << endl;
    cout << "===============================================================" << endl;

    cout << "Insira o nome: " << endl;
    std::getline(std::cin, Nome);

    cout << "Insira a sua Morada: " << endl;
    std::getline(std::cin, morada);

    cout << "Qual é o género: " << endl;
    cout << "1. Masculino\n"
         << "2. Feminino\n"
         << "3. Outro" << endl;
    cin >> escolha;

    while (escolha < 1 || escolha > 3)
    {
        cout << "Qual é o género: " << endl;
        cout << "1. Masculino\n"
             << "2. Feminino\n"
             << "3. Outro" << endl;
        cin >> escolha;
    };
    switch (escolha)
    {
    case 1:
        sexo = 'M';
        break;
    case 2:
        sexo = 'F';
        break;
    case 3:
        sexo = 'O';
        break;
    default:
        cout << "Escolha uma opção válida." << endl;
    };

    cout << "Insira a data de nascimento usando dd/mm/aaaa" << endl;
    cout << "Insira o dia" << endl;
    cin >> diaDeNascimento;
    while (diaDeNascimento < 1 || diaDeNascimento > 31)
    {
        cout << "Insira uma data Válida" << endl;
        cin >> diaDeNascimento;
    };

    cout << "Insira o mês" << endl;
    cin >> mesDeNascimento;
    while (mesDeNascimento < 1 || mesDeNascimento > 12)
    {
        cout << "Insira uma mês valido" << endl;
        cin >> mesDeNascimento;
    };

    cout << "Insira o ano de nascimento: " << endl;
    cin >> anoDeNascimento;
    while (anoDeNascimento < 1930 || anoDeNascimento > 2005)
    {
        cout << "Insira uma ano valido" << endl;
        cin >> anoDeNascimento;
    };

    cout << "insira o nuit: " << endl;
    cin >> nuit;

    cout << "insira o seu email: " << endl;
    std::cin >> email;


    subcategoria = "Secretaria";
    meuFicheiro.open("TrabalhadoresSec.txt", ios::app);
    if (meuFicheiro.is_open())
    {
        meuFicheiro << Nome << "; " << morada << "; " << diaDeNascimento << "/" << mesDeNascimento << "/" << anoDeNascimento << ";" << sexo << ";" << email << ";\n";
        meuFicheiro.close();
    };
    

    random_device rd;
    uniform_int_distribution<int> dist(100000, 999999);
    password = dist(rd);

    meuFicheiroUsuario.open("users.txt", ios::app);
    if (meuFicheiro.is_open())
    {
        meuFicheiroUsuario << Nome << "; " << morada << "; " << diaDeNascimento << "/" << mesDeNascimento << "/" << anoDeNascimento << ";" << sexo << ";" << categoria << ";" << nuit << ";" << email << ";\n";
        meuFicheiroUsuario.close();
    };

    meuFicheiroLogin.open("trabalhadoresLogin.txt", ios::app);
    if (meuFicheiroLogin.is_open())
    {
        meuFicheiroLogin << email << ";" << password << endl;
        meuFicheiroLogin.close();
    };

    cout << "Os seus dados de login são: \n"
         << "Email: " << email << "\nPassword: " << password;
};
