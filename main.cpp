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
    return 0;
}
