#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// ---------------------------------------------------

struct Student{
	
	int Id;
	char name[20];
	
};

void addStudents( struct Student student , FILE *filePointer );

// ---------------------------------------------------

void addInput( FILE *filePointer);
void showCharacterCount( FILE *filePointer);

// ---------------------------------------------------

struct StudentCourses{
	
	char Id[15];
	char studentRegistrationNumber[30];
	
};

void addStudentRegistrationNumber( FILE *filePointers[] , struct StudentCourses studentCourses );

// ---------------------------------------------------

int main() {
	
	/*FILE *filePointer = fopen("test.txt","a");
	
	fprintf(filePointer,"SbongeBob SquarePants");
	
	fclose(filePointer);*/
	
	/*if(remove("test.txt") == 0){
		
		printf("File was deleted");
		
	} else {
		
		printf("There is no such file");
		
	}*/
	
	/*char buffer[256];
	
	FILE *filePointer = fopen("C:\\Users\\Raksana\\Desktop\\text.txt","r");
	
	if(filePointer == 0){
		
		printf("File is not exist");
		
	} else {
		
		printf("File is exist\n");
		
	}
	
	while( fgets(buffer,256,filePointer) != NULL){
	
		printf("%s",buffer);
	
	}
	
	fclose(filePointer);*/
	// printf("%24s" , "jhvgfldgiuwdfgiu");
	
	// ---------------------------------------------------
	
	// 1
	
	/*
	FILE *filePointer = fopen("C:\\Users\\Raksana\\Desktop\\text.txt" ,"a+");
	
	char sentece[] = "Computer \n";
	fprintf(filePointer ,  sentece);
	
	addInput(filePointer);
	
	fclose(filePointer);
	*/
	
	// 3
	
	// C:\\Users\\Raksana\\Desktop\\
	
	/*
	struct Student student;
	FILE *filePointer = fopen("text.txt" ,"a+");
	
	char studentId[] = "Student Id";
	char studentName[] = "Student Name";
	fprintf(filePointer , "%24s" ,  studentId);
	fprintf(filePointer , "%24s" ,  studentName);
	fprintf(filePointer , "\n");
	
	addStudents( student , filePointer );
	*/
	
	// ---------------------------------------------------
	
	// 4
	
	/*
	char line[100] = "" , word[20] = "";
	FILE *filePointer = fopen("C:\\Users\\Raksana\\Desktop\\JustCreated.txt" ,"r");
	
	printf("Enter Word: ");
	fgets(word, sizeof(word), stdin);
	
	word[strcspn(word, "\n")] = '\0';
	
	// fseek(filePointer, 0, SEEK_SET);
	
	bool flag = false;
	while( fgets(line,sizeof(line),filePointer) != NULL){
		
		char *token = strtok(line," ");
		
		while(token!= NULL){
			
			if( strcmp(word,token) == 0 ){
				
				printf("Found!");
				flag = true;
				break;
				
			}
			token = strtok(NULL," ");
			
		}
		
		if(flag){
			
			break;
			
		}
		
	}
	
	if (!flag) {
		
        printf("Not Found.\n");
        
    }
    
    fclose(filePointer);
    */
    
    // ---------------------------------------------------
    
    // 5
    
    // C:\Users\Raksana\Desktop\courses
    
    char courses[][9] = { "CS20A.txt", "CS21A.txt", "CS29A.txt", "CS30A.txt", "CS35A.txt", "CS36A.txt" };
    
    ///*
    
    struct StudentCourses studentCourses;
    
    
	FILE *filePointerCS20A = fopen( "courses\\CS20A.txt","a");
	FILE *filePointerCS21A = fopen( "courses\\CS21A.txt","a");
	FILE *filePointerCS29A = fopen( "courses\\CS29A.txt","a");
	FILE *filePointerCS30A = fopen( "courses\\CS30A.txt","a");
	FILE *filePointerCS35A = fopen( "courses\\CS35A.txt","a");
	FILE *filePointerCS36A = fopen( "courses\\CS36A.txt","a");
    
    FILE *filePointers[6] = { filePointerCS20A, filePointerCS21A, filePointerCS29A, filePointerCS30A, filePointerCS35A, filePointerCS36A }; 
	 	
	addStudentRegistrationNumber( filePointers, studentCourses );
	
	int i;
	for( i = 0; i < 6 ; i ++ ){
		
		fclose(filePointers[i]);
		
	}
	//*/
	
}

// ---------------------------------------------------

void addInput( FILE *filePointer ){
	
	char line[100];

    while (true) {
		
		printf("Enter Input: ");
        fgets(line, sizeof(line), stdin);

        if (strcmp(line, "quit\n") == 0) {
        	
            break;
            
        } else {
        	
            fprintf(filePointer, line);
            fprintf(filePointer, "\n");
            showCharacterCount(filePointer);
            
        }
	
	}
	
}

void showCharacterCount( FILE *filePointer ){
	
	char line[100] = {0};
    int characterCount = 0;

    fseek(filePointer, 0, SEEK_SET);

    while (fgets(line, sizeof(line), filePointer) != NULL) {
    	
        characterCount += strlen(line);
        
    }

    printf("Character Count: %d\n", characterCount);
	 
}

// ---------------------------------------------------

void addStudents( struct Student student , FILE *filePointer ){
	
	printf("Enter Id:");
	scanf("%d" , &student.Id );
	
	getchar();
	
	printf("Enter Name: ");
	fgets( student.name , 20 , stdin );
	
	student.name[strcspn(student.name, "\n")] = '\0';
	
	if( student.Id == -1 ){
		
		fclose(filePointer);
		return;
		
	} else {
	
		fprintf( filePointer , "%24d" , student.Id );
		fprintf( filePointer , "%24s" , student.name );
		fprintf(filePointer , "\n");
		addStudents( student , filePointer );
		
	}
	
}

// --------------------------------------------------- 

void addStudentRegistrationNumber( FILE *filePointers[] , struct StudentCourses studentCourses ){
	
	int i;
	for( i = 0 ; i < 6 ; i++ ){
		
		printf("Enter Id:");
		fgets(studentCourses.Id , sizeof(studentCourses.Id) , stdin);
		
		printf("Enter Student Registration Number:");
		fgets(studentCourses.studentRegistrationNumber , sizeof(studentCourses.studentRegistrationNumber) , stdin);
		
		if( strcmp(studentCourses.Id,"quit\n") == 0 ){
			
			break;
			return;
			
		}
		
		studentCourses.Id[strcspn(studentCourses.Id, "\n")] = '\0';
        studentCourses.studentRegistrationNumber[strcspn(studentCourses.studentRegistrationNumber, "\n")] = '\0';
        
        // strchr() != NULL 
        
        if (studentCourses.Id[0] == '1') {
        	
            fprintf(filePointers[0], "%s", studentCourses.studentRegistrationNumber);
            fprintf(filePointers[0],"\n");
            
        }
		if (studentCourses.Id[1] == '1') {
        	
            fprintf(filePointers[1], "%s", studentCourses.studentRegistrationNumber);
            fprintf(filePointers[1],"\n");
            
        }
		if (studentCourses.Id[2] == '1') {
        	
            fprintf(filePointers[2], "%s", studentCourses.studentRegistrationNumber);
            fprintf(filePointers[2],"\n");
            
        }
		if (studentCourses.Id[3] == '1') {
        	
            fprintf(filePointers[3], "%s", studentCourses.studentRegistrationNumber);
            fprintf(filePointers[3],"\n");
            
        }
		if (studentCourses.Id[4] == '1') {
        	
            fprintf(filePointers[4], "%s", studentCourses.studentRegistrationNumber);
            fprintf(filePointers[4],"\n");
            
        }
		if (studentCourses.Id[5] == '1') {
        	
            fprintf(filePointers[5], "%s", studentCourses.studentRegistrationNumber);
            fprintf(filePointers[5],"\n");
            
        }
    }
	
}

// ---------------------------------------------------

/*
Enter Id: 101011
Enter Student Registration Number: 14541
Enter Id: 111000
Enter Student Registration Number: 44676
Enter Id: 110011
Enter Student Registration Number: 48843
Enter Id: 010100
Enter Student Registration Number: 97638
Enter Id: 001100
Enter Student Registration Number: 54396
Enter Id: 100011
Enter Student Registration Number: 63542
*/
