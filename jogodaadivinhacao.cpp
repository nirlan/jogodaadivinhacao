#include <locale.h>
#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");
    
    cout << "**************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinha��o! *"  << endl;
    cout << "**************************************" << endl;

    int numero_secreto = 32;

    cout << "O n�mero secreto � " << numero_secreto << ". N�o conte para ningu�m!" << endl;

}