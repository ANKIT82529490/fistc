   #include<conil.h>
#include<stdio.h>
#define MAX 10
int stack[MAX],topA=-1,topB=MAX;
void pushA(int no)
{
if(topA==topB)

   {
      printf("\n OVERFLOW");
      return;
   }
   stack[++(topA)]=no;

 }
