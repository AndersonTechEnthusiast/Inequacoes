#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<windows.h>
#include<math.h>
#include"class.h"

Intercessao Ponto(int recursox1 , int recursoy1 , int limite1 , int recursox2 , int recursoy2 , int limite2)
{
    // utilizaremos o Método Matematico chamado Cramer
    // consiste em:
    /**
     * 10x + 6y = 120
     * 4x + 2y = 50
     * 
     * faremos uma multiplicação cruzada entre os valores que acompanham x e y em ambas as equações
     * 10 <---------> 6 | números que acompanham o x e o y na equação 10x + 6y = 120
     * 4  <---------> 2 | números que acompanham o x e o y na equação 4x + 2y = 50
     * 
     * multiplica cruzado
     * 
     * 10 * 2 = 20
     * 4 * 6 = 24
     * 
     * 20 - 24 = -4
     */
    double determinante = (recursox1 * recursoy2) - (recursox2 * recursoy1);
    if(determinante == 0)
    {
        Intercessao vazio = {0,0,false};
        return vazio; // encerra aqui
    }

    // no método Matematico Cramer , temos tambem como descobrir os vertices , sejam eles x e y 
    // fazemos isso pelo seguinte passo
    /**
     * dado as equações:
     *                   10x + 6y = 120
     *                   4x + 2y = 50
     * 
     * anteriormente fizemos:
     * 10 <---------> 6 
     * 4  <---------> 2
     * 
     * para encontrarmos o x devemos substituir os valores de x em ambas (10 e 4) , pelos seus respectivos limites e aplicarmos regra de três , ficando
     * 
     * 120 <---------> 6
     * 50  <---------> 2
     * 
     * e para descobrir o valor de y , fazemos , praticamente a mesma coisa , apenas invertendo o os valores , agora quem vai ser substituido será os valores de y (6 e 2) pelos seus respectivos limites , ficando:
     * 
     * 10 <---------> 120
     * 4  <---------> 50
     * 
     * ficando
     *  y = (10 * 50) - (120 * 4)
     *  x = (120 * 2) - (50 * 6)
     */

    double x = ((limite1 * recursoy2) - (limite2 * recursoy1))/determinante;
    double y = ((limite2 * recursox1) - (limite1 * recursox2))/determinante;

    Intercessao I;
    I.x = x;
    I.y = y;
    I.status = true;
    return I;

}