#include <stdio.h>

float valor, saque;
float saldo = 0;
int opcao;

void deposito();
void saques();
void switches();
	
void menu(){
	printf("-- CAIXA ELETRONICO --\n");
	printf(" \n");
	printf("Qual operacao deseja realizar?\n");
	printf(" \n");
	printf("1 - Depositar\n");
	printf("2 - Sacar\n");
	printf("3 - Ver Saldo\n");
	printf("4 - Sair\n");
	printf(" \n");
    printf("-------------------\n");
	printf("Escolha uma opcao: ");
	scanf("%d", &opcao);
	printf(" \n");

    }

void switches(){
		
	switch(opcao) {
		case 1:
            deposito();
		break;
		
        case 2:
            saques();
		break;
		
        case 3:
		    printf("Seu saldo eh: R$ %2.f\n", saldo);
		    printf(" \n");
		break;
		
        case 4:
            printf("Acesso encerrado.");
        break;

        default:
		    printf("Opcao invalida.");
        break;
	
	}
}

void deposito(){

    printf("Quanto deseja depositar?: ");
		scanf("%f", &valor);
		printf(" \n");
        
        if (valor <= 0) {
            printf("Deposito invalido, tente novamente.");
        }
        else {
            saldo += valor;
		    printf("Voce depositou: R$ %2.f\n", valor);
		    printf(" \n");
        }
}

void saques(){

    printf("Quanto deseja sacar?: ");
		scanf("%f", &saque);
		printf(" \n");

        if (saque <= 0) {
            printf("Valor solicitado invalido.\n");
        }
        else if (saque > saldo) {
            printf("Saque solicitado maior que o saldo. Tente novamente.\n\n");
        }
        else {
            saldo -= saque;
		    printf("Saque realizado de: R$ %2.f\n", saque);
		    printf(" \n");
        }
}

int main(){

    do{
        menu();
        switches();
    }
    while(opcao != 4);

    return 0;
}
