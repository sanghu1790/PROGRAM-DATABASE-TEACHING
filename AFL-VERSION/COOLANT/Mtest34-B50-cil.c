/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */







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
int limit  ;
int init  ;
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
{ int otime ;
  int time ;
  int symb2 ;
  int FLAG2 ;

  {
  time = 0;
  FLAG2 = 0;
  while (FLAG2 < BOUND2) {
    scanf("%d", &symb2);
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
{ int try ;
  int symb1 ;
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
  try = 0;
  FLAG = 0;
  while (FLAG < BOUND1) {
    scanf("%d", &symb1);
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
    if (try >= 3) {
      limit = 7;
      break;
    }
    try = try + 1;
    FLAG = FLAG + 1;
  }
  init = 3;
  coolantControl();
  
  return (0);
}
}
