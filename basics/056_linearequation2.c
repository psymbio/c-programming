#include <stdio.h>
#include <stdlib.h>
void divide_row(double **augmented_matrix, int cols, int i, int j){
    int k = cols;
    while(k >= 0){
        augmented_matrix[i][k] = augmented_matrix[i][k]/augmented_matrix[i][j];
        k--;
    }
}

void elimination(double **augmented_matrix, int rows, int cols, int i, int j) {
    int k = 0;

    while (k < rows){
        if(k != i){
            double r = augmented_matrix[k][j] / augmented_matrix[i][j];
            subtract(augmented_matrix, cols, r, i, k);
        }
        k++;
    }
}

void gaussian_elimination(double **augmented_matrix, int rows, int cols) {
    int i, j, k = 0, singular = 0;

    for(i=0,j=0; i<rows && j<cols; i++,j++){
        if (augmented_matrix[i][j] == 0) {
            if(pivoting(augmented_matrix, rows, cols, i, j) == 0){
                singular = 1;
            }else{
                j--;
            }
            i--;
        } else {
            divide_row(augmented_matrix, cols, i, j);
            elimination(augmented_matrix, rows, cols, i, j);
        }
    }

    print_matrix(augmented_matrix, rows, cols);

    if(singular == 1){
        obtain_nullspace(augmented_matrix, rows, cols, i);
    }
    else{
        obtain_solution(augmented_matrix, rows, cols, i);
    }
}

void input_matrix(double **augmented_matrix, int rows, int cols) {
    int i, j;

    for (i = 0; i < cols; i++) {
        printf("x%d   ",i);
    }
    printf("rhs\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j <= cols; j++) {
            scanf("%lf", &augmented_matrix[i][j]);
        }
    }
}

void obtain_nullspace(double **augmented_matrix, int rows, int cols, int rank){

    int i, j, k, l;
    double temp;
    int nullity = cols - rank;
    double variable_matrix[cols][nullity];

    int swap_tracker[rank][2];
    for(i=0; i < rank; i++){
        swap_tracker[i][0] = 0;
        swap_tracker[i][1] = 0;
    }

    k = 0;
    for(i=0; i < rank ; i++){
        if(augmented_matrix[i][i] != 1){
            j = i + 1;

            while (j < cols){
                if (augmented_matrix[i][j] == 1) {
                    swap_tracker[k][0] = i;
                    swap_tracker[k][1] = j;
                    k++;
                    printf("%d%d ",i,j);
                    for (l = 0; l < rows; l++) {
                        temp = augmented_matrix[l][i];
                        augmented_matrix[l][i] = augmented_matrix[l][j];
                        augmented_matrix[l][j] = temp;
                    }
                    j = cols;
                } else {
                    j++;
                }
            }
        }
    }

    k = 0;
    for(i = cols-1; i >= 0 ; i--){
        for (j = nullity-1; j >=0; j--){
            variable_matrix[i][j] = 0;
        }
        if (k <= nullity){
            variable_matrix[i][nullity-k-1] = 1;
            k++;
        }
    }

    for(i = 0; i < rank; i++){
        for(j = 0; j < nullity; j++){
            variable_matrix[i][j] = (-1.0)*augmented_matrix[i][rank+j];
            if(augmented_matrix[i][rank+j]==0){
                variable_matrix[i][j] = 0;
            }
        }
    }

    for(i = rank-1; i >= 0; i--){
        for (k = 0; k < nullity; k++) {
            temp = variable_matrix[swap_tracker[i][0]][k];
            variable_matrix[swap_tracker[i][0]][k] = variable_matrix[swap_tracker[i][1]][k];
            variable_matrix[swap_tracker[i][1]][k] = temp;
        }
    }

    printf("\n\nBasis of Nullspace for given Matrix:");
    for (i = 0; i < cols; i++){
        printf("\n");
        for (j = 0; j < nullity; j++){
            printf("%.2lf  ", variable_matrix[i][j]);
        }
    }
}

void obtain_solution(double **augmented_matrix, int rows, int cols, int rank){

    int i,j;
    double variable[cols];
    int flag = 1;
    if(rank < cols){
        printf("\n\n The given Linear equations have infinite solutions.");
        obtain_nullspace(augmented_matrix, rows, cols, rank);
    } else {
        for(i = rank-1; i >= 0; i--){
            variable[i] = augmented_matrix[i][cols];
            for(j = rank-1; j > i; j--){
                variable[i] -= variable[j]*augmented_matrix[i][j];
            }
            if(augmented_matrix[i][j]==0 && variable[i]!=0){
                flag = 0;
            } else {
                variable[i] /= augmented_matrix[i][j];
            }
        }


        if(flag){
            printf("\n\nSolution of the given Linear Equations: ");
            for (i = 0; i < cols; i++)    {
                printf("\nx%d= %.2lf", i,variable[i]);
            }
        } else {
            printf("\nThere is no consitent solution available.");
        }
    }

}


int pivoting(double **augmented_matrix, int rows, int cols, int i, int j) {
    int k = i + 1;
    while (k < rows){
        if (augmented_matrix[k][j] == 0) {
            k++;
        } else {
            swap_rows(augmented_matrix, cols, i, k);
            return 1;
        }
    }
    return 0;
}

void print_matrix(double **augmented_matrix, int rows, int cols){
    int i,j;
    printf("\nAugmented Matrix:");
    for (i = 0; i < rows; i++){
        printf("\n");
        for (j = 0; j <= cols; j++){
            printf("%3.2lf  ", augmented_matrix[i][j]);
            if(j==cols-1){
                printf("%c  ", 179);
            }
        }
    }
}

void subtract(double **augmented_matrix, int cols, double r, int i, int k) {
    int j;
    for (j = 0; j <= cols; j++) {
        augmented_matrix[k][j] -= r * augmented_matrix[i][j];
    }
}

void swap_cols(double **matrix, int rows, int i, int j) {
    int k;
    double temp;
    for (k = 0; k < rows; k++) {
        //printf("%d",k);
        temp = matrix[k][i];
        matrix[k][i] = matrix[k][j];
        matrix[k][j] = temp;
    }
}

void swap_rows(double **matrix, int cols, int i, int j) {
    int k;
    double temp;
    for (k = 0; k <= cols; k++) {
        temp = matrix[i][k];
        matrix[i][k] = matrix[j][k];
        matrix[j][k] = temp;
    }
}



int i,j;

    int cols;
    printf("No. of variables: ");
    scanf("%d", &cols);

    int rows;
    printf("No. of equations: ");
    scanf("%d", &rows);

    double **augmented_matrix;
    augmented_matrix = (double **)calloc(rows, sizeof(double *));
    for (i = 0; i < rows; i++)    {
        augmented_matrix[i] = (double *)calloc(cols, sizeof(double));
    }

    input_matrix(augmented_matrix, rows, cols);

    gaussian_elimination(augmented_matrix, rows, cols);

    free(augmented_matrix);

    return 0;
}
