#include<stdio.h>
int main(){
	aakib:
	printf("enter 1 for pizza:\n");
	printf("enter 2 for bargar:\n");
	printf("enter 3 for sprit:\n");
	printf("enter 4 for cola:\n");
	printf("enter 5 for exit:\n");
	int choice;
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice){
		
		case 1:
			printf("your pizza order scussesfule\n:");
			goto aakib;
			
			case 2:
				printf("your bargar order scussesfule\n:");
				goto aakib;
				
				case 3:
				printf("your sprit order scussesfule\n:");
				goto aakib;
				
				case 4:
				printf("your cola order scussesfule\n:");
				goto aakib;
				
				case 5:
				printf("exited scussesfule:");
				break;
				
				default:printf("invalid choice");
				goto aakib;
	}
}
