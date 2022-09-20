#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu(int *k){
    printf("Digite o tamanho da matriz: \t");
    scanf("%i", k);
    return; 
}

int** criaMatriz(int k){
    int **M = (int **)malloc(k * sizeof(int *));
    int n;

	for(n=0;n<k;n++){
		M[n] = (int *)malloc(k * sizeof(int));
	}

return M;
}

void inicializaMatriz(int **matriz, int k){
    // srand(time(NULL));
    for(int i=0;i < k; i++){
        for(int j = i +1; j < k; j++){
            matriz[i][j] = rand() % 50;
            matriz[j][i] = matriz[i][j];
        }
    }
return;
}

void mostraMatriz(int **matriz,int k){

    for(int i=0;i < k; i++){
        for(int j = 0; j < k; j++){
            printf("%i \t", matriz[i][j]);
        }
        printf("\n");
    }
    return;
}

void torneio(){
    printf("\nToneio\n");
    return;
}


void roleta(){
    printf("\nRoleta\n");
    return;
}

void roleta(){
    return;
}

void torneio(){
    return;
}


void menuOpcao(){

    int op;
    printf("\nDigite o metodo desejado");
    scanf("%i", &op);

    switch(op){

        case 1:{
                printf("\n\tBem vindo ao metodo do Torneio!\n\n");
                torneio();
            break;
        }
        case 2:{
                printf("\n\tBem vindo ao metodo do Roleta!\n\n");
                roleta();
            break;
        }
    }

    return;
}


int main(){

    int k=0;
    menu(&k);
    int **matriz = criaMatriz(k); // k + 1 a coluna sobrando será o valor de Fitness 
    inicializaMatriz(matriz, k);
    mostraMatriz(matriz, k);
    
    printf("\n");

    /*
    * Criar uma matriz para armazenar a Aptidao e Aptidao relativo de cada elemento( cada linha )
    */
   int dados[k][3];

return 0;
}