#include <iostream>
#include <locale>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string senha_usuario;
    int tentativas = 0;
    const string senha_correta = "1209";
    double saldo = 2000.50; // Essa variável precisa ser atualizada
    bool acesso_concedido = false;

    while (tentativas < 3) {
        cout << "Digite a senha do caixa eletronico: ";
        cin >> senha_usuario;

        if (senha_usuario == senha_correta) {
            cout << "Acesso concedido. Bem-vindo!\n" << endl;
            acesso_concedido = true;
            break; // MUDANÇA AQUI: break em vez de return para continuar o programa
        } else {
            tentativas++;
            cout << "Senha incorreta. Tentativa " << tentativas << " de 3." << endl;
        }
    }

    if (acesso_concedido) {
        int opcao; // Tirei de dentro do loop por boa prática
        do {
            cout << "\n--- MENU ---" << endl;
            cout << "1. Ver saldo" << endl;
            cout << "2. Sacar dinheiro" << endl;    
            cout << "3. Depositar dinheiro" << endl;
            cout << "4. Sair" << endl;
            cout << "Escolha: ";
            cin >> opcao;

            switch (opcao) {
                case 1:
                    // MUDANÇA: Exibindo a variável saldo real
                    cout << "Seu saldo atual eh: R$ " << fixed << setprecision(2) << saldo << endl;
                    break;
                case 2:
                    cout << "Digite o valor a sacar: ";
                    double valor_saque;
                    cin >> valor_saque;
                    if (valor_saque <= saldo) {
                        saldo -= valor_saque; // MUDANÇA: Atualizando o saldo
                        cout << "Saque realizado!" << endl;
                    } else {
                        cout << "Saldo insuficiente!" << endl;
                    }
                    break;
                case 3:
                    cout << "Digite o valor a depositar: ";
                    double valor_deposito;
                    cin >> valor_deposito;
                    saldo += valor_deposito; // MUDANÇA: Atualizando o saldo
                    cout << "Depósito realizado com sucesso!" << endl;
                    break;
                case 4:
                    cout << "Saindo... Ate logo!" << endl;
                    return 0; 
                default:
                    cout << "Opçoo invalida!" << endl;
            }
        } while (opcao != 4); // MUDANÇA: O loop roda enquanto a opção não for 4
    } else {
        cout << "Número maximo de tentativas atingido. Acesso bloqueado." << endl;
    }

    return 0;
}
