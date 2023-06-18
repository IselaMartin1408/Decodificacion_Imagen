#include <string.h>
#include <stdio.h>

int main(){

    int x1 = 2, y1 = 0, z1 = -1;//for de renglones con i 
    int x2 = 2, y2 = 0, z2 = -1;// for de columnas con j 
    int matrizR[5][5], matrizG[5][5], matrizB[5][5];

    int matriz[3][3][3];


    char key[8] = {'0','0','0','0','0','0','0','0'};

    printf("hola\n");

   

    for(int i = x1;  (z1 == 1 && i < y1) || (z1 == -1 && i >= y1)  ; i+=z1){//renglon
        for(int k = 0; k < 3; k++){//color RGB
          for(int j = x2;  (z2 == 1 && j < y2) || (z2 == -1 && j >= y2) ; j+=z2){//columnas

            matriz[i][j][k] = i;

          }  
        }
    }

    for(int i = x1;  (z1 == 1 && i < y1) || (z1 == -1 && i >= y1)  ; i+=z1){
        for(int k = 0; k < 3; k++){
          for(int j = x2;  (z2 == 1 && j < y2) || (z2 == -1 && j >= y2) ; j+=z2){

            printf("matriz[%d][%d][%d] = %d ",i,j,k,matriz[i][j][k]);

          }  
          printf("\n");
        }
        printf("\n ");
    }

    return 0;

}