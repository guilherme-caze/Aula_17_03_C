#include <stdio.h>

struct Pessoas {
    char nome[30];
    int idade;
};

int main(){
    struct Pessoas pessoas[6]; //Armazenar 6 pessoas
    int i, j; //Bubble Sort
    struct Pessoas temp; //Temporaria

    for(i = 0; i < 6; i++){
        printf("Digite o seu nome: ");
        scanf("%s", pessoas[i].nome);

        printf("Digite a sua idade: ");
        scanf("%d", &pessoas[i].idade);
    }

    //Estrutura padrão de exemplo
    /* for (i = 0; i < n-1; i++) {      // Laço externo - número de passagens
            for (j = 0; j < n-i-1; j++) {  // Laço interno - compara elementos adjacentes
                if (arr[j] > arr[j+1]) {    // Compara elementos adjacentes
                    // Troca os elementos se estiverem na ordem errada
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
        }
    }
    }*/




    //Estrutura Bubble
    for(i = 0; i < 5; i++){
        for(j = 0; j < 6 - i - 1;j++){
            if(pessoas[j].idade > pessoas[j + 1].idade){
                temp = pessoas[j];
                pessoas[j] = pessoas[j + 1];    
                pessoas[j + 1] = temp;

            }
        }
    }

    printf("Pessoas ordenadas pela idade: \n");

    for(i = 0; i < 6; i++){
        printf("Nome: %s, Idade: %d", pessoas[i].nome, pessoas[i].idade);
        printf("\n");

    }



    return 0;
}