#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<Windows.h>

float obter_limite(char* recursos)
{
    static float limite;
    printf("📌 Digite o Limite de %s: ", recursos);
    while(scanf("%f",&limite) == 0)
    {
        printf("❌ [ERROR] ❌: Não é um Limite \n");
        Sleep(2000);
        // limpa o buffer
        while(getchar() != '\n');
        printf("📌 Digite o Limite de %s: ", recursos);
    }
    while(getchar() != '\n');
    return limite;
}