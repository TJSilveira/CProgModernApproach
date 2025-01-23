#include<stdio.h>
#include<stdlib.h>

void ex1(){
	printf("           *\n");
	printf("          *\n");
	printf("         *\n");
	printf("*       *\n");
	printf(" *     *\n");
	printf("  *   *\n");
	printf("    *\n");
}

float volume_sphere(float radius){
	float volume = 0;

	volume = (4.0f/3.0f)*(3.1415926535897f)*radius*radius*radius;

	printf("The volume of the sphere is: %f\n",volume);
	
}

float add_tax(float bill){
	float after_tax=bill*1.05f;
	printf("With tax added: $%.2f\n",after_tax);
}

float poly_result(float x){
	float result = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x -6;
	float result_honer = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
	printf("%.4f\n",result);
	printf("%.4f\n",result_honer);
}

void pyramid(int n){
	int i=0;
	char a[n+1];

	for(i;i<n;i++){
		a[i]='*';
		// printf("loop: %i\n",i);
	}
	// a[i+1]='\0';

	for(i;i>-1;i--){
		printf("%s\n",&a[i]);
	}	
}

void bills(int a){
	int bill_20=0;
	int bill_10=0;
	int bill_5=0;
	int bill_1=0;
	int remainder20bill = 0;
	int remainder10bill = 0;
	int remainder5bill = 0;


	// Check how many 20 dollar bill notes to give
	remainder20bill = a%20;
	bill_20 = (a-remainder20bill)/20;

	// Check how many 10 dollar bill notes to give
	remainder10bill = remainder20bill%10;
	bill_10 = (remainder20bill-remainder10bill)/10;

	// Check how many 5 dollar bill notes to give
	remainder5bill = remainder10bill%5;
	bill_5 = (remainder10bill-remainder5bill)/5;

	// Check how many 1 dollar bill notes to give
	bill_1 = remainder5bill;

	// Print output
	printf("$20 bills: %i\n",bill_20);
	printf("$10 bills: %i\n",bill_10);
	printf("$5 bills: %i\n",bill_5);
	printf("$1 bills: %i\n",bill_1);
}

void loan(float loan_amount,float interest_rate,float monthly_payment){
	float interest_paid =0;
	int i=0;

	while (loan_amount>1)
	{
		interest_paid = loan_amount*(interest_rate/12.0)/100;
		loan_amount=loan_amount-(monthly_payment-interest_paid);
		printf("Balance remaining after %i period: %.2f\n",(i+1),loan_amount);
		i++;
	}
	

}

int main(){
	// Exercise 1
	// ex1();

	//Exercise 2 and 3
	// float radius;
	// puts("Please enter the radius");
	// scanf("%f",&radius);
	// volume_sphere(radius);

	//Exercise 4
	// float bill;
	// puts("Enter an amount: ");
	// scanf("%f",&bill);
	// add_tax(bill);

	//Exercise 5 and 6
	puts("=====================================");
	puts("Exercise 5 and 6\n");
	float x = 2.5;
	poly_result(x);

	puts("=====================================\n");

	//Random Exercise	
	// int size_pyramid = 5;
	// pyramid(size_pyramid); 

	//Exercise 7
	// puts("=====================================");
	// puts("Exercise 7\n");
	// int total = 0;
	// printf("Please insert $ amount you want to change: ");
	// scanf("%i",&total);
	// bills(total);

	// puts("=====================================\n");

	//Exercise 8
	puts("=====================================");
	puts("Exercise 8\n");
	float loan_amount = 0;
	float interest_rate = 0;
	float monthly_payment=0;
	printf("Enter amount of loan: ");
	scanf("%f",&loan_amount);
	printf("Enter interest rate: ");
	scanf("%f",&interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f",&monthly_payment);
	loan(loan_amount,interest_rate,monthly_payment);

	puts("=====================================\n");

}
