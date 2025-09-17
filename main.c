#include <stdio.h>

// Função que exibe o menu principal e retorna a opção escolhida pelo usuário
int menuprincipal(){
    int opcao;

    printf("\n-----------------\n");
    printf("   MENU PRINCIPAL\n");
    printf("-----------------\n");
    printf("1 - Pratos principais\n");
    printf("2 - Bebidas\n");
    printf("3 - Chamar o garçom\n");
    printf("4 - Encerrar Pedido\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    return opcao;
}

// Função para o menu de pratos principais
int pratosprincipais(float *totalgeral){
    float precodapicanha = 89.0;
    float precopeixe = 40.0;
    int opcao;

    do {
        printf("\nPRATOS PRINCIPAIS\n");
        printf("1 - Picanha na manteiga R$ %.2f\n", precodapicanha);
        printf("2 - Peixe frito na hora R$ %.2f\n", precopeixe);
        printf("3 - Voltar ao menu inicial\n");
        printf("4 - Encerrar pedido\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Picanha na manteiga adicionada!\n");
                *totalgeral += precodapicanha;
                printf("Total: R$ %.2f\n", *totalgeral);
                break;
            case 2:
                printf("Peixe frito adicionado!\n");
                *totalgeral += precopeixe;
                printf("Total: R$ %.2f\n", *totalgeral);
                break;
            case 3:
                printf("Retornando ao menu inicial...\n");
                break;
            case 4:
                return 1; // sinaliza para encerrar pedido
            default:
                printf("Opção inválida! Escolha conforme o menu.\n");
        }
    } while(opcao != 3);

    return 0; // continuar
}

// Função para o menu de bebidas
int menudebebidas(float *totalgeral){
    float precodaagua = 12.0;
    float precodorefrigerante = 15.0;
    int opcao;

    do {
        printf("\nMENU DE BEBIDAS\n");
        printf("1 - Água R$ %.2f\n", precodaagua);
        printf("2 - Refrigerante R$ %.2f\n", precodorefrigerante);
        printf("3 - Voltar ao menu inicial\n");
        printf("4 - Encerrar pedido\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Água adicionada!\n");
                *totalgeral += precodaagua;
                printf("Total: R$ %.2f\n", *totalgeral);
                break;
            case 2:
                printf("Refrigerante adicionado!\n");
                *totalgeral += precodorefrigerante;
                printf("Total: R$ %.2f\n", *totalgeral);
                break;
            case 3:
                printf("Retornando ao menu inicial...\n");
                break;
            case 4:
                return 1; // sinaliza para encerrar pedido
            default:
                printf("Opção inválida! Escolha conforme o menu.\n");
        }
    } while(opcao != 3);

    return 0; // continuar
}

// Função principal
int main(){
    int opcao;
    float totalgeral = 0.0;
    float desconto = 10.0;
    float totalcomdesconto = 0.0;

    printf("\nSeja bem-vindo(a) ao nosso Cardápio Digital!\n");
    printf("Se precisar de assistência, não hesite em 'Chamar o Garçom'.\n");

    do {
        opcao = menuprincipal();
        int encerrar = 0;

        switch(opcao){
            case 1:
                encerrar = pratosprincipais(&totalgeral);
                break;
            case 2:
                encerrar = menudebebidas(&totalgeral);
                break;
            case 3:
                printf("OK! Garçom a caminho...\n");
                break;
            case 4:
                encerrar = 1;
                break;
            default:
                printf("Opção inválida! Escolha conforme o menu.\n");
        }

        if(encerrar){
            opcao = 4; // força encerramento do pedido
        }

    } while(opcao != 4);

    // Encerramento do pedido
    printf("\nPedido encerrado!\n");
    printf("Valor total da conta: R$ %.2f\n", totalgeral);

    if(totalgeral > 100.0){
        totalcomdesconto = totalgeral - (totalgeral * desconto / 100);
        printf("Você recebeu 10%% de desconto por gastar acima de R$100!\n");
        printf("Valor total com desconto: R$ %.2f\n", totalcomdesconto);
    } 

    printf("Obrigado e volte sempre!\n");

    return 0;
}
