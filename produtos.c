#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<Windows.h>

char* obter_produto(void)
{
    printf("\n");
    printf("  ╔══════════════════════════════════════════╗\n");
    printf("  ║            ▓▓▓  PRODUTOS  ▓▓▓            ║\n");
    printf("  ╚══════════════════════════════════════════╝\n");
    printf("\n");
    
    bool status = false;
    static char produto[100];
    while(true)
    {
        printf("📌 Digite o Produto: ");
        fgets(produto , sizeof(produto) , stdin);
        int incrementador = 0;
        int validador = strlen(produto);
        int comprimento = strlen(produto);
        int numeros = 0;
        int letras = 0;
        while(produto[incrementador] != '\0')
        {
            if(produto[incrementador] >= '0' && produto[incrementador] <= '9')
            {
                validador = validador - 1;
                numeros = numeros + 1;
            }
            else
            {
                letras = letras + 1;
            }
            incrementador = incrementador + 1;
        }
        if(comprimento == validador)
        {
            status = true;
        }
        else
        {
            printf("❌ [ERROR] ❌ : • Produto Contém Números • %d Letras Contidas  • %d Números Contidos",letras , numeros);
            Sleep(2000);
        }
        if(status)
        {
            break;
        }
        else
        {
            while(getchar() != '\n');
        }
    }
    produto[strcspn(produto , "\n")] = '\0';
    return produto;
}