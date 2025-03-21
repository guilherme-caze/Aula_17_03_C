#include <stdio.h>

struct Carta {
    char simbolo[2];
    int valor;
};

int main(){
    struct Carta carta[6];
    int i, j, min;
    struct Carta temp;

    for(i = 0; i < 6; i++){
        printf("Digite o simbolo da carta: (A ao Z)");
        scanf(" %c", &carta[i].simbolo[0]);

        printf("Digite o valor da carta: (1 ao 10)");
        scanf("%d", &carta[i].valor);

       
    }

    /*for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
        if (arr[j] < arr[min]) {
        min = j;
        }
        }
        if (min != i) {         //ESTRUTURA BASE SELECTION SORT
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        }
        }
        for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        }*/

    for (i = 0; i < 6 - 1; i++){
        min = i;
        for (j = i + 1; j < 6; j++){
            if (carta[j].valor < carta[min].valor){
                min = j;
            }
        }
        if (min != i){
            temp = carta[i];
            carta[i] = carta[min];
            carta[min] = temp;
        }
    }

    for(i = 0; i < 6; i++){
        printf("Simbolo: %c\n", carta[i].simbolo[0]);
        printf("Valor: %d\n", carta[i].valor);
    }


    return 0;
};
