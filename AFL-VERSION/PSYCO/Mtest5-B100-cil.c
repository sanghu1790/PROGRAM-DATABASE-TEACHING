/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */







int BOUND  =    100;
int m_flush  =    1;
int m_PipedOutputStream  =    2;
int m_close  =    3;
int m_write  =    4;
int m_connect_1  =    5;
int m_connect_2  =    6;
int kappa  =    0;
int main(void) 
{ int dummy ;
  int q ;
  int FLAG ;
  int i ;
  int method_id ;
  int this_sink ;
  int this_sinkConnected ;
  int symb[19] ;
  int P1 ;
  int P2 ;
  int P3 ;
  int P4 ;
  int FLAG___0 ;

  {
  dummy = 1;
  q = 0;
  FLAG = 0;
  i = 0;
  this_sink = 0;
  this_sinkConnected = 0;
  FLAG___0 = 0;
  while (FLAG___0 < BOUND) {
    klee_make_symbolic(symb, sizeof(int ) * 19U, "symb");
    scanf("%d", &P1);
    scanf("%d", &P2);
    scanf("%d", &P3);
    scanf("%d", &P4);
    if (q == 0) {
      if (symb[1]) {
        if (dummy == 1) {
          method_id = 2;
          if (dummy != 1) {
            goto POINT;
          }
          q = 2;
          this_sink = 0;
          this_sinkConnected = 0;
        }
        goto __Cont;
      }
      goto __Cont;
    }
    if (q == 1) {
      if (symb[2]) {
        if (dummy == 1) {
          method_id = 4;
          if (this_sink != 0) {
            goto POINT;
          }
          q = 1;
          break;
        }
        goto __Cont;
      }
      if (symb[3]) {
        if (P2 != 1) {
          if (P1 != 0) {
            method_id = 5;
            if (P2 != 1) {
              if (this_sink == 0) {
                if (P1 != 0) {
                  goto POINT;
                }
              }
            }
            q = 1;
            break;
          }
        }
        goto __Cont;
      }
      if (symb[4]) {
        if (P2 != 1) {
          if (! (P1 != 0)) {
            goto _L;
          }
        } else {
          _L: /* CIL Label */ 
          method_id = 6;
          if (dummy != 1) {
            goto POINT;
          }
          q = 1;
          break;
        }
        goto __Cont;
      }
      goto __Cont;
    }
    if (q == 2) {
      if (symb[5]) {
        if (dummy == 1) {
          if (this_sink != 0) {
            goto _L___0;
          } else {
            if (dummy != 1) {
              _L___0: /* CIL Label */ 
              method_id = 1;
              if (dummy != 1) {
                goto POINT;
              }
              q = 2;
              this_sink = this_sink;
              this_sinkConnected = this_sinkConnected;
            }
          }
        }
        goto __Cont;
      }
      if (symb[6]) {
        if (dummy == 1) {
          if (this_sink != 0) {
            goto _L___2;
          } else {
            if (dummy != 1) {
              _L___2: /* CIL Label */ 
              if (this_sink == 0) {
                goto _L___1;
              } else {
                if (dummy != 1) {
                  _L___1: /* CIL Label */ 
                  method_id = 1;
                  if (dummy != 1) {
                    goto POINT;
                  }
                  q = 2;
                  this_sink = this_sink;
                  this_sinkConnected = this_sinkConnected;
                }
              }
            }
          }
        }
        goto __Cont;
      }
      if (symb[7]) {
        if (dummy == 1) {
          if (this_sink != 0) {
            goto _L___3;
          } else {
            if (dummy != 1) {
              _L___3: /* CIL Label */ 
              method_id = 3;
              if (dummy != 1) {
                goto POINT;
              }
              q = 2;
              this_sink = this_sink;
              this_sinkConnected = this_sinkConnected;
            }
          }
        }
        goto __Cont;
      }
      if (symb[8]) {
        if (dummy == 1) {
          if (this_sink != 0) {
            goto _L___5;
          } else {
            if (dummy != 1) {
              _L___5: /* CIL Label */ 
              if (this_sink == 0) {
                goto _L___4;
              } else {
                if (dummy != 1) {
                  _L___4: /* CIL Label */ 
                  method_id = 3;
                  if (dummy != 1) {
                    goto POINT;
                  }
                  q = 2;
                  this_sink = this_sink;
                  this_sinkConnected = this_sinkConnected;
                }
              }
            }
          }
        }
        goto __Cont;
      }
      if (symb[9]) {
        if (dummy == 1) {
          method_id = 4;
          if (this_sink != 0) {
            goto POINT;
          }
          q = 1;
          break;
        }
        goto __Cont;
      }
      if (symb[10]) {
        if (P2 != 1) {
          if (P1 != 0) {
            method_id = 5;
            if (this_sink != 0) {
              if (P1 != 0) {
                if (P2 != 1) {
                  if (P1 != 0) {
                    goto POINT;
                  }
                }
              }
            }
            q = 3;
            this_sink = P1;
            this_sinkConnected = 1;
          }
        }
        goto __Cont;
      }
      if (symb[11]) {
        if (P2 != 1) {
          if (! (P1 != 0)) {
            goto _L___6;
          }
        } else {
          _L___6: /* CIL Label */ 
          method_id = 6;
          if (dummy != 1) {
            goto POINT;
          }
          q = 1;
          break;
        }
        goto __Cont;
      }
      goto __Cont;
    }
    if (q == 3) {
      if (symb[12]) {
        if (dummy == 1) {
          if (this_sink != 0) {
            goto _L___7;
          } else {
            if (dummy != 1) {
              _L___7: /* CIL Label */ 
              method_id = 1;
              if (dummy != 1) {
                goto POINT;
              }
              q = 3;
              this_sink = this_sink;
              this_sinkConnected = this_sinkConnected;
            }
          }
        }
        goto __Cont;
      }
      if (symb[13]) {
        if (dummy == 1) {
          if (this_sink != 0) {
            goto _L___9;
          } else {
            if (dummy != 1) {
              _L___9: /* CIL Label */ 
              if (this_sink == 0) {
                goto _L___8;
              } else {
                if (dummy != 1) {
                  _L___8: /* CIL Label */ 
                  method_id = 1;
                  if (dummy != 1) {
                    goto POINT;
                  }
                  q = 3;
                  this_sink = this_sink;
                  this_sinkConnected = this_sinkConnected;
                }
              }
            }
          }
        }
        goto __Cont;
      }
      if (symb[14]) {
        if (dummy == 1) {
          if (this_sink != 0) {
            goto _L___10;
          } else {
            if (dummy != 1) {
              _L___10: /* CIL Label */ 
              method_id = 3;
              if (dummy != 1) {
                goto POINT;
              }
              q = 3;
              this_sink = this_sink;
              this_sinkConnected = this_sinkConnected;
            }
          }
        }
        goto __Cont;
      }
      if (symb[15]) {
        if (dummy == 1) {
          if (this_sink != 0) {
            goto _L___12;
          } else {
            if (dummy != 1) {
              _L___12: /* CIL Label */ 
              if (this_sink == 0) {
                goto _L___11;
              } else {
                if (dummy != 1) {
                  _L___11: /* CIL Label */ 
                  method_id = 3;
                  if (dummy != 1) {
                    goto POINT;
                  }
                  q = 3;
                  this_sink = this_sink;
                  this_sinkConnected = this_sinkConnected;
                }
              }
            }
          }
        }
        goto __Cont;
      }
      if (symb[16]) {
        if (dummy == 1) {
          method_id = 4;
          if (this_sink == 0) {
            goto POINT;
          }
          q = 3;
          this_sink = this_sink;
          this_sinkConnected = this_sinkConnected;
        }
        goto __Cont;
      }
      if (symb[17]) {
        if (P2 != 1) {
          if (P1 != 0) {
            method_id = 5;
            if (P2 != 1) {
              if (this_sink == 0) {
                if (P1 != 0) {
                  goto POINT;
                }
              }
            }
            q = 1;
            break;
          }
        }
        goto __Cont;
      }
      if (symb[18]) {
        if (P2 != 1) {
          if (! (P1 != 0)) {
            goto _L___13;
          }
        } else {
          _L___13: /* CIL Label */ 
          method_id = 6;
          if (dummy != 1) {
            goto POINT;
          }
          q = 1;
          break;
        }
        goto __Cont;
      }
      goto __Cont;
    }
    __Cont: /* CIL Label */ 
    FLAG___0 = FLAG___0 + 1;
  }
  POINT: 
  return (0);
}
}
