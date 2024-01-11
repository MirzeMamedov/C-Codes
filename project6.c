#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printLatinWord( char *token );

int main(){
	
	
	// 3 
	
	/*
	char *phoneNumber = malloc(sizeof(char) * 9);
	//char *phoneNumberLastEdition = malloc(sizeof(char) * 8);
    char *phoneNumberLastEdition = calloc(8,sizeof(char));
	//strcpy(phoneNumberLastEdition,"");
	
    printf("Enter Phone Number (555-5555): ");
    fgets(phoneNumber, 9, stdin);

    phoneNumber[strcspn(phoneNumber, "\n")] = '\0';

    char *token = strtok(phoneNumber, "-");
    puts("first ");
	puts(token);	
    while (token != NULL) {
    	
        strcat(phoneNumberLastEdition, token);
        token = strtok(NULL, "-");
        puts("sec ");
	puts(token);
        
    }

    puts(phoneNumberLastEdition);

    free(phoneNumber);
    free(phoneNumberLastEdition);

    return 0;
	*/
	
	// 4
	
	/*
	char firstForm[12] , secondForm[25]="" ;
	int month , day , year;
	char strDay[3] , strYear[5];
	
	char months[][10] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

    printf("Enter Date (07/21/2003): ");
    fgets(firstForm, 12, stdin);
    
    sscanf(firstForm , "%d/%d/%d" , &month , &day , &year );
    
    sprintf(strDay, "%d", day);
    sprintf(strYear, "%d", year);
    
    strcat(secondForm , months[month-1]);
    strcat(secondForm , " ");
    strcat(secondForm , strDay);
    strcat(secondForm , ",");
    strcat(secondForm , " ");
    strcat(secondForm , strYear);
    
    puts(secondForm);
    
    */
    
    // 2
    
    /*
    
    char sentence[100] = "";
	char *tokenWord = calloc(2,sizeof(char));
    printf("Enter Sentence: ");
    fgets(sentence, 100, stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    char *token = strtok(sentence, " ");

    while (token != NULL) {
    	
    	strcpy(tokenWord,token);
        printLatinWord(tokenWord);
        token = strtok(NULL, " ");
        
    }

    return 0;
    */
	
}

void printLatinWord(char *token) {
	
    char firstLetter = token[0];
    
    int length = strlen(token);
    
    int i;
    for (i = 0; i < length ; i++) {
    	
        token[i] = token[i + 1];
        
    }

    token[length - 1] = firstLetter;
    token[length] = 'a';
    token[length + 1] = 'y';
    token[length + 2] = '\0';
    
    puts(token);
    
}






