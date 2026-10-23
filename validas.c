#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#include<Windows.h>

bool validas(
    int recursos_x,
    int recursos_y,
    float x,
    float y,
    int limite
)
{
    float resultado = (recursos_x * x) + (recursos_y * y);
    if(resultado > limite)
    {
        printf("%d(x) + %d(y) ≤ %d \n",recursos_x,recursos_y,limite);
        printf("%d(%.1f) + %d(%.1f) ≤ %.1f | ❌ \n",recursos_x,x,recursos_y,y,resultado);
        return false;
    }
    else
    if(resultado <= limite)
    {
        printf("%d(x) + %d(y) ≤ %d \n",recursos_x,recursos_y,limite);
        printf("%d(%.1f) + %d(%.1f) ≤ %.1f | ✅ \n",recursos_x,x,recursos_y,y,resultado);
        return true;
    }
}