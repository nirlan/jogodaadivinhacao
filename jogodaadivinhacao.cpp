#include <locale.h>
#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");
    
    cout << "**************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinha��o! *"  << endl;
    cout << "**************************************" << endl;

    int numero_secreto = 42;

    int chute;
    cout << "Qual seu chute? ";
    cin >> chute;    

    cout << "O valor do seu chute �: " << chute << endl;

    if(chute == numero_secreto) {
        cout << "Parab�ns! Voc� acertou o n�mero secreto!" << endl;
    }
    else if(chute > numero_secreto) {
        cout << "Seu chute foi maior que o n�mero secreto!" << endl;
    }
    else {
        cout << "Seu chute foi menor que o n�mero secreto!" << endl;
    }

}