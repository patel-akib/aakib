#include<stdio.h>
int main(){
	int marks;
	printf("enter the marks");
	scanf("%d",&marks);
	char grade;
	if(marks>90){
		grade='A';
	}
	else if(marks>80){
		grade='B';
	}
	else if(marks>70){
		grade='C';
	}
	else if(marks>60){
		grade='d';
	}
	else{
		grade='F';
	}
	printf("you got grade : %c",grade);
}
