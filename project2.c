#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypteMessage( char string[] );
void decrypteMessage( char string[] );

int main() {
	
	// #070496 Nazrin && Aytac -- #303729 Pcbtkp && Cavce
	// #0896534596 kazim && mirze -- #3129867829 mcbko && oktbg

	char string[100] = "" ;
	printf("Enter a message:\n");
	fgets(string , sizeof(string) , stdin);
	
	
	
	puts("Encrypted message:");
	encrypteMessage(string);
	puts(string);
	
	puts("Decrypted message:");
	decrypteMessage(string);
	puts(string);
	
}

void encrypteMessage( char string[] ){
	
	int i ;
	for( i = 0 ; i  < strlen( string ) ; i++ ){
		
		if( (65 <= string[i] && string[i] <= 90) || ( 97 <= string[i] && string[i] <= 122 )  ){
			
			if( 88 <= string[i] && string[i] <= 90 ){
			
				string[i] = string[i] - 24 ;
				
			} else if( 120 <= string[i] && string[i] <= 122 ){
				
				string[i] = string[i] - 24 ;
				
			} else {
				
				string[i] = string[i] + 2;
				
			}
			
			
			
		}else if( isdigit(string[i]) == 1 ){
			
			if( '7' <= string[i] && string[i] <= '9' ){
			
				string[i] = string[i] - 7 ;
				
			} else {
				
				string[i] = string[i] + 3;
			
			}
		}
		
	}
	
}

void decrypteMessage( char string[] ){
	
	int i ;
	for( i = 0 ; i  < strlen( string ) ; i++ ){
		
		if( (65 <= string[i] && string[i] <= 90) || ( 97 <= string[i] && string[i] <= 122 )  ){
			
			if( 65 <= string[i] && string[i] < 67 ){
			
				string[i] = string[i] + 24 ;
				
			} else if( 97 <= string[i] && string[i] < 99 ){
				
				string[i] = string[i] + 24 ;
				
			} else {
				
				string[i] = string[i] - 2;
				
			}
			
			
			
		}else if( isdigit(string[i]) == 1 ){
			
			if( '0' <= string[i] && string[i] <= '2' ){
			
				string[i] = string[i] + 7 ;
				
			} else {
				
				string[i] = string[i] - 3 ;
			
			}
		}
		
	}
	
}

