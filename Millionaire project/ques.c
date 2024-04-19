#include "Func.h"

//code for the 4 multiple choices answer

void choice_a(void){

printf("Answer:");
r=getche();


while(1){

        switch(r)
        {
            case 'C':
            case 'c':
            case 'B':
            case 'b':
            case 'D':
            case 'd':

                Wrong_ans();
                break;

            case 'A':
            case 'a':
                Correct_ans();
                Money_Won();
                Keep_or_Continue();
                break;

            default:
                Invalid_input();
                continue;

            case'E':
            case'e':
                Fifty_Fifty();
                while(1)
                    {
                        if(r=='C'|| r=='c'){
                            break;
                            }
                        else if(r=='A'|| r=='a')
                            break;
                        else
                            Invalid_input();
                        continue;


                }

                continue;
            }

break;
}

}

void choice_b(void){

printf("Answer:");
r=getche();


while(1){

        switch(r)
        {
            case 'A':
            case 'a':
            case 'C':
            case 'c':
            case 'D':
            case 'd':

                Wrong_ans();
                break;

            case 'B':
            case 'b':

                Correct_ans();
                Money_Won();
                Keep_or_Continue();
                break;

            default:
                Invalid_input();
                continue;

            case'E':
            case'e':

                Fifty_Fifty();
                while(1){
                        if(r=='B'|| r=='b'){
                            break;
                            }
                        else if(r=='D'|| r=='d')
                            break;
                        else
                            Invalid_input();
                        continue;
                        }
                continue;
            }

break;
}

}

void choice_c(void){

printf("Answer:");
r=getche();


while(1){

        switch(r)
        {
            case 'A':
            case 'a':
            case 'B':
            case 'b':
            case 'D':
            case 'd':

                Wrong_ans();
                break;

            case 'C':
            case 'c':
                Correct_ans();
                Money_Won();
                Keep_or_Continue();
                break;

            default:
                Invalid_input();
                continue;

            case'E':
            case'e':

                Fifty_Fifty();
                while(1){
                        if(r=='C'|| r=='c'){
                            break;
                            }
                        else if(r=='A'|| r=='a')
                            break;
                        else
                            Invalid_input();
                        continue;
                        }
                continue;
            }

break;
}

}

void choice_d(void){

printf("Answer:");
r=getche();


while(1){

        switch(r)
        {
            case 'A':
            case 'a':
            case 'C':
            case 'c':
            case 'B':
            case 'b':

                Wrong_ans();
                break;

            case 'D':
            case 'd':
                Correct_ans();
                Money_Won();
                Keep_or_Continue();
                break;

            default:
                Invalid_input();
                continue;

            case'E':
            case'e':

                Fifty_Fifty();
                while(1){
                        if(r=='B'|| r=='b'){
                            break;
                            }
                        else if(r=='D'|| r=='d')
                            break;
                        else
                            Invalid_input();
                        continue;
                        }
                continue;
            }

break;
}

}
