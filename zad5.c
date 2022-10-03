#include <stdio.h>
#include <stdlib.h>

int minRefuelStops(int target, int startFuel, int** stations, int stationsSize, int* stationsColSize);
void sort(int **stations, int stationsSize);
void printmatrix(int **mat,int ss);

int main(){
    int **mat;
    mat = calloc(3,sizeof(int*));
    mat[0] = calloc(2,sizeof(int));
    mat[1] = calloc(2,sizeof(int));
    mat[2] = calloc(2,sizeof(int));
    mat[0][0] = 20;
    mat[1][0] = 10;
    mat[2][0] = 30;
    sort(mat,3);
    printmatrix(mat,3);
    free(mat);
    return 0;
}

void printmatrix(int **mat,int ss){ //funkcija za printovanje matrice
    int i;
    for(i = 0; i<ss; i++){
        printf("%d %d\n",mat[i][0],mat[i][1]);
    }


}

void sort(int **stations, int stationsSize){
    int i,j,min,indmin;
    int *temp = calloc(2,sizeof(int));
    for(i=0;i<stationsSize;i++){
        min = stations[i][0];
        indmin = i;
        for(j=i+1;j<stationsSize;j++){
            if(stations[j][0]<min){
                min = stations[j][0];
                indmin = j;
            }
        }
        temp[0] = stations[indmin][0];
        temp[1] = stations[indmin][1];
        stations[indmin][0] = stations[i][0];
        stations[indmin][1] = stations[i][1];
        stations[i][0] = temp[0];
        stations[i][1] = temp[1];
    }

    free(temp);
    return;
}


}
