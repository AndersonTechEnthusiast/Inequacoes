#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include<Windows.h>
#include<math.h>

void make_file(double produto1 , char* nome1 , double produto2 , char* nome2 , double lucro , int incrementador)
{
    char static nome_do_arquivo[100]; // cria uma variavel estatica que será preenchida dentro da função (make_file) por isso é estatica por que inicia dentro da propria função
    // snprintf -> é uma função do C que funciona para alocar dados e string , numa so string 
    snprintf(nome_do_arquivo , sizeof(nome_do_arquivo) , "historicos/historico_%d.json",incrementador);
    // FILE -> é a classificação da variavel *f , assim como int , char , double , float etc
    FILE *f = fopen(nome_do_arquivo,"w"); // fopen("nome_do_arquivo","w") -> f é definido por (file) e open significa (abrir) ou seja abrir um arquivo no qual o nome
    if(!f){
        printf("❌ [ERROR] ❌ O historico não foi criado !!!\n");
        return;
    }
    fprintf(f , "{\n");
    fprintf(f , "   \"%s\": \"%.2f\", \n",nome1,produto1);
    fprintf(f , "   \"%s\": \"%.2f\", \n",nome2,produto2);
    fprintf(f , "   \"lucro\": \"%.2f\" \n",lucro);
    fprintf(f , "}\n");

    fclose(f);
    printf("✅ arquivo criado com sucesso e acessavél na pasta [historicos/] \n");
}