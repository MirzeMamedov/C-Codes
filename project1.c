#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

struct Data{
	
	int id;
	char description[300];
	char trainer[100];
	float results[5];
	
};

void readData( FILE *filePointer , struct Data arrayDatas[] );

void insertLine( FILE *filePointer );
void deleteLine( FILE *filePointer , struct Data arrayDatas[] );

void clearFile(char *filePointer);
void printLines(FILE *filePointer);

void main() {
	
	FILE *filePointer = fopen("DfitnessStudy.txt" , "a+");
	
	struct Data arrayDatas[5];
	
	printLines(filePointer);
	readData( filePointer , arrayDatas);
	deleteLine(filePointer ,arrayDatas);
	insertLine( filePointer );
	
	fclose(filePointer);
	
	
}

void readData( FILE *filePointer , struct Data arrayDatas[] ){
	
	char line[1000];
	
	int i = 0;
	while(fgets(line,1000,filePointer) != NULL){
		
		sscanf(line, "%d|%299[^|]|%99[^|]|%f,%f,%f,%f,%f" ,
			&arrayDatas[i].id , arrayDatas[i].description , arrayDatas[i].trainer , 
			&arrayDatas[i].results[0] , &arrayDatas[i].results[1] , &arrayDatas[i].results[2] , &arrayDatas[i].results[3] , &arrayDatas[i].results[4] );
		
		printf("\nID: %d\n", arrayDatas[i].id);
		printf("Description: %s\n", arrayDatas[i].description);
		printf("Trainer: %s\n" ,arrayDatas[i].trainer);
		printf("Results: %f,%f,%f,%f,%f\n" , arrayDatas[i].results[0] , arrayDatas[i].results[1] , arrayDatas[i].results[2] , arrayDatas[i].results[3] , arrayDatas[i].results[4]);
		
		i++;
		
	}
	
	fseek(filePointer, 0, SEEK_SET);
	
}

void insertLine( FILE *filePointer ){
	
	int newId;
    printf("Enter Line ID to insert: ");
    scanf("%d", &newId);
	
	fprintf(filePointer , "\n%d\n" , newId);
	
}

void deleteLine( FILE *filePointer , struct Data arrayDatas[] ){
	
	int inputId;
    printf("Enter Line ID to delete: ");
    scanf("%d", &inputId);

    clearFile("DfitnessStudy.txt");
    
    fseek(filePointer, 0, SEEK_SET);

    int x;
    for (x = 0; x < 5; x++) {
    	
        if (arrayDatas[x].id == inputId) {
            continue;
        } else {
        	
            fprintf(filePointer, "%d|%s|%s|%.6f,%.6f,%.6f,%.6f,%.6f\n",
                    arrayDatas[x].id, arrayDatas[x].description, arrayDatas[x].trainer,
                    arrayDatas[x].results[0], arrayDatas[x].results[1], arrayDatas[x].results[2],
                    arrayDatas[x].results[3], arrayDatas[x].results[4]);
        }
    }

    printf("Line with ID %d deleted successfully.\n", inputId);
	
	
}

void clearFile(char *filePointer) {
	
	FILE *filePointer1 = fopen(filePointer, "w");
    fclose(filePointer1);
    filePointer1 = fopen(filePointer, "a+");

    fseek(filePointer1, 0, SEEK_SET);
}

void printLines(FILE *filePointer){
	
	char line[1000];
	
	while(fgets(line,1000,filePointer) != NULL){
		
		puts(line);
		
	}
	
	fseek(filePointer, 0, SEEK_SET);
	
}

