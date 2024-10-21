#include<stdio.h>
int main(){
	char name[23];
	int age;
	char grade;
	float weight;
	printf("enter your name:");
	fgets(name,23,stdin);
	printf("enter your age:");
	scanf("%d",&age);
	printf("enter your grade:");
	scanf(" %c",&grade);
	printf("enter your weight:");
	scanf("%f",&weight);
	printf("name %s,age %d,grade %c,weight %f",name,age,grade,weight);
	
	
	
}
