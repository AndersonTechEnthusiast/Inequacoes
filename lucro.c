#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<windows.h>
#include<ctype.h>
#include"class.h"

Lucro valores(float preco_x, float preco_y, float coordenadas_x, float coordenadas_y)
{
    Lucro L = {(double)coordenadas_x,(double)coordenadas_y,((double)(preco_x * coordenadas_x) + (double)(preco_y * coordenadas_y))};
    return L;
}