#include<stdio.h>;
#include<stdlib.h>;
#include<math.h>;
#define X 3

int main (){


    int VETORPROCESSO[X] = {},VETORPRIORIDADE[X] = {}, AUX[X] = {}, processo, prioridade, cont, i, j;


        for (cont = 0; cont < X ; cont++){

            printf("Informe o numero do processo: ");
            scanf("%d", &processo);
            VETORPROCESSO[cont] = processo;
            printf("Informe a prioridade do processo: ");
            scanf("%d", &prioridade);
            VETORPRIORIDADE[cont] = prioridade;


        }
        for (cont = 0; cont < X ; cont++){
            printf(" %d", VETORPRIORIDADE[cont]);
        }

    for (i = 0; i < X  ; i++){
        for(j = i; j < X; j++){
                if (VETORPRIORIDADE[j] < VETORPRIORIDADE[i]){
                    AUX[i] = VETORPRIORIDADE[j];
                    VETORPRIORIDADE[j] = VETORPRIORIDADE[i];
                    VETORPRIORIDADE[i] = AUX[i];
                }
        }
    }
        for (cont = 0; cont < X ; cont++){
                    printf(" %d", AUX[cont]);
        }


system ("pause");
return 0;
}

