#include <stdio.h>
#include <stdlib.h>

long addTwoNumber(long *firstNumber, long *secondNumber);
void findMaximum(int *firstNumber, int *secondNumber);
int findFactorial(int number, int *factorial);

int main()
{
    /*int a  = 5; 
	
	int *pointerA = &a ;
	
	printf("%d \n " , a );
	printf("&a == %u \n " , &a );
	printf("%u \n " , pointerA );
	printf("%d \n " , pointerA );/

    // 5

    /*

	int firstNumber, secondNumber;

    printf("Enter First Number: ");
    scanf("%d", &firstNumber);

    printf("Enter Second Number: ");
    scanf("%d", &secondNumber);

    int *pointerOfFirstNumber = &firstNumber;
    int *pointerOfSecondNumber = &secondNumber;

    printf("The Address of the First Number: %p\n", *pointerOfFirstNumber);
    printf("The Address of the Second Number: %p\n", *pointerOfSecondNumber);

    printf("The Value of the First Number via Pointer: %d\n", *pointerOfFirstNumber);
    printf("The Value of the Second Number via Pointer: %d\n", *pointerOfSecondNumber);

    printf("Enter a value for the pointer of the First Number: ");
    scanf("%d", pointerOfFirstNumber);

    printf("Enter a value for the pointer of the Second Number: ");
    scanf("%d", pointerOfSecondNumber);

    printf("The Value of the First Number Pointer: %d\n", *pointerOfFirstNumber);
    printf("The Value of the Second Number Pointer: %d\n", *pointerOfSecondNumber);
    
    printf("The Value of the First Number : %d\n", firstNumber);
    printf("The Value of the Second Number : %d\n", secondNumber);
    
    int temporarilyNumberOfFirst = firstNumber;
    int temporarilyNumberOfSecond = secondNumber;
    
    printf("The Value of temporarilyNumberOfFirst: %d\n", temporarilyNumberOfFirst);
    printf("The Value of temporarilyNumberOfSecond: %d\n", temporarilyNumberOfSecond);

    printf("Enter a value for temporarilyNumberOfFirst: ");
    scanf("%d", &temporarilyNumberOfFirst);

    printf("Enter a value for temporarilyNumberOfSecond: ");
    scanf("%d", &temporarilyNumberOfSecond);

    printf("The Value of temporarilyNumberOfFirst: %d\n", temporarilyNumberOfFirst);
    printf("The Value of temporarilyNumberOfSecond: %d\n", temporarilyNumberOfSecond);

    printf("The Value of the First Number: %d\n", firstNumber);
    printf("The Value of the Second Number: %d\n", secondNumber);
    
    */

    // 7

    /*
    
    int firstNumber , secondNumber ;

    printf("Enter First Number: ");
    scanf("%d", &firstNumber);

    printf("Enter Second Number: ");
    scanf("%d", &secondNumber);

    int *firstNumberPointer = &firstNumber;
    int *secondNumberPointer = &secondNumber;

    int sum = *firstNumberPointer + *secondNumberPointer;

    printf("%d + %d = %d", *firstNumberPointer, *secondNumberPointer, sum);
    
    */

    // 8

    /*
    
    long firstNumber , secondNumber ;

    printf("Enter First Number: ");
    scanf("%d", &firstNumber);

    printf("Enter Second Number: ");
    scanf("%d", &secondNumber);
    
    long sum = addTwoNumber( &firstNumber , &secondNumber );
    
    printf("The result : %lld" , sum );
    
    */

    // 9

    /*
    
    int firstNumber , secondNumber ;

    printf("Enter First Number: ");
    scanf("%d", &firstNumber);

    printf("Enter Second Number: ");
    scanf("%d", &secondNumber);
    
    findMaximum( &firstNumber, &secondNumber );
    
    */

    // 10

    /*
    
    int firstNumber , secondNumber ;

    printf("Enter First Number: ");
    scanf("%d", &firstNumber);

    printf("Enter Second Number: ");
    scanf("%d", &secondNumber);
    
    int *pointerOfFirstNumber = &firstNumber;
    int *pointerOfSecondNumber = &secondNumber;

    printf("The Value of The Pointer of The First Number : %d\n", *pointerOfFirstNumber);
    printf("The Value of The Pointer of The Second Number : %d\n", *pointerOfSecondNumber);

    int temp = *pointerOfFirstNumber;
    *pointerOfFirstNumber = *pointerOfSecondNumber;
    *pointerOfSecondNumber = temp;
    
    printf("First Number : %d , Second Number : %d\n", *pointerOfFirstNumber, *pointerOfSecondNumber);
    
    */

    // 11

    /*
    
    int number , factorial ;

    printf("Enter Number: ");
    scanf("%d", &number);
    
    factorial = 1;
    factorial = findFactorial( number , &factorial );
    
    printf( "Factorial : %d" , factorial );
    
    */

    //12

    /*
    
    int array[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    int *ptr = array;

    for (int i = 0; i < 5; i++) {
        
        sum += *ptr;
        ptr++;
        
    }

    printf("The sum of the elements is: %d\n", sum);

    */

    // 13
    
    /*
    
    int array[5] = {1, 2, 3, 4, 5};

    int *ptr = array;

    for (int i = 4; i > -1; i--)
    {
        printf("Index %d : %d   ", i , ptr[i]);
    }
    
    */
    
}

int findFactorial(int number, int *factorial)
{
    int i;
    for (i = 2; i < number + 1; i++)
    {
        *factorial *= i;
    }

    return *factorial;
}

long addTwoNumber(long *firstNumber, long *secondNumber)
{
    long sum = *firstNumber + *secondNumber;

    return sum;
}

void findMaximum(int *firstNumber, int *secondNumber)
{
    if (*firstNumber > *secondNumber)
    {
        printf("%d is greater than %d", *firstNumber, *secondNumber);
    }
    else
    {
        printf("%d is greater than %d", *secondNumber, *firstNumber);
    }
}
