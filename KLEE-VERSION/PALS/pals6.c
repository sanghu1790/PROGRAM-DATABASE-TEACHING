// This program is pals_lcr.8_true-unreach-call.ufo.UNBOUNDED.pals.c
#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif

/**********************************************************************

Copyright (c) 2013 Carnegie Mellon University. All Rights Reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

1. Redistributions of source code must retain the above copyright
notice, this list of conditions and the following acknowledgments and
disclaimers.

2. Redistributions in binary form must reproduce the above copyright
notice, this list of conditions and the following disclaimer in the
documentation and/or other materials provided with the distribution.

3. The names "Carnegie Mellon University," "SEI" and/or "Software
Engineering Institute" shall not be used to endorse or promote
products derived from this software without prior written
permission. For written permission, please contact
permission@sei.cmu.edu.

4. Products derived from this software may not be called "SEI" nor may
"SEI" appear in their names without prior written permission of
permission@sei.cmu.edu.

5. Redistributions of any form whatsoever must retain the following
acknowledgment:

This material is based upon work funded and supported by the
Department of Defense under Contract No. FA8721-05-C-0003 with
Carnegie Mellon University for the operation of the Software
Engineering Institute, a federally funded research and development
center.

Any opinions, findings and conclusions or recommendations expressed in
this material are those of the author(s) and do not necessarily
reflect the views of the United States Department of Defense.

NO WARRANTY. THIS CARNEGIE MELLON UNIVERSITY AND SOFTWARE ENGINEERING
INSTITUTE MATERIAL IS FURNISHEDON AN "AS-IS" BASIS. CARNEGIE MELLON
UNIVERSITY MAKES NO WARRANTIES OF ANY KIND, EITHER EXPRESSED OR
IMPLIED, AS TO ANY MATTER INCLUDING, BUT NOT LIMITED TO, WARRANTY OF
FITNESS FOR PURPOSE OR MERCHANTABILITY, EXCLUSIVITY, OR RESULTS
OBTAINED FROM USE OF THE MATERIAL. CARNEGIE MELLON UNIVERSITY DOES NOT
MAKE ANY WARRANTY OF ANY KIND WITH RESPECT TO FREEDOM FROM PATENT,
TRADEMARK, OR COPYRIGHT INFRINGEMENT.

This material has been approved for public release and unlimited
distribution.

DM-0000575

**********************************************************************/

/* Generated by CIL v. 1.6.0 */
/* print_CIL_Input is true */

int kappa;
typedef int bool;
#define true 1
#define false 0
 assert(bool arg );
typedef char msg_t;
typedef int port_t;
extern void read(port_t p , msg_t m ) ;
extern void write(port_t p , msg_t m ) ;
msg_t nomsg  =    (msg_t )-1;
char r1  ;
port_t p1  ;
char p1_old ;
char p1_new ;
char id1  ;
char st1  ;
msg_t send1  ;
bool mode1  ;
port_t p2  ;
char p2_old ;
char p2_new ;
char id2  ;
char st2  ;
msg_t send2  ;
bool mode2  ;
port_t p3  ;
char p3_old ;
char p3_new ;
char id3  ;
char st3  ;
msg_t send3  ;
bool mode3  ;
port_t p4  ;
char p4_old ;
char p4_new ;
char id4  ;
char st4  ;
msg_t send4  ;
bool mode4  ;
port_t p5  ;
char p5_old ;
char p5_new ;
char id5  ;
char st5  ;
msg_t send5  ;
bool mode5  ;
port_t p6  ;
char p6_old ;
char p6_new ;
char id6  ;
char st6  ;
msg_t send6  ;
bool mode6  ;
port_t p7  ;
char p7_old ;
char p7_new ;
char id7  ;
char st7  ;
msg_t send7  ;
bool mode7  ;
port_t p8  ;
char p8_old ;
char p8_new ;
char id8  ;
char st8  ;
msg_t send8  ;
bool mode8  ;
void node1(void) 
{ 
  msg_t m1 ;

  {
  m1 = nomsg;
  if (mode1) {
    if (r1 == 255) {
      r1 = 7;
    }
    r1 = r1 + 1;
    m1 = p8_old;
    p8_old = nomsg;
    if ((int )m1 != (int )nomsg) {
      if ((int )m1 > (int )id1) {
        send1 = m1;
      } else
      if ((int )m1 == (int )id1) {
        st1 = (char)1;
      }
    }
    mode1 = (bool)0;
  } else {
    if ((send1 != nomsg) && (p1_new == nomsg))
    {
    p1_new = send1;
    }
    else
    {
    p1_new = p1_new;
    }
    mode1 = (bool)1;
  }
  return;
}
}
void node2(void) 
{ 
  msg_t m2 ;

  {
  m2 = nomsg;
  if (mode2) {
    m2 = p1_old;
    p1_old = nomsg;
    if ((int )m2 != (int )nomsg) {
      if ((int )m2 > (int )id2) {
        send2 = m2;
      } else
      if ((int )m2 == (int )id2) {
        st2 = (char)1;
      }
    }
    mode2 = (bool)0;
  } else {
    if ((send2 != nomsg) && (p2_new == nomsg))
    {
    p2_new = send2;
    }
    else
    {
    p2_new = p2_new;
    }
    mode2 = (bool)1;
  }
  return;
}
}
void node3(void) 
{ 
  msg_t m3 ;

  {
  m3 = nomsg;
  if (mode3) {
    m3 = p2_old;
    p2_old = nomsg;
    if ((int )m3 != (int )nomsg) {
      if ((int )m3 > (int )id3) {
        send3 = m3;
      } else
      if ((int )m3 == (int )id3) {
        st3 = (char)1;
      }
    }
    mode3 = (bool)0;
  } else {
    if ((send3 != nomsg) && (p3_new == nomsg))
    {
    p3_new = send3;
    }
    else
    {
    p3_new = p3_new;
    }
    mode3 = (bool)1;
  }
  return;
}
}
void node4(void) 
{ 
  msg_t m4 ;

  {
  m4 = nomsg;
  if (mode4) {
    m4 = p3_old;
    p3_old = nomsg;
    if ((int )m4 != (int )nomsg) {
      if ((int )m4 > (int )id4) {
        send4 = m4;
      } else
      if ((int )m4 == (int )id4) {
        st4 = (char)1;
      }
    }
    mode4 = (bool)0;
  } else {
    if ((send4 != nomsg) && (p4_new == nomsg))
    {
    p4_new = send1;
    }
    else
    {
    p4_new = p4_new;
    }
    mode4 = (bool)1;
  }
  return;
}
}
void node5(void) 
{ 
  msg_t m5 ;

  {
  m5 = nomsg;
  if (mode5) {
    m5 = p4_old;
    p4_old = nomsg;
    if ((int )m5 != (int )nomsg) {
      if ((int )m5 > (int )id5) {
        send5 = m5;
      } else
      if ((int )m5 == (int )id5) {
        st5 = (char)1;
      }
    }
    mode5 = (bool)0;
  } else {
   if ((send5 != nomsg) && (p5_new == nomsg))
    {
    p5_new = send5;
    }
    else
    {
    p5_new = p5_new;
    }  
    mode5 = (bool)1;
  }
  return;
}
}
void node6(void) 
{ 
  msg_t m6 ;

  {
  m6 = nomsg;
  if (mode6) {
    m6 = p5_old;
    p5_old = nomsg;
    if ((int )m6 != (int )nomsg) {
      if ((int )m6 > (int )id6) {
        send6 = m6;
      } else
      if ((int )m6 == (int )id6) {
        st6 = (char)1;
      }
    }
    mode6 = (bool)0;
  } else {
   if ((send6 != nomsg) && (p6_new == nomsg))
    {
    p6_new = send6;
    }
    else
    {
    p6_new = p6_new;
    }
    mode6 = (bool)1;
  }
  return;
}
}
void node7(void) 
{ 
  msg_t m7 ;

  {
  m7 = nomsg;
  if (mode7) {
    m7 = p6_old;
    p6_old = nomsg;
    if ((int )m7 != (int )nomsg) {
      if ((int )m7 > (int )id7) {
        send7 = m7;
      } else
      if ((int )m7 == (int )id7) {
        st7 = (char)1;
      }
    }
    mode7 = (bool)0;
  } else {
    if ((send7 != nomsg) && (p7_new == nomsg))
    {
    p7_new = send7;
    }
    else
    {
    p7_new = p7_new;
    }
    mode7 = (bool)1;
  }
  return;
}
}
void node8(void) 
{ 
  msg_t m8 ;

  {
  m8 = nomsg;
  if (mode8) {
    m8 = p7_old;
    p7_old = nomsg;
    if ((int )m8 != (int )nomsg) {
      if ((int )m8 > (int )id8) {
        send8 = m8;
      } else
      if ((int )m8 == (int )id8) {
        st8 = (char)1;
      }
    }
    mode8 = (bool)0;
  } else {
   if ((send8 != nomsg) && (p8_new == nomsg))
    {
    p8_new = send8;
    }
    else
    {
    p8_new = p8_new;
    }
    mode8 = (bool)1;
  }
  return;
}
}
void (*nodes[8])(void)  = 
  {      & node1,      & node2,      & node3,      & node4, 
        & node5,      & node6,      & node7,      & node8};
int init(void) 
{ 
  int tmp ;

  {
  if ((int )r1 == 0) {
    if ((int )id1 >= 0) {
      if ((int )st1 == 0) {
        if ((int )send1 == (int )id1) {
          if ((int )mode1 == 0) {
            if ((int )id2 >= 0) {
              if ((int )st2 == 0) {
                if ((int )send2 == (int )id2) {
                  if ((int )mode2 == 0) {
                    if ((int )id3 >= 0) {
                      if ((int )st3 == 0) {
                        if ((int )send3 == (int )id3) {
                          if ((int )mode3 == 0) {
                            if ((int )id4 >= 0) {
                              if ((int )st4 == 0) {
                                if ((int )send4 == (int )id4) {
                                  if ((int )mode4 == 0) {
                                    if ((int )id5 >= 0) {
                                      if ((int )st5 == 0) {
                                        if ((int )send5 == (int )id5) {
                                          if ((int )mode5 == 0) {
                                            if ((int )id6 >= 0) {
                                              if ((int )st6 == 0) {
                                                if ((int )send6 == (int )id6) {
                                                  if ((int )mode6 == 0) {
                                                    if ((int )id7 >= 0) {
                                                      if ((int )st7 == 0) {
                                                        if ((int )send7 == (int )id7) {
                                                          if ((int )mode7 == 0) {
                                                            if ((int )id8 >= 0) {
                                                              if ((int )st8 == 0) {
                                                                if ((int )send8 == (int )id8) {
                                                                  if ((int )mode8 == 0) {
                                                                    if ((int )id1 != (int )id2) {
                                                                      if ((int )id1 != (int )id3) {
                                                                        if ((int )id1 != (int )id4) {
                                                                          if ((int )id1 != (int )id5) {
                                                                            if ((int )id1 != (int )id6) {
                                                                              if ((int )id1 != (int )id7) {
                                                                                if ((int )id1 != (int )id8) {
                                                                                  if ((int )id2 != (int )id3) {
                                                                                    if ((int )id2 != (int )id4) {
                                                                                      if ((int )id2 != (int )id5) {
                                                                                        if ((int )id2 != (int )id6) {
                                                                                          if ((int )id2 != (int )id7) {
                                                                                            if ((int )id2 != (int )id8) {
                                                                                              if ((int )id3 != (int )id4) {
                                                                                                if ((int )id3 != (int )id5) {
                                                                                                  if ((int )id3 != (int )id6) {
                                                                                                    if ((int )id3 != (int )id7) {
                                                                                                      if ((int )id3 != (int )id8) {
                                                                                                        if ((int )id4 != (int )id5) {
                                                                                                          if ((int )id4 != (int )id6) {
                                                                                                            if ((int )id4 != (int )id7) {
                                                                                                              if ((int )id4 != (int )id8) {
                                                                                                                if ((int )id5 != (int )id6) {
                                                                                                                  if ((int )id5 != (int )id7) {
                                                                                                                    if ((int )id5 != (int )id8) {
                                                                                                                      if ((int )id6 != (int )id7) {
                                                                                                                        if ((int )id6 != (int )id8) {
                                                                                                                          if ((int )id7 != (int )id8) {
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
{ 
  int tmp ;

  {
  if ((((((((int )st1 + (int )st2) + (int )st3) + (int )st4) + (int )st5) + (int )st6) + (int )st7) + (int )st8 <= 1) {
    if ((int )r1 >= 8) {
      goto _L;
    } else
    if ((((((((int )st1 + (int )st2) + (int )st3) + (int )st4) + (int )st5) + (int )st6) + (int )st7) + (int )st8 == 0) {
      _L: /* CIL Label */ 
      if ((int )r1 < 8) {
        tmp = 1;
      } else
      if ((((((((int )st1 + (int )st2) + (int )st3) + (int )st4) + (int )st5) + (int )st6) + (int )st7) + (int )st8 == 1) {
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
  return (tmp);
}
}
assert(bool arg ) 
{ 


  {
  if (! arg) {
    {
    ERROR: 
    printf("");
    }
  }
}
}

int main(void) 
{ 
  int c1 ;
  int i2 ;

  kappa = 0;
  {
  c1 = 0;

  
  
  klee_make_symbolic(&r1, sizeof(char), "r1");
    
  klee_make_symbolic(&id1, sizeof(char), "id1");
  klee_make_symbolic(&st1, sizeof(char), "st1");
  klee_make_symbolic(&send1, sizeof(char), "send1");
  klee_make_symbolic(&mode1, sizeof(bool), "mode1");

  klee_make_symbolic(&id2, sizeof(char), "id2");
  klee_make_symbolic(&st2, sizeof(char), "st2");
  klee_make_symbolic(&send2, sizeof(char), "send2");
  klee_make_symbolic(&mode2, sizeof(bool), "mode2");
  
  klee_make_symbolic(&id3, sizeof(char), "id3");
  klee_make_symbolic(&st3, sizeof(char), "st3");
  klee_make_symbolic(&send3, sizeof(char), "send3");
  klee_make_symbolic(&mode3, sizeof(bool), "mode3");
  
  
  klee_make_symbolic(&id4, sizeof(char), "id4");
  klee_make_symbolic(&st4, sizeof(char), "st4");
  klee_make_symbolic(&send4, sizeof(char), "send4");
  klee_make_symbolic(&mode4, sizeof(bool), "mode4");

  klee_make_symbolic(&id5, sizeof(char), "id5");
  klee_make_symbolic(&st5, sizeof(char), "st5");
  klee_make_symbolic(&send5, sizeof(char), "send5");
  klee_make_symbolic(&mode5, sizeof(bool), "mode5");
  
  klee_make_symbolic(&id6, sizeof(char), "id6");
  klee_make_symbolic(&st6, sizeof(char), "st6");
  klee_make_symbolic(&send6, sizeof(char), "send6");
  klee_make_symbolic(&mode6, sizeof(bool), "mode6");
  
  klee_make_symbolic(&id7, sizeof(char), "id7");
  klee_make_symbolic(&st7, sizeof(char), "st7");
  klee_make_symbolic(&send7, sizeof(char), "send7");
  klee_make_symbolic(&mode7, sizeof(bool), "mode7");
  
  klee_make_symbolic(&id8, sizeof(char), "id8");
  klee_make_symbolic(&st8, sizeof(char), "st8");
  klee_make_symbolic(&send8, sizeof(char), "send8");
  klee_make_symbolic(&mode8, sizeof(bool), "mode8");
  i2 = init();

  p1_old = nomsg;
  p1_new = nomsg;
  p2_old = nomsg;
  p2_new = nomsg;
  p3_old = nomsg;
  p3_new = nomsg;
  p4_old = nomsg;
  p4_new = nomsg;
  p5_old = nomsg;
  p5_new = nomsg;
  p6_old = nomsg;
  p6_new = nomsg;
  p7_old = nomsg;
  p7_new = nomsg;
  p8_old = nomsg;
  p8_new = nomsg;
  i2 = 0;
  while (i2 < 1) {
    {
    node1();
    node2();
    node3();
    node4();
    node5();
    node6();
    node7();
    node8();
    p1_old = p1_new;
    p1_new = nomsg;
    p2_old = p2_new;
    p2_new = nomsg;
    p3_old = p3_new;
    p3_new = nomsg;
    p4_old = p4_new;
    p4_new = nomsg;
    p5_old = p5_new;
    p5_new = nomsg;
    p6_old = p6_new;
    p6_new = nomsg;
    p7_old = p7_new;
    p7_new = nomsg;
    p8_old = p8_new;
    p8_new = nomsg;
    c1 = check();
    assert(c1);
    i2++;
    }
  }
}
return 0;
}

