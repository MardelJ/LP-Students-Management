    #include "Usuario.h"
    #include <iostream>
    #include <sstream>
    #include <fstream>
    #include <string>


   Usuario user;
    Usuario::Usuario(std::string nome, std::string morada, int dd, int mm, int yyyy, char sexo, char categoria, int nuit, std::string email){};
   

    Usuario::Usuario(){};

    void Usuario::imprimir(){
        cout<< "Nome: " << Nome << endl;
        cout<< "Morada: " << morada << endl;
        cout<< "Categoria: " << categoria << endl;
        cout<< "Data de Nascimento: " << diaDeNascimento << "/" << mesDeNascimento << "/" << anoDeNascimento << endl;
        cout<< "Sexo: " << sexo << endl;
        cout<< "Nuit: " << nuit << endl;
        cout<< "Email: " << email << endl;
    };



    void Usuario::registarUsuario(/*std::string nome, std::string morada, int dd, int mm, int yyyy, char sexo, char categoria, int nuit, std::string email*/){
        int escolha = 0;
        int op= 0;
        char categoria, sexo;
        cout << "==============================================================="<<endl;
        cout << "                        Registar Usuario                       "<<endl;
        cout << "==============================================================="<<endl;

        cout<<"Insira o nome: "<< endl;
        std::getline(std::cin, Nome);

        cout<<"Insira a sua Morada: "<< endl;
        std::getline(std::cin, morada);

        cout<<"Qual é o género: "<< endl;
        cout << "1. Masculino\n" << "2. Feminino\n" << "3. Outro"<<endl;
        cin >> escolha;
        
        while(escolha < 1 || escolha > 3){
            cout<<"Qual é o género: "<< endl;
            cout << "1. Masculino\n" << "2. Feminino\n" << "3. Outro"<<endl;
            cin >> escolha;
        };
        switch(escolha){
            case 1: sexo = 'M'; break;
            case 2: sexo = 'F'; break;
            case 3: sexo = 'O'; break;
            default: cout<< "Escolha uma opção válida."<<endl;
        };
        

   

        cout << "Insira a data de nascimento usando dd/mm/aaaa"<<endl;
        cout << "Insira o dia" << endl;
        cin >> diaDeNascimento;
        while (diaDeNascimento < 1 || diaDeNascimento > 31){
            cout << "Insira uma data Válida" << endl;
            cin >> diaDeNascimento;
        };

        cout << "Insira o mês" << endl;
        cin >> mesDeNascimento;
        while (mesDeNascimento < 1 || mesDeNascimento > 12){
            cout << "Insira uma mês valido" << endl;
            cin >> mesDeNascimento;
        };

        cout << "Insira o ano de nascimento: " << endl;
        cin >> anoDeNascimento;
        while (anoDeNascimento < 1930 || anoDeNascimento > 2005){
            cout << "Insira uma ano valido" << endl;
            cin >> anoDeNascimento;
        };

  

        cout<< "insira o nuit: " <<endl;
        cin >> nuit;

        cout << "insira o seu email: " << endl;
        std::cin >> email;

        cout << "Qual é a categoria? " <<endl;
        cout << "1. Estudante\n" << "2. Trabalhador"<<endl;
        cin >> op;
       
        while(op < 1 || op > 2){
            cout << "Qual é a categoria? " <<endl;
            cout << "1. Estudante\n" << "2. Trabalhador"<<endl;
            cin >> op;
        };
        switch(op){
            case 1: categoria = 'E'; break;
            case 2: categoria = 'T'; break;
            default: cout<< "Escolha uma opção válida."<<endl;
        };
                


         
    
            /*this->Nome = nome;
            this ->morada= morada;
            this -> diaDeNascimento = dd;
            this -> mesDeNascimento = mm;
            this -> anoDeNascimento = yyyy;
            this -> sexo = sexo;
            this-> categoria = categoria;
            this -> nuit = nuit;
            this -> email = email;
    */
            cout<<"O usuario: "<< Nome << "\n Morada: " << morada << "\n Genero: " << sexo << "\n Data de Nascimento: "<< diaDeNascimento << "/" << mesDeNascimento << "/" << anoDeNascimento <<"\n Nuit: " << nuit <<"\n E-mail: " << email << "\n Categoria: " << categoria << endl;
            cout << "Foi registado com sucesso!"<<endl;

        fstream meuFicheiro;
        meuFicheiro.open("users.txt", ios::app);
        if(meuFicheiro.is_open()){
            meuFicheiro <<Nome <<"; "<< morada <<"; "<< diaDeNascimento<<"/"<<mesDeNascimento<<"/"<<anoDeNascimento<<";"<<sexo <<";"<< categoria <<";"<< nuit <<";"<<email<<";\n";
            meuFicheiro.close();
        };

    };


    void Usuario::verUsuarios(){
        fstream lerMeuFicheiro;
        std::string dataDeNascimento;
        string cabecalho, linha;
        istringstream inputStringStream;
        //LER TOKENS LINHA POR LINHA

        lerMeuFicheiro.open("users.txt", ios::in); //Ler Ficheiro em cpp
        getline(lerMeuFicheiro, cabecalho);
        cout << cabecalho <<endl;
        if(lerMeuFicheiro.is_open()){
            while(!lerMeuFicheiro.eof()){
                getline(lerMeuFicheiro, linha);
                if(lerMeuFicheiro.good()){
                    cout << "leu: " << linha <<endl;
                    //vamos usar getline e istringstream para tokenizar palavras separadas por ;
                    inputStringStream.clear();
                    inputStringStream.str(linha);
                    getline(inputStringStream, Nome, ";" );
                    getline(inputStringStream, morada, ";");
                    getline(inputStringStream, dataDeNascimento, ";");
                    getline(inputStringStream,sexo,";");
                    getline(inputStringStream, categoria, ";");
                    getline(inputStringStream, nuit, ";");
                    getline(inputStringStream, email, ";"); 
                    cout<<Nome <<" " << morada << " " << dataDeNascimento << " " << sexo <<" "<< categoria << " " << nuit << " " <<email <<endl;              
                }
            }
        }
    };
    