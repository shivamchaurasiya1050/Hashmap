//wap day of the week using switch.
//0-100 units:5Rs/unit
//101-300 units:6Rs/unit
//301-500 units:7Rs/unit
//above 500 units:9Rs/unit
//surcharge:40
//tax:40


#include<stdio.h>
int main (){
	float unit,bill;
	int surcharge=40,tex=40;
	
	printf("Enter the unit:");
	scanf("%f",&unit);
	
	if (unit>=0 && unit<=100){
	
	bill=5*unit + surcharge + tex;
	printf("Electricity bill is=%f ",bill);}
	
	else if(unit>=101 && unit<=300){

	
	bill=100*5+(unit-100)*6+surcharge+tex;
	printf("Electricity bill is=%f ",bill);}
	
	else if(unit>=301 && unit<=500){
	
	bill=100*5+200*6+(unit-300)*7+surcharge+tex;
	printf("Electricity bill is=%f ",bill);}
	
	else
	bill=100*5+200*6+200*7+(unit-500)*9+surcharge+tex;
	printf("Electricity bill is=%f ",bill);
	
}

