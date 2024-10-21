#include<stdio.h>
int main(){
	 aakib:
	printf("enter 1 for burger\n");
	printf("enter 2 for pizza\n");
	printf("enter 3 for fenta\n");
	printf("enter 4 for rice\n");
	printf("enter 5 for exit\n");
	
	int choice;
	printf("enter your choice");
	scanf("%d",&choice);
	switch(choice){
		
		case 1:
			printf("your burger order succesfully\n");
			goto aakib;
			
			case 2:
				printf("your pizza order succesfully\n");
				goto aakib;
				
				case 3:
					printf("your fenta order succesfully\n");
					goto aakib;
					
					case 4:
						printf("your rice order succesfully\n");
						goto aakib;
						
						case 5:
							printf("you are exited");
							
							break;
							default:printf("invaild choice");
	}
	
}
