#include <iostream>
using namespace std;

int main()
{

    system ("cls");
   
    cout << "Iniciando o programa do gui \n";
   
    string nome = "";
    string resposta = "nao";
    
    cout << "Voce gostaria de informar o seu nome ?  sim/nao ";
    cin >> resposta;
   
    if(resposta == "sim")
    {
       cout << "Qual e o seu nome?";
       cin >> nome;
       cout << "Bem vindo, " << nome;
    }

    cout << "Fim do programa!!" << endl;
    
    
    return 0;
}