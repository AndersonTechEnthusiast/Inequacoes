#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#include<Windows.h>
#include"class.h"

int main()
{
    char escolha;
    int incrementador = 0;
    do
    {        
        view(0);

        Recurso R[2];
        Produto P[2];
        Coordenadas C[4];
        Validas Va[2] = {0};

        int tamanho = sizeof(R)/sizeof(R[0]);

        for (int i = 0; i < tamanho; i++)
        {
            // strcpy(destino , origem) , a função "obter_recursos" é onde a origem da string vem , o destino que é "R[i].recurso" é para onde essa string vai ser alocada
            strcpy(R[i].recurso , obter_recursos());

            R[i].limite = obter_limite(R[i].recurso);

        }

        for(int i = 0; i < tamanho; i++)
        {
            strcpy(P[i].nome , obter_produto());
        }

        for (int i = 0; i < tamanho; i++)
        {
            P[i].lucro = obter_preco(P[i].nome);
        }
        
        for(int i = 0; i < tamanho; i++)
        {
            R[i].por_x = obter_taxa(P[0].nome , R[i].recurso);
            R[i].por_y = obter_taxa(P[1].nome , R[i].recurso);
        }

        for(int i = 0; i < tamanho; i++)
        {
            printf("\n🧱 Recurso: %s \n 📦 Produto: %s \n ⚖️  Taxa por %s : %d \n ⚖️  Taxa por %s : %d \n 🚧 Limite: %d \n 💲 Preço: R$ %.2f\n",R[i].recurso,P[i].nome,P[0].nome,R[i].por_x,P[1].nome,R[i].por_y,R[i].limite,P[i].lucro);
        }

        view(1);

        for(int i = 0; i < tamanho; i++)
        {
            printf("🔍 %dx + %dy ≤ %d \n",R[i].por_x,R[i].por_y,R[i].limite);
        }

        for (int i = 0; i < tamanho; i++)
        {
            C[i].x = x(R[i].por_x,R[i].por_y,R[i].limite);
            C[i].y = y(R[i].por_x,R[i].por_y,R[i].limite);
        }

        printf("\n\n");

        view(2);

        for (int i = 0; i < tamanho; i++)
        {
            printf("🔍 %dx + %dy ≤ %d \n",R[i].por_x,R[i].por_y,R[i].limite);
            printf("Coordenada (x,y): (%.1f,0) \n" , C[i].x);
            printf("Coordenada (x,y): (0,%.1f) \n" , C[i].y);
            printf("____________________________________________________________\n\n");
        }

        view(3);

        for(int i = 0; i < tamanho; i++)
        {
            int outro = (i + 1) % tamanho;
            // tamanho = 2
            // i = {0 , 1}
            // i = (0 + 1) % 2 , i = (1) % 2 = 1
            // i = (1 + 1) % 2 , i = (2) % 2 = 0
            printf("🔍 %dx + %dy ≤ %d \n",R[i].por_x,R[i].por_y,R[i].limite);
            printf("Coordenada (x,y): (%.1f,0) \n" , C[outro].x);
            printf("Coordenada (x,y): (0,%.1f) \n" , C[outro].y);
            printf("____________________________________________________________\n\n");
        }

        view(4);

        for(int i = 0; i < tamanho; i++)
        {
            int outro = (i + 1) % tamanho;
            // tamanho = 2
            // i = {0 , 1}
            // i = (0 + 1) % 2 , i = (1) % 2 = 1
            // i = (1 + 1) % 2 , i = (2) % 2 = 0
            printf("Incrementador: [%d]\n",i);
            if(validas(R[i].por_x,R[i].por_y,C[outro].x,0,R[i].limite))
            {
                validas(R[i].por_x,R[i].por_y,C[outro].x,0,R[i].limite);
                Va[i].coordenadasX[0] = C[outro].x;
                Va[i].coordenadasY[0] = 0;
                Va[i].valido[0] = true;
            }
            printf("Incrementador: [%d]\n",i);
            if(validas(R[i].por_x,R[i].por_y,0,C[outro].y,R[i].limite))
            {
                validas(R[i].por_x,R[i].por_y,0,C[outro].y,R[i].limite);
                Va[i].coordenadasX[1] = 0;
                Va[i].coordenadasY[1] = C[outro].y;
                Va[i].valido[1] = true;           
            }
        }
        
        view(5);

        for(int i = 0; i < tamanho; i++)
        {
            for(int a = 0; a < 2; a++)
            {
                if(Va[i].valido[a])
                {
                    printf("(x,y): (%.1f,%.1f)\n",Va[i].coordenadasX[a],Va[i].coordenadasY[a]);
                    printf("________________________________________________________\n");
                }
            }
        }
        
        view(6);
        
        printf("\n");
        int recursox1 = R[0].por_x;
        int recursox2 = R[1].por_x;
        int recursoy1 = R[0].por_y;
        int recursoy2 = R[1].por_y;
        int limite1 = R[0].limite;
        int limite2 = R[1].limite;
        // printf("Recurso [X1]: %d \nRecurso [X2]: %d \nRecurso [Y1]: %d \nRecurso [Y2]: %d \nRecurso [L1]: %d \nRecurso [L2]: %d",recursox1,recursox2,recursoy1,recursoy2,limite1,limite2);
        Intercessao I = Ponto(recursox1,recursoy1,limite1,recursox2,recursoy2,limite2);
        if(I.status && I.x >= 0 && I.y >= 0)
        {
            printf("X: %.2f , Y: %.2f\n",I.x,I.y);
        }
        else
        {
            printf("Não possui Intercessão\n");
        }
        
        view(7);

        Lucro L[6];
        int total = 0;
        for(int i = 0; i < tamanho; i++)
        {
            for(int a = 0; a < tamanho; a++)
            {
                if(Va[i].valido[a])
                {
                    L[total] = valores(P[0].lucro,P[1].lucro,Va[i].coordenadasX[a],Va[i].coordenadasY[a]);
                    total++;
                }
            }
        }

        L[total + 1] = valores(P[0].lucro,P[1].lucro,I.x,I.y);
        total = total + 1;

        for(int i = 0; i < total + 1; i++)
        {
            printf("(%.2f,%.2f) -> R$ %.2f\n",L[i].x,L[i].y,L[i].l);
        }

        Maior M = {0}; // zerando o struct

        for(int i = 0; i < total + 1; i++)
        {
            if(L[i].l > M.l)
            {
                M.x = L[i].x;
                M.y = L[i].y;
                M.l = L[i].l;
            }
        }

        printf("\n");

        incrementador = incrementador + 1;

        make_file(M.x,P[0].nome,M.y,P[1].nome,M.l,incrementador);

        printf("💳 Deve se vender: \n 🏷️  %.2f de %s \n 🏷️  %.2f de %s \n 💰 Lucro (Maior): %.2f\n",M.x,P[0].nome,M.y,P[1].nome,M.l);
        
        view(8);

        printf("⚠️  De Novo: \n 🟢 [S] \n 🔴 [N]\n");
        printf("Qual sua Escolha: ");
        while(getchar() != '\n');
        scanf("%c",&escolha);
        while(escolha != 'N' && escolha != 'n' && escolha != 'S' && escolha != 's')
        {
            printf("❌ ERROR ❌: escolha uma opção válida apenas [S/n]\n");
            while(getchar() != '\n');
            scanf("%c",&escolha);
            
        }
        while(getchar() != '\n');
    }while(escolha != 'n' && escolha != 'N');
    
    return 0;
}