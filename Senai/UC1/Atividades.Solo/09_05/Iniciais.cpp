#include <iostream>
using namespace std;
// Contagem simples
int main(){
    for(int i=1; i <=20; i++){
        cout << i << endl;
    }

    return 0;
}

//Contagem regressiva

int main(){
    for(int i=10; i >= 1; i--){
        cout << i <<endl;

    }
    return 0;
}

//Tabuada
int main(){
    double numero;
    
    cout << "Digite um numero para fazer a tabuada: ";
    cin >> numero;

    for (double i = 1 ; i  <= 10; i++)
    {
      cout << numero << "x" << i << " = " << numero * i << endl;
    }
    
    return 0;
}
//Repetiçao de menssagens
int main(){
    double numero;

    cout << "Digite a quantidade de vezes para repetir a frase: Estou aprendendo C++!: ";
    cin >> numero;

    for(double i = 0; i <= numero; i++){
     cout << "Estou aprendendo C++!" << endl;
    }

    return 0;
}
