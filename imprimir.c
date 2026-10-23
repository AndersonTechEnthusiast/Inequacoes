#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#include<Windows.h>

char* imprimir(bool status)
{
    if(status)
    {
        return "Válida ✅";
    }
    else
    {
        return "Inválida ❌";
    }
}