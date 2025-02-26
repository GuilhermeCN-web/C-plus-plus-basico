#include <iostream>

using namespace std;

int main(){

    int inteiros=0;
    char letra='A';
    double decimal=2.5;
    float decimal=2.4444444444;
    bool booleano=true;
    string nome="Guilherme";

    cout << "Digite o número de inteiros";
    cin >> inteiros;
    cout << "Digite uma letra";
    cin >> letra;
    cout << "Dinheiro: ";

    inteiros=100;

    cout << "\ninteiros:" << inteiros << "\nletra:" << letra << "\ndecimal:" << decimal << "\nbooleano:" << booleano << "\nnome:" << nome;


    return 0;
}