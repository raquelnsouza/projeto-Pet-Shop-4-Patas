#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void NovoCadastro();



int main()

{
    setlocale(LC_ALL, " ");

    int opcao;

    printf("--- CADASTRO DE CLIENTES PETSHOP 4 PATAS ---\n");
    printf ("Digite [1] para   CADASTRAR NOVO CLIENTE\n");
    printf ("Digite [2] para ACESSAR CADASTRO DE CLIENTE\n");
    scanf  ("%i", &opcao);

        switch (opcao) {

        case 1:


            NovoCadastro();

        break;

        case 2:



        break;

        default:
			printf ("Invalido");

        }


    return 0;
}


void NovoCadastro(){

    setlocale(LC_ALL, " ");

    char nome, endereco, genero;
    int contato, idade, cpf;

    printf("Digite o nome completo do cliente:\n");
    gets(nome);
    setbuf(stdin, NULL);

    printf("Digite o endereço do cliente:\n");
    gets(endereco);
    setbuf(stdin, NULL);

    printf("Digite o gênero do cliente: Masculino, Feminino, Neutro, Outro\n");
    gets(genero);
    setbuf(stdin, NULL);

    printf("Digite a idade do cliente:\n");
    scanf ("%i", &idade);
    setbuf(stdin, NULL);

    printf("Digite o CPF do cliente:");
    scanf("%i", &cpf);
    setbuf(stdin, NULL);

    printf("Digite o telefone do cliente:");
    scanf("%i", &contato);
    setbuf(stdin, NULL);



    printf("CADASTRO EFETUADO COM SUCESSO:\n");

    printf("Nome do cliente: %s\n", nome);
    printf("Idade do cliente %i\n", idade);
    printf("CPF do cliente:%i\n", cpf);
    printf("Telefone do cliente: %i\n", contato);
    printf("Endereço do cliente: %s\n", endereco);
    printf("Gênero do cliente:%s\n", genero);


    return 0;


}
