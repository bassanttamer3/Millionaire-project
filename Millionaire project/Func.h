#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED

//header file has library, function declaration and variables

#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

void Greeting(void);
void Keep_or_Continue(void);
void Wrong_ans(void);
void Invalid_input(void);
void Correct_ans(void);
void choice_a(void);
void choice_b(void);
void choice_c(void);
void choice_d(void);
void Money_Won(void);
void Congratulations(void);

char q;
char r;
extern int money;
extern int ques_num;
extern int Counter;
const char *Fifty;


#endif
