#include<stdio.h>
int main(){
	Aakib: 
	printf("press 1 for solar\n");
	printf("press 2 for decorative\n");
	printf("press 3 for indoor\n");
	printf("press 0 for exit\n");
	
	int choice;
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		printf("solar......\n");
		goto Aakib;
			
		case 2:
		printf("decorative......\n");
		goto Aakib;
				
		case 3:
		printf("indoor......\n");
		goto Aakib;
					
		case 0:
			
    	printf("exited successfully\n");
					
		break;       
		default:printf("invalid choice\n");
		goto Aakib;
	}
}
