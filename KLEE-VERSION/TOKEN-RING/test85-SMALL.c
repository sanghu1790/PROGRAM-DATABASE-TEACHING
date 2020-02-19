//This program is transmitter.16_false-unreach-call_false-termination.cil.c 
#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif
#include <stdlib.h>
/*#define BOUND1 2*/
/*#define BOUND2 2*/
/*#define BOUND3 2*/
/*#define BOUND4 2*/
/*#define BOUND5 2*/
/*#define BOUND6 2*/
/*#define BOUND7 2*/
/*#define BOUND8 2*/
/*#define BOUND9 2*/
/*#define BOUND10 2*/
/*#define BOUND11 2*/
/*#define BOUND12 2*/
/*#define BOUND13 2*/
/*#define BOUND14 2*/
/*#define BOUND15 2*/
/*#define BOUND16 2*/
/*#define BOUND17 2*/
/*#define BOUND18 2*/

#define BOUND1 1
#define BOUND2 1
#define BOUND3 1
#define BOUND4 1
#define BOUND5 1
#define BOUND6 1
#define BOUND7 1
#define BOUND8 1
#define BOUND9 1
#define BOUND10 1
#define BOUND11 1
#define BOUND12 1
#define BOUND13 1
#define BOUND14 1
#define BOUND15 1
#define BOUND16 1
#define BOUND17 1
#define BOUND18 1

int kappa;
extern void __VERIFIER_error() __attribute__ ((__noreturn__));



void error(void) 
{ 

  {
  ERROR: __VERIFIER_error();
  return;
}
}
int m_pc  =    0;
int t1_pc  =    0;
int t2_pc  =    0;
int t3_pc  =    0;
int t4_pc  =    0;
int t5_pc  =    0;
int t6_pc  =    0;
int t7_pc  =    0;
int t8_pc  =    0;
int t9_pc  =    0;
int t10_pc  =    0;
int t11_pc  =    0;
int t12_pc  =    0;
int t13_pc  =    0;
int t14_pc  =    0;
int m_st  ;
int t1_st  ;
int t2_st  ;
int t3_st  ;
int t4_st  ;
int t5_st  ;
int t6_st  ;
int t7_st  ;
int t8_st  ;
int t9_st  ;
int t10_st  ;
int t11_st  ;
int t12_st  ;
int t13_st  ;
int t14_st  ;
int m_i  ;
int t1_i  ;
int t2_i  ;
int t3_i  ;
int t4_i  ;
int t5_i  ;
int t6_i  ;
int t7_i  ;
int t8_i  ;
int t9_i  ;
int t10_i  ;
int t11_i  ;
int t12_i  ;
int t13_i  ;
int t14_i  ;
int M_E  =    2;
int T1_E  =    2;
int T2_E  =    2;
int T3_E  =    2;
int T4_E  =    2;
int T5_E  =    2;
int T6_E  =    2;
int T7_E  =    2;
int T8_E  =    2;
int T9_E  =    2;
int T10_E  =    2;
int T11_E  =    2;
int T12_E  =    2;
int T13_E  =    2;
int T14_E  =    2;
int E_1  =    2;
int E_2  =    2;
int E_3  =    2;
int E_4  =    2;
int E_5  =    2;
int E_6  =    2;
int E_7  =    2;
int E_8  =    2;
int E_9  =    2;
int E_10  =    2;
int E_11  =    2;
int E_12  =    2;
int E_13  =    2;
int E_14  =    2;
int is_master_triggered(void) ;
int is_transmit1_triggered(void) ;
int is_transmit2_triggered(void) ;
int is_transmit3_triggered(void) ;
int is_transmit4_triggered(void) ;
int is_transmit5_triggered(void) ;
int is_transmit6_triggered(void) ;
int is_transmit7_triggered(void) ;
int is_transmit8_triggered(void) ;
int is_transmit9_triggered(void) ;
int is_transmit10_triggered(void) ;
int is_transmit11_triggered(void) ;
int is_transmit12_triggered(void) ;
int is_transmit13_triggered(void) ;
int is_transmit14_triggered(void) ;
void immediate_notify(void) ;
void master(void) 
{ 

  {
  if (m_pc == 0) {
    goto M_ENTRY;
  } else {
    if (m_pc == 1) {
      goto M_WAIT;
    } else {

    }
  }
  M_ENTRY: ;
  {
  
    for (int FLAG2=0;FLAG2<BOUND2;FLAG2++)
         {
	while_0_continue:  ;
    {
    E_1 = 1;
    immediate_notify();
    E_1 = 2;
    }
    {
    
      for (int FLAG3=0;FLAG3<BOUND3;FLAG3++)
         {
	  while_1_continue:  ;
      m_pc = 1;
      m_st = 2;

      goto return_label;
      M_WAIT: ;
    }
    while_1_break:  ;
    }
  }
  while_0_break:  ;
  }

  return_label:  
  return;
}
}
void transmit1(void) 
{ 

  {
  if (t1_pc == 0) {
    goto T1_ENTRY;
  } else {
    if (t1_pc == 1) {
      goto T1_WAIT;
    } else {

    }
  }
  T1_ENTRY: ;
  {
  
    for (int FLAG4=0;FLAG4<BOUND4;FLAG4++)
         {
	while_2_continue:  ;
    t1_pc = 1;
    t1_st = 2;

    goto return_label;
    T1_WAIT: 
    {
    E_2 = 1;
    immediate_notify();
    E_2 = 2;
    }
  }
  while_2_break:  ;
  }

  return_label:  
  return;
}
}
void transmit2(void) 
{ 

  {
  if (t2_pc == 0) {
    goto T2_ENTRY;
  } else {
    if (t2_pc == 1) {
      goto T2_WAIT;
    } else {

    }
  }
  T2_ENTRY: ;
  {
  
    for (int FLAG5=0;FLAG5<BOUND5;FLAG5++)
         {
	while_3_continue:  ;
    t2_pc = 1;
    t2_st = 2;

    goto return_label;
    T2_WAIT: 
    {
    E_3 = 1;
    immediate_notify();
    E_3 = 2;
    }
  }
  while_3_break:  ;
  }

  return_label:  
  return;
}
}
void transmit3(void) 
{ 

  {
  if (t3_pc == 0) {
    goto T3_ENTRY;
  } else {
    if (t3_pc == 1) {
      goto T3_WAIT;
    } else {

    }
  }
  T3_ENTRY: ;
  {
  
    for (int FLAG6=0;FLAG6<BOUND6;FLAG6++)
         {
	while_4_continue:  ;
    t3_pc = 1;
    t3_st = 2;

    goto return_label;
    T3_WAIT: 
    {
    E_4 = 1;
    immediate_notify();
    E_4 = 2;
    }
  }
  while_4_break:  ;
  }

  return_label:  
  return;
}
}
void transmit4(void) 
{ 

  {
  if (t4_pc == 0) {
    goto T4_ENTRY;
  } else {
    if (t4_pc == 1) {
      goto T4_WAIT;
    } else {

    }
  }
  T4_ENTRY: ;
  {
  
    for (int FLAG7=0;FLAG7<BOUND7;FLAG7++)
         {
	while_5_continue:  ;
    t4_pc = 1;
    t4_st = 2;

    goto return_label;
    T4_WAIT: 
    {
    E_5 = 1;
    immediate_notify();
    E_5 = 2;
    }
  }
  while_5_break:  ;
  }

  return_label:  
  return;
}
}
void transmit5(void) 
{ 

  {
  if (t5_pc == 0) {
    goto T5_ENTRY;
  } else {
    if (t5_pc == 1) {
      goto T5_WAIT;
    } else {

    }
  }
  T5_ENTRY: ;
  {
  
    for (int FLAG8=0;FLAG8<BOUND8;FLAG8++)
         {
	while_6_continue:  ;
    t5_pc = 1;
    t5_st = 2;

    goto return_label;
    T5_WAIT: 
    {
    E_6 = 1;
    immediate_notify();
    E_6 = 2;
    }
  }
  while_6_break:  ;
  }

  return_label:  
  return;
}
}
void transmit6(void) 
{ 

  {
  if (t6_pc == 0) {
    goto T6_ENTRY;
  } else {
    if (t6_pc == 1) {
      goto T6_WAIT;
    } else {

    }
  }
  T6_ENTRY: ;
  {
  
    for (int FLAG9=0;FLAG9<BOUND9;FLAG9++)
         {
	while_7_continue:  ;
    t6_pc = 1;
    t6_st = 2;

    goto return_label;
    T6_WAIT: 
    {
    E_7 = 1;
    immediate_notify();
    E_7 = 2;
    }
  }
  while_7_break:  ;
  }

  return_label:  
  return;
}
}
void transmit7(void) 
{ 

  {
  if (t7_pc == 0) {
    goto T7_ENTRY;
  } else {
    if (t7_pc == 1) {
      goto T7_WAIT;
    } else {

    }
  }
  T7_ENTRY: ;
  {
  
    for (int FLAG10=0;FLAG10<BOUND10;FLAG10++)
         {
	while_8_continue:  ;
    t7_pc = 1;
    t7_st = 2;

    goto return_label;
    T7_WAIT: 
    {
    E_8 = 1;
    immediate_notify();
    E_8 = 2;
    }
  }
  while_8_break:  ;
  }

  return_label:  
  return;
}
}
void transmit8(void) 
{ 

  {
  if (t8_pc == 0) {
    goto T8_ENTRY;
  } else {
    if (t8_pc == 1) {
      goto T8_WAIT;
    } else {

    }
  }
  T8_ENTRY: ;
  {
  
    for (int FLAG11=0;FLAG11<BOUND11;FLAG11++)
         {
	while_9_continue:  ;
    t8_pc = 1;
    t8_st = 2;

    goto return_label;
    T8_WAIT: 
    {
    E_9 = 1;
    immediate_notify();
    E_9 = 2;
    }
  }
  while_9_break:  ;
  }

  return_label:  
  return;
}
}
void transmit9(void) 
{ 

  {
  if (t9_pc == 0) {
    goto T9_ENTRY;
  } else {
    if (t9_pc == 1) {
      goto T9_WAIT;
    } else {

    }
  }
  T9_ENTRY: ;
  {
  
    for (int FLAG12=0;FLAG12<BOUND12;FLAG12++)
         {
	while_10_continue:  ;
    t9_pc = 1;
    t9_st = 2;

    goto return_label;
    T9_WAIT: 
    {
    E_10 = 1;
    immediate_notify();
    E_10 = 2;
    }
  }
  while_10_break:  ;
  }

  return_label:  
  return;
}
}
void transmit10(void) 
{ 

  {
  if (t10_pc == 0) {
    goto T10_ENTRY;
  } else {
    if (t10_pc == 1) {
      goto T10_WAIT;
    } else {

    }
  }
  T10_ENTRY: ;
  {
  
    for (int FLAG13=0;FLAG13<BOUND13;FLAG13++)
         {
	while_11_continue:  ;
    t10_pc = 1;
    t10_st = 2;

    goto return_label;
    T10_WAIT: 
    {
    E_11 = 1;
    immediate_notify();
    E_11 = 2;
    }
  }
  while_11_break:  ;
  }

  return_label:  
  return;
}
}
void transmit11(void) 
{ 

  {
  if (t11_pc == 0) {
    goto T11_ENTRY;
  } else {
    if (t11_pc == 1) {
      goto T11_WAIT;
    } else {

    }
  }
  T11_ENTRY: ;
  {
  
    for (int FLAG14=0;FLAG14<BOUND14;FLAG14++)
         {
	while_12_continue:  ;
    t11_pc = 1;
    t11_st = 2;

    goto return_label;
    T11_WAIT: 
    {
    E_12 = 1;
    immediate_notify();
    E_12 = 2;
    }
  }
  while_12_break:  ;
  }

  return_label:  
  return;
}
}
void transmit12(void) 
{ 

  {
  if (t12_pc == 0) {
    goto T12_ENTRY;
  } else {
    if (t12_pc == 1) {
      goto T12_WAIT;
    } else {

    }
  }
  T12_ENTRY: ;
  {
  
    for (int FLAG15=0;FLAG15<BOUND15;FLAG15++)
         {
	while_13_continue:  ;
    t12_pc = 1;
    t12_st = 2;

    goto return_label;
    T12_WAIT: 
    {
    E_13 = 1;
    immediate_notify();
    E_13 = 2;
    }
  }
  while_13_break:  ;
  }

  return_label:  
  return;
}
}
void transmit13(void) 
{ 

  {
  if (t13_pc == 0) {
    goto T13_ENTRY;
  } else {
    if (t13_pc == 1) {
      goto T13_WAIT;
    } else {

    }
  }
  T13_ENTRY: ;
  {
  
    for (int FLAG16=0;FLAG16<BOUND16;FLAG16++)
         {
	while_14_continue:  ;
    t13_pc = 1;
    t13_st = 2;

    goto return_label;
    T13_WAIT: 
    {
    //error();
    }
  }
  while_14_break:  ;
  }

  return_label:  
  return;
}
}
void transmit14(void) 
{ 

  {
  if (t14_pc == 0) {
    goto T14_ENTRY;
  } else {
    if (t14_pc == 1) {
      goto T14_WAIT;
    } else {

    }
  }
  T14_ENTRY: ;
  {
  
    for (int FLAG17=0;FLAG17<BOUND17;FLAG17++)
         {
	while_45_continue:  ;
    t14_pc = 1;
    t14_st = 2;

    goto return_label;
    T14_WAIT: 
    {
    //error();
    }
  }
  while_45_break:  ;
  }

  return_label:  
  return;
}
}
int is_master_triggered(void) 
{ int __retres1 ;

  {
  if (m_pc == 1) {
    if (M_E == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label:  
  return (__retres1);
}
}
int is_transmit1_triggered(void) 
{ int __retres1 ;

  {
  if (t1_pc == 1) {
    if (E_1 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label:  
  return (__retres1);
}
}
int is_transmit2_triggered(void) 
{ int __retres1 ;

  {
  if (t2_pc == 1) {
    if (E_2 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label:  
  return (__retres1);
}
}
int is_transmit3_triggered(void) 
{ int __retres1 ;

  {
  if (t3_pc == 1) {
    if (E_3 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label:  
  return (__retres1);
}
}
int is_transmit4_triggered(void) 
{ int __retres1 ;

  {
  if (t4_pc == 1) {
    if (E_4 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label:  
  return (__retres1);
}
}
int is_transmit5_triggered(void) 
{ int __retres1 ;

  {
  if (t5_pc == 1) {
    if (E_5 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label:  
  return (__retres1);
}
}
int is_transmit6_triggered(void) 
{ int __retres1 ;

  {
  if (t6_pc == 1) {
    if (E_6 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label:  
  return (__retres1);
}
}
int is_transmit7_triggered(void) 
{ int __retres1 ;

  {
  if (t7_pc == 1) {
    if (E_7 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label:  
  return (__retres1);
}
}
int is_transmit8_triggered(void) 
{ int __retres1 ;

  {
  if (t8_pc == 1) {
    if (E_8 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label:  
  return (__retres1);
}
}
int is_transmit9_triggered(void) 
{ int __retres1 ;

  {
  if (t9_pc == 1) {
    if (E_9 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label:  
  return (__retres1);
}
}
int is_transmit10_triggered(void) 
{ int __retres1 ;

  {
  if (t10_pc == 1) {
    if (E_10 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label:  
  return (__retres1);
}
}
int is_transmit11_triggered(void) 
{ int __retres1 ;

  {
  if (t11_pc == 1) {
    if (E_11 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label:  
  return (__retres1);
}
}
int is_transmit12_triggered(void) 
{ int __retres1 ;

  {
  if (t12_pc == 1) {
    if (E_12 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label:  
  return (__retres1);
}
}
int is_transmit13_triggered(void) 
{ int __retres1 ;

  {
  if (t13_pc == 1) {
    if (E_13 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label:  
  return (__retres1);
}
}
int is_transmit14_triggered(void) 
{ int __retres1 ;

  {
  if (t14_pc == 1) {
    if (E_14 == 1) {
      __retres1 = 1;
      goto return_label;
    } else {

    }
  } else {

  }
  __retres1 = 0;
  return_label:  
  return (__retres1);
}
}
void update_channels(void) 
{ 

  {

  return;
}
}
void init_threads(void) 
{ 

  {
  if (m_i == 1) {
    m_st = 0;
  } else {
    m_st = 2;
  }
  if (t1_i == 1) {
    t1_st = 0;
  } else {
    t1_st = 2;
  }
  if (t2_i == 1) {
    t2_st = 0;
  } else {
    t2_st = 2;
  }
  if (t3_i == 1) {
    t3_st = 0;
  } else {
    t3_st = 2;
  }
  if (t4_i == 1) {
    t4_st = 0;
  } else {
    t4_st = 2;
  }
  if (t5_i == 1) {
    t5_st = 0;
  } else {
    t5_st = 2;
  }
  if (t6_i == 1) {
    t6_st = 0;
  } else {
    t6_st = 2;
  }
  if (t7_i == 1) {
    t7_st = 0;
  } else {
    t7_st = 2;
  }
  if (t8_i == 1) {
    t8_st = 0;
  } else {
    t8_st = 2;
  }
  if (t9_i == 1) {
    t9_st = 0;
  } else {
    t9_st = 2;
  }
  if (t10_i == 1) {
    t10_st = 0;
  } else {
    t10_st = 2;
  }
  if (t11_i == 1) {
    t11_st = 0;
  } else {
    t11_st = 2;
  }
  if (t12_i == 1) {
    t12_st = 0;
  } else {
    t12_st = 2;
  }
  if (t13_i == 1) {
    t13_st = 0;
  } else {
    t13_st = 2;
  }
  if (t14_i == 1) {
    t14_st = 0;
  } else {
    t14_st = 2;
  }

  return;
}
}
int exists_runnable_thread(void) 
{ int __retres1 ;

  {
  if (m_st == 0) {
    __retres1 = 1;
    goto return_label;
  } else {
    if (t1_st == 0) {
      __retres1 = 1;
      goto return_label;
    } else {
      if (t2_st == 0) {
        __retres1 = 1;
        goto return_label;
      } else {
        if (t3_st == 0) {
          __retres1 = 1;
          goto return_label;
        } else {
          if (t4_st == 0) {
            __retres1 = 1;
            goto return_label;
          } else {
            if (t5_st == 0) {
              __retres1 = 1;
              goto return_label;
            } else {
              if (t6_st == 0) {
                __retres1 = 1;
                goto return_label;
              } else {
                if (t7_st == 0) {
                  __retres1 = 1;
                  goto return_label;
                } else {
                  if (t8_st == 0) {
                    __retres1 = 1;
                    goto return_label;
                  } else {
                    if (t9_st == 0) {
                      __retres1 = 1;
                      goto return_label;
                    } else {
                      if (t10_st == 0) {
                        __retres1 = 1;
                        goto return_label;
                      } else {
                        if (t11_st == 0) {
                          __retres1 = 1;
                          goto return_label;
                        } else {
                          if (t12_st == 0) {
                            __retres1 = 1;
                            goto return_label;
                          } else {
                            if (t13_st == 0) {
                              __retres1 = 1;
                              goto return_label;
                            } else {
                                if(t14_st == 0) {
                                  __retres1 = 1;
                                  goto return_label;                                
                                }
                                else {
 
                                }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  __retres1 = 0;
  return_label:  
  return (__retres1);
}
}
void eval(void) 
{
  int tmp ;

  {
  {
  
    
        int symb1[BOUND1][16];
	klee_make_symbolic(symb1, sizeof(int) * BOUND1 * 16, "symb1");
	for (int FLAG=0;FLAG<BOUND1;FLAG++)
         {
         
    while_15_continue:  ;
    {
    tmp = exists_runnable_thread();
    }
    if (tmp) {

    } else {
      goto while_15_break;
    }
    if (m_st == 0) {
      
      if (symb1[FLAG][0]) {
        {
        m_st = 1;
        master();
        }
      } else {

      }
    } else {

    }
    if (t1_st == 0) {
      
      if (symb1[FLAG][1]) {
        {
        t1_st = 1;
        transmit1();
        }
      } else {
        error();
      }
    } else {

    }
    if (t2_st == 0) {
      
      if (symb1[FLAG][2]) {
        {
        t2_st = 1;
        transmit2();
        }
      } else {

      }
    } else {

    }
    if (t3_st == 0) {
      
      if (symb1[FLAG][3]) {
        {
        t3_st = 1;
        transmit3();
        }
      } else {

      }
    } else {

    }
    if (t4_st == 0) {
     
      if (symb1[FLAG][4]) {
        {
        t4_st = 1;
        transmit4();
        }
      } else {

      }
    } else {

    }
    if (t5_st == 0) {
      
      if (symb1[FLAG][5]) {
        {
        t5_st = 1;
        transmit5();
        }
      } else {

      }
    } else {

    }
    if (t6_st == 0) {
    
      if (symb1[FLAG][6]) {
        {
        t6_st = 1;
        transmit6();
        }
      } else {

      }
    } else {

    }
    if (t7_st == 0) {
      
      if (symb1[FLAG][7]) {
        {
        t7_st = 1;
        transmit7();
        }
      } else {

      }
    } else {

    }
    if (t8_st == 0) {
     
      if (symb1[FLAG][8]) {
        {
        t8_st = 1;
        transmit8();
        }
      } else {

      }
    } else {

    }
    if (t9_st == 0) {
     
      if (symb1[FLAG][9]) {
        {
        t9_st = 1;
        transmit9();
        }
      } else {

      }
    } else {

    }
    if (t10_st == 0) {
      
      if (symb1[FLAG][10]) {
        {
        t10_st = 1;
        transmit10();
        }
      } else {

      }
    } else {

    }
    if (t11_st == 0) {
      
      if (symb1[FLAG][11]) {
        {
        t11_st = 1;
        transmit11();
        }
      } else {

      }
    } else {

    }
    if (t12_st == 0) {
      
      if (symb1[FLAG][12]) {
        {
        t12_st = 1;
        transmit12();
        }
      } else {

      }
    } else {

    }
    if (t13_st == 0) {
     
      if (symb1[FLAG][13]) {
        {
        t13_st = 1;
        transmit13();
        }
      } else {

      }
    } else {

    }
    if (t14_st == 0) {
      
      if (symb1[FLAG][14]) {
        {
        t14_st = 1;
        transmit14();
        }
      } else {

      }
    }
    else {
  
    }
  }
  while_15_break:  ;
  }

  return;
}
}
void fire_delta_events(void) 
{ 

  {
  if (M_E == 0) {
    M_E = 1;
  } else {

  }
  if (T1_E == 0) {
    T1_E = 1;
  } else {

  }
  if (T2_E == 0) {
    T2_E = 1;
  } else {

  }
  if (T3_E == 0) {
    T3_E = 1;
  } else {

  }
  if (T4_E == 0) {
    T4_E = 1;
  } else {

  }
  if (T5_E == 0) {
    T5_E = 1;
  } else {

  }
  if (T6_E == 0) {
    T6_E = 1;
  } else {

  }
  if (T7_E == 0) {
    T7_E = 1;
  } else {

  }
  if (T8_E == 0) {
    T8_E = 1;
  } else {

  }
  if (T9_E == 0) {
    T9_E = 1;
  } else {

  }
  if (T10_E == 0) {
    T10_E = 1;
  } else {

  }
  if (T11_E == 0) {
    T11_E = 1;
  } else {

  }
  if (T12_E == 0) {
    T12_E = 1;
  } else {

  }
  if (T13_E == 0) {
    T13_E = 1;
  } else {

  }
  if (T14_E == 0) {
    T14_E = 1;
  } else {

  }
  if (E_1 == 0) {
    E_1 = 1;
  } else {

  }
  if (E_2 == 0) {
    E_2 = 1;
  } else {

  }
  if (E_3 == 0) {
    E_3 = 1;
  } else {

  }
  if (E_4 == 0) {
    E_4 = 1;
  } else {

  }
  if (E_5 == 0) {
    E_5 = 1;
  } else {

  }
  if (E_6 == 0) {
    E_6 = 1;
  } else {

  }
  if (E_7 == 0) {
    E_7 = 1;
  } else {

  }
  if (E_8 == 0) {
    E_8 = 1;
  } else {

  }
  if (E_9 == 0) {
    E_9 = 1;
  } else {

  }
  if (E_10 == 0) {
    E_10 = 1;
  } else {

  }
  if (E_11 == 0) {
    E_11 = 1;
  } else {

  }
  if (E_12 == 0) {
    E_12 = 1;
  } else {

  }
  if (E_13 == 0) {
    E_13 = 1;
  } else {

  }
  if (E_14 == 0) {
    E_14 = 1;
  } else {

  }

  return;
}
}
void reset_delta_events(void) 
{ 

  {
  if (M_E == 1) {
    M_E = 2;
  } else {

  }
  if (T1_E == 1) {
    T1_E = 2;
  } else {

  }
  if (T2_E == 1) {
    T2_E = 2;
  } else {

  }
  if (T3_E == 1) {
    T3_E = 2;
  } else {

  }
  if (T4_E == 1) {
    T4_E = 2;
  } else {

  }
  if (T5_E == 1) {
    T5_E = 2;
  } else {

  }
  if (T6_E == 1) {
    T6_E = 2;
  } else {

  }
  if (T7_E == 1) {
    T7_E = 2;
  } else {

  }
  if (T8_E == 1) {
    T8_E = 2;
  } else {

  }
  if (T9_E == 1) {
    T9_E = 2;
  } else {

  }
  if (T10_E == 1) {
    T10_E = 2;
  } else {

  }
  if (T11_E == 1) {
    T11_E = 2;
  } else {

  }
  if (T12_E == 1) {
    T12_E = 2;
  } else {

  }
  if (T13_E == 1) {
    T13_E = 2;
  } else {

  }
  if (T14_E == 1) {
    T14_E = 2;
  } else {

  }
  if (E_1 == 1) {
    E_1 = 2;
  } else {

  }
  if (E_2 == 1) {
    E_2 = 2;
  } else {

  }
  if (E_3 == 1) {
    E_3 = 2;
  } else {

  }
  if (E_4 == 1) {
    E_4 = 2;
  } else {

  }
  if (E_5 == 1) {
    E_5 = 2;
  } else {

  }
  if (E_6 == 1) {
    E_6 = 2;
  } else {

  }
  if (E_7 == 1) {
    E_7 = 2;
  } else {

  }
  if (E_8 == 1) {
    E_8 = 2;
  } else {

  }
  if (E_9 == 1) {
    E_9 = 2;
  } else {

  }
  if (E_10 == 1) {
    E_10 = 2;
  } else {

  }
  if (E_11 == 1) {
    E_11 = 2;
  } else {

  }
  if (E_12 == 1) {
    E_12 = 2;
  } else {

  }
  if (E_13 == 1) {
    E_13 = 2;
  } else {

  }
  if (E_14 == 1) {
    E_14 = 2;
  } else {

  }

  return;
}
}
void activate_threads(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;


  {
  {
  tmp = is_master_triggered();
  }
  if (tmp) {
    m_st = 0;
  } else {

  }
  {
  tmp___0 = is_transmit1_triggered();
  }
  if (tmp___0) {
    t1_st = 0;
  } else {

  }
  {
  tmp___1 = is_transmit2_triggered();
  }
  if (tmp___1) {
    t2_st = 0;
  } else {

  }
  {
  tmp___2 = is_transmit3_triggered();
  }
  if (tmp___2) {
    t3_st = 0;
  } else {

  }
  {
  tmp___3 = is_transmit4_triggered();
  }
  if (tmp___3) {
    t4_st = 0;
  } else {

  }
  {
  tmp___4 = is_transmit5_triggered();
  }
  if (tmp___4) {
    t5_st = 0;
  } else {

  }
  {
  tmp___5 = is_transmit6_triggered();
  }
  if (tmp___5) {
    t6_st = 0;
  } else {

  }
  {
  tmp___6 = is_transmit7_triggered();
  }
  if (tmp___6) {
    t7_st = 0;
  } else {

  }
  {
  tmp___7 = is_transmit8_triggered();
  }
  if (tmp___7) {
    t8_st = 0;
  } else {

  }
  {
  tmp___8 = is_transmit9_triggered();
  }
  if (tmp___8) {
    t9_st = 0;
  } else {

  }
  {
  tmp___9 = is_transmit10_triggered();
  }
  if (tmp___9) {
    t10_st = 0;
  } else {

  }
  {
  tmp___10 = is_transmit11_triggered();
  }
  if (tmp___10) {
    t11_st = 0;
  } else {

  }
  {
  tmp___11 = is_transmit12_triggered();
  }
  if (tmp___11) {
    t12_st = 0;
  } else {

  }
  {
  tmp___12 = is_transmit13_triggered();
  }
  if (tmp___12) {
    t13_st = 0;
  } else {

  }
  {
  tmp___13 = is_transmit14_triggered();
  }
  if (tmp___13) {
    t14_st = 0;
  } else {

  }

  return;
}
}
void immediate_notify(void) 
{ 

  {
  {
  activate_threads();
  }

  return;
}
}
void fire_time_events(void) 
{ 

  {
  M_E = 1;

  return;
}
}
void reset_time_events(void) 
{ 

  {
  if (M_E == 1) {
    M_E = 2;
  } else {

  }
  if (T1_E == 1) {
    T1_E = 2;
  } else {

  }
  if (T2_E == 1) {
    T2_E = 2;
  } else {

  }
  if (T3_E == 1) {
    T3_E = 2;
  } else {

  }
  if (T4_E == 1) {
    T4_E = 2;
  } else {

  }
  if (T5_E == 1) {
    T5_E = 2;
  } else {

  }
  if (T6_E == 1) {
    T6_E = 2;
  } else {

  }
  if (T7_E == 1) {
    T7_E = 2;
  } else {

  }
  if (T8_E == 1) {
    T8_E = 2;
  } else {

  }
  if (T9_E == 1) {
    T9_E = 2;
  } else {

  }
  if (T10_E == 1) {
    T10_E = 2;
  } else {

  }
  if (T11_E == 1) {
    T11_E = 2;
  } else {

  }
  if (T12_E == 1) {
    T12_E = 2;
  } else {

  }
  if (T13_E == 1) {
    T13_E = 2;
  } else {

  }
  if (T14_E == 1) {
    T14_E = 2;
  } else {

  }
  if (E_1 == 1) {
    E_1 = 2;
  } else {

  }
  if (E_2 == 1) {
    E_2 = 2;
  } else {

  }
  if (E_3 == 1) {
    E_3 = 2;
  } else {

  }
  if (E_4 == 1) {
    E_4 = 2;
  } else {

  }
  if (E_5 == 1) {
    E_5 = 2;
  } else {

  }
  if (E_6 == 1) {
    E_6 = 2;
  } else {

  }
  if (E_7 == 1) {
    E_7 = 2;
  } else {

  }
  if (E_8 == 1) {
    E_8 = 2;
  } else {

  }
  if (E_9 == 1) {
    E_9 = 2;
  } else {

  }
  if (E_10 == 1) {
    E_10 = 2;
  } else {

  }
  if (E_11 == 1) {
    E_11 = 2;
  } else {

  }
  if (E_12 == 1) {
    E_12 = 2;
  } else {

  }
  if (E_13 == 1) {
    E_13 = 2;
  } else {

  }
  if (E_14 == 1) {
    E_14 = 2;
  } else {

  }

  return;
}
}
void init_model(void) 
{ 

  {
  m_i = 1;
  t1_i = 1;
  t2_i = 1;
  t3_i = 1;
  t4_i = 1;
  t5_i = 1;
  t6_i = 1;
  t7_i = 1;
  t8_i = 1;
  t9_i = 1;
  t10_i = 1;
  t11_i = 1;
  t12_i = 1;
  t13_i = 1;
  t14_i = 1;

  return;
}
}
int stop_simulation(void) 
{ int tmp ;
  int __retres2 ;

  {
  {
  tmp = exists_runnable_thread();
  }
  if (tmp) {
    __retres2 = 0;
    goto return_label;
  } else {

  }
  __retres2 = 1;
  return_label:  
  return (__retres2);
}
}
void start_simulation(void) 
{ int kernel_st ;
  int tmp ;
  int tmp___0 ;

  {
  {
  kernel_st = 0;
  update_channels();
  init_threads();
  fire_delta_events();
  activate_threads();
  reset_delta_events();
  }
  {
  
    for (int FLAG18=0;FLAG18<BOUND18;FLAG18++)
         {
	while_16_continue:  ;
    {
    kernel_st = 1;
    eval();
    }
    {
    kernel_st = 2;
    update_channels();
    }
    {
    kernel_st = 3;
    fire_delta_events();
    activate_threads();
    reset_delta_events();
    }
    {
    tmp = exists_runnable_thread();
    }
    if (tmp == 0) {
      {
      kernel_st = 4;
      fire_time_events();
      activate_threads();
      reset_time_events();
      }
    } else {

    }
    {
    tmp___0 = stop_simulation();
    }
    if (tmp___0) {
      goto while_16_break;
    } else {

    }
  }
  while_16_break:  ;
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
  init_model();
  start_simulation();
  }
  __retres1 = 0;
  return (__retres1);
}
}
