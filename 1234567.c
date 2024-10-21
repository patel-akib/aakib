#include<stdio.h>
int main(){
	printf("enter the marks:");
	int marks;
	scanf("%d",&marks);
	char grade;
	grade=marks>90?'A':marks>80?'B':marks>70?'C':marks>60?'D':'F';
	printf("you got grade%c",grade);
}
