#include "Func.h"

// Functions definition used

int ques_num = 1;
int money =100;
int counter;

void Greeting(void){


printf("                          +----------------------------------------------------------------+\n");
printf("                          |                          WELCOME TO                            |\n");
printf("                          |                                                                |\n");
printf("                          |    * W H O  W A N T S  T O  B E  A  M I L L I O N A I R E *    |\n");
printf("                          |                                                                |\n");
printf("                          +----------------------------------------------------------------+\n");


printf("\n lets play the game !!\n\n");
printf("Instructions: \n Answer the questions by entering the correct option. \n You have 3 LIFELINES. \n That is 50/50 choices \n If you wish to use a LIFELINE press 'e'.\n\n");

}

void Wrong_ans(void){

printf("%c is the wrong answer sorry YOU LOSE",r);
      exit(-1);
      }

void Correct_ans(void){

printf("\n%c is the right answer\n",r);
      printf("_Congratulation YOU WON $%d_\n",money);
      printf("Now you have $%d",money);
      }

void Keep_or_Continue(void){
if (ques_num<16){
printf("\n\ndo you want to play more or go home with this money?");
      printf("\n to play more press : M \n if you want to quit press : Q\n==> ");
      scanf("\n%c",&q);
      while (1){
            if(q=='m' || q=='M'){
                printf("\nQuestion %d for $%d is\n",++ques_num,money);

                getch();
                break;
                }
            else if(q=='q' || q=='Q'){
                printf("Thanks for playing ");
                exit(-1);
                break;
                }
            else
                printf("invalid button pressed = %c\n",q);
                printf("==>");
                scanf("\n%c",&q);
                continue;
                }
}
else {
        getch();
}
}

void Invalid_input(void){

printf("invalid button pressed = %c\n",r);
      printf("Answer:");
      scanf("\n%c",&r);

      }

void Fifty_Fifty(void){

    ++counter;

    if (counter <4 )
    {
          printf("\nYou used 50/50 lifeline\n\n %s", Fifty);
    scanf("\n%c",&r);

    }
    else {
            printf("\n you finish your lifeline\n\n");
    }


}

void Money_Won(void){
    if (ques_num<5){

    money=money+100;}

    else if (ques_num<12){

    money=money*2;
    }
    else if (ques_num==12){

     money = 125000;
     }
     else {

    money = money*2;
    }
}

void Congratulations(void){
printf("                          $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                          $                                                                $\n");
printf("                          $                         CONGRATULATION                         $\n");
printf("                          $                                                                $\n");
printf("                          $         * N O W  Y O U  A R E  M I L L I O N A I R E *         $\n");
printf("                          $                                                                $\n");
printf("                          $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");


printf("\n\n\n\n \tCode by:Salma\n\t\tAmira\n\t\tBassant\n\t\tTarek\n\t\tHossam\n ");
}


