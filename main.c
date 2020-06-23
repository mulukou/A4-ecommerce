// Alunos: Rodrigo Moreira Ribeiro.  20201102508
//         David Ferreira de Oliveira Beja e Costa.  20201102930
//         Gabriel dos Santos Ribeiro.  20201102658
//         Mateus Batalha Silva de Souza.  20201103993
//         João Carlos de Souza Pimentel.  20201102185

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
//--------------------------------------------------------------------------Area de Declarações-------------------------------------------------------------------

	setlocale (LC_ALL,"Portuguese");
	char operation, Carrinho[2000]={NULL}, Quant_produtos_char[3]={NULL}, Multiplicacao_produto_char[6]={NULL};
	int whileloop = 0, valornocarrinho = 0, Quant_produtos = 0, Multiplicacao_produto;

    int PC_dell = 2499, Not_acer = 2899, Kindle = 499, All_in_one = 3699, Galaxy = 1499, Ipad = 3900;               //valores da categoria 1  
    char PC_dell_char[5], Not_acer_char[5], Kindle_char[5], All_in_one_char[5], Galaxy_char[5], Ipad_char[5];

    int Mouse_Logi = 45, Tecl_Logi = 55, Can_Stylus = 20, Fone_JBL = 55, Proj = 485;                                //valores da categoria 2
    char Mouse_Logi_char[3], Tecl_Logi_char[3], Can_Stylus_char[3], Fone_JBL_char[3], Proj_char[3]; 

    int lapis = 50, caneta = 21, borracha = 8;                                                                      //valores da categoria 3
    char lapis_char[3], caneta_char[3], borracha_char[2];

    int ling_c = 156, ling_java = 166, ling_python =66;                                                             //valores da categoria 4
    char ling_c_char[4], ling_java_char[4], ling_python_char[3];
//--------------------------------------------------------------------------Menu Inicial--------------------------------------------------------------------------

	inicio:
    printf("\n                                          Olá, Seja Bem Vindo(a) à nossa loja!\n\n");
    
    while(whileloop <= 0)
    {
        printf("========================================================================================================================\n");
        printf("\n\n              Use esses comandos para se localizar: (C)ategorias ");
        printf("\n\n                                                    (V)er Carrinho ");
        printf("\n\n                                                    (S)air do Aplicativo \n\n\n\n"); 
        printf("========================================================================================================================\n");
        printf("Insira seu comando: ");
        scanf(" %s", &operation);
        setbuf(stdin,NULL);
		system ("cls");
        
//--------------------------------------------------------------------------Categorias--------------------------------------------------------------------------
        if(operation == 'C')
        {
            iniciocategoria: 
            printf("\n\n                                                        Categorias"); 
            printf("\n\n========================================================================================================================\n\n");
            printf("\n\n                      (C)omputadores e Tablets (P)eriféricos (M)aterias Escolares (L)ivros  (V)oltar\n\n");
            printf("\n========================================================================================================================\n\n");
                
            printf("Insira seu comando: ");
            scanf(" %s", &operation);
            setbuf(stdin,NULL);
            system ("cls");

            // Cria a seção de Computadores e Tablets
            if(operation == 'C')
            {   computadores_e_Tablets:

                printf("\n\n                                Você está na sessão de Computadores e Tablets");
                    
                printf("\n\n========================================================================================================================\n");
                printf("\n\n                   (C)omputador (N)otebook (K)indle (A)ll-in-One (S)amsung Galaxy Tab (I)pad Pro\n");
                printf("                                               Ve(R) Carrinho (V)oltar\n\n");
                printf("========================================================================================================================\n\n");
                        
                printf("Insira seu comando: ");
                scanf(" %s", &operation);
                setbuf(stdin,NULL);
                
                if(operation == 'C')
                {
                    printf("Nome do Produto: Computador Dell \n");
                    printf("Descrição do Produto: Computador para afazeres domésticos e profissionais \n");
                    printf("Valor do produto: 2499 \n");
                    printf("(A)dicionar ao carrinho (V)oltar \n\n");
                    printf("Insira seu comando: ");

                    scanf(" %s", &operation);
                    setbuf(stdin,NULL);
                    
                    if (operation == 'A')
                    {
                        operation = NULL;
                        Quant_produtos = 0;
                        
                        printf("Informe a quantidade de produtos que deseja adiquirir: ");
                        scanf("%d", &Quant_produtos);
                        setbuf(stdin,NULL);  

                        Multiplicacao_produto = PC_dell * Quant_produtos;
                        valornocarrinho = valornocarrinho + Multiplicacao_produto;

                        printf("Produto adicionado com sucesso ao carrinho!");
                        
                        strcat (Carrinho, "Computador Dell | Quantidade: ");
                        sprintf (Quant_produtos_char,"%d",Quant_produtos); 
                        strcat (Carrinho, Quant_produtos_char);
                        strcat (Carrinho, " | Valor Unitario: ");
                        sprintf (PC_dell_char,"%d",PC_dell);
                        strcat (Carrinho, PC_dell_char);
                        strcat (Carrinho, " | Valor Total desta Compra: ");
                        sprintf (Multiplicacao_produto_char,"%d",Multiplicacao_produto);
                        strcat (Carrinho, Multiplicacao_produto_char);
                        strcat (Carrinho, "\n\n");

                        goto computadores_e_Tablets;
                    }
                    if (operation == 'V')
                    {
                        goto computadores_e_Tablets; 
                    }
                    else
                    {
                        printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                        goto computadores_e_Tablets;
                    }
            
                }

                if(operation == 'N') 
                {
                    printf("Nome do Produto: Notebook Acer\n");
                    printf("Descrição do Produto: Notebook com excelente vida de bateria\n");
                    printf("Valor do produto: 2899\n");
                    printf("(A)dicionar ao Carrinho (V)oltar\n\n");
                    printf("Insira seu comando: ");
                    scanf(" %s", &operation);
                    setbuf(stdin,NULL);
                    if (operation == 'A')
                    {   
                        operation = NULL;
                        Quant_produtos = 0;
                        
                        printf("Informe a quantidade de produtos que deseja adiquirir: ");
                        scanf("%d", &Quant_produtos);
                        setbuf(stdin,NULL);
                        
                        Multiplicacao_produto = Not_acer * Quant_produtos;
                        valornocarrinho = valornocarrinho + Multiplicacao_produto;

                        printf("Produto adicionado com sucesso ao carrinho!");
                        
                        strcat (Carrinho, " Notebook Acer | Quantidade: ");
                        sprintf (Quant_produtos_char,"%d",Quant_produtos); 
                        strcat (Carrinho, Quant_produtos_char);
                        strcat (Carrinho, " | Valor Unitario: ");
                        sprintf (Not_acer_char,"%d",Not_acer);
                        strcat (Carrinho, Not_acer_char);
                        strcat (Carrinho, " | Valor Total desta Compra: ");
                        sprintf (Multiplicacao_produto_char,"%d",Multiplicacao_produto);
                        strcat (Carrinho, Multiplicacao_produto_char);
                        strcat (Carrinho, "\n\n");

                        goto computadores_e_Tablets;
                    }
                    if (operation == 'V')
                    {
                        goto computadores_e_Tablets; 
                    }
                    else
                    {
                        printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                        goto computadores_e_Tablets;
                    }
                }
                
                if(operation == 'K') 
                {
                    printf("Nome do Produto: Tablet Kindle\n");
                    printf("Descrição do Produto: Tablet especializado em leitura de livros.\n");
                    printf("Valor do produto: 499\n");
                    printf("(A)dicionar ao Carrinho (V)oltar\n\n");
                    printf("Insira seu comando: ");
                    scanf(" %s", &operation);
                    setbuf(stdin,NULL);
                    if (operation == 'A')
                    {   
                        operation = NULL;
                        Quant_produtos = 0;
                        
                        printf("Informe a quantidade de produtos que deseja adiquirir: ");
                        scanf("%d", &Quant_produtos);
                        setbuf(stdin,NULL);
                        
                        Multiplicacao_produto = Kindle * Quant_produtos;
                        valornocarrinho = valornocarrinho + Multiplicacao_produto;

                        printf("Produto adicionado com sucesso ao carrinho!");
                        
                        strcat (Carrinho, " Tablet Kindle | Quantidade: ");
                        sprintf (Quant_produtos_char,"%d",Quant_produtos); 
                        strcat (Carrinho, Quant_produtos_char);
                        strcat (Carrinho, " | Valor Unitario: ");
                        sprintf (Kindle_char,"%d",Kindle);
                        strcat (Carrinho, Kindle_char);
                        strcat (Carrinho, " | Valor Total desta Compra: ");
                        sprintf (Multiplicacao_produto_char,"%d",Multiplicacao_produto);
                        strcat (Carrinho, Multiplicacao_produto_char);
                        strcat (Carrinho, "\n\n");

                        goto computadores_e_Tablets;
                    
                    }
                    if (operation == 'V')
                    {
                        goto computadores_e_Tablets;
                    }
                    else
                    {
                        printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                        goto computadores_e_Tablets;
                    }
                }
                if(operation == 'A') 
                {
                    printf("Nome do Produto: All in One Lenovo Ideacentre\n");
                    printf("Descrição do Produto: Computador imbutido em um monitor, acompanha mouse e teclado\n");
                    printf("Valor do produto: 3699\n");
                    printf("(A)dicionar ao Carrinho (V)oltar\n\n");
                    printf("Insira seu comando: ");
                    scanf(" %s", &operation);
                    setbuf(stdin,NULL);
                    if (operation == 'A')
                    {   
                        operation = NULL;
                        Quant_produtos = 0;
                        
                        printf("Informe a quantidade de produtos que deseja adiquirir: ");
                        scanf("%d", &Quant_produtos);
                        setbuf(stdin,NULL);
                        
                        Multiplicacao_produto = All_in_one * Quant_produtos;
                        valornocarrinho = valornocarrinho + Multiplicacao_produto;

                        printf("Produto adicionado com sucesso ao carrinho!");
                        
                        strcat (Carrinho, " All in One Lenovo | Quantidade: ");
                        sprintf (Quant_produtos_char,"%d",Quant_produtos); 
                        strcat (Carrinho, Quant_produtos_char);
                        strcat (Carrinho, " | Valor Unitario: ");
                        sprintf (All_in_one_char,"%d",All_in_one);
                        strcat (Carrinho, All_in_one_char);
                        strcat (Carrinho, " | Valor Total desta Compra: ");
                        sprintf (Multiplicacao_produto_char,"%d",Multiplicacao_produto);
                        strcat (Carrinho, Multiplicacao_produto_char);
                        strcat (Carrinho, "\n\n");

                        goto computadores_e_Tablets;
                    
                    }
                    if (operation == 'V')
                    {
                        goto computadores_e_Tablets; 
                    }
                    else
                    {
                        printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                        goto computadores_e_Tablets;
                    }
                }
                if(operation == 'S') 
                {
                    printf("Nome do Produto: Samsung Galaxy Tab\n");
                    printf("Descrição do Produto: Tablet Samsung ótimo para visualização de documentos e trabalhos artísticos\n");
                    printf("Valor do produto: 1499\n");
                    printf("(A)dicionar ao Carrinho (V)oltar\n\n");
                    printf("Insira seu comando: ");
                    scanf(" %s", &operation);
                    setbuf(stdin,NULL);
                    if (operation == 'A')
                    {   
                        operation = NULL;
                        Quant_produtos = 0;
                        
                        printf("Informe a quantidade de produtos que deseja adiquirir: ");
                        scanf("%d", &Quant_produtos);
                        setbuf(stdin,NULL);
                        
                        Multiplicacao_produto = Galaxy * Quant_produtos;
                        valornocarrinho = valornocarrinho + Multiplicacao_produto;

                        printf("Produto adicionado com sucesso ao carrinho!");
                        
                        strcat (Carrinho, " Samsung Galaxy Tab | Quantidade: ");
                        sprintf (Quant_produtos_char,"%d",Quant_produtos); 
                        strcat (Carrinho, Quant_produtos_char);
                        strcat (Carrinho, " | Valor Unitario: ");
                        sprintf (Galaxy_char,"%d",Galaxy);
                        strcat (Carrinho, Galaxy_char);
                        strcat (Carrinho, " | Valor Total desta Compra: ");
                        sprintf (Multiplicacao_produto_char,"%d",Multiplicacao_produto);
                        strcat (Carrinho, Multiplicacao_produto_char);
                        strcat (Carrinho, "\n\n");

                        goto computadores_e_Tablets;
                    
                    }
                    if (operation == 'V')
                    {
                        goto computadores_e_Tablets;   
                    }
                    else
                    {
                        printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                        goto computadores_e_Tablets;
                    }
                }
                if(operation == 'I') 
                {
                    printf("Nome do Produto: IPad Pro\n");
                    printf("Descrição do Produto: Tablet perfeito para trabalhos artísticos\n");
                    printf("Valor do produto: 3900\n");
                    printf("(A)dicionar ao Carrinho (V)oltar\n\n");
                    printf("Insira seu comando: ");
                    scanf(" %s", &operation);
                    setbuf(stdin,NULL);
                    if (operation == 'A')
                    {   
                        operation = NULL;
                        Quant_produtos = 0;
                        
                        printf("Informe a quantidade de produtos que deseja adiquirir: ");
                        scanf("%d", &Quant_produtos);
                        setbuf(stdin,NULL);
                        
                        Multiplicacao_produto = Ipad * Quant_produtos;
                        valornocarrinho = valornocarrinho + Multiplicacao_produto;

                        printf("Produto adicionado com sucesso ao carrinho!");
                        
                        strcat (Carrinho, " IPad Pro | Quantidade: ");
                        sprintf (Quant_produtos_char,"%d",Quant_produtos); 
                        strcat (Carrinho, Quant_produtos_char);
                        strcat (Carrinho, " | Valor Unitario: ");
                        sprintf (Ipad_char,"%d",Ipad);
                        strcat (Carrinho, Ipad_char);
                        strcat (Carrinho, " | Valor Total desta Compra: ");
                        sprintf (Multiplicacao_produto_char,"%d",Multiplicacao_produto);
                        strcat (Carrinho, Multiplicacao_produto_char);
                        strcat (Carrinho, "\n\n");

                        goto computadores_e_Tablets;
                    
                    }
                    if (operation == 'V')
                    {
                        goto computadores_e_Tablets; 
                    }
                    else
                    {
                        printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                        goto computadores_e_Tablets;
                    }
                }
                if(operation == 'R') 
                {
                    goto vercarrinho;
                    //Ver carrinho
                }
                if(operation == 'V')
                {
                    goto iniciocategoria;
                }
                else
                {
                    printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                    goto computadores_e_Tablets;
                }
                        
            }
            // Cria a seção de Periféricos
            if(operation == 'P')
            {
                perifericos:
                // Periféricos como Mouse, Teclado, Caneta Digitalizadora, etc.
                printf("\n\nVocê está na sessão de Periféricos");
                printf("\n\n========================================================================================================================\n\n");
                printf("\n\n                                  (M)ouse (T)eclado (C)aneta Stylus (F)one\n");
                printf("                                               Ve(R) Carrinho (V)oltar\n\n");
                printf("\n\n========================================================================================================================\n\n");
                printf("Insira seu comando: ");
                scanf(" %s", &operation);
                setbuf(stdin,NULL);
                if(operation == 'M')
                {
                    printf("Nome do Produto: Mouse Logitech Wireless \n");
                    printf("Descrição do Produto: Mouse sem fio com baixa latência \n");
                    printf("Valor do produto: 45 \n");
                    printf("(A)dicionar ao carrinho (V)oltar \n\n");
                    printf("Insira seu comando: ");

                    scanf(" %s", &operation);
                    setbuf(stdin,NULL);
                    
                    if (operation == 'A')
                    {   
                        operation = NULL;
                        Quant_produtos = 0;
                        
                        printf("Informe a quantidade de produtos que deseja adiquirir: ");
                        scanf("%d", &Quant_produtos);
                        setbuf(stdin,NULL);
                        
                        Multiplicacao_produto = Mouse_Logi * Quant_produtos;
                        valornocarrinho = valornocarrinho + Multiplicacao_produto;

                        printf("Produto adicionado com sucesso ao carrinho!");
                        
                        strcat (Carrinho, " Mouse Logitech Wireless | Quantidade: ");
                        sprintf (Quant_produtos_char,"%d",Quant_produtos); 
                        strcat (Carrinho, Quant_produtos_char);
                        strcat (Carrinho, " | Valor Unitario: ");
                        sprintf (Mouse_Logi_char,"%d",Mouse_Logi);
                        strcat (Carrinho, Mouse_Logi_char);
                        strcat (Carrinho, " | Valor Total desta Compra: ");
                        sprintf (Multiplicacao_produto_char,"%d",Multiplicacao_produto);
                        strcat (Carrinho, Multiplicacao_produto_char);
                        strcat (Carrinho, "\n\n");

                        printf("Produto adicionado com sucesso ao carrinho!");

                        goto perifericos;
                    }
                    if (operation == 'V')
                    {
                        goto perifericos; 
                    }
                }
                if(operation == 'T')
                {
                    printf("Nome do Produto: Teclado Logitech \n");
                    printf("Descrição do Produto: Teclado Logitech extremamente durável \n");
                    printf("Valor do produto: 55 \n");
                    printf("(A)dicionar ao carrinho (V)oltar \n\n");
                    printf("Insira seu comando: ");

                    scanf(" %s", &operation);
                    setbuf(stdin,NULL);
                    
                    if (operation == 'A')
                    {   
                        operation = NULL;
                        Quant_produtos = 0;
                        
                        printf("Informe a quantidade de produtos que deseja adiquirir: ");
                        scanf("%d", &Quant_produtos);
                        setbuf(stdin,NULL);
                        
                        Multiplicacao_produto = Tecl_Logi * Quant_produtos;
                        valornocarrinho = valornocarrinho + Multiplicacao_produto;

                        printf("Produto adicionado com sucesso ao carrinho!");
                        
                        strcat (Carrinho, " Teclado Logitech | Quantidade: ");
                        sprintf (Quant_produtos_char,"%d",Quant_produtos); 
                        strcat (Carrinho, Quant_produtos_char);
                        strcat (Carrinho, " | Valor Unitario: ");
                        sprintf (Tecl_Logi_char,"%d",Tecl_Logi);
                        strcat (Carrinho, Tecl_Logi_char);
                        strcat (Carrinho, " | Valor Total desta Compra: ");
                        sprintf (Multiplicacao_produto_char,"%d",Multiplicacao_produto);
                        strcat (Carrinho, Multiplicacao_produto_char);
                        strcat (Carrinho, "\n\n");

                        printf("Produto adicionado com sucesso ao carrinho!");

                        goto perifericos;
                    }
                    if (operation == 'V')
                    {
                        goto perifericos; 
                    }
                    else
                    {
                        printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                        goto perifericos;
                    }
                }
                if(operation == 'C')
                {
                    printf("Nome do Produto: Caneta Stylus \n");
                    printf("Descrição do Produto: Caneta excelente para ser usada em aparelhos touch \n");
                    printf("Valor do produto: 20 \n");
                    printf("(A)dicionar ao carrinho (V)oltar \n\n");
                    printf("Insira seu comando: ");

                    scanf(" %s", &operation);
                    setbuf(stdin,NULL);
                    
                    if (operation == 'A')
                    {   
                        operation = NULL;
                        Quant_produtos = 0;
                        
                        printf("Informe a quantidade de produtos que deseja adiquirir: ");
                        scanf("%d", &Quant_produtos);
                        setbuf(stdin,NULL);
                        
                        Multiplicacao_produto = Can_Stylus * Quant_produtos;
                        valornocarrinho = valornocarrinho + Multiplicacao_produto;

                        printf("Produto adicionado com sucesso ao carrinho!");
                        
                        strcat (Carrinho, " Caneta Stylus | Quantidade: ");
                        sprintf (Quant_produtos_char,"%d",Quant_produtos); 
                        strcat (Carrinho, Quant_produtos_char);
                        strcat (Carrinho, " | Valor Unitario: ");
                        sprintf (Can_Stylus_char,"%d",Can_Stylus);
                        strcat (Carrinho, Can_Stylus_char);
                        strcat (Carrinho, " | Valor Total desta Compra: ");
                        sprintf (Multiplicacao_produto_char,"%d",Multiplicacao_produto);
                        strcat (Carrinho, Multiplicacao_produto_char);
                        strcat (Carrinho, "\n\n");

                        printf("Produto adicionado com sucesso ao carrinho!");

                        goto perifericos;
                    }
                    if (operation == 'V')
                    {
                        goto perifericos; 
                    }
                    else
                    {
                        printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                        goto perifericos;
                    }
                }
                if(operation == 'F')
                {
                    printf("Nome do Produto: Fone de Ouvido JBL \n");
                    printf("Descrição do Produto: Fone de ouvido Intra Auricular de altíssima qualidade \n");
                    printf("Valor do produto: 55 \n");
                    printf("(A)dicionar ao carrinho (V)oltar \n\n");
                    printf("Insira seu comando: ");

                    scanf(" %s", &operation);
                    setbuf(stdin,NULL);
                    
                    if (operation == 'A')
                    {   
                        operation = NULL;
                        Quant_produtos = 0;
                        
                        printf("Informe a quantidade de produtos que deseja adiquirir: ");
                        scanf("%d", &Quant_produtos);
                        setbuf(stdin,NULL);
                        
                        Multiplicacao_produto = Fone_JBL * Quant_produtos;
                        valornocarrinho = valornocarrinho + Multiplicacao_produto;

                        printf("Produto adicionado com sucesso ao carrinho!");
                        
                        strcat (Carrinho, " Fone de Ouvido JBL | Quantidade: ");
                        sprintf (Quant_produtos_char,"%d",Quant_produtos); 
                        strcat (Carrinho, Quant_produtos_char);
                        strcat (Carrinho, " | Valor Unitario: ");
                        sprintf (Fone_JBL_char,"%d",Fone_JBL);
                        strcat (Carrinho, Fone_JBL_char);
                        strcat (Carrinho, " | Valor Total desta Compra: ");
                        sprintf (Multiplicacao_produto_char,"%d",Multiplicacao_produto);
                        strcat (Carrinho, Multiplicacao_produto_char);
                        strcat (Carrinho, "\n\n");

                        printf("Produto adicionado com sucesso ao carrinho!");

                        goto perifericos;
                    }
                    if (operation == 'V')
                    {
                        goto perifericos; 
                    }
                    else
                    {
                        printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                        goto perifericos;
                    }
                }
                if(operation == 'P')
                {
                    printf("Nome do Produto: Projetor Uc68 \n");
                    printf("Descrição do Produto: Projetor com capacidades HDMI e Wi-Fi \n");
                    printf("Valor do produto: 485 \n");
                    printf("(A)dicionar ao carrinho (V)oltar \n\n");
                    printf("Insira seu comando: ");

                    scanf(" %s", &operation);
                    setbuf(stdin,NULL);
                    
                    if (operation == 'A')
                    {   
                        operation = NULL;
                        Quant_produtos = 0;
                        
                        printf("Informe a quantidade de produtos que deseja adiquirir: ");
                        scanf("%d", &Quant_produtos);
                        setbuf(stdin,NULL);
                        
                        Multiplicacao_produto = Proj * Quant_produtos;
                        valornocarrinho = valornocarrinho + Multiplicacao_produto;

                        printf("Produto adicionado com sucesso ao carrinho!");

                        strcat (Carrinho, " Projetor Uc68 | Quantidade: ");
                        sprintf (Quant_produtos_char,"%d",Quant_produtos); 
                        strcat (Carrinho, Quant_produtos_char);
                        strcat (Carrinho, " | Valor Unitario: ");
                        sprintf (Proj_char,"%d",Proj);
                        strcat (Carrinho, Proj_char);
                        strcat (Carrinho, " | Valor Total desta Compra: ");
                        sprintf (Multiplicacao_produto_char,"%d",Multiplicacao_produto);
                        strcat (Carrinho, Multiplicacao_produto_char);
                        strcat (Carrinho, "\n\n");

                        printf("Produto adicionado com sucesso ao carrinho!");

                        goto perifericos;
                    }
                    if (operation == 'V')
                    {
                        goto perifericos; 
                    }
                    else
                    {
                        printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                        goto perifericos;
                    }
                }
                if(operation == 'R') 
                {
                    goto vercarrinho;
                    //Ver carrinho
                }
                if(operation == 'V')
                {
                    goto iniciocategoria;
                }
                else
                {
                    printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                    goto perifericos;
                }
            }
            // Cria a seção de Materiais Escolares
            if(operation == 'M')
            {
                materiais:
                // Básicos
                printf("\n\nVocê está na sessão de Materiais Escolares");
                printf("\n\n========================================================================================================================\n\n");
                printf("\n\n                                            (L)ápis (C)aneta (B)orracha");
                printf("\n\n                                             Ve(R) Carrinho (V)oltar\n\n");
                printf("\n\n========================================================================================================================\n\n");

                printf("Insira seu comando: ");
                scanf(" %s", &operation);
                setbuf(stdin,NULL);
                // Produtos
                if(operation == 'L')
                {
                    printf("Nome do Produto: Lápis Grafite Estojo c/12\n");
                    printf("Descrição do Produto: Estojo de lápis grafit contendo 12 unidades\n");
                    printf("Valor do produto: 50 \n");
                    printf("(A)dicionar ao carrinho (V)oltar \n\n");
                    printf("Insira seu comando: ");

                    scanf(" %s", &operation);
                    setbuf(stdin,NULL);
                    
                    if (operation == 'A')
                    {   
                        operation = NULL;
                        Quant_produtos = 0;
                        
                        printf("Informe a quantidade de produtos que deseja adiquirir: ");
                        scanf("%d", &Quant_produtos);
                        setbuf(stdin,NULL);
                        
                        Multiplicacao_produto = lapis * Quant_produtos;
                        valornocarrinho = valornocarrinho + Multiplicacao_produto;
                        
                        strcat (Carrinho, "Lápis Grafite Estojo c/12 | Quantidade: ");
                        sprintf (Quant_produtos_char,"%d",Quant_produtos); 
                        strcat (Carrinho, Quant_produtos_char);
                        strcat (Carrinho, " | Valor Unitario: ");
                        sprintf (lapis_char,"%d",lapis);
                        strcat (Carrinho, lapis_char);
                        strcat (Carrinho, " | Valor Total desta Compra: ");
                        sprintf (Multiplicacao_produto_char,"%d",Multiplicacao_produto);
                        strcat (Carrinho, Multiplicacao_produto_char);
                        strcat (Carrinho, "\n\n");

                        printf("Produto adicionado com sucesso ao carrinho!");

                        goto materiais;
                    }
                    if (operation == 'V')
                    {
                        goto materiais; 
                    }
                    else
                    {
                        printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                        goto materiais;
                    }
                }
                if(operation == 'C')
                {
                    printf("Nome do Produto: Caneta xiaomi 9.5mm \n");
                    printf("Descrição do Produto: Caneta original da xiaomi \n");
                    printf("Valor do produto: 21 \n");
                    printf("(A)dicionar ao carrinho (V)oltar \n\n");
                    printf("Insira seu comando: ");

                    scanf(" %s", &operation);
                    setbuf(stdin,NULL);
                    
                    if (operation == 'A')
                    {   
                        operation = NULL;
                        Quant_produtos = 0;
                        
                        printf("Informe a quantidade de produtos que deseja adiquirir: ");
                        scanf("%d", &Quant_produtos);
                        setbuf(stdin,NULL);
                        
                        Multiplicacao_produto = caneta * Quant_produtos;
                        valornocarrinho = valornocarrinho + Multiplicacao_produto;

                        printf("Produto adicionado com sucesso ao carrinho!");
                        
                        strcat (Carrinho, " Caneta xiaomi 9.5mm | Quantidade: ");
                        sprintf (Quant_produtos_char,"%d",Quant_produtos); 
                        strcat (Carrinho, Quant_produtos_char);
                        strcat (Carrinho, " | Valor Unitario: ");
                        sprintf (caneta_char,"%d",caneta);
                        strcat (Carrinho, caneta_char);
                        strcat (Carrinho, " | Valor Total desta Compra: ");
                        sprintf (Multiplicacao_produto_char,"%d",Multiplicacao_produto);
                        strcat (Carrinho, Multiplicacao_produto_char);
                        strcat (Carrinho, "\n\n");

                        printf("Produto adicionado com sucesso ao carrinho!");

                        goto materiais;
                    }
                    if (operation == 'V')
                    {
                        goto materiais; 
                    }
                    else
                    {
                        printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                        goto materiais;
                    }
                }
                if(operation == 'B')
                {
                    printf("Nome do Produto: Borracha Staedler \n");
                    printf("Descrição do Produto: Considerada a melhor borracha do mundo \n");
                    printf("Valor do produto: 8 \n");
                    printf("(A)dicionar ao carrinho (V)oltar \n\n");
                    printf("Insira seu comando: ");

                    scanf(" %s", &operation);
                    setbuf(stdin,NULL);
                    
                    if (operation == 'A')
                    {
                        operation = NULL;
                        Quant_produtos = 0;
                        
                        printf("Informe a quantidade de produtos que deseja adiquirir: ");
                        scanf("%d", &Quant_produtos);
                        setbuf(stdin,NULL);  

                        Multiplicacao_produto = borracha * Quant_produtos;
                        valornocarrinho = valornocarrinho + Multiplicacao_produto;

                        printf("Produto adicionado com sucesso ao carrinho!");
                        
                        strcat (Carrinho, " Borracha Staedler | Quantidade: ");
                        sprintf (Quant_produtos_char,"%d",Quant_produtos); 
                        strcat (Carrinho, Quant_produtos_char);
                        strcat (Carrinho, " | Valor Unitario: ");
                        sprintf (borracha_char,"%d",borracha);
                        strcat (Carrinho, borracha_char);
                        strcat (Carrinho, " | Valor Total desta Compra: ");
                        sprintf (Multiplicacao_produto_char,"%d",Multiplicacao_produto);
                        strcat (Carrinho, Multiplicacao_produto_char);
                        strcat (Carrinho, "\n\n");

                        printf("Produto adicionado com sucesso ao carrinho!");

                        goto materiais;
                    }
                    if (operation == 'V')
                    {
                        goto materiais; 
                    }
                    else
                    {
                        printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                        goto materiais;
                    }
                }
                // Comandos
                if(operation == 'R')
                {
                    goto vercarrinho;
                }
                if(operation == 'V')
                {
                    goto iniciocategoria; 
                }
                else
                {
                    printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                    goto materiais;
                }
            }
            // Cria a seção de Livros
            if(operation == 'L')
            {
                livros:
                // Livros voltados para tecnologia em exclusivo
                printf("\n\nVocê está na sessão de Livros");
                printf("\n\n========================================================================================================================\n\n");
                printf("\n\n                           Linguagem (C) (J)ava: A Beginner's Guide (P)ense em Python\n");
                printf("\n\n                                         Ve(R) Carrinho (V)oltar\n\n");
                printf("\n\n========================================================================================================================\n\n");

                printf("Insira seu comando: ");
                scanf(" %s", &operation);
                setbuf(stdin,NULL);
                if(operation == 'C')
                {
                    printf(" Nome do Produto: Linguagem C \n");
                    printf("Descrição do Produto: Livro para aqueles que desejam estudar a linguagem de programação C \n");
                    printf("Valor do produto: 156 \n");
                    printf("(A)dicionar ao carrinho (V)oltar \n\n");
                    printf("Insira seu comando: ");

                    scanf(" %s", &operation);
                    setbuf(stdin,NULL);
                    
                    if (operation == 'A')
                    {
                        operation = NULL;
                        Quant_produtos = 0;
                        
                        printf("Informe a quantidade de produtos que deseja adiquirir: ");
                        scanf("%d", &Quant_produtos);
                        setbuf(stdin,NULL);  

                        Multiplicacao_produto = ling_c * Quant_produtos;
                        valornocarrinho = valornocarrinho + Multiplicacao_produto;
                        
                        strcat (Carrinho, " Linguagem C | Quantidade: ");
                        sprintf (Quant_produtos_char,"%d",Quant_produtos); 
                        strcat (Carrinho, Quant_produtos_char);
                        strcat (Carrinho, " | Valor Unitario: ");
                        sprintf (ling_c_char,"%d",ling_c);
                        strcat (Carrinho, ling_c_char);
                        strcat (Carrinho, " | Valor Total desta Compra: ");
                        sprintf (Multiplicacao_produto_char,"%d",Multiplicacao_produto);
                        strcat (Carrinho, Multiplicacao_produto_char);
                        strcat (Carrinho, "\n\n");

                        printf("Produto adicionado com sucesso ao carrinho!");

                        goto livros;
                    }
                    if (operation == 'V')
                    {
                        goto livros; 
                    }
                    else
                    {
                        printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                        goto livros;
                    }
                }
                if(operation == 'J')
                {
                    printf("Nome do Produto: Java: A Beginner's Guide \n");
                    printf("Descrição do Produto: Livro para aqueles que desejam começar na linguagem Java \n");
                    printf("Valor do produto: 166 \n");
                    printf("(A)dicionar ao carrinho (V)oltar \n\n");
                    printf("Insira seu comando: ");

                    scanf(" %s", &operation);
                    setbuf(stdin,NULL);
                    
                    if (operation == 'A')
                    {
                        operation = NULL;
                        Quant_produtos = 0;
                        
                        printf("Informe a quantidade de produtos que deseja adiquirir: ");
                        scanf("%d", &Quant_produtos);
                        setbuf(stdin,NULL);  

                        Multiplicacao_produto = ling_java * Quant_produtos;
                        valornocarrinho = valornocarrinho + Multiplicacao_produto;
                        
                        strcat (Carrinho, " Java: A Beginner's Guide | Quantidade: ");
                        sprintf (Quant_produtos_char,"%d",Quant_produtos); 
                        strcat (Carrinho, Quant_produtos_char);
                        strcat (Carrinho, " | Valor Unitario: ");
                        sprintf (ling_java_char,"%d",ling_java);
                        strcat (Carrinho, ling_java_char);
                        strcat (Carrinho, " | Valor Total desta Compra: ");
                        sprintf (Multiplicacao_produto_char,"%d",Multiplicacao_produto);
                        strcat (Carrinho, Multiplicacao_produto_char);
                        strcat (Carrinho, "\n\n");

                        printf("Produto adicionado com sucesso ao carrinho!");

                        goto livros;
                    }
                    if (operation == 'V')
                    {
                        goto livros; 
                    }
                    else
                    {
                        printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                        goto livros;
                    }
                }
                if(operation == 'P')
                {
                    printf("Nome do Produto: Pense em Python \n");
                    printf("Descrição do Produto: Livro para aqueles que desejam começar a estudar Ciência da Computação \n");
                    printf("Valor do produto: 66 \n");
                    printf("(A)dicionar ao carrinho (V)oltar \n\n");
                    printf("Insira seu comando: ");

                    scanf(" %s", &operation);
                    setbuf(stdin,NULL);
                    
                    if (operation == 'A')
                    {
                        operation = NULL;
                        Quant_produtos = 0;
                        
                        printf("Informe a quantidade de produtos que deseja adiquirir: ");
                        scanf("%d", &Quant_produtos);
                        setbuf(stdin,NULL);  

                        Multiplicacao_produto = ling_python * Quant_produtos;
                        valornocarrinho = valornocarrinho + Multiplicacao_produto;
                        
                        strcat (Carrinho, " Pense em Python | Quantidade: ");
                        sprintf (Quant_produtos_char,"%d",Quant_produtos); 
                        strcat (Carrinho, Quant_produtos_char);
                        strcat (Carrinho, " | Valor Unitario: ");
                        sprintf (ling_python_char,"%d",ling_python);
                        strcat (Carrinho, ling_python_char);
                        strcat (Carrinho, " | Valor Total desta Compra: ");
                        sprintf (Multiplicacao_produto_char,"%d",Multiplicacao_produto);
                        strcat (Carrinho, Multiplicacao_produto_char);
                        strcat (Carrinho, "\n\n");

                        printf("Produto adicionado com sucesso ao carrinho!");

                        goto livros;
                    }
                    if (operation == 'V')
                    {
                        goto livros; 
                    }
                    else
                    {
                        printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                        goto livros;
                    }
                }
                if(operation == 'R')
                {
                    goto vercarrinho;
                }
                if(operation == 'V')
                {
                    goto iniciocategoria; 
                }
                else
                {
                    printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                    goto livros;
                }
            }
            // Volta para o Início
            if(operation == 'V')
            {
                goto inicio;
            }
            // Caso nenhum comando seja compreendido
            else
            {
                printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
                goto iniciocategoria;
            }
                
        }
    

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

    // Ver Carrinho
    if(operation == 'V')
    {
        vercarrinho:
        printf("\n\nLista de Produtos: ");
        printf("\n\n %s", Carrinho);
        printf("\n\nValor total: %i\n", valornocarrinho);
        printf("Finalizar a Compra? (Y/N): ");
        scanf(" %s", &operation);
        setbuf(stdin,NULL);
        if(operation == 'Y')
        {
            printf("\nObrigado(a) por comprar conosco!\n\n");
            goto fim;
        }
        if(operation == 'N')
        {
            goto inicio;
        }
    }
    // Sair do Programa
    if(operation == 'S')
    {
        printf("\n\nObrigado(a) por usar a nossa loja!");
        ++whileloop;
    }
    // Caso nenhum comando seja compreendido
    else
    {
        printf("\n\nDesculpa, não entendi o seu comando, por favor usar as letras maiúsculas que estão entre parênteses.\n\n");
    }
    }
    fim:
    return 0;
}