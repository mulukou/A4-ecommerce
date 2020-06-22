// Alunos: Rodrigo Moreira Ribeiro, 

#include <stdio.h>

int main()
{
    printf("\n\n                                                Olá, Seja Bem Vindo(a) à nossa loja!\n\n");
    int whileloop = 0;
    while(whileloop <= 0)
    {
        char operation;

        printf("=========================================================================================================================================================\n\n");
 
        printf("\n\n              Use esses comandos para se localizar: (C)ategorias (A)dicionar ao Carrinho (F)inalizar a Compra (S)air do Aplicativo\n\n");
        printf("\n\n=========================================================================================================================================================\n\n");
        printf("Insira seu comando: ");
        scanf(" %c", &operation);

        if(operation == 'C')
        {
            int funcionando = 0;
            while (funcionando <= 0)
            {
                printf("\n\n=========================================================================================================================================================\n\n");
                printf("\n\n                                                                Categorias\n\n");
                printf("\n\n              (C)adernos (Ma)terias Escolares (Li)vros (M)ochilas (E)stojos (T)intas (I)nstrumentos Musicais");
                printf("\n=========================================================================================================================================================\n\n");
                printf("Insira seu comando: ");
                scanf("%c", &operation);

                if(operation == 'C')
                {
                    printf("\n\n Você está na sessão de cadernos");
                }
            }
        }
        // Mover para dentro da página do produto
        else if(operation == 'A')
        {
            printf("\n\nTestando o botão A");
        }
        else if(operation == 'F')
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