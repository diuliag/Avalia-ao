#include <iostream>

using namespace std;

int main()
{
    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "-------------------------------" << endl;
    cout << "INFORME OS DADOS DO ULTIMO ANO" << endl;


    int compras;
    double ticket;

    cout << "Quantas compras o cliente fez no ultimo ano? ";
    cin >> compras;
    cout << "Qual o ticket medio? ";
    cin >> ticket;


    int tempoDePagamento;
    char formaDePagamento;

    cout << "Quantas vezes o cliente atrasou o pagamento? ";
    cin >> tempoDePagamento;
    cout << "A maioria das compras foi em dinheiro, cartao, ou boleto (D/C/B)? ";
    cin >> formaDePagamento;


    int score;

    if (compras == 0 ) {

        score = 0;
    }

    else if (compras == 2 && ticket <= 3000) {

        score = 20;
    }

    else if (compras > 2 && ticket <= 3000) {

        score = 40;
    }

    else if (ticket > 3000) {

        score = 60;
    }

    cout << "Score de volume de compras = " << score << " pontos";



    return 0;
}
