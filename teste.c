#include <stdio.h>


	int main ()
	{
		char nome[50];
		char endereco[100];
		int cep;
		int telefone;

			printf("Digite o seu nome completo: \n");
			gets(nome);

			printf("Digite seu endereco: \n");
			gets(endereco);

			printf("Digite o seu CEP:\n");
			scanf ("%i", &cep);

			printf("Digite o seu telefone:\n");
			scanf("%i", &telefone);

			printf("---- Seu nome: %s ----\n", nome);
			printf("---- Seu endereco: %s ----\n", endereco);
			printf("---- Seu CEP: %i ----\n", cep);
			printf("---- Seu telefone: %i ----\n", telefone);




	return 0;




	}
