#include <iostream>
using namespace std;

int main(){

    int idade = 8;

    if(idade >=3 && idade <= 11) 
    {
        cout << "Voce esta na categoria: Infantil" << endl;
    }
    else if (idade >= 12 && idade <= 17)
    {
        cout << "Voce esta na categoria: Juvenil" << endl;
    }
    else if (idade >= 18 && idade <= 34)
    {
        cout << "Voce esta na categoria: Adulto" << endl;
    }
    else if (idade >= 35)
    {
        cout << "Voce esta na categoria: Master" << endl;
    }
    else
    {
        cout << "Voce nao tem idade suficiente para fazer este esporte" << endl;
    }

    return 0;
}