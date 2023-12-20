#include <stdio.h> 
#include <stdlib.h> 

float **dynAll(int n, int m);
void printIt(float **grid, int n, int m);
void fillIn(float **grid, int n, int m);

int main(){ 
    int n,m;
    
    printf("Please, enter the width:\n");
	scanf("%d",&n);
	printf("Please, enter the height:\n");
	scanf("%d",&m);
    int **arr=dynAll(n, m);
    fillIn(arr,n,m);
    printIt(arr,n,m);


  return 0; 
} 


float **dynAll(int n, int m){
    int i;
    float **arr = (float **)malloc(n * sizeof(float *)); 
    for (i=0; i<n; i++) 
         arr[i] = (float *)malloc(m * sizeof(float)); 
    return arr;
}
void printIt(float **grid, int n, int m){
    int i,j;
    for (i = 0; i <  n; i++){
        for (j = 0; j < m; j++){
            printf("%.2f ", grid[i][j]);
        }
        printf("\n");
    } 
       
          
    
}
void fillIn(float **grid, int n, int m){
    int i,j;
    for (i = 0; i <  n; i++) 
      for (j = 0; j < m; j++) 
         grid[i][j] = i+j;
}