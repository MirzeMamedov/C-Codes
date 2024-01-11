#include <stdio.h>
#include <stdlib.h>

void Options();
void givingValueAndMenuBar(int* aa , int* bb , int* cc);
int addition( int firstNumber , int secondNumber );
int subtraction( int firstNumber , int secondNumber );
int multiplication( int firstNumber , int secondNumber );
int division( int firstNumber , int secondNumber );
void reverseString( char string[] , int length );
void printString( char string[] , int length );
void bubbleSortString(char string[], int length);

int main() {
	
	// 1
	
	Options();
	
	// 2
	
	/*
	
	int length ;
	
	printf("Enter Length of String : ");
	scanf("%d", &length );
	
	char string[length];
	
	printf("Enter String : ");
	scanf("%s", &string );
	
	reverseString( string , length );
	printString( string , length );
	
	printf("Reversed String: %s\n", string);
	
	*/
	
	// 3
	
	/*
	
	int length ;
	
	printf("Enter Length of String : ");
	scanf("%d", &length );
	
	char string[length];
	
	printf("Enter String : ");
	scanf("%s", &string );
	
	bubbleSortString(string , length);
	printString(string , length);
	
	*/
	
}

void bubbleSortString(char string[], int length) {
	
int i, j;
for (i = 0; i < length - 1; i++) {
	
    for (j = 0; j < length - 1 - i; j++) {
    	
    	int result = strcmp(&string[j] , &string[j+1]);
        
		if ( result > 0 ) {

        char temp = string[j];
        string[j] = string[j + 1];
        string[j + 1] = temp;
            
        } 
    }
}
}

void reverseString(char string[], int length) {
	
    int i;
    for (i = 0; i < (length / 2); i++) {
    	
        char *firstVariable = &string[i];
        char *secondVariable = &string[length - i - 1];

        char temp = *firstVariable;
        *firstVariable = *secondVariable;
        *secondVariable = temp;
        
    }
}


void printString( char string[] , int length ){
	
	int i ;
	for( i = 0 ; i < length ; i ++ ){
		
		printf("%c", string[i]);
		
	}
	
	printf("\n");
	
}


void givingValueAndMenuBar(int* firstNumber , int* secondNumber , int* option){
	
	printf("\nEnter First Number : ");
	scanf("%d" , firstNumber );

	printf("Enter Second Number : ");
	scanf("%d" , secondNumber );

	printf("Menu \n");
	printf("1 == > addition \n");
	printf("2 == > subtraction \n");
	printf("3 == > multiplication \n");
	printf("4 == > division \n");
	printf("5 == > Quit\n");
	scanf("%d" , option);
	
}

void Options(){ 
	
	int firstNumber , secondNumber , option;
    int *ptrFirst = &firstNumber;
    int *ptrSecondNumber = &secondNumber;
    int *ptrOtion = &option;
	givingValueAndMenuBar(ptrFirst , ptrSecondNumber, ptrOtion);
	
    printf("1. %d, 2. %d, 3.option= %d", firstNumber , secondNumber , option);
	int (*functionPointer)(int , int);
		
	switch(option){
		
		case 1 :
			
			functionPointer = addition;
			break;
			
			
		case 2 :
			
			functionPointer = subtraction;
			break;
			
			
		case 3 :
			
			functionPointer = multiplication;
			break;
			
		case 4 :
		
			functionPointer = division;
			break;

        case 5:
        break;
		
	
	}
	int result = functionPointer( firstNumber , secondNumber );
	printf("\nResult : %d" , result );
	
	Options();
	
	
}

int addition( int firstNumber , int secondNumber ){
	
	int result = firstNumber + secondNumber;
	
	return result;

}

int subtraction( int firstNumber , int secondNumber ){
	
	int result = firstNumber - secondNumber;
	
	return result;

}

int multiplication( int firstNumber , int secondNumber ){
	
	int result = firstNumber * secondNumber;
	
	return result;

}

int division( int firstNumber , int secondNumber ){
	
	float result = firstNumber / secondNumber;
	
	return result;

}

