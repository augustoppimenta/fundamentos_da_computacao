#include<stdio.h>;
#include<stdlib.h>;
#include<math.h>;
#define X 10

int main (){

    int VETOR[X] = {}, processo, cont, i;


        for (cont = 0; cont < X ; cont++){

            printf("Informe o numero do processo: ");
            scanf("%d", &processo);
            VETOR[cont] = processo;

        }


    for (i = 9; i >= 0  ; i--){
      printf("%d ", VETOR[i]);
    }


system ("pause");
return 0;
}
