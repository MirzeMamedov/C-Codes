#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int sumOfDigits(int number);
int LCM(int firstNumber, int secondNumber);

void rootsOfFunction(float a, float b, float c);

int main()
{
    // 1

    /*
    
    int number ;
    
    printf("Enter Number : " );
    scanf("%d" , &number ) ;
    
    int sum = sumOfDigits( number ) ;
    printf("Sum Of Digits : %d " , sum );
    
    */

    // 2
    
    /*
    
    int firstNumber, secondNumber;

    printf("Enter First Number : ");
    scanf("%d", &firstNumber);

    printf("Enter Second Number : ");
    scanf("%d", &secondNumber);
    
    int lcm = LCM(firstNumber , secondNumber);
    printf("LCM of %d and %d is %d " , firstNumber , secondNumber , lcm );
    
    */
    
    // 3
    
    /*
    
    float a,b,c;
    
    printf("Enter a b c of Function : \n");
    scanf("%f %f %f",&a, &b, &c);
    
    rootsOfFunction(a,b,c);
    
    */
    
}
void rootsOfFunction(float a, float b, float c)
{
    float d, firstRoot , secondRoot ;
    
    d = pow(b,2)-4*a*c;
    
    if ( d > 0 ){
    	
        firstRoot = ( -b + sqrt(d) ) / ( 2*a );
        secondRoot = ( -b - sqrt(d) ) / ( 2*a );
        printf("First Root is %.2f \t Second Number = %.2f " , firstRoot , secondRoot);
        
    }
    else if( d == 0 ){
    	
        firstRoot=(-b+sqrt(d))/(2*a);
        printf("Root is %.2f",firstRoot);
        
    }
    else{
    	
        printf( "Function have not roots" );
        
    }
}

int sumOfDigits(int number)
{
    int digit;
    int sum = 0;

    while (number > 0)
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    return sum;
}

int LCM(int firstNumber, int secondNumber)
{
    int i ;
    for (i = 2; i <= firstNumber * secondNumber; i++)
    {
        if (i % firstNumber == 0 && i % secondNumber == 0)
        {
            return i;
        }
    }
}

