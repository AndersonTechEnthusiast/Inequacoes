#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#include<Windows.h>

float obter_preco(char* produto)
{
    printf("\n");
    printf("  ╔══════════════════════════════════════════╗\n");
    printf("  ║             ▓▓▓  PREÇOS  ▓▓▓             ║\n");
    printf("  ╚══════════════════════════════════════════╝\n");
    printf("\n");
    printf("📌 Digite o Preço por Unidade do(a) %s: ",produto);
    static float preco;
    while(scanf("%f",&preco) == 0)
    {
        printf("❌ [ERROR] ❌: Preço Inválido !! \n");
        while(getchar() != '\n');
        printf("📌 Digite o Preço por Unidade do(a) %s",produto);
    }
    while(getchar() != '\n');
    return preco;
}