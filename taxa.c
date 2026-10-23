#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<Windows.h>

int obter_taxa(char* produto , char* recursos)
{
    printf("\n");
    printf("  ╔══════════════════════════════════════════╗\n");
    printf("  ║              ▓▓▓  TAXAS  ▓▓▓             ║\n");
    printf("  ╚══════════════════════════════════════════╝\n");
    printf("\n");
    static int x;
    printf("📌 Quanto cada %s gasta de %s: ", produto , recursos);
    while(scanf("%d",&x) == 0)
    {
        printf("❌ [ERROR] ❌: Não é uma Taxa \n");
        Sleep(2000);
        // limpa o buffer
        while(getchar() != '\n');
        printf("📌 Quanto cada %s gasta de %s: ", produto , recursos);
    }
    return x;
}