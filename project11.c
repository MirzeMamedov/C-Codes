#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

#define index 2

void fillArrayWithNumbers(int numbers[], int length, int leftLimit, int rightLimit);
void printReverseOfArray(int numbers[], int length, bool direction );
int findMinimumElement(int numbers[], int length);
int findAverage(int numbers[], int length);

void fillMatrixWithNumbers( int numbers[][index] , int row , int column , int leftLimit, int rightLimit );
void printMatrix( int numbers[][index] , int row , int column );
int sumOfRightDiagonal( int numbers[][index] , int row , int column );
int findMaksimumElement(int numbers[][index], int row , int column );

void sumOfTwoArray( int firstArray[][index] , int secondArray[][index] , int resultArray[][index] , int row , int column );

void checkIdentityArray( int matrix[][index] , int row , int column );

int calculateStandardDeviation( int numbers[] , int length ,int mean);

void bubbleSort( int numbers[] , int length );
void binarySearch( int numbers[] , int length , int expectedNumber );

int main()
{

srand(time(NULL));

//4 

/*

int length;
int leftLimit, rightLimit;

printf("Enter Length: ");
scanf("%d", &length);

printf("Enter Left Limit ");
scanf("%d", &leftLimit);

printf("Enter Right Limit ");
scanf("%d", &rightLimit);

int numbers[length];

fillArrayWithNumbers(numbers, length, leftLimit, rightLimit);

printReverseOfArray(numbers, length , false);

int minimumElement = findMinimumElement(numbers, length);

printf("Minimum Element : %d \n", minimumElement);

int average = findAverage(numbers, length);

printf("Average : %d ", average);

*/

// 5

/*

int row , column ;
int leftLimit, rightLimit;

printf("Enter Row : ");
scanf("%d", &row);

printf("Enter Column : ");
scanf("%d", &column);

printf("Enter Left Limit ");
scanf("%d", &leftLimit);

printf("Enter Right Limit ");
scanf("%d", &rightLimit);

int numbers[row][column] ;

fillMatrixWithNumbers( numbers, row, column,  leftLimit, rightLimit ) ;
printMatrix( numbers , row , column ) ;

int sumOfRightDiagonalElements = sumOfRightDiagonal( numbers , row , column );
printf("Sum Of Right Diagonal Elements : %d \n", sumOfRightDiagonalElements ) ;

int maksimumElement = findMaksimumElement( numbers , row , column );
printf("Maksimum Element : %d \n", maksimumElement );

*/

// 6

/*

int row , column ;
int leftLimit, rightLimit;

printf("Enter Row : ");
scanf("%d", &row);

printf("Enter Column : ");
scanf("%d", &column);

printf("Enter Left Limit ");
scanf("%d", &leftLimit);

printf("Enter Right Limit ");
scanf("%d", &rightLimit);

int firstArray[row][column] , secondArray[row][column] , resultArray[row][column] ;

fillMatrixWithNumbers( firstArray, row, column,  leftLimit, rightLimit ) ;
printMatrix( firstArray , row , column ) ;

fillMatrixWithNumbers( secondArray, row, column,  leftLimit, rightLimit ) ;
printMatrix( secondArray , row , column ) ;

sumOfTwoArray( firstArray , secondArray , resultArray , row , column ) ;
printMatrix( resultArray , row , column ) ;

*/

// 7

/*

int length ;
int leftLimit = 0 ;
int rightLimit = 2 ;

printf("Enter Length: ");
scanf("%d", &length);

int matrix[length][length] ;

fillMatrixWithNumbers( matrix, length, length,  leftLimit, rightLimit ) ;
printMatrix( matrix , length , length ) ;

checkIdentityArray( matrix , length , length );

*/

// 8

/*

int length , mean ;
int leftLimit, rightLimit;

printf("Enter Length: ");
scanf("%d", &length);

printf("Enter Left Limit ");
scanf("%d", &leftLimit);

printf("Enter Right Limit ");
scanf("%d", &rightLimit);

int numbers[length];

fillArrayWithNumbers(numbers, length , leftLimit, rightLimit);
printReverseOfArray(numbers , length , true);

mean = findAverage( numbers , length );

int standardDeviation = calculateStandardDeviation ( numbers, length, mean ) ;
printf("Standard Deviation : %d " , standardDeviation );

*/

// 9

/*

int length, expectedNumber;
int leftLimit, rightLimit;

printf("Enter Length: ");
scanf("%d", &length);

printf("Enter Number: ");
scanf("%d", &expectedNumber);

printf("Enter Left Limit ");
scanf("%d", &leftLimit);

printf("Enter Right Limit ");
scanf("%d", &rightLimit);

int numbers[length];

fillArrayWithNumbers(numbers, length , leftLimit, rightLimit);
bubbleSort(numbers , length );
printReverseOfArray(numbers , length , true);

binarySearch( numbers , length , expectedNumber );

*/

}

void binarySearch(int numbers[], int length, int expectedNumber) {

int leftIndex = 0;
int rightIndex = length - 1;

while (leftIndex <= rightIndex) {
	
    int middleIndex = leftIndex + (rightIndex - leftIndex) / 2;

    if (numbers[middleIndex] == expectedNumber) {
    	
        printf("Number was found, Index: %d\n", middleIndex);
        return ; 
        
    } else if (numbers[middleIndex] < expectedNumber) {
    	
        leftIndex = middleIndex + 1;
        
    } else {
    	
        rightIndex = middleIndex - 1;
        
    }
}

printf("Number was not found\n");
}

void bubbleSort(int numbers[], int length) {
	
    int i, j;
    for (i = 0; i < length - 1; i++) {
    	
        for (j = 0; j < length - 1 - i; j++) {
        	
            if (numbers[j] > numbers[j + 1]) {
            	
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                
            }
        }
    }
}


int calculateStandardDeviation ( int numbers[] , int length ,int mean ){

int standardDeviation ;
int sum = 0; 

int i ;
for( i = 0 ; i < length ; i ++ ){
	
	sum += pow( i - mean , 2 );
	
}

standardDeviation = sqrt(sum / length) ;

return standardDeviation ;

}



void checkIdentityArray( int matrix[][index] , int row , int column ){

bool flag = true ;


int i  , x ;
for( i = 0 ; i < row ; i++ ){

	for( x = 0 ; x < column ; x++ ){

		if( i == x && matrix[i][x] != 1 ){

			printf("Matrix is not Identity Array ");
			flag = false ;
			break;

		}

	}
	
	if( flag == false ){
	
		break;
	
	}

}

if( flag == true ){
	
	printf("Matrix is Identity Array ");
	
}
	
}


void sumOfTwoArray( int firstArray[][index] , int secondArray[][index] , int resultArray[][index] , int row , int column ){

int i  , x ;
for( i = 0 ; i < row ; i++ ){
	
	for( x = 0 ; x < column ; x++ ){
	
		resultArray[i][x] = firstArray[i][x] + secondArray[i][x] ;
	
	}
	
}
	
}


int findMaksimumElement(int numbers[][index], int row , int column ){
	
int maksimumElement = numbers[0][0];

int i , x; 
for( i = 0 ; i < row ; i ++ ){
	
	for( x = 0 ; x < column ; x ++ ){
		
		if( numbers[i][x] > maksimumElement ){
			
			maksimumElement = numbers[i][x];
			
		}
		
	}
	
	return maksimumElement ;
	
}

}

int sumOfRightDiagonal( int numbers[][index] , int row , int column ){
	
int sum = 0 ;

int i , x; 
for( i = 0 ; i < row ; i ++ ){

for( x = 0 ; x < column ; x ++ ){
	
	if( i == x ){
		
		sum += numbers[i][x];
		
	}
	
}

}

return sum;
	
}

void printMatrix( int numbers[][index] , int row , int column ){

printf("\nMatrix : \n\n");

int i , x; 
for( i = 0 ; i < row ; i ++ ){
	
	for( x = 0 ; x < column ; x ++ ){
		
		printf( "%d " , numbers[i][x] );
		
	}
	
	printf("\n");
	
}

}

void fillMatrixWithNumbers( int numbers[][index] , int row , int column , int leftLimit, int rightLimit ){

int i , x ;
for (i = 0; i < row; i++){
	
	for( x = 0 ; x < column ; x ++ ){

		int randomNumber = leftLimit + rand() % ( rightLimit - leftLimit ) ;
		numbers[i][x] = randomNumber;
	
	}

}

}

void fillArrayWithNumbers(int numbers[], int length, int leftLimit, int rightLimit){

int i ;
for (i = 0; i < length; i++){

	int randomNumber = leftLimit + rand() % ( rightLimit - leftLimit ) ;
	numbers[i] = randomNumber;

}

}

void printReverseOfArray(int numbers[], int length, bool direction ) {
	
    int i;
    if (direction) {
    	
        for (i = 0; i < length; i++) {
        	
            printf("%d. %d\n", i, numbers[i]);
            
        }
        
    } else {
    	
        for (i = length - 1; i >= 0; i--) {
        	
            printf("%d. %d\n", i, numbers[i]);
            
        }
    }
}

int findMinimumElement(int numbers[], int length){
	
int minimumElement = numbers[0];

int i;
for (i = 0; i < length; i++){
	
	if (numbers[i] < minimumElement){
	
		minimumElement = numbers[i];

	}

}

return minimumElement;

}

int findAverage(int numbers[], int length){
	
int average = 0;

int i;
for (i = 0; i < length; i++){
	
	average += numbers[i];

}

average /= length;

return average;

}






