#include <stdio.h>

#define TAMPILHA 10

//Pilha / Stack
int pilha[TAMPILHA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int topo = 0;

void lista_elementos(){
	int i;
	
	i = 0;
	printf("\n==========Pilha Atual============\n");
	while(i < TAMPILHA)
	{
		printf("-");
		printf("|%d|", pilha[i]);
		printf("-");
		i++;
	}
	printf("\nTopo: %d", topo);
	printf("\n\n");
}

void push(){
	int val;
	printf("Informe o valor: ");
	scanf("%d", &val);
	if(topo < TAMPILHA){
		pilha[topo] = val;
		topo = topo + 1;
		lista_elementos();
	}else{
		printf("Pilha cheia...\n");
	}
}

void pop(){
	if(topo >= 0){
		pilha[topo-1] = 0;
		topo = topo - 1;
		lista_elementos();
	}else{
		printf("Pilha vazia...\n");
	}
}

void clear()
{
	int i;
	
	i = 0;
	while(i < TAMPILHA)
	{
		pilha[i] = 0;
		i++;
	}
	topo = 0;
}


int main(){
	int opcao = 0;

	do{
		printf("Selecione a opção: \n\n");
		printf("[1] - Inserir (push):\n");
		printf("[2] - Remover (pop):\n");
		printf("[3] - Listar: \n");
		printf("[4] - Limpar a pilha: \n");
		printf("[-1] - Sair.\n");
		printf("Opção: ");
		scanf("%d", &opcao);

		switch(opcao){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				lista_elementos();
				break;
			case 4:
				clear();
				break;
			case -1:
				break;
			default:
				printf("Opção inválida.");
		}

	}while(opcao != -1);

	return 0;
}
