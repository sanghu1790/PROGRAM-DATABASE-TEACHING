//This program is toy2_false-unreach-call_false-termination.cil.c






#include <stdlib.h>
#define BOUND1 4
#define BOUND2 4
#define BOUND3 4
#define BOUND4 4
#define BOUND5 4
#define BOUND6 4
int kappa;
extern void __VERIFIER_error() __attribute__ ((__noreturn__));



void error(void) 
{ 

  {
  ERROR: __VERIFIER_error();
  return;
}
}

int c  ;
int c_t  ;
int c_req_up  ;
int p_in  ;
int p_out  ;
int wl_st  ;
int c1_st  ;
int c2_st  ;
int wb_st  ;
int r_st  ;
int wl_i  ;
int c1_i  ;
int c2_i  ;
int wb_i  ;
int r_i  ;
int wl_pc  ;
int c1_pc  ;
int c2_pc  ;
int wb_pc  ;
int e_e  ;
int e_f  ;
int e_g  ;
int e_c  ;
int e_p_in  ;
int e_wl  ;
void write_loop(void) ;
void compute1(void) ;
void compute2(void) ;
void write_back(void) ;
void read(void) ;
int d  ;
int data  ;
int processed  ;
static int t_b  ;
void write_loop(void) 
{ int t ;

  {
  if ((int )wl_pc == 0) {
    goto WL_ENTRY_LOC;
  } else {
    if ((int )wl_pc == 2) {
      goto WL_WAIT_2_LOC;
    } else {
      if ((int )wl_pc == 1) {
        goto WL_WAIT_1_LOC;
      } else {

      }
    }
  }
  WL_ENTRY_LOC: 
  wl_st = 2;
  wl_pc = 1;
  e_wl = 0;

  goto return_label;
  WL_WAIT_1_LOC: 
  {
 
    for (int FLAG5=0;FLAG5<BOUND5;FLAG5++)
         {
	while_0_continue:  ;
    t = d;
    data = d;
    processed = 0;
    e_f = 1;
    if ((int )c1_pc == 1) {
      if ((int )e_f == 1) {
        c1_st = 0;
      } else {

      }
    } else {

    }
    if ((int )c2_pc == 1) {
      if ((int )e_f == 1) {
        c2_st = 0;
      } else {

      }
    } else {

    }
    e_f = 2;
    wl_st = 2;
    wl_pc = 2;
    t_b = t;

    goto return_label;
    WL_WAIT_2_LOC: 
    t = t_b;
    if (d == t + 1) {

    } else {
      {
	error();
      }
    }
  }
  while_0_break:  ;
  }
  return_label:  
  return;
}
}
void compute1(void) 
{ 

  {
  if ((int )c1_pc == 0) {
    goto C1_ENTRY_LOC;
  } else {
    if ((int )c1_pc == 1) {
      goto C1_WAIT_LOC;
    } else {

    }
  }
  C1_ENTRY_LOC: 
  {
  
    for (int FLAG2=0;FLAG2<BOUND2;FLAG2++)
         {
	while_1_continue:  ;
    c1_st = 2;
    c1_pc = 1;

    goto return_label;
    C1_WAIT_LOC: 
    if (! processed) {
      data += 1;
      e_g = 1;
      if ((int )wb_pc == 1) {
        if ((int )e_g == 1) {
          wb_st = 0;
        } else {

        }
      } else {

      }
      e_g = 2;
    } else {

    }
  }
  while_1_break:  ;
  }
  return_label:  
  return;
}
}
void compute2(void) 
{ 

  {
  if ((int )c2_pc == 0) {
    goto C2_ENTRY_LOC;
  } else {
    if ((int )c2_pc == 1) {
      goto C2_WAIT_LOC;
    } else {

    }
  }
  C2_ENTRY_LOC: 
  {
  
    for (int FLAG3=0;FLAG3<BOUND3;FLAG3++)
         {
	while_2_continue:  ;
    c2_st = 2;
    c2_pc = 1;

    goto return_label;
    C2_WAIT_LOC: 
    if (! processed) {
      data += 1;
      e_g = 1;
      if ((int )wb_pc == 1) {
        if ((int )e_g == 1) {
          wb_st = 0;
        } else {

        }
      } else {

      }
      e_g = 2;
    } else {

    }
  }
  while_2_break:  ;
  }
  return_label:  
  return;
}
}
void write_back(void) 
{ 

  {
  if ((int )wb_pc == 0) {
    goto WB_ENTRY_LOC;
  } else {
    if ((int )wb_pc == 1) {
      goto WB_WAIT_LOC;
    } else {

    }
  }
  WB_ENTRY_LOC: 
  {
  
    for (int FLAG4=0;FLAG4<BOUND4;FLAG4++)
         {
	while_3_continue:  ;
    wb_st = 2;
    wb_pc = 1;

    goto return_label;
    WB_WAIT_LOC: 
    c_t = data;
    c_req_up = 1;
    processed = 1;
  }
  while_3_break:  ;
  }
  return_label:  
  return;
}
}
void read(void) 
{ 

  {
  d = c;
  e_e = 1;
  if ((int )wl_pc == 1) {
    if ((int )e_wl == 1) {
      wl_st = 0;
    } else {
      goto _L;
    }
  } else {
    _L:  
    if ((int )wl_pc == 2) {
      if ((int )e_e == 1) {
        wl_st = 0;
      } else {

      }
    } else {

    }
  }
  e_e = 2;
  r_st = 2;

  return;
}
}
void eval(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  {
  
        int symb1[BOUND1][6];
	klee_make_symbolic(symb1, sizeof(int) * BOUND1 * 6, "symb1");
	for (int FLAG1=0;FLAG1<BOUND1;FLAG1++)
         {
  
    while_4_continue:  ;
    if ((int )wl_st == 0) {

    } else {
      if ((int )c1_st == 0) {

      } else {
        if ((int )c2_st == 0) {

        } else {
          if ((int )wb_st == 0) {

          } else {
            if ((int )r_st == 0) {

            } else {
              goto while_4_break;
            }
          }
        }
      }
    }
    if ((int )wl_st == 0) {
      {
	tmp =  symb1[FLAG1][0]; 
      }
      if (tmp) {
        {
        wl_st = 1;
        write_loop();
        }
      } else {

      }
    } else {

    }
    if ((int )c1_st == 0) {
      {
	tmp___0 =  symb1[FLAG1][1]; 
      }
      if (tmp___0) {
        {
        c1_st = 1;
        compute1();
        }
      } else {

      }
    } else {

    }
    if ((int )c2_st == 0) {
      {
	tmp___1 =  symb1[FLAG1][2]; 
      }
      if (tmp___1) {
        {
        c2_st = 1;
        compute2();
        }
      } else {

      }
    } else {

    }
    if ((int )wb_st == 0) {
      {
	tmp___2 =  symb1[FLAG1][3]; 
      }
      if (tmp___2) {
        {
        wb_st = 1;
        write_back();
        }
      } else {

      }
    } else {

    }
    if ((int )r_st == 0) {
      {
	tmp___3 = symb1[FLAG1][4];
      }
      if (tmp___3) {
        {
        r_st = 1;
        read();
        }
      } else {

      }
    } else {

    }
  }
  while_4_break:  ;
  }

  return;
}
}
void start_simulation(void) 
{ int kernel_st ;

  {
  kernel_st = 0;
  if ((int )c_req_up == 1) {
    if (c != c_t) {
      c = c_t;
      e_c = 0;
    } else {

    }
    c_req_up = 0;
  } else {

  }
  if ((int )wl_i == 1) {
    wl_st = 0;
  } else {
    wl_st = 2;
  }
  if ((int )c1_i == 1) {
    c1_st = 0;
  } else {
    c1_st = 2;
  }
  if ((int )c2_i == 1) {
    c2_st = 0;
  } else {
    c2_st = 2;
  }
  if ((int )wb_i == 1) {
    wb_st = 0;
  } else {
    wb_st = 2;
  }
  if ((int )r_i == 1) {
    r_st = 0;
  } else {
    r_st = 2;
  }
  if ((int )e_f == 0) {
    e_f = 1;
  } else {

  }
  if ((int )e_g == 0) {
    e_g = 1;
  } else {

  }
  if ((int )e_e == 0) {
    e_e = 1;
  } else {

  }
  if ((int )e_c == 0) {
    e_c = 1;
  } else {

  }
  if ((int )e_wl == 0) {
    e_wl = 1;
  } else {

  }
  if ((int )wl_pc == 1) {
    if ((int )e_wl == 1) {
      wl_st = 0;
    } else {
      goto _L;
    }
  } else {
    _L:  
    if ((int )wl_pc == 2) {
      if ((int )e_e == 1) {
        wl_st = 0;
      } else {

      }
    } else {

    }
  }
  if ((int )c1_pc == 1) {
    if ((int )e_f == 1) {
      c1_st = 0;
    } else {

    }
  } else {

  }
  if ((int )c2_pc == 1) {
    if ((int )e_f == 1) {
      c2_st = 0;
    } else {

    }
  } else {

  }
  if ((int )wb_pc == 1) {
    if ((int )e_g == 1) {
      wb_st = 0;
    } else {

    }
  } else {

  }
  if ((int )e_c == 1) {
    r_st = 0;
  } else {

  }
  if ((int )e_e == 1) {
    e_e = 2;
  } else {

  }
  if ((int )e_f == 1) {
    e_f = 2;
  } else {

  }
  if ((int )e_g == 1) {
    e_g = 2;
  } else {

  }
  if ((int )e_c == 1) {
    e_c = 2;
  } else {

  }
  if ((int )e_wl == 1) {
    e_wl = 2;
  } else {

  }
  {
  
    for (int FLAG6=0;FLAG6<BOUND6;FLAG6++)
         {
	while_5_continue:  ;
    {
    kernel_st = 1;
    eval();
    }
    kernel_st = 2;
    if ((int )c_req_up == 1) {
      if (c != c_t) {
        c = c_t;
        e_c = 0;
      } else {

      }
      c_req_up = 0;
    } else {

    }
    kernel_st = 3;
    if ((int )e_f == 0) {
      e_f = 1;
    } else {

    }
    if ((int )e_g == 0) {
      e_g = 1;
    } else {

    }
    if ((int )e_e == 0) {
      e_e = 1;
    } else {

    }
    if ((int )e_c == 0) {
      e_c = 1;
    } else {

    }
    if ((int )e_wl == 0) {
      e_wl = 1;
    } else {

    }
    if ((int )wl_pc == 1) {
      if ((int )e_wl == 1) {
        wl_st = 0;
      } else {
        goto _L___0;
      }
    } else {
      _L___0:  
      if ((int )wl_pc == 2) {
        if ((int )e_e == 1) {
          wl_st = 0;
        } else {

        }
      } else {

      }
    }
    if ((int )c1_pc == 1) {
      if ((int )e_f == 1) {
        c1_st = 0;
      } else {

      }
    } else {

    }
    if ((int )c2_pc == 1) {
      if ((int )e_f == 1) {
        c2_st = 0;
      } else {

      }
    } else {

    }
    if ((int )wb_pc == 1) {
      if ((int )e_g == 1) {
        wb_st = 0;
      } else {

      }
    } else {

    }
    if ((int )e_c == 1) {
      r_st = 0;
    } else {

    }
    if ((int )e_e == 1) {
      e_e = 2;
    } else {

    }
    if ((int )e_f == 1) {
      e_f = 2;
    } else {

    }
    if ((int )e_g == 1) {
      e_g = 2;
    } else {

    }
    if ((int )e_c == 1) {
      e_c = 2;
    } else {

    }
    if ((int )e_wl == 1) {
      e_wl = 2;
    } else {

    }
    if ((int )wl_st == 0) {

    } else {
      if ((int )c1_st == 0) {

      } else {
        if ((int )c2_st == 0) {

        } else {
          if ((int )wb_st == 0) {

          } else {
            if ((int )r_st == 0) {

            } else {
              goto while_5_break;
            }
          }
        }
      }
    }
  }
  while_5_break:  ;
  }

  return;
}
}
int main(void) 
{ 
kappa=0;
int __retres1 ;

  {
  {
  e_wl = 2;
  e_c = e_wl;
  e_g = e_c;
  e_f = e_g;
  e_e = e_f;
  wl_pc = 0;
  c1_pc = 0;
  c2_pc = 0;
  wb_pc = 0;
  wb_i = 1;
  c2_i = wb_i;
  c1_i = c2_i;
  wl_i = c1_i;
  r_i = 0;
  c_req_up = 0;
  d = 0;
  c = 0;
  start_simulation();
  }
  __retres1 = 0;
  return (__retres1);
}
}
