/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */
#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif

int BOUND  =    1000;
int kappa  =    0;
int input  ;
int output  ;
int inputs[5]  = {      2,      4,      1,      5, 
        3};
int calculate_output(int input___0 ) ;
int calculate_outputm1(int input___0 ) ;
int calculate_outputm2(int input___0 ) ;
int calculate_outputm3(int input___0 ) ;
int calculate_outputm4(int input___0 ) ;
int calculate_outputm5(int input___0 ) ;
int calculate_outputm6(int input___0 ) ;
int calculate_outputm7(int input___0 ) ;
int calculate_outputm8(int input___0 ) ;
int calculate_outputm9(int input___0 ) ;
int calculate_outputm10(int input___0 ) ;
int calculate_outputm11(int input___0 ) ;
int calculate_outputm12(int input___0 ) ;
int a1776670931  =    32;
int a1566412540  =    35;
int a880929251  =    4;
int a408014082  =    9;
int a1462962246  =    35;
int cf  =    1;
int calculate_outputm1(int input___0 ) 
{ 

  {
  if (input___0 == 4) {
    if (cf == 1) {
      cf = 0;
      a1462962246 = 32;
      a880929251 = 6;
    }
  }
  if (cf == 1) {
    if (input___0 == 5) {
      cf = 0;
      a1462962246 = 35;
      a408014082 = 11;
    }
  }
  return (0);
}
}
int calculate_outputm2(int input___0 ) 
{ 

  {
  if (cf == 1) {
    if (input___0 == 2) {
      cf = 0;
      a1776670931 = 35;
    }
  }
  return (0);
}
}
int calculate_outputm3(int input___0 ) 
{ 

  {
  if (input___0 == 5) {
    if (cf == 1) {
      cf = 0;
      a1462962246 = 35;
      a408014082 = 11;
    }
  }
  return (0);
}
}
int calculate_outputm4(int input___0 ) 
{ 

  {
  if (cf == 1) {
    if (input___0 == 5) {
      cf = 0;
      a1776670931 = 33;
    }
  }
  return (0);
}
}
int calculate_outputm5(int input___0 ) 
{ 

  {
  if (cf == 1) {
    if (input___0 == 2) {
      cf = 0;
      a1462962246 = 33;
      a1776670931 = 33;
    }
  }
  return (0);
}
}
int calculate_outputm6(int input___0 ) 
{ 

  {
  if (input___0 == 5) {
    if (cf == 1) {
      cf = 0;
      a880929251 = 3;
    }
  }
  return (0);
}
}
int calculate_outputm7(int input___0 ) 
{ 

  {
  if (cf == 1) {
    if (input___0 == 5) {
      cf = 0;
      a1462962246 = 33;
      a1776670931 = 33;
    }
  }
  if (cf == 1) {
    if (input___0 == 2) {
      cf = 0;
    }
  }
  if (cf == 1) {
    if (input___0 == 3) {
      cf = 0;
      a1462962246 = 33;
      a1776670931 = 32;
    }
  }
  return (0);
}
}
int calculate_outputm8(int input___0 ) 
{ 

  {
  if (cf == 1) {
    if (input___0 == 2) {
      cf = 0;
      a1462962246 = 32;
      a880929251 = 3;
    }
  }
  if (input___0 == 3) {
    if (cf == 1) {
      cf = 0;
      a1462962246 = 35;
      a408014082 = 11;
    }
  }
  return (0);
}
}
int calculate_outputm9(int input___0 ) 
{ 

  {
  if (cf == 1) {
    if (input___0 == 3) {
      cf = 0;
      a1462962246 = 35;
      a408014082 = 8;
    }
  }
  if (input___0 == 4) {
    if (cf == 1) {
      cf = 0;
      a1462962246 = 32;
      a880929251 = 3;
    }
  }
  if (cf == 1) {
    if (input___0 == 2) {
      cf = 0;
      a1462962246 = 33;
      a1776670931 = 33;
    }
  }
  return (0);
}
}
int calculate_outputm10(int input___0 ) 
{ 

  {
  if (input___0 == 4) {
    if (cf == 1) {
      cf = 0;
      a1462962246 = 33;
      a1776670931 = 34;
    }
  }
  if (input___0 == 2) {
    if (cf == 1) {
      cf = 0;
      a1462962246 = 34;
      a1566412540 = 32;
    }
  }
  return (0);
}
}
int calculate_outputm11(int input___0 ) 
{ 

  {
  if (cf == 1) {
    if (input___0 == 5) {
      cf = 0;
      a1462962246 = 32;
      a880929251 = (a408014082 - a408014082) - -3;
    }
  }
  return (0);
}
}
int calculate_outputm12(int input___0 ) 
{ 

  {
  if (input___0 == 5) {
    if (cf == 1) {
      cf = 0;
      a1462962246 = 34;
      a1566412540 = 33;
    }
  }
  if (cf == 1) {
    if (input___0 == 4) {
      cf = 0;
      a1462962246 = 34;
      a1566412540 = 36;
    }
  }
  return (0);
}
}
int calculate_output(int input___0 ) 
{ 

  {
  cf = 1;
  if (a1462962246 == 33) {
    if (cf == 1) {
      if (a1776670931 == 33) {
        if (cf == 1) {
          calculate_outputm1(input___0);
        }
      }
      if (a1776670931 == 32) {
        if (cf == 1) {
          calculate_outputm2(input___0);
        }
      }
      if (cf == 1) {
        if (a1776670931 == 34) {
          calculate_outputm3(input___0);
        }
      }
      if (a1776670931 == 35) {
        if (cf == 1) {
          calculate_outputm4(input___0);
        }
      }
    }
  }
  if (cf == 1) {
    if (a1462962246 == 32) {
      if (a880929251 == 3) {
        if (cf == 1) {
          calculate_outputm5(input___0);
        }
      }
      if (cf == 1) {
        if (a880929251 == 6) {
          calculate_outputm6(input___0);
        }
      }
    }
  }
  if (a1462962246 == 34) {
    if (cf == 1) {
      if (a1566412540 == 33) {
        if (cf == 1) {
          calculate_outputm7(input___0);
        }
      }
      if (cf == 1) {
        if (a1566412540 == 32) {
          calculate_outputm8(input___0);
        }
      }
      if (cf == 1) {
        if (a1566412540 == 36) {
          calculate_outputm9(input___0);
        }
      }
    }
  }
  if (a1462962246 == 35) {
    if (cf == 1) {
      if (cf == 1) {
        if (a408014082 == 8) {
          calculate_outputm10(input___0);
        }
      }
      if (a408014082 == 9) {
        if (cf == 1) {
          calculate_outputm11(input___0);
        }
      }
      if (a408014082 == 11) {
        if (cf == 1) {
          calculate_outputm12(input___0);
        }
      }
    }
  }
  if (cf == 1) {

  }
  return (0);
}
}

int main(void) 
{ int symb ;
  int FLAG ;

  {
  FLAG = 0;
  while (FLAG < BOUND) {
    klee_make_symbolic(& symb, sizeof(int ), "symb");
    if (symb != 2) {
      if (symb != 4) {
        if (symb != 1) {
          if (symb != 5) {
            if (symb != 3) {
              return (-2);
            }
          }
        }
      }
    }
    calculate_output(symb);
    FLAG = FLAG + 1;
  }

  return (0);
}
}
