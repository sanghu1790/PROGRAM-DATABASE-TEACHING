/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */







int BOUND1  =    8;
int BOUND2  =    8;
int BOUND3  =    8;
int BOUND4  =    8;
int BOUND5  =    8;
int BOUND6  =    8;
int BOUND7  =    8;
int BOUND8  =    8;
int BOUND9  =    8;
int BOUND10  =    8;
int BOUND11  =    8;
int BOUND12  =    8;
int BOUND13  =    8;
int BOUND14  =    8;
int BOUND15  =    8;
int BOUND16  =    8;
int kappa  =    0;
void ABC(void) 
{ 

  {
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
int E_M  =    2;
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
void immediate_notify(void) ;
int token  ;
int local  ;

void master(void) 
{ int tmp_var ;
  int symbb1 ;
  int FLAG1 ;

  {
  scanf("%d", &tmp_var);
  if (! (m_pc == 0)) {
    if (m_pc == 1) {
      goto M_WAIT;
    }
  }
  M_ENTRY: 
  FLAG1 = 0;
  while (FLAG1 < BOUND1) {
    scanf("%d", &symbb1);
    token = symbb1;
    local = token;
    E_1 = 1;
    immediate_notify();
    E_1 = 2;
    m_pc = 1;
    m_st = 2;
    goto return_label;
    M_WAIT: ;
    if (token != local + 13) {
      ABC();
    } else {
      if (tmp_var <= 5) {
        if (tmp_var >= 5) {
          if (tmp_var == 5) {
            ABC();
          }
        }
      }
    }
    FLAG1 = FLAG1 + 1;
  }

  return_label: 
  return;
}
}
void transmit1(void) 
{ int FLAG15 ;

  {
  if (! (t1_pc == 0)) {
    if (t1_pc == 1) {
      goto T1_WAIT;
    }
  }
  T1_ENTRY: 
  FLAG15 = 0;
  while (FLAG15 < BOUND15) {
    t1_pc = 1;
    t1_st = 2;
    goto return_label;
    T1_WAIT: 
    token = token + 1;
    E_2 = 1;
    immediate_notify();
    E_2 = 2;
    FLAG15 = FLAG15 + 1;
  }

  return_label: 
  return;
}
}
void transmit2(void) 
{ int FLAG3 ;

  {
  if (! (t2_pc == 0)) {
    if (t2_pc == 1) {
      goto T2_WAIT;
    }
  }
  T2_ENTRY: 
  FLAG3 = 0;
  while (FLAG3 < BOUND3) {
    t2_pc = 1;
    t2_st = 2;
    goto return_label;
    T2_WAIT: 
    token = token + 1;
    E_3 = 1;
    immediate_notify();
    E_3 = 2;
    FLAG3 = FLAG3 + 1;
  }

  return_label: 
  return;
}
}
void transmit3(void) 
{ int FLAG4 ;

  {
  if (! (t3_pc == 0)) {
    if (t3_pc == 1) {
      goto T3_WAIT;
    }
  }
  T3_ENTRY: 
  FLAG4 = 0;
  while (FLAG4 < BOUND4) {
    t3_pc = 1;
    t3_st = 2;
    goto return_label;
    T3_WAIT: 
    token = token + 1;
    E_4 = 1;
    immediate_notify();
    E_4 = 2;
    FLAG4 = FLAG4 + 1;
  }

  return_label: 
  return;
}
}
void transmit4(void) 
{ int FLAG5 ;

  {
  if (! (t4_pc == 0)) {
    if (t4_pc == 1) {
      goto T4_WAIT;
    }
  }
  T4_ENTRY: 
  FLAG5 = 0;
  while (FLAG5 < BOUND5) {
    t4_pc = 1;
    t4_st = 2;
    goto return_label;
    T4_WAIT: 
    token = token + 1;
    E_5 = 1;
    immediate_notify();
    E_5 = 2;
    FLAG5 = FLAG5 + 1;
  }

  return_label: 
  return;
}
}
void transmit5(void) 
{ int FLAG6 ;

  {
  if (! (t5_pc == 0)) {
    if (t5_pc == 1) {
      goto T5_WAIT;
    }
  }
  T5_ENTRY: 
  FLAG6 = 0;
  while (FLAG6 < BOUND6) {
    t5_pc = 1;
    t5_st = 2;
    goto return_label;
    T5_WAIT: 
    token = token + 1;
    E_6 = 1;
    immediate_notify();
    E_6 = 2;
    FLAG6 = FLAG6 + 1;
  }

  return_label: 
  return;
}
}
void transmit6(void) 
{ int FLAG7 ;

  {
  if (! (t6_pc == 0)) {
    if (t6_pc == 1) {
      goto T6_WAIT;
    }
  }
  T6_ENTRY: 
  FLAG7 = 0;
  while (FLAG7 < BOUND7) {
    t6_pc = 1;
    t6_st = 2;
    goto return_label;
    T6_WAIT: 
    token = token + 1;
    E_7 = 1;
    immediate_notify();
    E_7 = 2;
    FLAG7 = FLAG7 + 1;
  }

  return_label: 
  return;
}
}
void transmit7(void) 
{ int FLAG8 ;

  {
  if (! (t7_pc == 0)) {
    if (t7_pc == 1) {
      goto T7_WAIT;
    }
  }
  T7_ENTRY: 
  FLAG8 = 0;
  while (FLAG8 < BOUND8) {
    t7_pc = 1;
    t7_st = 2;
    goto return_label;
    T7_WAIT: 
    token = token + 1;
    E_8 = 1;
    immediate_notify();
    E_8 = 2;
    FLAG8 = FLAG8 + 1;
  }

  return_label: 
  return;
}
}
void transmit8(void) 
{ int FLAG9 ;

  {
  if (! (t8_pc == 0)) {
    if (t8_pc == 1) {
      goto T8_WAIT;
    }
  }
  T8_ENTRY: 
  FLAG9 = 0;
  while (FLAG9 < BOUND9) {
    t8_pc = 1;
    t8_st = 2;
    goto return_label;
    T8_WAIT: 
    token = token + 1;
    E_9 = 1;
    immediate_notify();
    E_9 = 2;
    FLAG9 = FLAG9 + 1;
  }

  return_label: 
  return;
}
}
void transmit9(void) 
{ int FLAG10 ;

  {
  if (! (t9_pc == 0)) {
    if (t9_pc == 1) {
      goto T9_WAIT;
    }
  }
  T9_ENTRY: 
  FLAG10 = 0;
  while (FLAG10 < BOUND10) {
    t9_pc = 1;
    t9_st = 2;
    goto return_label;
    T9_WAIT: 
    token = token + 1;
    E_10 = 1;
    immediate_notify();
    E_10 = 2;
    FLAG10 = FLAG10 + 1;
  }

  return_label: 
  return;
}
}
void transmit10(void) 
{ int FLAG11 ;

  {
  if (! (t10_pc == 0)) {
    if (t10_pc == 1) {
      goto T10_WAIT;
    }
  }
  T10_ENTRY: 
  FLAG11 = 0;
  while (FLAG11 < BOUND11) {
    t10_pc = 1;
    t10_st = 2;
    goto return_label;
    T10_WAIT: 
    token = token + 1;
    E_11 = 1;
    immediate_notify();
    E_11 = 2;
    FLAG11 = FLAG11 + 1;
  }

  return_label: 
  return;
}
}
void transmit11(void) 
{ int FLAG12 ;

  {
  if (! (t11_pc == 0)) {
    if (t11_pc == 1) {
      goto T11_WAIT;
    }
  }
  T11_ENTRY: 
  FLAG12 = 0;
  while (FLAG12 < BOUND12) {
    t11_pc = 1;
    t11_st = 2;
    goto return_label;
    T11_WAIT: 
    token = token + 1;
    E_12 = 1;
    immediate_notify();
    E_12 = 2;
    FLAG12 = FLAG12 + 1;
  }

  return_label: 
  return;
}
}
void transmit12(void) 
{ int FLAG13 ;

  {
  if (! (t12_pc == 0)) {
    if (t12_pc == 1) {
      goto T12_WAIT;
    }
  }
  T12_ENTRY: 
  FLAG13 = 0;
  while (FLAG13 < BOUND13) {
    t12_pc = 1;
    t12_st = 2;
    goto return_label;
    T12_WAIT: 
    token = token + 1;
    E_13 = 1;
    immediate_notify();
    E_13 = 2;
    FLAG13 = FLAG13 + 1;
  }

  return_label: 
  return;
}
}
void transmit13(void) 
{ int FLAG14 ;

  {
  if (! (t13_pc == 0)) {
    if (t13_pc == 1) {
      goto T13_WAIT;
    }
  }
  T13_ENTRY: 
  FLAG14 = 0;
  while (FLAG14 < BOUND14) {
    t13_pc = 1;
    t13_st = 2;
    goto return_label;
    T13_WAIT: 
    token = token + 1;
    E_M = 1;
    immediate_notify();
    E_M = 2;
    FLAG14 = FLAG14 + 1;
  }

  return_label: 
  return;
}
}
int is_master_triggered(void) 
{ int __retres1 ;

  {
  if (m_pc == 1) {
    if (E_M == 1) {
      __retres1 = 1;
      goto return_label;
    }
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
    }
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
    }
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
    }
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
    }
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
    }
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
    }
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
    }
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
    }
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
    }
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
    }
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
    }
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
    }
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
    }
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
{ int tmp ;
  int symb1 ;
  int symb2 ;
  int symb3 ;
  int symb4 ;
  int symb5 ;
  int symb6 ;
  int symb7 ;
  int symb8 ;
  int symb9 ;
  int symb10 ;
  int symb11 ;
  int symb12 ;
  int symb13 ;
  int symb14 ;
  int FLAG2 ;

  {
  FLAG2 = 0;
  while (FLAG2 < BOUND2) {
    scanf("%d", &symb1);
    scanf("%d", &symb2);
    scanf("%d", &symb3);
    scanf("%d", &symb4);
    scanf("%d", &symb5);
    scanf("%d", &symb6);
    scanf("%d", &symb7);
    scanf("%d", &symb8);
    scanf("%d", &symb9);
    scanf("%d", &symb10);
    scanf("%d", &symb11);
    scanf("%d", &symb12);
    scanf("%d", &symb13);
    scanf("%d", &symb14);
    tmp = exists_runnable_thread();
    if (! tmp) {
      goto while_14_break;
    }
    if (m_st == 0) {
      if (symb1) {
        m_st = 1;
        master();
      }
    }
    if (t1_st == 0) {
      if (symb2) {
        t1_st = 1;
        transmit1();
      }
    }
    if (t2_st == 0) {
      if (symb3) {
        t2_st = 1;
        transmit2();
      }
    }
    if (t3_st == 0) {
      if (symb4) {
        t3_st = 1;
        transmit3();
      }
    }
    if (t4_st == 0) {
      if (symb5) {
        t4_st = 1;
        transmit4();
      }
    }
    if (t5_st == 0) {
      if (symb6) {
        t5_st = 1;
        transmit5();
      }
    }
    if (t6_st == 0) {
      if (symb7) {
        t6_st = 1;
        transmit6();
      }
    }
    if (t7_st == 0) {
      if (symb8) {
        t7_st = 1;
        transmit7();
      }
    }
    if (t8_st == 0) {
      if (symb9) {
        t8_st = 1;
        transmit8();
      }
    }
    if (t9_st == 0) {
      if (symb10) {
        t9_st = 1;
        transmit9();
      }
    }
    if (t10_st == 0) {
      if (symb11) {
        t10_st = 1;
        transmit10();
      }
    }
    if (t11_st == 0) {
      if (symb12) {
        t11_st = 1;
        transmit11();
      }
    }
    if (t12_st == 0) {
      if (symb13) {
        t12_st = 1;
        transmit12();
      }
    }
    if (t13_st == 0) {
      if (symb14) {
        t13_st = 1;
        transmit13();
      }
    }
    FLAG2 = FLAG2 + 1;
  }
  while_14_break: ;
  return;
}
}
void fire_delta_events(void) 
{ 

  {
  if (M_E == 0) {
    M_E = 1;
  }
  if (T1_E == 0) {
    T1_E = 1;
  }
  if (T2_E == 0) {
    T2_E = 1;
  }
  if (T3_E == 0) {
    T3_E = 1;
  }
  if (T4_E == 0) {
    T4_E = 1;
  }
  if (T5_E == 0) {
    T5_E = 1;
  }
  if (T6_E == 0) {
    T6_E = 1;
  }
  if (T7_E == 0) {
    T7_E = 1;
  }
  if (T8_E == 0) {
    T8_E = 1;
  }
  if (T9_E == 0) {
    T9_E = 1;
  }
  if (T10_E == 0) {
    T10_E = 1;
  }
  if (T11_E == 0) {
    T11_E = 1;
  }
  if (T12_E == 0) {
    T12_E = 1;
  }
  if (T13_E == 0) {
    T13_E = 1;
  }
  if (E_M == 0) {
    E_M = 1;
  }
  if (E_1 == 0) {
    E_1 = 1;
  }
  if (E_2 == 0) {
    E_2 = 1;
  }
  if (E_3 == 0) {
    E_3 = 1;
  }
  if (E_4 == 0) {
    E_4 = 1;
  }
  if (E_5 == 0) {
    E_5 = 1;
  }
  if (E_6 == 0) {
    E_6 = 1;
  }
  if (E_7 == 0) {
    E_7 = 1;
  }
  if (E_8 == 0) {
    E_8 = 1;
  }
  if (E_9 == 0) {
    E_9 = 1;
  }
  if (E_10 == 0) {
    E_10 = 1;
  }
  if (E_11 == 0) {
    E_11 = 1;
  }
  if (E_12 == 0) {
    E_12 = 1;
  }
  if (E_13 == 0) {
    E_13 = 1;
  }
  return;
}
}
void reset_delta_events(void) 
{ 

  {
  if (M_E == 1) {
    M_E = 2;
  }
  if (T1_E == 1) {
    T1_E = 2;
  }
  if (T2_E == 1) {
    T2_E = 2;
  }
  if (T3_E == 1) {
    T3_E = 2;
  }
  if (T4_E == 1) {
    T4_E = 2;
  }
  if (T5_E == 1) {
    T5_E = 2;
  }
  if (T6_E == 1) {
    T6_E = 2;
  }
  if (T7_E == 1) {
    T7_E = 2;
  }
  if (T8_E == 1) {
    T8_E = 2;
  }
  if (T9_E == 1) {
    T9_E = 2;
  }
  if (T10_E == 1) {
    T10_E = 2;
  }
  if (T11_E == 1) {
    T11_E = 2;
  }
  if (T12_E == 1) {
    T12_E = 2;
  }
  if (T13_E == 1) {
    T13_E = 2;
  }
  if (E_M == 1) {
    E_M = 2;
  }
  if (E_1 == 1) {
    E_1 = 2;
  }
  if (E_2 == 1) {
    E_2 = 2;
  }
  if (E_3 == 1) {
    E_3 = 2;
  }
  if (E_4 == 1) {
    E_4 = 2;
  }
  if (E_5 == 1) {
    E_5 = 2;
  }
  if (E_6 == 1) {
    E_6 = 2;
  }
  if (E_7 == 1) {
    E_7 = 2;
  }
  if (E_8 == 1) {
    E_8 = 2;
  }
  if (E_9 == 1) {
    E_9 = 2;
  }
  if (E_10 == 1) {
    E_10 = 2;
  }
  if (E_11 == 1) {
    E_11 = 2;
  }
  if (E_12 == 1) {
    E_12 = 2;
  }
  if (E_13 == 1) {
    E_13 = 2;
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

  {
  tmp = is_master_triggered();
  if (tmp) {
    m_st = 0;
  }
  tmp___0 = is_transmit1_triggered();
  if (tmp___0) {
    t1_st = 0;
  }
  tmp___1 = is_transmit2_triggered();
  if (tmp___1) {
    t2_st = 0;
  }
  tmp___2 = is_transmit3_triggered();
  if (tmp___2) {
    t3_st = 0;
  }
  tmp___3 = is_transmit4_triggered();
  if (tmp___3) {
    t4_st = 0;
  }
  tmp___4 = is_transmit5_triggered();
  if (tmp___4) {
    t5_st = 0;
  }
  tmp___5 = is_transmit6_triggered();
  if (tmp___5) {
    t6_st = 0;
  }
  tmp___6 = is_transmit7_triggered();
  if (tmp___6) {
    t7_st = 0;
  }
  tmp___7 = is_transmit8_triggered();
  if (tmp___7) {
    t8_st = 0;
  }
  tmp___8 = is_transmit9_triggered();
  if (tmp___8) {
    t9_st = 0;
  }
  tmp___9 = is_transmit10_triggered();
  if (tmp___9) {
    t10_st = 0;
  }
  tmp___10 = is_transmit11_triggered();
  if (tmp___10) {
    t11_st = 0;
  }
  tmp___11 = is_transmit12_triggered();
  if (tmp___11) {
    t12_st = 0;
  }
  tmp___12 = is_transmit13_triggered();
  if (tmp___12) {
    t13_st = 0;
  }
  return;
}
}
void immediate_notify(void) 
{ 

  {
  activate_threads();
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
  }
  if (T1_E == 1) {
    T1_E = 2;
  }
  if (T2_E == 1) {
    T2_E = 2;
  }
  if (T3_E == 1) {
    T3_E = 2;
  }
  if (T4_E == 1) {
    T4_E = 2;
  }
  if (T5_E == 1) {
    T5_E = 2;
  }
  if (T6_E == 1) {
    T6_E = 2;
  }
  if (T7_E == 1) {
    T7_E = 2;
  }
  if (T8_E == 1) {
    T8_E = 2;
  }
  if (T9_E == 1) {
    T9_E = 2;
  }
  if (T10_E == 1) {
    T10_E = 2;
  }
  if (T11_E == 1) {
    T11_E = 2;
  }
  if (T12_E == 1) {
    T12_E = 2;
  }
  if (T13_E == 1) {
    T13_E = 2;
  }
  if (E_M == 1) {
    E_M = 2;
  }
  if (E_1 == 1) {
    E_1 = 2;
  }
  if (E_2 == 1) {
    E_2 = 2;
  }
  if (E_3 == 1) {
    E_3 = 2;
  }
  if (E_4 == 1) {
    E_4 = 2;
  }
  if (E_5 == 1) {
    E_5 = 2;
  }
  if (E_6 == 1) {
    E_6 = 2;
  }
  if (E_7 == 1) {
    E_7 = 2;
  }
  if (E_8 == 1) {
    E_8 = 2;
  }
  if (E_9 == 1) {
    E_9 = 2;
  }
  if (E_10 == 1) {
    E_10 = 2;
  }
  if (E_11 == 1) {
    E_11 = 2;
  }
  if (E_12 == 1) {
    E_12 = 2;
  }
  if (E_13 == 1) {
    E_13 = 2;
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
  return;
}
}
int stop_simulation(void) 
{ int tmp ;
  int __retres2 ;

  {
  tmp = exists_runnable_thread();
  if (tmp) {
    __retres2 = 0;
    goto return_label;
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
  int FLAG16 ;

  {
  kernel_st = 0;
  update_channels();
  init_threads();
  fire_delta_events();
  activate_threads();
  reset_delta_events();
  FLAG16 = 0;
  while (FLAG16 < BOUND16) {
    kernel_st = 1;
    eval();
    kernel_st = 2;
    update_channels();
    kernel_st = 3;
    fire_delta_events();
    activate_threads();
    reset_delta_events();
    tmp = exists_runnable_thread();
    if (tmp == 0) {
      kernel_st = 4;
      fire_time_events();
      activate_threads();
      reset_time_events();
    }
    tmp___0 = stop_simulation();
    if (tmp___0) {
      goto while_15_break;
    }
    FLAG16 = FLAG16 + 1;
  }
  while_15_break: ;
  return;
}
}

int main(void) 
{ int __retres1 ;

  {
  init_model();
  start_simulation();

  __retres1 = 0;
  return (__retres1);
}
}
