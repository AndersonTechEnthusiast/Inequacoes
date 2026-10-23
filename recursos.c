#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<Windows.h>

char* obter_recursos(void)
{
    bool status = false;
    static char recursos[100];

    printf("\n");
    printf("  ╔══════════════════════════════════════════╗\n");
    printf("  ║            ▓▓▓  RECURSOS  ▓▓▓            ║\n");
    printf("  ╚══════════════════════════════════════════╝\n");
    printf("\n");
    
    while(true)
    {
        printf("📌 Digite o Recurso: ");
        fgets(recursos , sizeof(recursos) , stdin);
        int incrementador = 0;
        int validador = strlen(recursos);
        int comprimento = strlen(recursos);
        int numeros = 0;
        int letras = 0;
        while(recursos[incrementador] != '\0')
        {
            if(recursos[incrementador] >= '0' && recursos[incrementador] <= '9')
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
            printf("❌ [ERROR] ❌ : • recursos Contém Números • %d Letras Contidas  • %d Números Contidos",letras , numeros);
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
    recursos[strcspn(recursos , "\n")] = '\0';
    return recursos;
}