#include <stdio.h>

int main() {
    // Declaracao das variaveis do sistema
    int opcao;
    float saldo = 1000.0; // Saldo inicial para testes
    float valor;

    // Introducao amigavel do programa
    printf("=== SISTEMA BANCARIO ===\n");
    printf("Este programa serve para ajudar a cuidar do seu dinheiro.\n");
    printf("Ola! Seja bem-vindo ao nosso sistema.\n\n");

    // Laco de repeticao para manter o menu ativo
    do {
        printf("--- MENU DE OPCOES ---\n");
        printf("1. Consultar Saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        
        // Leitura da escolha do usuario com tratamento de espaco para o Enter
        scanf(" %d", &opcao);
        printf("\n");

        // Tratamento da escolha utilizando a estrutura switch
        switch (opcao) {
            case 1:
                // Consultar Saldo
                printf("Seu saldo e: R$ %.2f\n\n", saldo);
                break;

            case 2:
                // Depositar
                printf("Digite o valor do deposito: R$ ");
                scanf(" %f", &valor);

                if (valor > 0) {
                    saldo = saldo + valor;
                    printf("Deposito feito com sucesso!\n\n");
                } else {
                    printf("Valor invalido!\n\n");
                }
                break;

            case 3:
                // Sacar
                printf("Digite o valor do saque: R$ ");
                scanf(" %f", &valor);

                if (valor > saldo) {
                    printf("Voce nao tem saldo suficiente!\n\n");
                } else if (valor <= 0) {
                    printf("Valor invalido!\n\n");
                } else {
                    saldo = saldo - valor;
                    printf("Saque feito com sucesso!\n\n");
                }
                break;

            case 4:
                // Sair do sistema
                printf("Saindo do sistema...\n");
                break;

            default:
                // Rede de protecao para qualquer entrada fora de 1 a 4
                printf("Opcao invalida! Tente de novo.\n\n");
                break;
        }

    } while (opcao != 4); // Repete enquanto a opcao nao for a de saida (4)

    // Mensagem final de encerramento do sistema
    printf("Obrigado por usar nosso sistema! Ate logo.\n");

    return 0;
}
