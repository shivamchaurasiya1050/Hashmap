//take input(1-7) and print day of the the week using switch.

#include<stdio.h>
int main(){
	int num;
	
	printf("Enter the number 1-7 and find the day name: ");
	scanf("%d",&num);
	switch(num){
		
		case 1:
			printf("%d The day is monday .",num);
			break;
			
			case 2:
			printf("%d The day is tuesday .",num);
			break;
			
			case 3:
			printf("%d The day is wednesday .",num);
			break;
			
			case 4:
			printf("%d The day is thursady .",num);
			break;
			
			case 5:
			printf("%d The day is friday .",num);
			break;
			
			case 6:
			printf("%d The day is saturday .",num);
			break;
			
			case 7:
			printf("%d The day is sunday .",num);
			break;
			
			default:
			printf("%d Enter the valid number of the day .",num);
			
	}
}
