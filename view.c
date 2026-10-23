#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#include<Windows.h>
void view(int type)
{
    if(type == 0)
    {
        printf("\n");
        printf("  ╔══════════════════════════════════════════╗\n");
        printf("  ║                                          ║\n");
        printf("  ║        ▓▓▓  MAXIMIZADOR  ▓▓▓             ║\n");
        printf("  ║                                          ║\n");
        printf("  ║   Programacao Linear - Otimizacao        ║\n");
        printf("  ║   de Lucro com Recursos Limitados        ║\n");
        printf("  ║                                          ║\n");
        printf("  ╚══════════════════════════════════════════╝\n");
        printf("\n");
    }
    else
    if(type == 1)
    {
        printf("\n");
        printf("  ╔═══════════════════════════════════════════════╗\n");
        printf("  ║              ▓▓▓  INEQUAÇÕES  ▓▓▓             ║\n");
        printf("  ╚═══════════════════════════════════════════════╝\n");
        printf("\n");
    }
    else
    if(type == 2)
    {
        printf("\n");
        printf("  ╔═══════════════════════════════════════════════╗\n");
        printf("  ║              ▓▓▓  COORDENADAS  ▓▓▓            ║\n");
        printf("  ╚═══════════════════════════════════════════════╝\n");
        printf("\n");
    }
    else
    if(type == 3)
    {
        printf("\n");
        printf("  ╔═══════════════════════════════════════════════════════╗\n");
        printf("  ║            ▓▓▓  COORDENADAS PREPARADAS  ▓▓▓           ║\n");
        printf("  ╚═══════════════════════════════════════════════════════╝\n");
        printf("\n");
    }
    else
    if(type == 4)
    {
        printf("\n");
        printf("  ╔═══════════════════════════════════════════════════════╗\n");
        printf("  ║              ▓▓▓  COORDENADAS VALIDAS  ▓▓▓            ║\n");
        printf("  ╚═══════════════════════════════════════════════════════╝\n");
        printf("\n");
    }
    else
    if(type == 5)
    {
        printf("\n");
        printf("  ╔═══════════════════════════════════════════════════════╗\n");
        printf("  ║                ▓▓▓      VALIDAS      ▓▓▓              ║\n");
        printf("  ╚═══════════════════════════════════════════════════════╝\n");
        printf("\n");
    }
    else
    if(type == 6)
    {
        printf("\n");
        printf("  ╔═══════════════════════════════════════════════════════════════════════╗\n");
        printf("  ║                ▓▓▓      PONTO DE INTERCESSÃO       ▓▓▓                ║\n");
        printf("  ╚═══════════════════════════════════════════════════════════════════════╝\n");
        printf("\n");
    }
    else
    if(type == 7)
    {
        printf("\n");
        printf("  ╔═══════════════════════════════════════════════════════════════════════╗\n");
        printf("  ║                ▓▓▓           MAIOR LUCRO           ▓▓▓                ║\n");
        printf("  ╚═══════════════════════════════════════════════════════════════════════╝\n");
        printf("\n");
    }
    else
    if(type == 8)
    {
        printf("\n");
        printf("  ╔═══════════════════════════════════════════════════════════════════════╗\n");
        printf("  ║                ▓▓▓           MAIS DADOS            ▓▓▓                ║\n");
        printf("  ╚═══════════════════════════════════════════════════════════════════════╝\n");
        printf("\n");
    }
}