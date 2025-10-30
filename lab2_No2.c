#include <stdio.h>
void transpose(int *matrix, int m,int n,int ld){
    for(int i=0;i<ld;i++){
        for(int j=i+1;j<ld;j++){
            int temp = matrix[i*ld + j];
            matrix[i*ld + j] = matrix[j*ld + i];
            matrix[j*ld + i] = temp;
        }
    }   
        
}