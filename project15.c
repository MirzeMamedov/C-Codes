#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int length( long long number );
long long reverse( long long number, int lengthOfNumber );
void checkPalindrome( long long number , long long reverseNumber );

int main(){

	// puts gets getchar putchar fgets sizeof
	// continue

	// 3

	/*

	int number , sum ;

	printf("Enter number : ");
	scanf("%d" , &number);

	sum = 0;
	while( number > 0 || number == -1 ){

		if( number == -1 ){

			printf("Calculation is ended : %d " , sum );

			break;

		} else {

			sum += number;

			printf("Enter number : ");
			scanf("%d" , &number);

		}
	}

	*/

	// 4

	/*

	char letter;
	char vowels[6] = "aeiou";
	int flag = 0;

	printf("Enter Letter : ");
	scanf(" %c", &letter);

	int i;
	for (i = 0; i < 5; i++) {

		if (letter == vowels[i]) {

			flag = 1;
			printf("It is Vowel\n");
			break;

		}

	}

	if (flag == 0) {

		printf("It is Consonant\n");

	}

	*/

	// 5

	/*

	int flag = 0 ;
	char character ;
	char alphabet[26] = "qazwsxedcrfvtgbyhnujmikolp";

	printf( "Enter Character  : " );
	scanf( "%c" , &character );

	int i;
	for( i = 0 ; i < 26 ; i++ ){

		if( character == alphabet[i] ){

			flag = 1;
			printf("Character is a letter ");
			break;

		}

	}

	if( flag == 0 ){

		printf("Character is not a letter ");

	}

	*/

	// 6

	/*

	int firstNumber, secondNumber;

	printf("Enter numbers : ");
	scanf("%d %d", &firstNumber, &secondNumber);

	int i;
	for (i = 2; i < firstNumber * secondNumber + 1; i++ ) {

		if (i % firstNumber == 0 && i % secondNumber == 0) {

			printf("LCM : %d ", i);
			break;

		}

	}

	*/

	// 7

	/*

	int power , number , lastNumber ;

	printf("Enter Power , Number  : ");
	scanf("%d %d" , &power , &number );

	lastNumber = 1 ;

	int i = 0 ;
	while( i < power ){

		lastNumber *= number;
		i++;

	}

	printf("Power of The Number : %d " , lastNumber );

	*/
	
	// 8
	
	/*
	
	long long number;
	printf("The Number : ");
	scanf("%d" , &number );
		
	int lengthOfNumber = length(number);
	printf("The Length of : %d \n" , lengthOfNumber );
	
	long long reverseNumber = reverse( number , lengthOfNumber ) ;
	printf("ReverseNumber : %d \n" , reverseNumber );
	
	checkPalindrome( number , reverseNumber );
	
	*/

	// 9

	/*

	int accountNumber , mortgageAmount , mortgageTerm ;
	float interestRate , monthlyPayment  ;

	printf("Enter account number (-1 to end): " );
	scanf("%d" , &accountNumber );

	while(accountNumber != -1){

	printf("Enter mortgage amount (in dollars): ");
	scanf("%d" , &mortgageAmount );

	printf("Enter mortgage term (in years): ");
	scanf("%d" , &mortgageTerm );

	printf("Enter interest rate (as a decimal): ");
	scanf("%f" , &interestRate );

	monthlyPayment  = (mortgageAmount + (mortgageAmount * interestRate * mortgageTerm)) / (mortgageTerm * 12);

	printf("The monthly payable interest $ %.1f \n" , monthlyPayment );

	printf("Enter account number (-1 to end): " );
	scanf("%d" , &accountNumber );

	}

	*/

	// 10

	/*

	int counter , number , largest ;

	printf("Enter Number : ");
	scanf("%d" , &number );

	while(counter < 9){

		if (number > 0 ){

			if ( number > largest ){

				largest = number ;

		}

			printf("Enter Number : ");
			scanf("%d" , &number );
			counter ++;

		} else {

			printf("Enter Positive Number : ");
			scanf("%d" , &number );

		}

	}

	printf("Largest : %d " , largest );

	*/

	// 14

	/*

	int number , countOfNine , digit;

	printf("Enter Number : ");
	scanf("%d" , &number );

	do{
		
		digit = number % 10;
		number /= 10;
		
		if(digit == 9 ){
			
			countOfNine ++;
			
		}

	}while( number > 0 );

	printf("Count Of Nine : %d" , countOfNine );

	*/

	// 17

	/*

	int i;
	for(i = 1 ; i <= 10 ; i ++ ){

		printf("%d\n", i );

	}

	*/

	// 18

	/*

	int factorial = 1;

	int i;
	for(i = 1 ; i <= 5 ; i ++ ){

		factorial *= i ;
		printf("%d : ", i );
		printf("%d \n" , factorial );

	}

	printf("Factorial 5 : %d " , factorial );

	*/

	// 19

	/*

	int number;
	bool flag = true;
	
	printf("The Number : ");
	scanf("%d" , &number );
	
	int i , x ;
	for( i = 2 ; i < number ; i ++ ){
		
		for( x = 2 ; x < i ; x ++  ){
			
			if( i%x == 0 ){
				
				flag = false;
				break;
				
			}else{
				
				flag = true;
				
			}
			
		}
		
		if(flag == true){
			
			printf("Prime : %i \n" , i );
			flag = false;
			
		}
		
	}

	*/

	// 20

	/*

	int number , digit ;

	printf("Enter Number : ");
	scanf("%d" , &number );

	while( number > 0 ){

		digit = number % 10;
		number /= 10;
		printf("digit : %d \n" , digit );

	}

	*/

	// 21

	/*

	int N ;

	printf("Enter Number : ");
	scanf( "%d" , &N );

	printf("Even Number till N : %d \n" , N );

	int i ;
	for(i = 2 ; i < N ; i += 2 ){

		printf("%d " , i);

	}

	*/

	// 22

	/*

	int weekNumber ;

	printf("Enter Week Number : ");
	scanf("%d" , &weekNumber );

	switch(weekNumber){

		case 1:
			puts("Monday");
			break;
		case 2:
			puts("Tuesday");
			break;
		case 3:
			puts("Wedneday");
			break;
		case 4:
			puts("Thursday");
			break;
		case 5:
			puts("Friday");
			break;
		case 6:
			puts("Saturday");
			break;
		case 7:
			puts("Sunday");
			break;
		default:
			puts("There is 7 days in week");
			break;

	}

	*/

	// 26
	
	/*
	
	int number , numBinary;
	int digitsBinary[10] ; 
	
	printf("The Number : ");
	scanf("%d" , &number );
	
	int i;
	for(i = 10 ; i > 0 ; i -- ){
		
		numBinary += pow(2,i);
		
		if( numBinary <= number ){
			
			digitsBinary[i] = 1;
			
		} else{
			
			digitsBinary[i] = 0 ;
			numBinary -= pow(2,i);
			
		}
		
	}
	
	numBinary = 0;
	
	int x;
	for(x = 10 ; x > 0 ; x-- ){
		
		numBinary += (pow(10,x)*digitsBinary[x]);
		
	}
	
	if( number%2 == 1 ){
		
		numBinary += 1;
		
	}
	
	printf("The intiger \t The binary \t The octal \t The hexadecimal \n");
	printf("%d          \t %d   \t %o        \t %x " , number , numBinary , number , number );
	
	*/
	
	// 27 
	
	/*
	
	float pi = 0.0, addition = 4.0;
	int number ;
	
	printf( "Enter Number : " );
	scanf("%d" , &number );
	
	addition = 4 ;
	
	int i ;
	for( i = 1 ; i < number ; i += 2 ){
			
			pi += addition/i;
			addition = - addition;
			printf("pi : %f , addition : %f \n" , pi , addition );
		
	}
	
	printf("pi : %f , number : %d \n", pi , number );
	
	*/


}


int length(long long number) {
    int count = 0;
    
    while (number > 0) {
        count += 1;
        number /= 10;
    }
    
    return count;
}

long long reverse(long long number, int lengthOfNumber) {
	
    long long reverseNumber = 0;
    
	int i;
    for (i = lengthOfNumber; i > 0; i--) {
        
		int digit = number % 10;
        number /= 10;
        
		reverseNumber += digit * (long long)pow(10, i - 1);
    
	}
    
	return reverseNumber;

}

void checkPalindrome(long long number , long long  reverseNumber) {
	

    if (number == reverseNumber) {
    	
        printf("Palindrome\n");
    
	} else {
    
	    printf("Not Palindrome\n");
    
	}

}


