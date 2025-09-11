#include <stdio.h>

int menuprincipal(){

    int opcao;

    printf("\n-----------------\n");
    printf("\n MENU PRINCIPAL\n");
    printf("\n-----------------\n");
    printf("\n1 Pratos principais\n");
    printf("2 Bebidas\n");
    printf("3 Chamar o garçom\n");
    printf("4 Encerrar Pedido\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

   return opcao;
}
void pratosprincipais(float *totalgeral){;

    float precodapicanha= 89.0;
    float precopeixe= 40.00;
    int opcao;
    do{
            printf("\nPRATOS PRINCIPAIS\n");
            printf("1 Picanha na manteiga R$ %2.f\n", precodapicanha );
            printf("2 Peixe frito na hora R$ %2.f\n", precopeixe);
            printf("3 Voltar ao menu inicial\n");
            printf("Digite sua opção: ");
            scanf("%d", &opcao);

            switch (opcao)
            {
            case 1:
                printf(" Picanha na manteiga adicionada!");
                *totalgeral=*totalgeral +precodapicanha;
                printf("total R$ %2.f\n", *totalgeral);
                break;

            case 2:

            printf("Peixe frito adcionado!\n");

            *totalgeral= *totalgeral + precopeixe;

            printf("total R$ %2.f\n", *totalgeral);

            break;
            case 3:
            printf("Retornando ao menu inicial....\n");
             break;
            default:
            printf("Opção inválida, escolha conforme a lista abaixo\n");
                break;
            }
        } while (opcao !=3);

}

void menudebebidas(float *totalgeral){
    
        int opcao;
        float precodaagua= 12.00;
        float precodorefrigerante= 15.00;

    do{
        printf("\n-----------------\n");
        printf("  Menu de Bebidas  \n");
        printf("\n 1 Água R$ %2.f\n", precodaagua);
        printf("2 Refrigerante R$ %2.f\n", precodorefrigerante);
        printf("3 Voltar ao menu inicial\n");
            printf("Digite sua opção: ");
            scanf("%d", &opcao);

            switch (opcao)
            {
            case 1:
                printf(" Água  adicionada!");
                *totalgeral=*totalgeral + precodaagua;
                printf("total R$ %2.f\n", *totalgeral);
                break;

            case 2:

            printf("Refrigerante adcionado!\n");

            *totalgeral= *totalgeral + precodaagua;

            printf("total R$ %2.f\n", *totalgeral);

            break;
            case 3:
            printf("Retornando ao menu inicial....\n");
             break;
            default:
            printf("Opção inválida, escolha conforme a lista abaixo\n");
                break;
            }
        } while (opcao !=3);


    }

int main(){

    int opcao;
    float totalgeral = 0;
    
    

    printf("\nSeja Bem vindo(a) ao nosso Cardápio digital!\n");
    printf("\n Se precisar de assistencia não hesite em 'Chamar o Garçom'\n");

    do{
        opcao =menuprincipal();
        switch (opcao)
        {
        case 1:
            pratosprincipais(&totalgeral);
            break;
        case 2:
        menudebebidas(&totalgeral);
        break;
        case 3:
            printf("\nOK!Garçom a caminho\n");

        break;
        case 4:
            printf("\nPedido encerrado!\n");
            printf("\nValor total da conta R$ %2.f\n", totalgeral);
            printf("Obrigado e volte sempre!\n");
            break;

        default:
            printf("Opção invalida!Escolha conforme menu.");
            break;
        }
    }while(opcao !=4);

    return 0;


}