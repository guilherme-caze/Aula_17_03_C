#include <stdio.h>
#include <stdbool.h>

    struct Senha{
        bool prioridade;
        int numero;
        
    };
    
    int main(){
        struct Senha senha[6];
        int i, j;
        struct Senha chave;
        
        for(i = 0; i < 6; i++){
        printf("Digite sua senha de 4 digitos: ");
        scanf("%d", &senha[i].numero);
        
        printf("Sua senha é prioridade? Digite 0 para sim e 1 para nao: ");
        scanf("%d", &senha[i].prioridade);
        }
        
        
        
        for(i = 1; i < 6; i++){
            chave = senha[i];
            j = i - 1;
            while (j >= 0 && (senha[j].prioridade || (senha[j].prioridade == chave.prioridade && senha[j].numero > chave.numero))) {
                senha[j + 1] = senha[j];
                j--;
        }
            senha[j + 1] = chave;
        }
        
        for(i = 0; i < 6; i++){
            printf("Senha: %d, Prioridade: %d\n", senha[i].numero, senha[i].prioridade);
        }
        
        
        
        /*int i, chave, j;
        for (i = 1; i < n; i++) {
        chave = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > chave) {
        arr[j + 1] = arr[j];
        j--;
        }
        arr[j + 1] = chave;
        }*/
        
        
        return 0;
    }
