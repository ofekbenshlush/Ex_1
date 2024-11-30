#include <stdio.h>


void printMatrix(int matrix[][], int row, int col) {

    for (int i =0; i<row; i+=1) {
        for (int j=0; j<col; j+=1) {
            printf("%d", matrix[i][j]);
        }
    }
}
void InputMatrix(int **matrix,int row, int col) {
    for (int i =0; i<row; i+=1) {
        for (int j=0; j<col; j+=1) {
            scanf("%d", &(matrix[i][j]));
        }
    }
}



void doAction(int num, int **matrix, int row, int col) {
    switch (num)
    {
        case 1:
            //printMatrix(matrix,row, col);
        break;
        case 2:
            InputMatrix(matrix, row, col);
        break;
        case 3:
            //transposeMatrix(m1,row, col);
        break;

        case 0:
            //exit(0);
        break;

        default:
            break;
    }
}

void printMenu(int ** matrix, int row, int col) { //-----------the menu--------------
    int num = -1;
    while (num != 0) {
        printf("1. Display the matrix.\n");
        printf("2. Insert values to the matrix.\n");
        printf("3. Transpose matrix.\n");
        printf("4. Sort the matrix by rows sum.\n");
        printf("5. Sort the whole matrix.\n");
        printf("6. Print matrix value.\n");
        printf("7. i-th power of matrix.\n");
        printf("8. Find sub matrix.\n");
        printf("9. Multiply with another matrix.\n");
        printf("0. Exit.\n");
        printf("Please enter your choice: ");
        scanf("%d", &num); //user input

        if (num <0 || num >9) {
            printf("Wrong input, try again\n");
        }
        else {
            doAction(num, matrix, row, col);
        }
    }

}


int main() {
    int rows, columns;
    printf("Insert number of rows (1-50): ");
    do {
        scanf("%d", &rows);
        if (rows < 1 || rows > 50) {
            printf("Wrong input, try again\n");
            printf("Insert number of rows (1-50): ");
        }
    }
    while (rows < 1 || rows > 50);
    printf("Insert number of columns (1-50): ");
    do {
        scanf("%d", &columns);
        if (columns < 1 || columns > 50) {
            printf("Wrong input, try again\n");
            printf("Insert number of columns (1-50): ");
        }
    }
    while (columns < 1 || columns > 50);
    int matrix[50][50];
    for (int i=0;i<rows;i+=1) {
        for (int j =0; j<columns;j+=1) {
            matrix[i][j] = 0; // initialize every place in the matrix for 0
        }

    }
    printMatrix(matrix,rows,columns);
    printMenu(matrix, rows, columns);

    return 0;

    }


