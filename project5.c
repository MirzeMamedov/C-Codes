#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define ARRAY_SIZE 6

// 1

void alternatingLetters( char s[100] );

// 2

int avarageOfSixIntigerNumbers(int sum);
int sumOfSixIntigerNumbers(int number1 ,int number2  ,int number3 ,int number4 ,int number5 ,int number6);

// 3

double avarageOfSixDoubleNumbers(double sum);
double sumOfSixDoubleNumbers(double values[]);

// 5.a

void findingTheLastAndFirstOcurrance(char string[] , char letter);

//5.b

void isPresent (char *string , char substring[] );

// 5.c

int countWordOccurrences(char *string , char substring[] );

// 5.d

void tokenizeString(char *string, char *delimiters);

// 9

int countWords(char *string);
void removeWord(char *string, char *word);

// 10

int countWordWithTokenizing(char *string);

// 11.1

void stringCopy1(char string1[], char string2[] );
void stringConcatenation1(char string1[], char string2[] );

int main() {
	
	
	/*
    char source[] = "Hello, World!";
    char destination[20];

    // Find the position of the comma
    char *commaPosition = strchr(source, ',');

    if (commaPosition != NULL) {
        // Copy the substring after the comma (excluding the comma itself)
        strncpy(destination, commaPosition + 2, sizeof(destination) - 1);
        destination[sizeof(destination) - 1] = '\0';  // Null-terminate the destination string

        printf("Source: %s\n", source);
        printf("Extracted Substring: %s\n", destination);
    } else {
        printf("Comma not found in the string.\n");
    }
	*/
		
	/*char buffer[100];
	fgets(buffer, sizeof(buffer), stdin);
	puts(buffer);*/
	
	/*char data[] = "42 3.14 Hello";
	int num;
	float f;
	char str[20];
	sscanf(data, "%d %f %s", &num, &f, str);
	
	printf("%d %.2f %s", num, f, str);
	*/
	
	// 1
	
	/*
	char s[100];
	
	printf("Enter line of text :");
	scanf("%s",&s);
	
	alternatingLetters(s);
	
	printf("S : %s" , s );
	*/

	// 2 
	
	//12 24 36 48 60 72
	
	/*
	int number1 , number2  , number3 , number4 , number5 , number6; 
	char s[100];
	
	printf("Enter line of Numbers (with backspaces like 1 2 3 4 5 6 ): ");
	fgets(s, sizeof(s), stdin);
	
	sscanf(s,"%d %d %d %d %d %d" ,  &number1 , &number2  , &number3 , &number4 , &number5 , &number6 );
	printf("%d %d %d %d %d %d\n" ,  number1 , number2  , number3 , number4 , number5 , number6);
	
	int sum = sumOfSixIntigerNumbers( number1 , number2  , number3 , number4 , number5 , number6 );
	int avarage = avarageOfSixIntigerNumbers( sum);
	printf("Summery : %d , Avarage : %d" , sum, avarage );
	*/
	
	// 3 
	
	/*
	
	char string[6];
    double values[6];
    double sum = 0.0;
	double average = 0.0;
    
    char emptyString[] = "";
    
    int i;
    for ( i = 0; i < 6; i++) {
        printf("%d value: ", i + 1);
        fgets(string, sizeof(string), stdin);

        values[i] = strtod(string, NULL);
        strcpy(emptyString,string); 
    }
    
    sum = sumOfSixDoubleNumbers(values);
    average = sum / 6;
    
    int x;
    for ( x = 0; x < 6; x++) {
        printf("%d. %f\n", x + 1 , values[x]);
    }

    printf("Sum: %f\n", sum);
    printf("Average: %f\n", average);

    */
    
    // 5
    
    // 5.a
    
    /*
    char string[] = "Teaching is an instruction or delivering a skill or subject";
    char letter = 'e';
    
	findingTheLastAndFirstOcurrance( string, letter);
    */
    
    // 5.b
	
	/*
	
	char string[] = "Educational methods include teaching, training and discussion" ;
    char substring[]  = "discussion";
    
    isPresent(string , substring);
    
    */
    
    // 5.c
    
    /*
    char string[] = "Teaching is an instruction or delivering a skill or subject" ;
    char substring[]  = "or";
    
    int count = countWordOccurrences(string , substring);
    printf("Count : %d",count);
    */
    
    // 5.d
    
    /*
    char string[] = "Educational@ methods include tea@ching, tra@ining @nd discussion" ;
    char delimiter[] = "@";
    
    tokenizeString( string , delimiter);
    */
    
    // 6
    /*
    char *string1 = malloc(100*sizeof(char));
    char *string2 = malloc(100*sizeof(char));
    
    printf("Enter String1 : ");
    fgets(string1,100,stdin);
    string1[strcspn(string1, "\n")] = '\0';
    printf("string1 : %s" , string1 );
    
    printf("Enter String2 : ");
    fgets(string2,100,stdin);
    string2[strcspn(string2, "\n")] = '\0';
    printf("string2 : %s" , string2 );
    
    strncat(string1,string2,strlen(string2));
    printf("\nthe concatenated string : %s" , string1 );
    
    free(string1);
    free(string2);
    */
    
    // 7
    
    /*
    char *string1 = malloc(100*sizeof(char));
    char *string2 = malloc(100*sizeof(char));
    
    printf("Enter String1 : ");
    fgets(string1,100,stdin);
    string1[strcspn(string1, "\n")] = '\0';
    printf("string1 : %s , length : %d\n" , string1 , strlen(string1) );
    
    printf("Enter String2 : ");
    fgets(string2,100,stdin);
    string2[strcspn(string2, "\n")] = '\0';
    
    strncat(string1,string2,strlen(string2));
    printf("String : %s , length : %d" , string1 , strlen(string1) );
        
    free(string1);
    free(string2);
    */
    
    // 8
    
    /*
    char string[100];
    
    printf("Enter a line of text: ");
    fgets(string, sizeof(string), stdin);
    
    printf("%s",string);
    
    char *token = strtok(string," ");
    char *tokens[15] ;
    
    int i;
    for(i = 0 ; token != NULL ; i++ ){
    	
		tokens[i] = token;    	
    	token = strtok(NULL," ") ;
    	
	}
	
	printf("Length : %d\n" , i );
	
	int x;
    for (x = i-1 ; x > -1; x-- ) {
    	
        printf("%s ", tokens[x]);
        
    }
    */
    
    // 9
    
    /*
    char string[100];
    char word[20];
    
    printf("Enter a line of text: ");
    fgets(string, sizeof(string), stdin);
    
    printf("Enter word: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0'; 
    
    char stringCopy[100];
    strcpy(stringCopy, string);
    
    printf("%s",string);
    
    printf("The count of words in String : %d " , countWords( stringCopy ) );
    
    removeWord( string, word);
    
    printf("The count of words in String : %d \n" , countWords( string ) );
    
    printf("%s",string);
	*/
	
	// 10
	
	/*
	char string[500];
    
    printf("Enter several lines of text (Ctrl + D to end on Unix/Linux, Ctrl + Z on Windows):\n");
    
    int total = 0;
    
    while (fgets(string, sizeof(string), stdin) != NULL) {
    	
        int wordCount = countWordWithTokenizing(string);
        total+= wordCount;
        
        printf("Number of words: %d\n", wordCount);
        
    }
    
    printf("Number of Total words: %d\n", total);
    */
    
    // 11
    
    char string1[100] = "Mirze";
    char string2[100] = "Hikmet";
    
    //stringCopy1(string1, string2);
    
    //printf("%s --- %s", string1, string2);
    
    stringConcatenation1(string1, string2);
    
    printf("%s --- %s", string1, string2);
    
}

// 1

void alternatingLetters( char s[100] ){
	
	int i ;
	for(i = 0 ; i < strlen(s) ; i ++ ){
		
		if(s[i] > 65 && s[i] < 90 ){
			
			s[i] = s[i] + 32;
			
		} else if (s[i] > 97 && s[i] < 122 ){
			
			s[i] = s[i] - 32;
			
		}
		
	}
	
}

// 2

int avarageOfSixIntigerNumbers(int sum){
	
	return sum/ 6 ;
	
}

int sumOfSixIntigerNumbers(int number1 ,int number2  ,int number3 ,int number4 ,int number5 ,int number6){
	
	return number1  + number2   + number3  + number4  + number5  + number6 ;
	
}

// 3

double avarageOfSixDoubleNumbers(double sum){
	
	return sum / 6 ;
	
}

double sumOfSixDoubleNumbers(double values[]){
	
	double sum = 0.0;
	
	int i;
	for( i = 0 ; i < 6 ; i ++ ){
		
		sum += values[i];
		
	}
		
	return sum;
	
}

// 5.a

void findingTheLastAndFirstOcurrance(char string[] , char letter){
	
	int firstIndex , lastIndex;
	bool flag = false;
	
	int i;
	for(i = 0; i < strlen(string) ; i++ ){
		
		if( string[i] == letter ){
			
			flag = true;
			firstIndex = i;
			
			for(i = i ; i < strlen(string) ; i++ ){
				
				if( string[i] == letter){
					
					lastIndex = i ;
				
				}
								
			}
			
		}
		
		if(flag == true ){
			
			printf("First Index : %d , Last Index : %d" , firstIndex , lastIndex );
			break;
			
			
		}
		
	}
	
}

// 5.b

void isPresent (char *string , char substring[] ){
	
	char *copy = malloc(strlen(substring)+1);
	
	int i;
	for(i = 0; i < strlen(string) ; i++ ){
		
		strncpy(copy, string + i, strlen(substring) );
		//printf("copy : %s\n" , copy );
		
		if(strcmp(copy,substring)==0){
			
			printf("Present!");
			break;
			
		}
		
	}
	
}

// 5.c

int countWordOccurrences(char *string , char substring[] ){
	
	char *copy = malloc(strlen(substring)+1);
	int count = 0; 
	
	int i;
	for(i = 0; i < strlen(string) ; i++ ){
		
		strncpy(copy, string + i, strlen(substring) );
		
		if(strcmp(copy,substring)==0){
			
			count += 1;
			
		}
		
	}
	
	return count;
	
}

// 5.d

void tokenizeString(char *string, char *delimiters) {
	
    char *token = strtok(string, delimiters);

    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delimiters);
    }
}

// 9

int countWords(char *string){
	
    int count = 1;

    int i;
    for (i = 0; i < strlen(string); i++) {
    	
        if (isalpha(string[i + 1]) && string[i] == ' ') {
        	
            count += 1;
            
        }
    }
    
    return count;
	
}

void removeWord(char *string, char *word){
	
	char *token = strtok(string, " ");
    char newString[100] = "";

    while (token != NULL) {

        if (strstr(token, word) == NULL) {
        	
            strcat(newString, token);
            strcat(newString, " ");
            
        }

        token = strtok(NULL, " ");
    }

    strcpy(string, newString);
    
}

// 10

int countWordWithTokenizing(char *string) {
	
    int count = 0;

    char *token = strtok(string, " \n");

    while (token != NULL) {
        count++;
        token = strtok(NULL, " \n");
    }

    return count;
    
}

// 11.1

void stringCopy1(char string1[], char string2[] ){
	
	int i;
	for( i = 0 ; i < strlen(string1) ; i++ ){

		string1[i] = string2[i];
		
	}
	
}

void stringConcatenation1(char string1[], char string2[] ){
	
	int len1 = strlen(string1);
	
	int i;
	for( i = 0 ; i < strlen(string2) ; i++ ){
		
		string1[ i + len1 ] = string2[i];
		
	}
	
}



