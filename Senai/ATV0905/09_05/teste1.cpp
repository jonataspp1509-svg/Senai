#include <iostream>

using namespace std; 

int main(){
    int senha = 0;
    cout << "Digite a senha: ";
    cin >> senha;

    while (senha != 145)
    {
        cout << "Senha negativa tente novamente";
        cin >> senha;
        
    }
    
    //do...while
    //Opçoes - Fazer algo e sair
    int opcao;
    do{

        cout << "1 - Pesquisar produto, 2 - Sair";
        cin >> opcao;

    }while(opcao != 2);




    return 0;

}