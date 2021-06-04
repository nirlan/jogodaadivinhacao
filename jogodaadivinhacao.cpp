#include <locale.h>
#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");
    
    cout << "**************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhação! *"  << endl;
    cout << "**************************************" << endl;

    int numero_secreto = 32;

    cout << "O número secreto é " << numero_secreto << ". Não conte para ninguém!" << endl;

}