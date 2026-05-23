
//*Gabriel Galvao, Joao Carlos, Paulo Junior, Jonatas Persico


#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string nome;
    double venda;
    int nivel;
    int opcao;

    do
    {
        system("clear");
        cout << "Escolha uma opcao abaixo: " << endl;

        cout << " 1 - Calcular bonificacao \n 2 - Sair" << endl;
        cin >> opcao;
    if (opcao == 1)
    {
        cout << "Digite seu nome: ";
        cin.ignore();
        getline(cin, nome);

        cout << "Digite seu nivel: ";
        cin >> nivel;

        cout << "Quanto que vc vendeu: ";
        cin >> venda;

        switch (nivel)
        {
        case 1:
            if (venda >= 20000 && venda < 50000)
            {
                cout << "O vendedo r" << nome << " recebeu Bonificacao 20%" << endl;
            }
            else if (venda >= 50000 && venda < 80000)
            {
                cout << "O vendedor " << nome << " recebeu Bonificacao 35%" << endl;
            }
            else if (venda >= 80000)
            {
                cout << "O vendedor " << nome << " promovido ao nivel 2" << endl;
            }
            else if (venda <= 5000)
            {
                cout << "O vendedor " << nome << " foi demitido" << endl;
            }
            break;
        case 2:
            if (venda >= 90000 && venda < 120000)
            {
                cout << "O vendedor " << nome << " recebeu Bonificacao 25%" << endl;
            }
            else if (venda >= 120000 && venda < 200000)
            {
                cout << "O vendedor " << nome << " recebeu Bonificacao 40%" << endl;
            }
            else if (venda >= 200000)
            {
                cout << "O vendedor " << nome << " promovido ao nivel 3" << endl;
            }
            else if (venda <= 50000)
            {
                cout << "O vendedor " << nome << " foi rebaixado nivel 1" << endl;
            }

            break;

        case 3:
            if (venda >= 210000 && venda < 250000)
            {
                cout << "O vendedor " << nome << " recebeu Bonificacao 30%" << endl;
            }
            else if (venda >= 250000 && venda < 500000)
            {
                cout << "O vendedor " << nome << " recebeu Bonificacao 45%" << endl ;
            }
            else if (venda >= 500000)
            {
                cout << "O vendedor " << nome << " foi promovido a dono da firma" << endl;
            }
            else if (venda <= 100000)
            {
                cout << "O vendedor " << nome << " foi rebaixado nivel 2" << endl;
            }

            break;
        }
    }
    } while (opcao != 2);
    
    return 0;
}
