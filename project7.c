#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// Root struct

struct Root{
	
    int root1;
    int root2;
    
};

struct Root calculateRoots(int a, int b, int c);
void printValuesRoot(struct Root roots);

// MathOperation struct

struct MathOperation {
	
    int operand1;
    int operand2;
    int (*MathOperationFunction)(int, int);
    
};

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);


// Employee struct

struct Employee {
	
	int id ;
	char name[10];
	float salary;
	
};

struct Employee scanValuesEmployee();
void printValuesEmployee(struct Employee employee);
float findAvarageSalary(struct Employee employees[] , int length);

// Person and Adress struct

struct Adress {
	
	char street[20];
	char city[10];
	int zipcode;
	
};

struct Person {
	
	int age ;
	char name[10];
	struct Adress adress;
	
};

struct Person scanValuesPerson();
void printValuesPerson(struct Person per);

struct Adress scanValuesAdress();
void printValuesAdress(struct Adress adr);

// Search name and zipcode

void searchName(struct Person persons[]);
void searchZipCode(struct Person persons[]);

// Student struct

struct Student {
	
	int id ;
	char name[10];
	float grade;
	
};

struct Student scanValuesStudents();
void printValuesStudents(struct Student student);

int main() {
	
	// 2
	
	/*
	
	struct Student student1 , student2 , student3 ;
	
	student1 = scanValuesStudents();
	student2 = scanValuesStudents();
	student3 = scanValuesStudents();
	
	printValuesStudents(student1);
	printValuesStudents(student2);
	printValuesStudents(student3);
	
	*/
	
	// 3
	
	/*
	
	struct Person person1 , person2 ;
	
	person1 = scanValuesPerson();
	person2 = scanValuesPerson();

	printValuesPerson(person1);
	printValuesPerson(person2);
	
	struct Person persons[] = {person1, person2};
	
	searchName(persons);
	searchZipCode(persons);
	
	*/
	
	// 4
	
	/*
	
	struct Employee employee1 , employee2 , employee3 ;
	
	employee1 = scanValuesEmployee();
	employee2 = scanValuesEmployee();
	employee3 = scanValuesEmployee();
	
	printValuesEmployee(employee1);
	printValuesEmployee(employee2);
	printValuesEmployee(employee3);
	
	
	
	struct Employee employees[] = { employee1 , employee2 , employee3 } ;
	//struct Employee *pointerEmployees = employees;
	int length = sizeof(employees) / sizeof(employees[0]);
	printf("Avarage Salary : %.2f " , findAvarageSalary(employees, length));
	
	*/
	
	// 5
	
	/*
	
	int (*MathOperationFunctions[])(int, int) = { add, subtract, multiply, divide };
	
	struct MathOperation mathOp ;
	int choice;

    printf("Enter operand1: ");
    scanf("%d", &mathOp.operand1);
    
    printf("Enter operand2: ");
    scanf("%d", &mathOp.operand2);

    printf("Select operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
    
    mathOp.MathOperationFunction = MathOperationFunctions[choice-1];
	
	printf("Result : %d" , mathOp.MathOperationFunction(mathOp.operand1,mathOp.operand2));
	
	*/
	
	// 6
	
	/*
	
	struct Root roots ;
	int a , b , c ;
	
	printf("Enter a : ");
	scanf("%d",&a);
	
	printf("Enter b : ");
	scanf("%d",&b);
	
	printf("Enter c : ");
	scanf("%d",&c);
	
	roots = calculateRoots( a, b, c);
	printValuesRoot(roots);
	
	*/
	
}

// Student functions

struct Student scanValuesStudents(){
	
	struct Student std;
	
	printf("Enter Name : ");
	scanf("%s", std.name);
	
	printf("Enter Id : ");
	scanf("%d", &std.id);
	
	printf("Enter Grade : ");
	scanf("%f", &std.grade);
	
	return std;
	
}

void printValuesStudents(struct Student std){
	
	printf("Name : %s , Grade : %.2f , Id : %d \n" , std.name , std.grade , std.id );
	
}

// Person and Adress functions

struct Person scanValuesPerson(){
	
	struct Person per;
	
	printf("Enter Name : ");
	scanf("%s", per.name);
	
	printf("Enter Age : ");
	scanf("%d", &per.age);
	
	printf("Enter Adress \n");
	per.adress = scanValuesAdress();
	
	return per;
	
}

void printValuesPerson(struct Person per){
	
	printf("Name : %s , Age : %d \n" , per.name , per.age );
	printValuesAdress(per.adress);
	
}

struct Adress scanValuesAdress(){
	
	struct Adress adr;
	
	printf("Enter City : ");
	scanf("%s", adr.city);
	
	printf("Enter Street : ");
	scanf("%s", adr.street);
	
	printf("Enter Zipcode : ");
	scanf("%d", &adr.zipcode);
	
	return adr;
	
}

void printValuesAdress(struct Adress adr){
	
	printf("City : %s , Street : %s , Zipcode : %d \n" , adr.city , adr.street , adr.zipcode );
	
}

void searchName(struct Person persons[]){
	
	char sName[10];
	
	printf("Which Name you want to find :");
	scanf("%s", sName);
	
	int i = 0 ;
	while(true){
		
		struct Person per = persons[i];
		
		if(strcmp(per.name , sName) == 0){
			
			printf("Found ! : %s",per.name);
			break;
			
		}
		
		i++;
		
	}
	
}

void searchZipCode(struct Person persons[]){
	
	int sZipcode;
	
	printf("Which zipcode you want to find :");
	scanf("%d", &sZipcode);
	
	int i = 0 ;
	while(true){
		
		struct Person per = persons[i];
		
		if(per.adress.zipcode ==  sZipcode){
			
			printf("Found ! : %d",per.adress.zipcode);
			break;
			
		}
		
		i++;
		
	}
	
}

// Employee functions

struct Employee scanValuesEmployee(){
	
	struct Employee employee;
	
	printf("Enter Name : ");
	scanf("%s", employee.name);
	
	printf("Enter Id : ");
	scanf("%d", &employee.id);
	
	printf("Enter Salary : ");
	scanf("%f", &employee.salary);
	
	return employee;
	
}

void printValuesEmployee(struct Employee employee){
	
	printf("Name : %s , Salary : %.2f , Id : %d \n" , employee.name , employee.salary , employee.id );
	
}

float findAvarageSalary(struct Employee employees[] , int length){
	
	float avarageSalary = 0 ;
	//int length = sizeof(&employees) / sizeof(&employees[0]);
	struct Employee empl;
	
	int i;
	for(i = 0; i < length; i++) {
		
        empl = employees[i];
        avarageSalary += empl.salary;
        
    }
	
	printf("\nSum of  employee's salaries : %.2f , length : %d , i : %d\n" , avarageSalary, length, i);
	avarageSalary /= i ; 
	
	return avarageSalary;
	
}

// MathOperation functions

int add(int a, int b) {
	
    return a + b;
    
}

int subtract(int a, int b) {
	
    return a - b;
    
}

int multiply(int a, int b) {
	
    return a * b;
    
}

int divide(int a, int b) {
	
    return a / b;
    
}

// Root functions

struct Root calculateRoots(int a, int b, int c){
	
	struct Root roots;
	int discriminant = b*b - 4*a*c ;
	
	if( discriminant >= 0 ){
		
		roots.root1 = (0 - (b + sqrt(discriminant)))/(2*a);
		roots.root2 = (0 - (b - sqrt(discriminant)))/(2*a);
		
	} else {
		
		// NULL
		roots.root1 = 0;
		roots.root2 = 0;
		
	}
	
	return roots;
	
}

void printValuesRoot(struct Root roots){
	
	printf("1.Root : %d \n2.Root : %d \n" , roots.root1 , roots.root2);
	
}



