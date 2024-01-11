#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define length 6

int isEven(int number);

int MultipleDigit(int number);

int FahrenheitToCelsius(int fahrenheit);

int RecursiveFactorial(int number);
int nonRecursiveFactorial(int number);

double hypotenuseCalculation(double firstSide, double secondSide);
double areaOfTheTriangle(double firstSide, double secondSide, double thirdSide);

void rectangleOfAsterisks(int row, int column);
void rectangleOfAnyCharacter(int row, int column, char character);

int toQualityPoints(int average);
int power(int base, int exponent);

void play(int prediction, int number);

void tableOfMoney(double usd, double yen, double euro);
double toEuro(double usd);
double toYen(double usd);

int main()
{

    // 2

    /*
    int numbers[length] = { 10 , 18 , 75 , 43 , 92 , 86 } ;

    int i ;
    for( i = 0 ; i < length ; i++ ){

        int output = isEven(numbers[i]) ;
        printf("%d : %d " , numbers[i] , output );

    }

    */

    // 3

    /*

    int number ;

    printf("Enter Number : ");
    scanf("%d" , &number );

    int multiple = MultipleDigit( number );

    printf("Multiple of Digits : %d " , multiple );

    */

    // 4

    /*

    int fahrenheit ;

    printf("Enter Degree (Fahrenheit) : ");
    scanf("%d" , &fahrenheit );

    int celsius =  FahrenheitToCelsius ( fahrenheit ) ;

    printf("fahrenheit ==> %d , celsius ==> %d " , fahrenheit , celsius );

    */

    // 5

    /*

    int factorialRecursive , factorialNoneRecursive , number ;

    printf("Enter Number : ");
    scanf("%d" , &number );

    factorialNoneRecursive = nonRecursiveFactorial( number ) ;
    factorialRecursive = RecursiveFactorial( number) ;

    printf("factorialRecursive : %d , factorialNoneRecursive : %d " , factorialRecursive , factorialNoneRecursive );

    */

    // 6

    /*

    float x ;

    x = fabs(10.85) ;
    printf("X  == > %f \n" , x );

    x = floor(10.85) ;
    printf("X  == > %f \n" , x );

    x = fabs(-0.678) ;
    printf("X  == > %f \n" , x );

    x = ceil(9.234) ;
    printf("X  == > %f \n" , x );

    x = fabs(0.0) ;
    printf("X  == > %f \n" , x );

    x = ceil(-34.87) ;
    printf("X  == > %f \n" , x );

    x = ceil(-fabs(-12 - floor(-9.5)));
    printf("X  == > %f \n" , x );

    */

    // 7

    /*

    double firstSide , secondSide ;

    printf("Enter Sides : ");
    scanf("%lf %lf", &firstSide , &secondSide );

    while( firstSide < 0 || secondSide < 0 ){

        printf("Enter Sides : ");
        scanf("%lf %lf", &firstSide , &secondSide );

    }

    double hypotenuse = hypotenuseCalculation( firstSide , secondSide );
    printf("Hypotenuse : %f " , hypotenuse );

    */

    // 8

    /*

    double area , firstSide , secondSide , thirdSide ;

    printf("Enter Sides : ");
    scanf( "%lf %lf %lf" , &firstSide , &secondSide , &thirdSide );

    area = areaOfTheTriangle( firstSide , secondSide , thirdSide ) ;
    printf("Area : %f " , area );

    */

    // 9

    /*

    int row , column ;

    printf("Enter Row : ");
    scanf("%d" , &row );

    printf("Enter Column : ");
    scanf("%d" , &column );

    rectangleOfAsterisks ( row , column ) ;

    */

    // 10

    /*

    int row , column ;
    char character ;

    printf("Enter Row : ");
    scanf("%d" , &row );

    printf("Enter Column : ");
    scanf("%d" , &column );

    printf("Enter Character : ");
    scanf(" %c", &character);

    rectangleOfAnyCharacter ( row , column , character ) ;

    */

    // 11

    /*

    double usd , yen , euro ;

    printf("Enter USD : ");
    scanf("%lf" , &usd);

    yen = toYen( usd );
    printf("Yen : %.2lf\n" , yen );

    euro = toEuro( usd );
    printf("Euro : %.2lf\n" , euro );

    tableOfMoney(usd , yen , euro);

    */

    // 12

    /*

    int average ;

    printf("Enter Average : ");
    scanf("%d", &average );

    int grade = toQualityPoints ( average ) ;
    printf("Grade : %d " , grade) ;

    */

    // 13

    /*

    srand(time(NULL));
    int number = 1 + rand() % 1000;

    int prediction;

    printf("Enter prediction : ");
    scanf("%d", &prediction);

    play( prediction, number );

    */

    // 14

    /*

    int base, exponent;

    printf("Enter Base : ");
    scanf("%d", &base);

    printf("Enter Exponent : ");
    scanf("%d", &exponent);

    int result = power(base, exponent);
    printf("Result : %d ", result);

    */
}

void rectangleOfAnyCharacter(int row, int column, char character)
{

    int i, x;
    for (i = 0; i < row; i++)
    {

        for (x = 0; x < column; x++)
        {

            printf("%c", character);
        }

        printf("\n");
    }
}

void rectangleOfAsterisks(int row, int column)
{

    int i, x;
    for (i = 0; i < row; i++)
    {

        for (x = 0; x < column; x++)
        {

            printf("*");
        }

        printf("\n");
    }
}

double toYen(double usd)
{

    return usd * 118.87;
}

double toEuro(double usd)
{

    return usd * 0.92;
}

void tableOfMoney(double usd, double yen, double euro)
{

    printf("Usd \t Yen \t Euro \n");
    printf("%.2lf\t %.2lf\t %.2lf ", usd, yen, euro);
}

double areaOfTheTriangle(double firstSide, double secondSide, double thirdSide)
{

    double p = (firstSide + secondSide + thirdSide) / 2;

    double area = sqrt((p * (p - firstSide) * (p - secondSide) * (p - thirdSide)));

    return area;
}

double hypotenuseCalculation(double firstSide, double secondSide)
{

    double hypotenuse = sqrt((pow(firstSide, 2) + pow(secondSide, 2)));

    return hypotenuse;
}

int nonRecursiveFactorial(int number)
{

    int factorial = 1;

    int i;
    for (i = 1; i <= number; i++)
    {

        factorial *= i;
    }

    return factorial;
}

int RecursiveFactorial(int number)
{

    if (number <= 1)
    {

        return 1;
    }
    else
    {

        return number * RecursiveFactorial(number - 1);
    }
}

int FahrenheitToCelsius(int fahrenheit)
{

    int celsius = (fahrenheit - 32) * 5 / 9;
}

int isEven(int number)
{

    if (number % 2 == 0)
    {

        return 1;
    }
    else
    {

        return 0;
    }
}

int MultipleDigit(int number)
{

    int multipleDigit, digit;

    multipleDigit = 1;

    while (number > 0)
    {

        digit = number % 10;
        multipleDigit *= digit;
        number /= 10;
    }

    return multipleDigit;
}
int toQualityPoints(int average)
{

    if (average > 90 && average < 100)
    {

        return 4;
    }
    else if (average > 80 && average < 90)
    {

        return 3;
    }
    else if (average > 70 && average < 80)
    {

        return 2;
    }
    else if (average > 60 && average < 70)
    {

        return 1;
    }
    else
    {

        return 0;
    }
}

int power(int base, int exponent)
{
    if (exponent > 1)
    {
        return base = base * power(base, exponent - 1);
    }
    else
    {
        return base;
    }
}

void play(int prediction, int number)
{

    if (prediction > number)
    {
        printf("High  , Try Again :");
        scanf("%d", &prediction);
        play(prediction, number);
    }
    else if (prediction < number)
    {

        printf("Low , Try Again :");
        scanf("%d", &prediction);
        play(prediction, number);
    }
    else
    {

        char character;

        printf("Excelent you guessed number Do you want to play again (y,n) : ");

        char temp;

        scanf("%c", &character);
        scanf("%c", &character);

        if (character == 'y')
        {

            srand(time(NULL));
            number = 1 + rand() % 1000;

            prediction;

            printf("Enter prediction : ");
            scanf("%d", &prediction);

            play(prediction, number);
        }
        else
        {

            printf("\nQuit !!");
        }
    }
}

