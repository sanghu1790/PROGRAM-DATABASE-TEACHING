/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */






typedef int bool;
typedef char msg_t;
typedef int port_t;
int kappa  =    0;
msg_t nomsg  =    (char)-1;
char r1  ;
port_t p1  ;
char p1_old  ;
char p1_new  ;
char id1  ;
char st1  ;
msg_t send1  ;
bool mode1  ;
bool alive1  ;
port_t p2  ;
char p2_old  ;
char p2_new  ;
char id2  ;
char st2  ;
msg_t send2  ;
bool mode2  ;
bool alive2  ;
port_t p3  ;
char p3_old  ;
char p3_new  ;
char id3  ;
char st3  ;
msg_t send3  ;
bool mode3  ;
bool alive3  ;
void node1(void) 
{ msg_t m1 ;

  {
  m1 = nomsg;
  if (mode1) {
    if ((int )r1 == 255) {
      r1 = (char)2;
    }
    r1 = (char )((int )r1 + 1);
    m1 = p3_old;
    p3_old = nomsg;
    if ((int )m1 != (int )nomsg) {
      if (alive1) {
        if ((int )m1 > (int )id1) {
          send1 = m1;
        } else {
          if ((int )m1 == (int )id1) {
            st1 = (char)1;
          }
        }
      } else {
        send1 = m1;
      }
    }
    mode1 = 0;
  } else {
    if (alive1) {
      if ((int )send1 != (int )nomsg) {
        if ((int )p1_new == (int )nomsg) {
          p1_new = send1;
        } else {
          p1_new = p1_new;
        }
      } else {
        p1_new = p1_new;
      }
    } else {
      if ((int )send1 != (int )id1) {
        if ((int )send1 != (int )nomsg) {
          if ((int )p1_new == (int )nomsg) {
            p1_new = send1;
          } else {
            p1_new = p1_new;
          }
        } else {
          p1_new = p1_new;
        }
      }
    }
    mode1 = 1;
  }
  return;
}
}
void node2(void) 
{ msg_t m2 ;

  {
  m2 = nomsg;
  if (mode2) {
    m2 = p1_old;
    p1_old = nomsg;
    if ((int )m2 != (int )nomsg) {
      if (alive2) {
        if ((int )m2 > (int )id2) {
          send2 = m2;
        } else {
          if ((int )m2 == (int )id2) {
            st2 = (char)1;
          }
        }
      } else {
        send2 = m2;
      }
    }
    mode2 = 0;
  } else {
    if (alive2) {
      if ((int )send2 != (int )nomsg) {
        if ((int )p2_new == (int )nomsg) {
          p2_new = send2;
        } else {
          p2_new = p2_new;
        }
      } else {
        p2_new = p2_new;
      }
    } else {
      if ((int )send2 != (int )id2) {
        if ((int )send2 != (int )nomsg) {
          if ((int )p2_new == (int )nomsg) {
            p2_new = send2;
          } else {
            p2_new = p2_new;
          }
        } else {
          p2_new = p2_new;
        }
      }
    }
    mode2 = 1;
  }
  return;
}
}
void node3(void) 
{ msg_t m3 ;

  {
  m3 = nomsg;
  if (mode3) {
    m3 = p2_old;
    p2_old = nomsg;
    if ((int )m3 != (int )nomsg) {
      if (alive3) {
        if ((int )m3 > (int )id3) {
          send3 = m3;
        } else {
          if ((int )m3 == (int )id3) {
            st3 = (char)1;
          }
        }
      } else {
        send3 = m3;
      }
    }
    mode3 = 0;
  } else {
    if (alive3) {
      if ((int )send3 != (int )nomsg) {
        if ((int )p3_new == (int )nomsg) {
          p3_new = send3;
        } else {
          p3_new = p3_new;
        }
      } else {
        p3_new = p3_new;
      }
    } else {
      if ((int )send3 != (int )id3) {
        if ((int )send3 != (int )nomsg) {
          if ((int )p3_new == (int )nomsg) {
            p3_new = send3;
          } else {
            p3_new = p3_new;
          }
        } else {
          p3_new = p3_new;
        }
      }
    }
    mode3 = 1;
  }
  return;
}
}
int init(void) 
{ int tmp ;

  {
  if ((int )r1 == 0) {
    if ((alive1 + alive2) + alive3 >= 1) {
      if ((int )id1 >= 0) {
        if ((int )st1 == 0) {
          if ((int )send1 == (int )id1) {
            if (mode1 == 0) {
              if ((int )id2 >= 0) {
                if ((int )st2 == 0) {
                  if ((int )send2 == (int )id2) {
                    if (mode2 == 0) {
                      if ((int )id3 >= 0) {
                        if ((int )st3 == 0) {
                          if ((int )send3 == (int )id3) {
                            if (mode3 == 0) {
                              if ((int )id1 != (int )id2) {
                                if ((int )id1 != (int )id3) {
                                  if ((int )id2 != (int )id3) {
                                    tmp = 1;
                                  } else {
                                    tmp = 0;
                                  }
                                } else {
                                  tmp = 0;
                                }
                              } else {
                                tmp = 0;
                              }
                            } else {
                              tmp = 0;
                            }
                          } else {
                            tmp = 0;
                          }
                        } else {
                          tmp = 0;
                        }
                      } else {
                        tmp = 0;
                      }
                    } else {
                      tmp = 0;
                    }
                  } else {
                    tmp = 0;
                  }
                } else {
                  tmp = 0;
                }
              } else {
                tmp = 0;
              }
            } else {
              tmp = 0;
            }
          } else {
            tmp = 0;
          }
        } else {
          tmp = 0;
        }
      } else {
        tmp = 0;
      }
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  return (tmp);
}
}
int check(void) 
{ int tmp ;

  {
  if (((int )st1 + (int )st2) + (int )st3 <= 1) {
    if ((int )r1 < 3) {
      tmp = 1;
    } else {
      if (((int )st1 + (int )st2) + (int )st3 == 1) {
        tmp = 1;
      } else {
        tmp = 0;
      }
    }
  } else {
    tmp = 0;
  }
  return (tmp);
}
}
int main(void) 
{ int c1 ;
  int i2 ;

  {
  c1 = 0;
  r1 = nondet_char(); __CPROVER_input("r1",r1);
  id1 = nondet_char(); __CPROVER_input("id1",id1);
  st1 = nondet_char(); __CPROVER_input("st1",st1);
  send1 = nondet_char(); __CPROVER_input("send1",send1);
  mode1 = nondet_bool(); __CPROVER_input("mode1",mode1);
  alive1 = nondet_bool(); __CPROVER_input("alive1",alive1);
  id2 = nondet_char(); __CPROVER_input("id2",id2);
  st2 = nondet_char(); __CPROVER_input("st2",st2);
  send2 = nondet_char(); __CPROVER_input("send2",send2);
  mode2 = nondet_bool(); __CPROVER_input("mode2",mode2);
  alive2 = nondet_bool(); __CPROVER_input("alive2",alive2);
  id3 = nondet_char(); __CPROVER_input("id3",id3);
  st3 = nondet_char(); __CPROVER_input("st3",st3);
  send3 = nondet_char(); __CPROVER_input("send3",send3);
  mode3 = nondet_bool(); __CPROVER_input("mode3",mode3);
  alive3 = nondet_bool(); __CPROVER_input("alive3",alive3);
  i2 = init();
  p1_old = nomsg;
  p1_new = nomsg;
  p2_old = nomsg;
  p2_new = nomsg;
  p3_old = nomsg;
  p3_new = nomsg;
  i2 = 0;
  while (i2 < 15) {
    node1();
    node2();
    node3();
    p1_old = p1_new;
    p1_new = nomsg;
    p2_old = p2_new;
    p2_new = nomsg;
    p3_old = p3_new;
    p3_new = nomsg;
    c1 = check();
    i2 = i2 + 1;
  }
  return (0);
}
}
