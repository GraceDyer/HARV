extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "pals_lcr.6.ufo.BOUNDED-12.pals.c", 3, "reach_error"); }

// This file is part of the SV-Benchmarks collection of verification tasks:
// https://github.com/sosy-lab/sv-benchmarks
//
// SPDX-FileCopyrightText: 2013 Carnegie Mellon University
// SPDX-FileCopyrightText: 2014-2020 The SV-Benchmarks Community
//
// SPDX-License-Identifier: LicenseRef-BSD-3-Clause-Attribution-CMU

/* Generated by CIL v. 1.6.0 */
/* print_CIL_Input is true */

_Bool __VERIFIER_nondet_bool(void) ;
char __VERIFIER_nondet_char(void) ;
char __VERIFIER_nondet_char(void) ;
void assert(_Bool arg ) ;
void abort(void);
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
typedef char msg_t;
typedef int port_t;
extern void read(port_t p , msg_t m ) ;
extern void write(port_t p , msg_t m ) ;
extern msg_t nomsg  =    (msg_t )-1;
extern char r1  ;
extern port_t p1  ;
extern char p1_old ;
extern char p1_new ;
extern char id1  ;
extern char st1  ;
extern msg_t send1  ;
extern _Bool mode1  ;
extern port_t p2  ;
extern char p2_old ;
extern char p2_new ;
extern char id2  ;
extern char st2  ;
extern msg_t send2  ;
extern _Bool mode2  ;
extern port_t p3  ;
extern char p3_old ;
extern char p3_new ;
extern char id3  ;
extern char st3  ;
extern msg_t send3  ;
extern _Bool mode3  ;
extern port_t p4  ;
extern char p4_old ;
extern char p4_new ;
extern char id4  ;
extern char st4  ;
extern msg_t send4  ;
extern _Bool mode4  ;
extern port_t p5  ;
extern char p5_old ;
extern char p5_new ;
extern char id5  ;
extern char st5  ;
extern msg_t send5  ;
extern _Bool mode5  ;
extern port_t p6  ;
extern char p6_old ;
extern char p6_new ;
extern char id6  ;
extern char st6  ;
extern msg_t send6  ;
extern _Bool mode6  ;
extern void node1(void);
extern void node2(void);
extern void node3(void);
extern void node4(void);
extern void node5(void);
extern void node6(void);
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
                                                    if ((int )id1 != (int )id2) {
                                                      if ((int )id1 != (int )id3) {
                                                        if ((int )id1 != (int )id4) {
                                                          if ((int )id1 != (int )id5) {
                                                            if ((int )id1 != (int )id6) {
                                                              if ((int )id2 != (int )id3) {
                                                                if ((int )id2 != (int )id4) {
                                                                  if ((int )id2 != (int )id5) {
                                                                    if ((int )id2 != (int )id6) {
                                                                      if ((int )id3 != (int )id4) {
                                                                        if ((int )id3 != (int )id5) {
                                                                          if ((int )id3 != (int )id6) {
                                                                            if ((int )id4 != (int )id5) {
                                                                              if ((int )id4 != (int )id6) {
                                                                                if ((int )id5 != (int )id6) {
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
  return (tmp);
}
}
int check(void) 
{ 
  int tmp ;

  {
  if ((((((int )st1 + (int )st2) + (int )st3) + (int )st4) + (int )st5) + (int )st6 <= 1) {
    if ((int )r1 >= 6) {
      goto _L;
    } else
    if ((((((int )st1 + (int )st2) + (int )st3) + (int )st4) + (int )st5) + (int )st6 == 0) {
      _L: /* CIL Label */ 
      if ((int )r1 < 6) {
        tmp = 1;
      } else
      if ((((((int )st1 + (int )st2) + (int )st3) + (int )st4) + (int )st5) + (int )st6 == 1) {
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
int main(void) 
{ 
  int c1 ;
  int i2 ;

  {
  c1 = 0;
  r1 = __VERIFIER_nondet_char();
  id1 = __VERIFIER_nondet_char();
  st1 = __VERIFIER_nondet_char();
  send1 = __VERIFIER_nondet_char();
  mode1 = __VERIFIER_nondet_bool();
  id2 = __VERIFIER_nondet_char();
  st2 = __VERIFIER_nondet_char();
  send2 = __VERIFIER_nondet_char();
  mode2 = __VERIFIER_nondet_bool();
  id3 = __VERIFIER_nondet_char();
  st3 = __VERIFIER_nondet_char();
  send3 = __VERIFIER_nondet_char();
  mode3 = __VERIFIER_nondet_bool();
  id4 = __VERIFIER_nondet_char();
  st4 = __VERIFIER_nondet_char();
  send4 = __VERIFIER_nondet_char();
  mode4 = __VERIFIER_nondet_bool();
  id5 = __VERIFIER_nondet_char();
  st5 = __VERIFIER_nondet_char();
  send5 = __VERIFIER_nondet_char();
  mode5 = __VERIFIER_nondet_bool();
  id6 = __VERIFIER_nondet_char();
  st6 = __VERIFIER_nondet_char();
  send6 = __VERIFIER_nondet_char();
  mode6 = __VERIFIER_nondet_bool();
  i2 = init();
  assume_abort_if_not(i2);
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
  i2 = 0;
  while (i2 < 12) {
    {
    node1();
    node2();
    node3();
    node4();
    node5();
    node6();
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
    c1 = check();
    assert(c1);
    i2 ++;
    }
  }
}
return 0;
}
void assert(_Bool arg ) 
{ 


  {
  if (! arg) {
    {
    ERROR: {reach_error();abort();}
    }
  }
}
}
