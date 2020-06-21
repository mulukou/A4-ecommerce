// Alunos: Rodrigo Moreira Ribeiro, 

#include <stdio.h>

int main()
{
    int whileloop = 0;
    while(whileloop <= 0)
    {
        char operation;

        printf("=========================================================================================================================================================\n\n");
        printf("\n\n                                                Olá, Seja Bem Vindo(a) à nossa loja!\n\n");
        printf("\n\n              Use esses comandos para se localizar: (C)ategorias (A)dicionar ao Carrinho (F)inalizar a Compra (S)air do Aplicativo");
        printf("\n=========================================================================================================================================================\n\n");
        printf("Insira seu comando: ");
        scanf("%c", &operation);

        if(operation == 'C')
        {

        }
        else if (operation == 'A')
        {

        }
        else if (operation == 'F')
        {

        }
        else if(operation == 'S')
        {
            printf("\n\nObrigado(a) por usar a nossa loja!");
            ++whileloop;
        }
        else
        {
            printf("\n\nDesculpa, não entendi o seu comando, por favor usar letras maiúsculas.\n\n");
        }
        
    }
    

    return 0;
}