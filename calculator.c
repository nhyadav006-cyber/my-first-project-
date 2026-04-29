#include<stdio.h>
int main(){
	int choice;
	float a, b;
	
	printf("calculator Menu\n");
	printf("1. Addition\n");
	printf("2. Multiplication\n");
		printf("3. Subtraction\n");
			printf("4. Division\n");
			printf("5. percentage\n");
			
			printf("Enter your choice ");
			scanf("%d",&choice);
			
			printf("Enter the two number "); // for average a= obtained number and b= total number//
			scanf("%f %f", &a, &b);
			
			switch (choice){
				case 1:
					printf(" Addition = %.2f", a + b);
					 break;	
					 
					 	case 2:
					printf(" Multiplication = %.2f", a * b);
					 break;	
					 
					  	case 3:
					printf("Subtraction = %.2f", a - b);
					 break;	
					 
					 	  	case 4:
					 	  		if(b!= 0)
					printf(" Division = %.2f", a / b);
					else
					printf("Division by zero is not allowed");
					 break;	
					 
					 	 default:
					 printf("Invalide choice");
					 	}
					 	return 0;
}
