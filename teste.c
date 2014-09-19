#include<stdio.h>;
#include<stdlib.h>;
#include<math.h>;
#define X 10

int main (){


    int VETORPROCESSO[X] = {},VETORPRIORIDADE[X] = {}, AUX, AUX2, processo, prioridade, cont, i, j;


        for (cont = 0; cont < X ; cont++){

            printf("Informe o numero do processo: ");
            scanf("%d", &processo);
            VETORPROCESSO[cont] = processo;
            printf("Informe a prioridade do processo: ");
            scanf("%d", &prioridade);
            VETORPRIORIDADE[cont] = prioridade;

        }


    for (i = 0; i < X  ; i++){
        for(j = 0; j < X; j++){
                if (VETORPRIORIDADE[i] < VETORPRIORIDADE[j]){
                    AUX = VETORPRIORIDADE[i];
                    AUX2 = VETORPROCESSO[i];
                    VETORPRIORIDADE[i] = VETORPRIORIDADE[j];
                    VETORPRIORIDADE[j] = AUX;

                    //possibilidade
                    VETORPROCESSO[i] = VETORPROCESSO[j];
                    VETORPROCESSO[j] = AUX2;
                }
        }
    }
    printf("A ordem de processamento sera: ");
        for (cont = 0; cont < X ; cont++){


                    printf("Processo %d > ", VETORPROCESSO[cont]);
        }


system ("pause");
return 0;
}
