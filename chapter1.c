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
	float result_honer = ((((3*x-2)*x-5)*x-1)*x+7)*x-6;
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

	//Exercise 5
	// float x = 2.5;
	// poly_result(x);
	
	int size_pyramid = 5;
	pyramid(size_pyramid); 
}
