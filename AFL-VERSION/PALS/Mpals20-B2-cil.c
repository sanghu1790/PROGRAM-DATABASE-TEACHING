/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */






typedef int bool;
typedef char msg_t;
typedef int port_t;
int kappa  =    0;
msg_t nomsg  =    (char)-1;
port_t p12  ;
char p12_old  ;
char p12_new  ;
bool ep12  ;
port_t p13  ;
char p13_old  ;
char p13_new  ;
bool ep13  ;
port_t p21  ;
char p21_old  ;
char p21_new  ;
bool ep21  ;
port_t p23  ;
char p23_old  ;
char p23_new  ;
bool ep23  ;
port_t p31  ;
char p31_old  ;
char p31_new  ;
bool ep31  ;
port_t p32  ;
char p32_old  ;
char p32_new  ;
bool ep32  ;
char id1  ;
char r1  ;
char st1  ;
char nl1  ;
char m1  ;
char max1  ;
bool mode1  ;
bool newmax1  ;
char id2  ;
char r2  ;
char st2  ;
char nl2  ;
char m2  ;
char max2  ;
bool mode2  ;
bool newmax2  ;
char id3  ;
char r3  ;
char st3  ;
char nl3  ;
char m3  ;
char max3  ;
bool mode3  ;
bool newmax3  ;
void node1(void) 
{ bool newmax ;

  {
  newmax = 0;
  if (mode1) {
    if ((int )r1 == 255) {
      r1 = (char)2;
    }
    r1 = (char )((int )r1 + 1);
    if (ep21) {
      m1 = p21_old;
      p21_old = nomsg;
      if ((int )m1 > (int )max1) {
        max1 = m1;
        newmax = 1;
      }
    }
    if (ep31) {
      m1 = p31_old;
      p31_old = nomsg;
      if ((int )m1 > (int )max1) {
        max1 = m1;
        newmax = 1;
      }
    }
    newmax1 = newmax;
    if ((int )r1 == 2) {
      if ((int )max1 == (int )id1) {
        st1 = (char)1;
      } else {
        nl1 = (char)1;
      }
    }
    mode1 = 0;
  } else {
    if ((int )r1 < 2) {
      if (ep12) {
        if (newmax1) {
          if ((int )max1 != (int )nomsg) {
            if ((int )p12_new == (int )nomsg) {
              p12_new = max1;
            } else {
              p12_new = p12_new;
            }
          } else {
            p12_new = p12_new;
          }
        }
      }
      if (ep13) {
        if (newmax1) {
          if ((int )max1 != (int )nomsg) {
            if ((int )p13_new == (int )nomsg) {
              p13_new = max1;
            } else {
              p13_new = p13_new;
            }
          } else {
            p13_new = p13_new;
          }
        }
      }
    }
    mode1 = 1;
  }
  return;
}
}
void node2(void) 
{ bool newmax ;

  {
  newmax = 0;
  if (mode2) {
    if ((int )r2 == 255) {
      r2 = (char)2;
    }
    r2 = (char )((int )r2 + 1);
    if (ep12) {
      m2 = p12_old;
      p12_old = nomsg;
      if ((int )m2 > (int )max2) {
        max2 = m2;
        newmax = 1;
      }
    }
    if (ep32) {
      m2 = p32_old;
      p32_old = nomsg;
      if ((int )m2 > (int )max2) {
        max2 = m2;
        newmax = 1;
      }
    }
    newmax2 = newmax;
    if ((int )r2 == 2) {
      if ((int )max2 == (int )id2) {
        st2 = (char)1;
      } else {
        nl2 = (char)1;
      }
    }
    mode2 = 0;
  } else {
    if ((int )r2 < 2) {
      if (ep21) {
        if (newmax2) {
          if ((int )max2 != (int )nomsg) {
            if ((int )p21_new == (int )nomsg) {
              p21_new = max2;
            } else {
              p21_new = p21_new;
            }
          } else {
            p21_new = p21_new;
          }
        }
      }
      if (ep23) {
        if (newmax2) {
          if ((int )max2 != (int )nomsg) {
            if ((int )p23_new == (int )nomsg) {
              p23_new = max2;
            } else {
              p23_new = p23_new;
            }
          } else {
            p23_new = p23_new;
          }
        }
      }
    }
    mode2 = 1;
  }
  return;
}
}
void node3(void) 
{ bool newmax ;

  {
  newmax = 0;
  if (mode3) {
    if ((int )r3 == 255) {
      r3 = (char)2;
    }
    r3 = (char )((int )r3 + 1);
    if (ep13) {
      m3 = p13_old;
      p13_old = nomsg;
      if ((int )m3 > (int )max3) {
        max3 = m3;
        newmax = 1;
      }
    }
    if (ep23) {
      m3 = p23_old;
      p23_old = nomsg;
      if ((int )m3 > (int )max3) {
        max3 = m3;
        newmax = 1;
      }
    }
    newmax3 = newmax;
    if ((int )r3 == 2) {
      if ((int )max3 == (int )id3) {
        st3 = (char)1;
      } else {
        nl3 = (char)1;
      }
    }
    mode3 = 0;
  } else {
    if ((int )r3 < 2) {
      if (ep31) {
        if (newmax3) {
          if ((int )max3 != (int )nomsg) {
            if ((int )p31_new == (int )nomsg) {
              p31_new = max3;
            } else {
              p31_new = p31_new;
            }
          } else {
            p31_new = p31_new;
          }
        }
      }
      if (ep32) {
        if (newmax3) {
          if ((int )max3 != (int )nomsg) {
            if ((int )p32_new == (int )nomsg) {
              p32_new = max3;
            } else {
              p32_new = p32_new;
            }
          } else {
            p32_new = p32_new;
          }
        }
      }
    }
    mode3 = 1;
  }
  return;
}
}
int init(void) 
{ bool r121 ;
  bool r131 ;
  bool r211 ;
  bool r231 ;
  bool r311 ;
  bool r321 ;
  bool r122 ;
  int tmp ;
  bool r132 ;
  int tmp___0 ;
  bool r212 ;
  int tmp___1 ;
  bool r232 ;
  int tmp___2 ;
  bool r312 ;
  int tmp___3 ;
  bool r322 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  r121 = ep12;
  r131 = ep13;
  r211 = ep21;
  r231 = ep23;
  r311 = ep31;
  r321 = ep32;
  if (r121) {
    tmp = 1;
  } else {
    if (r131) {
      if (ep32) {
        tmp = 1;
      } else {
        tmp = 0;
      }
    } else {
      tmp = 0;
    }
  }
  r122 = tmp;
  if (r131) {
    tmp___0 = 1;
  } else {
    if (r121) {
      if (ep23) {
        tmp___0 = 1;
      } else {
        tmp___0 = 0;
      }
    } else {
      tmp___0 = 0;
    }
  }
  r132 = tmp___0;
  if (r211) {
    tmp___1 = 1;
  } else {
    if (r231) {
      if (ep31) {
        tmp___1 = 1;
      } else {
        tmp___1 = 0;
      }
    } else {
      tmp___1 = 0;
    }
  }
  r212 = tmp___1;
  if (r231) {
    tmp___2 = 1;
  } else {
    if (r211) {
      if (ep13) {
        tmp___2 = 1;
      } else {
        tmp___2 = 0;
      }
    } else {
      tmp___2 = 0;
    }
  }
  r232 = tmp___2;
  if (r311) {
    tmp___3 = 1;
  } else {
    if (r321) {
      if (ep21) {
        tmp___3 = 1;
      } else {
        tmp___3 = 0;
      }
    } else {
      tmp___3 = 0;
    }
  }
  r312 = tmp___3;
  if (r321) {
    tmp___4 = 1;
  } else {
    if (r311) {
      if (ep12) {
        tmp___4 = 1;
      } else {
        tmp___4 = 0;
      }
    } else {
      tmp___4 = 0;
    }
  }
  r322 = tmp___4;
  if ((int )id1 != (int )id2) {
    if ((int )id1 != (int )id3) {
      if ((int )id2 != (int )id3) {
        if ((int )id1 >= 0) {
          if ((int )id2 >= 0) {
            if ((int )id3 >= 0) {
              if ((int )r1 == 0) {
                if ((int )r2 == 0) {
                  if ((int )r3 == 0) {
                    if ((int )max1 == (int )id1) {
                      if ((int )max2 == (int )id2) {
                        if ((int )max3 == (int )id3) {
                          if ((int )st1 == 0) {
                            if ((int )st2 == 0) {
                              if ((int )st3 == 0) {
                                if ((int )nl1 == 0) {
                                  if ((int )nl2 == 0) {
                                    if ((int )nl3 == 0) {
                                      if (mode1 == 0) {
                                        if (mode2 == 0) {
                                          if (mode3 == 0) {
                                            if (newmax1) {
                                              if (newmax2) {
                                                if (newmax3) {
                                                  tmp___5 = 1;
                                                } else {
                                                  tmp___5 = 0;
                                                }
                                              } else {
                                                tmp___5 = 0;
                                              }
                                            } else {
                                              tmp___5 = 0;
                                            }
                                          } else {
                                            tmp___5 = 0;
                                          }
                                        } else {
                                          tmp___5 = 0;
                                        }
                                      } else {
                                        tmp___5 = 0;
                                      }
                                    } else {
                                      tmp___5 = 0;
                                    }
                                  } else {
                                    tmp___5 = 0;
                                  }
                                } else {
                                  tmp___5 = 0;
                                }
                              } else {
                                tmp___5 = 0;
                              }
                            } else {
                              tmp___5 = 0;
                            }
                          } else {
                            tmp___5 = 0;
                          }
                        } else {
                          tmp___5 = 0;
                        }
                      } else {
                        tmp___5 = 0;
                      }
                    } else {
                      tmp___5 = 0;
                    }
                  } else {
                    tmp___5 = 0;
                  }
                } else {
                  tmp___5 = 0;
                }
              } else {
                tmp___5 = 0;
              }
            } else {
              tmp___5 = 0;
            }
          } else {
            tmp___5 = 0;
          }
        } else {
          tmp___5 = 0;
        }
      } else {
        tmp___5 = 0;
      }
    } else {
      tmp___5 = 0;
    }
  } else {
    tmp___5 = 0;
  }
  return (tmp___5);
}
}
int check(void) 
{ int tmp ;

  {
  if (((int )st1 + (int )st2) + (int )st3 <= 1) {
    if ((int )st1 + (int )nl1 <= 1) {
      if ((int )st2 + (int )nl2 <= 1) {
        if ((int )st3 + (int )nl3 <= 1) {
          if ((int )r1 >= 2) {
            goto _L___1;
          } else {
            if (((int )st1 + (int )st2) + (int )st3 == 0) {
              _L___1: 
              if ((int )r1 < 2) {
                goto _L___0;
              } else {
                if (((int )st1 + (int )st2) + (int )st3 == 1) {
                  _L___0: 
                  if ((int )r1 >= 2) {
                    goto _L;
                  } else {
                    if (((int )nl1 + (int )nl2) + (int )nl3 == 0) {
                      _L: 
                      if ((int )r1 < 2) {
                        tmp = 1;
                      } else {
                        if (((int )nl1 + (int )nl2) + (int )nl3 == 2) {
                          tmp = 1;
                        } else {
                          tmp = 0;
                        }
                      }
                    } else {
                      tmp = 0;
                    }
                  }
                } else {
                  tmp = 0;
                }
              }
            } else {
              tmp = 0;
            }
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

int main(void) 
{ int c1 ;
  int i2 ;

  {
  c1 = 0;
  scanf("%", &ep12);
  scanf("%", &ep13);
  scanf("%", &ep21);
  scanf("%", &ep23);
  scanf("%", &ep31);
  scanf("%", &ep32);
  scanf("%c", &id1);
  scanf("%c", &r1);
  scanf("%c", &st1);
  scanf("%c", &nl1);
  scanf("%c", &m1);
  scanf("%c", &max1);
  scanf("%", &mode1);
  scanf("%", &newmax1);
  scanf("%c", &id2);
  scanf("%c", &r2);
  scanf("%c", &st2);
  scanf("%c", &nl2);
  scanf("%c", &m2);
  scanf("%c", &max2);
  scanf("%", &mode2);
  scanf("%", &newmax2);
  scanf("%c", &id3);
  scanf("%c", &r3);
  scanf("%c", &st3);
  scanf("%c", &nl3);
  scanf("%c", &m3);
  scanf("%c", &max3);
  scanf("%", &mode3);
  scanf("%", &newmax3);
  i2 = init();
  p12_old = nomsg;
  p12_new = nomsg;
  p13_old = nomsg;
  p13_new = nomsg;
  p21_old = nomsg;
  p21_new = nomsg;
  p23_old = nomsg;
  p23_new = nomsg;
  p31_old = nomsg;
  p31_new = nomsg;
  p32_old = nomsg;
  p32_new = nomsg;
  i2 = 0;
  while (i2 < 2) {
    node1();
    node2();
    node3();
    p12_old = p12_new;
    p12_new = nomsg;
    p13_old = p13_new;
    p13_new = nomsg;
    p21_old = p21_new;
    p21_new = nomsg;
    p23_old = p23_new;
    p23_new = nomsg;
    p31_old = p31_new;
    p31_new = nomsg;
    p32_old = p32_new;
    p32_new = nomsg;
    c1 = check();
    i2 = i2 + 1;
  }

  return (0);
}
}
