#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_COLUMNS 100

void fillMatrixWithNumbers(int **numbers, int row, int column, int leftLimit, int rightLimit);
void printMatrix(int **numbers, int row, int column);

void fillArrayWithNumbers(int numbers[], int length, int leftLimit, int rightLimit);
void printReverseOfArray(int numbers[], int length, bool direction);
void printString( char* string , int length );

int main()
{
    // 1
    
    /*
    
    int length;

    printf("Enter Length ");
    scanf("%d", &length);
    
    int *array = (int *)malloc(length * sizeof(int));

    int i;
    for (i = 0; i < length; i++)
    {
        printf("Enter %d number : ", i);
        scanf("%d", &array[i]);
    }

    printReverseOfArray(array, length, true);
    
    array = (int *)realloc(array , (length + length /2)*sizeof(int));
    
    int x;
    for (x = length; x <( length + length /2); x++)
    {
        printf("Enter %d number : ", x);
        scanf("%d", &array[x]);
    }
    
    printReverseOfArray(array, ( length + length /2), true);
    
    */
    
    // 2
    
    /*
	
	int lengthOfFirstString = 5 , lengthOfSecondString = 8;
	
	char *firstString = malloc( lengthOfFirstString*sizeof(char));

    strcpy(firstString , "Mirze" );
    printf("firstString : %s\n" , firstString );
    
    char* temp = firstString[0];
	
	char *secondString = malloc( lengthOfSecondString*sizeof(char));

    strcpy(secondString , "Memmedov" );
    printf("secondString : %s\n" , secondString );
    
    printString( firstString , lengthOfFirstString );
    
    printf("\n");
    
    printString( secondString , lengthOfSecondString );
    
    printf("\n");
    
    firstString = realloc(firstString , (lengthOfFirstString*3)*sizeof(char));
    
    printString( firstString , lengthOfFirstString*3 );
    
    printf("\n");
    
    printf("1 adress : %p" , temp );
    
    free(firstString); 
    free(secondString);
    
    */
    
    // 3

    /*
		
    int row, column;
    int leftLimit, rightLimit;

    printf("Enter Row: ");
    scanf("%d", &row);

    printf("Enter Column: ");
    scanf("%d", &column);

    printf("Enter Left Limit: ");
    scanf("%d", &leftLimit);

    printf("Enter Right Limit: ");
    scanf("%d", &rightLimit);

    int** TwoDArray = malloc(row * sizeof(int*));
    
    int i ; 
    for (i = 0; i < row; i++) {
    	
        TwoDArray[i] = malloc(column * sizeof(int));
        
    }

    fillMatrixWithNumbers(TwoDArray, row, column, leftLimit, rightLimit);
    printMatrix(TwoDArray, row, column);
    
    int x ;
    for (x = 0; x < row; x++) {
    	
        free(TwoDArray[x]);
        
    }
    
    free(TwoDArray);
    
    */
    
    // 4
	
	/*
	
	int length;

    printf("Enter Length ");
    scanf("%d", &length);
    
    int *array = (int *)malloc(length * sizeof(int));
    int *pointer = array ;    

    int i;
    for (i = 0; i < length; i++)
    {
        printf("Enter %d number : ", i);
        scanf("%d", pointer);
        pointer++;
    }

    printReverseOfArray(array, length, true);
    
    array = realloc(array , (length * 2) * sizeof(int));
    
    int x;
    for (x = length; x < length*2 ; x++)
    {
        printf("Enter %d number : ", x);
        scanf("%d", pointer);
        pointer++;
    }
    
    printReverseOfArray(array, length*2, true);
	
	*/
}

void printString( char* string , int length ){
	
	char *pointer = string;
    
    int i;
    for(i = 0 ; i < length ; i ++ ){
    	
        printf("Character: %c, Address: %p\n", *pointer, pointer);
        pointer++;
        
    }
	
}

void printMatrix(int **numbers, int row, int column)
{
    printf("\nMatrix:\n\n");

    int i, x;
    for (i = 0; i < row; i++)
    {
        for (x = 0; x < column; x++)
        {
            printf("%.2d ", numbers[i][x]);
        }

        printf("\n");
    }
}

void fillMatrixWithNumbers(int **numbers, int row, int column, int leftLimit, int rightLimit)
{
    int i, x;
    for (i = 0; i < row; i++)
    {
        for (x = 0; x < column; x++)
        {
            int randomNumber = leftLimit + rand() % (rightLimit - leftLimit + 1);

            numbers[i][x] = randomNumber;
        }
    }
}

void fillArrayWithNumbers(int numbers[], int length, int leftLimit, int rightLimit)
{
    int i;
    for (i = 0; i < length; i++)
    {
        int randomNumber = leftLimit + rand() % (rightLimit - leftLimit);
        numbers[i] = randomNumber;
    }
}

void printReverseOfArray(int numbers[], int length, bool direction)
{
    int i;
    if (direction)
    {
        for (i = 0; i < length; i++)
        {
            printf("%d. %d\n", i, numbers[i]);
        }
    }
    else
    {
        for (i = length - 1; i >= 0; i--)
        {
            printf("%d. %d\n", i, numbers[i]);
        }
    }
}
