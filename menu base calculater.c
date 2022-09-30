//menu base calculater

#include<stdio.h>
int main(){
	
	int a,b,choice;
	
		printf("SHIVAM CACULATER\n1.Addition of two number:\n2.Subtraction of two number:\n3.Multiplication of two number:\n4.Division of two number:\n5.Modulus of two number:\n");
	
	printf("choice the number 1 to 5 :\n");
	scanf("%d",&choice);
	printf("Enter the number a: ");
	scanf("%d",&a);
	
	printf("Enter the number b: ");
	scanf("%d",&b);
	


	
	switch(choice){
		case 1:
			printf(" Addition of two numbwe:%d",(a+b));
			break;
			
			case 2:
			printf("Subtraction of two numbwe:%d",(a-b));
			break;
			
			case 3:
			printf("Multiplication of two numbwe:%d",(a*b));
			break;
			
			case 4:
			printf("Division of two numbwe:%d",(a/b));
			break;
			
			case 5:
			printf("Modulus of two numbwe:%d",(a%b));
			break;
			
			default:
				printf("plese enter the valid number:");
			
		
	}
}



