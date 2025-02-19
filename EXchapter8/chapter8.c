#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANK 13

void reverse(){
    printf("Enter 10 numbers: ");
    int i=0;
    int array[10];
    
    for (i=0; i<10;i++){
        scanf("%d",&array[i]);
    }
    
    printf("In reverse order: ");
    for (i=9; i>-1;i--){
        printf("%d ",array[i]);
    }
}

void poker_hand() {
    bool in_hand[NUM_SUITS][NUM_RANK] = {false};
    int num_cards,rank,suit;
    const char rank_code[]={'2','3','4','5','6','7','8','9','t','j','q','k','a'};
    const char suit_code[]={'d','s','c','h'};
    
    printf("Enter number of cards in hand: ");
    scanf("%d",&num_cards);
    
    srand((unsigned)time(NULL));
    
    printf("Your hand: ");
    while (num_cards>0){
        suit = rand()%NUM_SUITS;
        rank = rand()%NUM_RANK;
        if(!in_hand[suit][rank]){
            in_hand[suit][rank]=true;
            num_cards--;
            printf("%c%c ",rank_code[rank],suit_code[suit]);
        }
    }
}

void exerc1(){
  bool digit_seen[10]={false};
  int digit;
  int number;
  
  printf("Enter a number: ");
  scanf("%d",&number);

  while(number>0){
    digit = number % 10;
    if(digit_seen[digit]){
      break;
    }
    digit_seen[digit]=true;
    
    if(number<10){
      break;
    }
    number/=10;
  }
 
  printf("Repeated digits: ");
  for(int i=0; i<10;i++){
    if(digit_seen[i]){
      printf("%i",i);}
  }
}

void exerc2(){
  int digit_seen[10]={0};
  int digit;
  int number;
  
  printf("Enter a number: ");
  scanf("%d",&number);

  while(number>0){
    digit = number % 10;
    digit_seen[digit]++;
    if(number<10){
      break;
    }
    number/=10;
  }
 
  printf("Digits:    \t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
  printf("Occurences:");
  for(int i=0; i<10;i++){
    printf("\t%i",digit_seen[i]);
  }
}

void exerc8(){
    float array[5][5]={0};
    float row_totals[5]={0};
    float average_student[5]={0};
    float average_test[5]={0};
    float test_max[5]={0};
    float test_min[5]={20};

    for(int i = 0; i<5;i++){
        printf("Enter row %i: ",i+1);
        for(int a=0;a<5;a++){
            scanf("%f",&array[i][a]);
        }
    }

    // Create test total for each of the students
    for(int i=0;i<5;i++){
        int row_temp=0;
        for(int a=0;a<5;a++){
            row_temp+=array[i][a];
        }
        row_totals[i]=row_temp;
        average_student[i]=row_totals[i]/5.0f;
    }

    // Create average, min and max score for each test
    for(int i=0;i<5;i++){
        int column_temp=0;
        for(int a=0;a<5;a++){
            column_temp+=array[a][i];

            if(array[a][i]<test_min[i]){
                test_min[i]= array[a][i];
            }

            if(array[a][i]>test_max[i]){
                test_max[i]= array[a][i];
            }
        }
        average_test[i]=column_temp;
    }

    for(int i=0;i<5;i++){
        printf("Student %i Total: %.1f\nStudent %i Average: %.1f\n",i+1,row_totals[i],i+1,average_student[i]);
        puts("===================================");
    }

    for(int i=0;i<5;i++){
        printf("Test %i: Average - %.1f; Max - %.1f; Min - %.1f\n",i,average_test[i],test_max[i],test_min[i]);
        puts("===================================");
    }

}

void exerc9(){
    char array[10][10]={'.','.','.','.','.','.','.','.','.','.',
                        '.','.','.','.','.','.','.','.','.','.',
                        '.','.','.','.','.','.','.','.','.','.',
                        '.','.','.','.','.','.','.','.','.','.',
                        '.','.','.','.','.','.','.','.','.','.',
                        '.','.','.','.','.','.','.','.','.','.',
                        '.','.','.','.','.','.','.','.','.','.',
                        '.','.','.','.','.','.','.','.','.','.',
                        '.','.','.','.','.','.','.','.','.','.',
                        '.','.','.','.','.','.','.','.','.','.',};
    srand((unsigned)time(NULL));
    char letter='A';
    int x =0;
    int y=0;
    int flag_break=0;

    array[x][y]=letter;

    for(int i=0;i<25;i++){
        letter++;
        int options[5]={0,1,1,1,1};
        int move=0; 

        // Check if there are any possible moves
        if((x-1<0 || array[x-1][y]!='.')&&(x+1>9 || array[x+1][y]!='.')&&(y-1<0 || array[x][y-1]!='.')&&(y+1>9 || array[x][y+1]!='.')){
            flag_break=1;
            break;
        }

        if(y-1<0 || array[x][y-1]!='.'){
            options[1]=0;
        }
        if(x+1>9 || array[x+1][y]!='.'){
            options[2]=0;
        }
        if(y+1>9 || array[x][y+1]!='.'){
            options[3]=0;
        }
        if(x-1<0 || array[x-1][y]!='.'){
            options[4]=0;
        }

        while(move==0){
            move=rand()%4+1;
            move=move*options[move];
        }

        if(move==1){
            y--;
        }else if(move==2){
            x++;
        }else if(move==3){
            y++;
        }else if(move==4){
            x--;
        }
        array[x][y]=letter;

    }

    for(int i=0;i<10;i++){
        printf("%c %c %c %c %c %c %c %c %c %c\n",array[i][0],array[i][1],array[i][2],array[i][3],array[i][4],array[i][5],array[i][6],array[i][7],array[i][8],array[i][9]);
    }
}

void exerc15(){
    char msg_org[500];
    char buffer[500];
    int shift=0;
    int flag=0;
    int i=0;

    printf("Enter message to be encrypted: ");
    fgets(msg_org,sizeof(char)*500,stdin);

    printf("Enter shift amount (1-25): ");
    while (!(shift>0 && shift<26))
    {
        scanf("%i",&shift);
    }

    while(flag==0){
        if(msg_org[i]=='\0'){
            buffer[i]='\0';
            flag=1;
            break;
        }else if((msg_org[i]>='A')&&(msg_org[i]<='Z')){
            buffer[i]=((msg_org[i]-'A')+shift)%26 + 'A';
        }else if((msg_org[i]>='a')&&(msg_org[i]<='z')){
            buffer[i]=((msg_org[i]-'a')+shift)%26 + 'a';
        }else{
            buffer[i]=msg_org[i];
        }

        printf("This is a print: %c\n",msg_org[i]);
        i++;
    }

    printf("%s",buffer);
}

int main() {
    // Write C code here
    // reverse();
    exerc9();

    exerc15();

    return 0;
}
