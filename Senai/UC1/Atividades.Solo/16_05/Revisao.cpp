#include <iostream>
#include <string>
using namespace std;

//Exercicio 1 
int main(){
double numero;

cout << "Digite um numero: ";
cin >> numero;



if(numero > 0){
    cout << "Seu numero é positivo";
}   else if (numero < 0) {
    cout << "Seu numero é negativo";
} else {
    "numero é igual a zero";
}
    return 0;
}


//Exercicio 2
int main(){
    double nota;
    string conceito;

    cout << "Digite sua nota: ";
    cin >> nota;

if(nota >= 9){
    conceito = "A";
    } else if (nota >= 7){
        conceito = "B";
    } else if (nota >= 5){
        conceito = "C";
    } else {
        conceito = "D";
    }
    
    cout << "Conceito " << conceito << endl;
    
     return 0;
}

//Exercicio 3
int main(){
    int idade;


    cout << "Digite sua idade: ";
    cin >> idade;

    if(idade < 12){
        cout << "Criança";
    } else if (idade <= 17){
        cout << "Adolescente";
    } else if (idade <= 59){
        cout << "Adulto";
    } else if (idade >= 60){
        cout << "Idoso";
    }
    return 0;
}

