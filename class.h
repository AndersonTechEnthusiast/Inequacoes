#ifndef CLASS_H
#define CLASS_H

#define VERMELHO "\x1b[31m"
#define VERDE "\x1b[32m"
#define AMARELO "\x1b[33m"
#define AZUL "\x1b[34m"
#define RESET "\x1b[0m"

typedef struct Produto
{
    char nome[100];
    float lucro;
} Produto;

typedef struct Recurso
{
    char recurso[100];
    int limite;
    int por_x;
    int por_y;
} Recurso;

typedef struct Coordenadas
{
    float x;
    float y;
} Coordenadas;

typedef struct Validas
{
    float coordenadasX[2];
    float coordenadasY[2];
    bool valido[2];
} Validas;

typedef struct Intercessao{
    double x;
    double y;
    bool status;
} Intercessao;

typedef struct Lucro
{
    double x;
    double y;
    double l;
} Lucro;

typedef struct Maior{
    double x;
    double y;
    double l;
} Maior;
void view(int type);
char* obter_recursos(void);
char* obter_produto(void);
float obter_limite(char* recursos);
int obter_taxa(char* produto , char* recursos);
float obter_preco(char* produto);
float y(float x , float y , float limite);
float x(float x , float y , float limite);
char* imprimir(bool status);
bool validas(int recursos_x, int recursos_y, float x, float y, int limite);
Intercessao Ponto(int recursox1 , int recursoy1 , int limite1 , int recursox2 , int recursoy2 , int limite2);
Lucro valores(float preco_x, float preco_y, float coordenadas_x, float coordenadas_y);
void make_file(double produto1 , char* nome1 , double produto2 , char* nome2 , double lucro , int incrementador);
#endif
