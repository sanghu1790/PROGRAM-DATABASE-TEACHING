/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */
#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif

int BOUND1  =    50;
int BOUND2  =    50;
int kappa  =    0;
int ABC  ;
int tempDisplay  ;
int warnLED  ;
int tempIn  ;
int chainBroken  ;
int warnLight  ;
int temp  ;
int otime  =    0;
int time  =    0;
int limit  ;
int init  =    0;
void display(int tempdiff , int warning ) 
{ 

  {
  tempDisplay = tempdiff;
  warnLED = warning;
  return;
}
}
int vinToCels(int kelvin ) 
{ 

  {
  if (temp < 0) {
    ABC = 1;
    display(kelvin - 273, ABC);
  }
  return (kelvin - 273);
}
}

void coolantControl(void) 
{ int symb2 ;
  int FLAG2 ;

  {
  FLAG2 = 0;
  while (FLAG2 < BOUND2) {
    klee_make_symbolic(& symb2, sizeof(int ), "symb2");
    otime = time;
    time = otime + 1;
    tempIn = symb2;
    temp = vinToCels(tempIn);
    if (temp > limit) {
      chainBroken = 1;
    }
    FLAG2 = FLAG2 + 1;
  }
  return;
}
}

int main(void) 
{ int symb1 ;
  int FLAG ;

  {
  init = 0;
  tempDisplay = 0;
  warnLED = 1;
  tempIn = 0;
  ABC = 0;
  chainBroken = 0;
  warnLight = 0;
  temp = 0;
  limit = 8;
  init = 1;
  FLAG = 0;
  while (FLAG < BOUND1) {
    klee_make_symbolic(& symb1, sizeof(int ), "symb1");
    limit = symb1;
    if (limit < 10) {
      if (limit > -273) {
        ABC = 0;
        display(0, ABC);
        break;
      } else {
        ABC = 1;
        display(0, ABC);
      }
    } else {
      ABC = 1;
      display(0, ABC);
    }
    FLAG = FLAG + 1;
  }
  init = 2;
  coolantControl();
  
  return (0);
}
}
