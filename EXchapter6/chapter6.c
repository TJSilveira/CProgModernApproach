#include <stdio.h>
#include <stdlib.h>

void exerc1(){
    int number=0;
    int max=0;

    do{
        printf("Enter a number: ");
        scanf("%d",&number);
        if(number>max){
            max=number;
        }
    }while(number!=0);

    printf("The largest number was: %i\n",max);
}

void exerc2(){
    int num1=0;
    int num2=0;

    printf("Please insert 2 numbers: ");
    scanf("%d %d",&num1,&num2);

    while (num1>0)
    {
        num1=num2%num1;
        if(num1==0){
            break;
        }
        num2=num1;
    }
    
    printf("The GCD is: %i\n",num2);
}

void exerc6(){
    int num1=0;
    int square=0;
    int i=1;


    printf("Please insert 1 number: ");
    scanf("%d",&num1);

    while (square<=num1){
        square = i*i;
        if(square<=num1 && square%2==0){
            printf("%i\n",square);
        }
        i++;
    }
}

void exerc7(){
    int days = 0;
    int week =0;

    printf("Number of days in the month: ");
    scanf("%d",&days);
    printf("Number of days in the month: ");
    scanf("%d",&week);

    for (int i=1;i<week+days;i++)
    {
        if(i<week){
            printf("\t");
            continue;
        }
        if (i>week && i%7==1)
        {
            printf("\n%i\t",i-week+1);
            continue;
        }
        printf("%i\t",i-week+1);
    }
    printf("\n");
}

void exerc10(){
    int day_final=31;
    int month_final=12;
    int year_final=2099;

    int day_input=1;
    int month_input=1;
    int year_input=1;
    while(!(day_input==0&&month_input==0&&year_input==0)){
        printf("Enter a date: ");
        scanf("%d/%d/%d",&day_input,&month_input,&year_input);
        if(day_input==0&&month_input==0&&year_input==0){
            break;
        }
        if(year_input<year_final){
            day_final=day_input;
            month_final=month_input;
            year_final=year_input;
        }else if(year_input==year_final){
            if (month_input<month_final)
            {
                day_final=day_input;
                month_final=month_input;
                year_final=year_input;
            }else if(month_input==month_final){
                if(day_input<day_final){
                    day_final=day_input;
                    month_final=month_input;
                    year_final=year_input;
                }
            }
        }
        printf("Temporary earliest %d/%d/%d\n",day_final,month_final,year_final);
    }
    printf("%d/%d/%d is the earliest date\n",day_final,month_final,year_final);
}

void exerc11(){
    long double denominator=0;
    long double sum = 1.0f;

    for(long double i=1.0;i<2000000;i++){
        denominator +=i;
        sum+=(long double)1.0/denominator;
    }
    printf("%.10Lf\n",sum);
}

int main(){
    // exerc1();
    // exerc2();
    // exerc6();
    // exerc7();
    // exerc10();
    exerc11();

    return 0;
}
