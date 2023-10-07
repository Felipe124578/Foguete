#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(){
    
    int foguete;

    printf("\nAutoriza lançar foguete do Ellon Musk?");
    printf("\nDigite 1 para sim e 2 para não.\n");
    scanf("%i", & foguete);

    while(!(foguete == 1 || foguete == 2)){
        printf("\nCódigo incorreto! Digite novamente os códigos aceitos.\n1 pra sim ou 2 pra não: \n");
        scanf("%i", & foguete);
    }

    if(foguete == 2){
        printf("\nNegado!\nAté logo pequeno gafanhoto.\n");
        return 0;
    }


    if(foguete == 1){

        printf("\nAutorizado!\nPreparem-se para contagem regressiva: \n");

        int i = 11;
        int j = 35;

        do{
            i--;
            printf("%i\n", i);
            sleep(1);

            if(i == 0){
                break;
            }

        }while(i < 11);

        printf("\n\n");

        printf("     /\\  \n");
        printf("    /  \\  \n");
        printf("   /    \\  \n");
        printf("  /------\\  \n");
        printf(" /|      |\\  \n");
        printf("| |      | |  \n");
        printf("| |      | |  \n");
        printf("| |      | |  \n");
        printf("| |      | |  \n");
        printf("| |  E   | |  \n");
        printf("| |  L   | |  \n");
        printf("| |  L   | |  \n");
        printf("| |  O   | |  \n");
        printf("| |  N   | |  \n");
        printf("| |      | |  \n");
        printf("| |  M   | |  \n");
        printf("| |  U   | |  \n");
        printf("| |  S   | |  \n");
        printf("| |  K   | |  \n");
        printf("| |      | |  \n");
        printf("| |      | |  \n");
        printf("| |      | |  \n");
        printf("| |      | |  \n");
        printf("| |      | |  \n");
        printf("   BOOOM!\n\n");

    }


    return 0;
}

