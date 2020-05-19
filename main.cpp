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

    cout << "Score de volume de compras = " << score << " pontos" << endl;


    int scoreP, scoreI;

    if (tempoDePagamento > 1 || compras == 0) {

        scoreI = 0;
    }

    else if (tempoDePagamento == 1 && compras >=1) {

        scoreI = 15;
    }

    else if (tempoDePagamento == 0 && compras >=1) {

        scoreI = 30;
    }


    if (compras >=1 && formaDePagamento == 'D') {

        scoreP = 5;
    }

    else if (compras >=1 && formaDePagamento == 'C' || formaDePagamento == 'B') {

        scoreP = 10;
    }

    cout << "Score de inadimplencia = " << scoreI << " pontos" << endl;
    cout << "Score de pagamento = " << scoreP << " pontos" << endl;
    return 0;
}
