#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
	
	int ID;
	char name[10];
	int age;
	int grade;
	
};

void clearFile(char *filename);

void studentRecordSystem();
void options( FILE *filePointer );

void addStudent(FILE *filePointer);
void displayAllStudents(FILE *filePointer);
void searchForStudent(FILE *filePointer);
void updateStudentInformation(FILE *filePointer);
void deleteStudent(FILE *filePointer);

int main() {
	
	// 3
	
	studentRecordSystem();
	
}

void studentRecordSystem(){
	
	FILE *filePointer = fopen("studentRecord.txt" , "a+" );
	
	fprintf(filePointer, "ID     | Name      | Age | Grade\n--------------------------------\n");
	
	options(filePointer);
	
	fclose(filePointer);
	
}

void options( FILE *filePointer ){
	
	int option;
	
	printf("Options:\n1: Add Student\n2: Display All Students\n3: Search for a Student\n4: Update Student Information\n5: Delete Student\n");
	scanf("%d" , &option);
	
	void ( *functionPointerArray[] ) (FILE *filePointer) = { addStudent, displayAllStudents, searchForStudent, updateStudentInformation, deleteStudent };
	
	switch (option) {
		
        case 1:
        	
            functionPointerArray[0](filePointer);
            break;
            
        case 2:
        	
            functionPointerArray[1](filePointer);
            break;
            
        case 3:
        	
            functionPointerArray[2](filePointer);
            break;
            
        case 4:
        	
            functionPointerArray[3](filePointer);
            break;
            
        case 5:
        	
            functionPointerArray[4](filePointer);
            break;
            
        default:
        	
            printf("Invalid Number");
            options(filePointer);
            break;
		
	}
	
	char quitCheck[2];
	
	printf("If you want to quit press Q or any other key to continue :");
	scanf("%s",quitCheck);
	
	if(strcmp(quitCheck,"Q") == 0) return;
	else options( filePointer );
	
	
	
}



// ADD STUDENT

void addStudent(FILE *filePointer){
	
	struct Student student;
	
	printf("Enter ID: ");
	scanf("%d" , &student.ID);
	
	printf("Enter Name: ");
	scanf("%s" , student.name);
	
	printf("Enter Age: ");
	scanf("%d" , &student.age);
	
	printf("Enter Grade: ");
	scanf("%d" , &student.grade);
	
	fprintf(filePointer, "%.6d | %-9s | %.3d | %d\n", student.ID, student.name, student.age, student.grade);

}

// Display All Students

void displayAllStudents(FILE *filePointer) {
	
    fseek(filePointer, 0, SEEK_SET);

    char line[100];
    
    while (fgets(line, 100, filePointer) != NULL) {
    	
        puts(line);
        
    }
    
}

// Search for a Student

void searchForStudent(FILE *filePointer){
	
	int id;
	printf("Enter Id you want to find out: ");
	scanf("%d" , &id );
	
	fseek(filePointer, 64, SEEK_SET);

    char line[100] , copyLine[100] ;
    
    while (fgets(line, 100, filePointer) != NULL) {
    	
    	strcpy(copyLine,line) ;
        char *token = strtok(line ," ");
        
        if( atoi(token) == id ){
        	
        	puts(copyLine);
			break;
			
		}
        
    }
	
	
}

// Update Student Information

void updateStudentInformation(FILE *filePointer){
	
	struct Student student;
	
	int id;
    printf("Enter Id you want to delete: ");
    scanf("%d", &id);

    fseek(filePointer, 0, SEEK_SET);

    char line[100], wholeText[5000] = "", copyLine[100];

    while (fgets(line, sizeof(line), filePointer) != NULL) {
    	
        strcpy(copyLine, line);
        char *token = strtok(line, " ");

        if (atoi(token) == id) {
        	
            sscanf(copyLine,"%.6d | %-9s | %.3d | %d\n" , &student.ID, student.name, &student.age, &student.grade );
            
            printf("Enter New Name: ");
            scanf( "%s", student.name);
            
            printf("Enter New Age: ");
            scanf( "%d", &student.age);
            
            printf("Enter New Grade: ");
            scanf( "%d", &student.grade);
            
            sprintf(copyLine,"%.6d | %-9s | %.3d | %d\n" , student.ID, student.name, student.age, student.grade );
            strcat(wholeText, copyLine);
            
        } else {
        
        	strcat(wholeText, copyLine);
    	}
    	
    }

    clearFile("studentRecord.txt");

    fprintf(filePointer, "%s", wholeText);
	
}

// Delete Student

void deleteStudent(FILE *filePointer) {
	
    int id;
    printf("Enter Id you want to delete: ");
    scanf("%d", &id);

    fseek(filePointer, 0, SEEK_SET);

    char line[100], wholeText[5000] = "", copyLine[100];

    while (fgets(line, sizeof(line), filePointer) != NULL) {
    	
        strcpy(copyLine, line);
        char *token = strtok(line, " ");

        if (atoi(token) != id) {
        	
            strcat(wholeText, copyLine);
            
        }
        
    }

    clearFile("studentRecord.txt");

    fprintf(filePointer, "%s", wholeText);
    
}

void clearFile(char *filename) {
	
    FILE *filePointer = fopen(filename, "w");
    fclose(filePointer);
    filePointer = fopen(filename, "a+");

}


