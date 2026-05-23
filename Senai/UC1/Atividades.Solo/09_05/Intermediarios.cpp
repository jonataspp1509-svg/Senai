#include <iostream>
using namespace std;
// Soma de 1 a N
int main(){
    double numero , soma = 0;
    cout << "Digite um numero: ";
    cin >> numero;

    for(double i = 0; i <= numero ; i++){
      soma += i;
    }
    cout <<" a soma é:  "<< soma << endl;
    return 0;
}
//Validaçao de entrada
int main(){
    int idade = 0;
    cout << "Digite uma idade: ";
    cin >> idade;

    while (idade < 0)
    {
        cout << "A idade esta negativa" << endl;
        cout << "Digite novamente: ";
        cin >> idade;
    }
    return 0;
}
//Inverter numero
int main(){
    int num, invertido = 0;

    cout << "Digite um numero: ";
    cin >> num;

    while (num > 0)
    {
        int digito = num % 10;
        invertido = invertido * 10 + digito;

        num = num / 10;
        }
        cout << "Seu numero invertido é: " << invertido << endl;
    


    return 0;
}

