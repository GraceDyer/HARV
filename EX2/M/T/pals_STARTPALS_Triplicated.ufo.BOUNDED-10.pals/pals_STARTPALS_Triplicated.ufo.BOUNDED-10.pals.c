extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "pals_STARTPALS_Triplicated.ufo.BOUNDED-10.pals.c", 3, "reach_error"); }

// This file is part of the SV-Benchmarks collection of verification tasks:
// https://github.com/sosy-lab/sv-benchmarks
//
// SPDX-FileCopyrightText: 2013 Carnegie Mellon University
// SPDX-FileCopyrightText: 2014-2020 The SV-Benchmarks Community
//
// SPDX-License-Identifier: LicenseRef-BSD-3-Clause-Attribution-CMU

/* Generated by CIL v. 1.6.0 */
/* print_CIL_Input is true */

char __VERIFIER_nondet_char(void) ;
_Bool __VERIFIER_nondet_bool(void) ;
typedef char int8_t;
typedef int8_t msg_t;
typedef int port_t;
extern void read(port_t p , msg_t m ) ;
extern void write(port_t p , msg_t m ) ;
msg_t nomsg  =    (msg_t )-1;
port_t g1v  ;
int8_t g1v_old ;
int8_t g1v_new ;
port_t g2v  ;
int8_t g2v_old ;
int8_t g2v_new ;
port_t g3v  ;
int8_t g3v_old ;
int8_t g3v_new ;
extern _Bool __VERIFIER_nondet_bool() ;
extern msg_t __VERIFIER_nondet_char() ;
extern void abort(void);
_Bool gate1Failed  ;
_Bool gate2Failed  ;
_Bool gate3Failed  ;
msg_t VALUE1  ;
msg_t VALUE2  ;
msg_t VALUE3  ;
void assert(_Bool arg ) ;
_Bool gate1Failed_History_0  ;
_Bool gate1Failed_History_1  ;
_Bool gate1Failed_History_2  ;
_Bool gate2Failed_History_0  ;
_Bool gate2Failed_History_1  ;
_Bool gate2Failed_History_2  ;
_Bool gate3Failed_History_0  ;
_Bool gate3Failed_History_1  ;
_Bool gate3Failed_History_2  ;
int8_t votedValue_History_0  ;
int8_t votedValue_History_1  ;
int8_t votedValue_History_2  ;
_Bool read_history_bool(int history_id , int historyIndex ) ;
int8_t read_history_int8(int history_id , int historyIndex ) ;
int add_history_type(int history_id ) 
{ 
  _Bool ini_bool ;
  int8_t ini_int ;
  int var ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  ini_bool = (_Bool)0;
  ini_int = (int8_t )-2;
  var = 0;
  while (var < 3) {
    if (history_id == 0) {
      tmp = (int )read_history_bool(0, 0);
      if (! (tmp == (int )ini_bool)) {
        return (0);
      }
    } else
    if (history_id == 1) {
      tmp___0 = (int )read_history_bool(1, 0);
      if (! (tmp___0 == (int )ini_bool)) {
        return (0);
      }
    } else
    if (history_id == 2) {
      tmp___1 = (int )read_history_bool(2, 0);
      if (! (tmp___1 == (int )ini_bool)) {
        return (0);
      }
    } else
    if (history_id == 3) {
      tmp___2 = (int )read_history_int8(3, 0);
      if (! (tmp___2 == (int )ini_int)) {
        return (0);
      }
    }
    var ++;
  }
  return (1);
}
}
int8_t read_history_int8(int history_id , int historyIndex ) 
{ 


  {
  if (history_id == 3) {
    if (historyIndex == 0) {
      return (votedValue_History_0);
    } else
    if (historyIndex == 1) {
      return (votedValue_History_1);
    } else {
      return (votedValue_History_2);
    }
  } else {
    assert((_Bool)0);
  }
  return ((int8_t )-2);
}
}
extern _Bool read_his(int historyIndex, _Bool gate1Failed_History_0,_Bool gate1Failed_History_1,_Bool gate1Failed_History_2);
_Bool read_history_bool(int history_id , int historyIndex ) 
{ 
  {
  if (history_id == 0) {
   return read_his(historyIndex,gate1Failed_History_0,gate1Failed_History_1,gate1Failed_History_2);
  } else if (history_id == 1) {
    return read_his(historyIndex,gate2Failed_History_0,gate2Failed_History_1,gate2Failed_History_2);
  } else if (history_id == 2) {
    return read_his(historyIndex,gate3Failed_History_0,gate3Failed_History_1,gate3Failed_History_2);  
  }
  return ((_Bool)0);
}
}
void write_history_int8(int history_id , int8_t buf ) 
{ 


  {
  if (history_id == 3) {
    votedValue_History_2 = votedValue_History_1;
    votedValue_History_1 = votedValue_History_0;
    votedValue_History_0 = buf;
  } else {
    assert((_Bool)0);
  }
  return;
}
}
void write_history_bool(int history_id , _Bool buf ) 
{ 


  {
  if (history_id == 0) {
    gate1Failed_History_2 = gate1Failed_History_1;
    gate1Failed_History_1 = gate1Failed_History_0;
    gate1Failed_History_0 = buf;
  } else
  if (history_id == 1) {
    gate2Failed_History_2 = gate2Failed_History_1;
    gate2Failed_History_1 = gate2Failed_History_0;
    gate2Failed_History_0 = buf;
  } else
  if (history_id == 2) {
    gate3Failed_History_2 = gate3Failed_History_1;
    gate3Failed_History_1 = gate3Failed_History_0;
    gate3Failed_History_0 = buf;
  } else {
    assert((_Bool)0);
  }
  return;
}
}
int init(void) 
{ 
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  tmp = add_history_type(0);
  if (! tmp) {
    return (0);
  }
  tmp___0 = add_history_type(1);
  if (! tmp___0) {
    return (0);
  }
  tmp___1 = add_history_type(2);
  if (! tmp___1) {
    return (0);
  }
  tmp___2 = add_history_type(3);
  if (! tmp___2) {
    return (0);
  }
  return (1);
}
}
int check(void) 
{ 
  int tmp ;
  int temp_count ;
  int8_t tmp___0 ;
  int8_t tmp___1 ;
  int8_t tmp___2 ;
  _Bool tmp___3 ;
  _Bool tmp___4 ;
  _Bool tmp___5 ;
  int8_t tmp___6 ;
  _Bool tmp___7 ;
  _Bool tmp___8 ;
  _Bool tmp___9 ;
  int8_t tmp___10 ;
  int8_t tmp___11 ;
  int8_t tmp___12 ;
  int8_t tmp___13 ;
  int8_t tmp___14 ;

  {
  if (! gate1Failed) {
    tmp = 1;
  } else
  if (! gate2Failed) {
    tmp = 1;
  } else
  if (! gate3Failed) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  if(!((_Bool )tmp)) {abort();}
  tmp___3 = read_history_bool(0, 1);
  if (! tmp___3) {
    tmp___4 = read_history_bool(1, 1);
    if (! tmp___4) {
      tmp___5 = read_history_bool(2, 1);
      if (! tmp___5) {
        temp_count = 0;
        tmp___0 = read_history_int8(3, 0);
        if ((int )VALUE1 == (int )tmp___0) {
          temp_count ++;
        }
        tmp___1 = read_history_int8(3, 0);
        if ((int )VALUE2 == (int )tmp___1) {
          temp_count ++;
        }
        tmp___2 = read_history_int8(3, 0);
        if ((int )VALUE3 == (int )tmp___2) {
          temp_count ++;
        }
        if ((int )VALUE1 != (int )VALUE2) {
          if ((int )VALUE1 != (int )VALUE3) {
            if ((int )VALUE2 != (int )VALUE3) {
              if (! (temp_count == 1)) {
                return (0);
              }
            } else {
              goto _L___0;
            }
          } else {
            goto _L___0;
          }
        } else
        _L___0: /* CIL Label */ 
        if (! (temp_count > 1)) {
          return (0);
        }
      }
    }
  }
  tmp___10 = read_history_int8(3, 1);
  if ((int )tmp___10 > -2) {
    tmp___6 = read_history_int8(3, 0);
    if ((int )tmp___6 == (int )nomsg) {
      tmp___7 = read_history_bool(0, 1);
      if (tmp___7) {
        tmp___8 = read_history_bool(1, 1);
        if (tmp___8) {
          tmp___9 = read_history_bool(2, 1);
          if (! tmp___9) {
            return (0);
          }
        } else {
          return (0);
        }
      } else {
        return (0);
      }
    }
  }
  tmp___11 = read_history_int8(3, 0);
  if ((int )tmp___11 != (int )nomsg) {
    tmp___12 = read_history_int8(3, 0);
    if (! ((int )VALUE1 == (int )tmp___12)) {
      tmp___13 = read_history_int8(3, 0);
      if (! ((int )VALUE2 == (int )tmp___13)) {
        tmp___14 = read_history_int8(3, 0);
        if (! ((int )VALUE3 == (int )tmp___14)) {
          return (0);
        }
      }
    }
  }
  return (1);
}
}
void gate1_each_pals_period(void) 
{ 
  int8_t next_state ;
  msg_t tmp ;
  int tmp___0 ;

  {
  gate1Failed = __VERIFIER_nondet_bool();
  write_history_bool(0, gate1Failed);
  if (gate1Failed) {
    g1v_new = nomsg != nomsg && g1v_new == nomsg ? nomsg : g1v_new;
    return;
  }
  tmp = __VERIFIER_nondet_char();
  next_state = tmp;
  if ((int )next_state == 0) {
    tmp___0 = 1;
  } else
  if ((int )next_state == 1) {
    tmp___0 = 1;
  } else
  if ((int )next_state == 2) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  if(!((_Bool )tmp___0)) {abort();}
  g1v_new = next_state != nomsg && g1v_new == nomsg ? next_state : g1v_new;
  return;
}
}
void gate2_each_pals_period(void) 
{ 
  int8_t next_state ;
  msg_t tmp ;
  int tmp___0 ;

  {
  gate2Failed = __VERIFIER_nondet_bool();
  write_history_bool(1, gate2Failed);
  if (gate2Failed) {
    g2v_new = nomsg != nomsg && g2v_new == nomsg ? nomsg : g2v_new;
    return;
  }
  tmp = __VERIFIER_nondet_char();
  next_state = tmp;
  if ((int )next_state == 0) {
    tmp___0 = 1;
  } else
  if ((int )next_state == 1) {
    tmp___0 = 1;
  } else
  if ((int )next_state == 2) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  if(!((_Bool )tmp___0)) {abort();}
  g2v_new = next_state != nomsg && g2v_new == nomsg ? next_state : g2v_new;
  return;
}
}
void gate3_each_pals_period(void) 
{ 
  int8_t next_state ;
  msg_t tmp ;
  int tmp___0 ;

  {
  gate3Failed = __VERIFIER_nondet_bool();
  write_history_bool(2, gate3Failed);
  if (gate3Failed) {
    g3v_new = nomsg != nomsg && g3v_new == nomsg ? nomsg : g3v_new;
    return;
  }
  tmp = __VERIFIER_nondet_char();
  next_state = tmp;
  if ((int )next_state == 0) {
    tmp___0 = 1;
  } else
  if ((int )next_state == 1) {
    tmp___0 = 1;
  } else
  if ((int )next_state == 2) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  if(!((_Bool )tmp___0)) {abort();}
  g3v_new = next_state != nomsg && g3v_new == nomsg ? next_state : g3v_new;
  return;
}
}
void voter(void) 
{ 
  int8_t voted_value ;

  {
  voted_value = nomsg;
  VALUE1 = g1v_old;
  g1v_old = nomsg;
  VALUE2 = g2v_old;
  g2v_old = nomsg;
  VALUE3 = g3v_old;
  g3v_old = nomsg;
  if ((int )VALUE1 == (int )VALUE2) {
    if ((int )VALUE1 == (int )nomsg) {
      voted_value = VALUE3;
    } else {
      voted_value = VALUE1;
    }
  } else
  if ((int )VALUE1 == (int )VALUE3) {
    if ((int )VALUE1 == (int )nomsg) {
      voted_value = VALUE2;
    } else {
      voted_value = VALUE1;
    }
  } else
  if ((int )VALUE2 == (int )VALUE3) {
    voted_value = VALUE2;
    if ((int )VALUE2 == (int )nomsg) {
      voted_value = VALUE1;
    } else {
      voted_value = VALUE2;
    }
  } else
  if ((int )VALUE1 != (int )nomsg) {
    voted_value = VALUE1;
  } else
  if ((int )VALUE2 != (int )nomsg) {
    voted_value = VALUE2;
  } else
  if ((int )VALUE3 != (int )nomsg) {
    voted_value = VALUE3;
  } else {
    assert((_Bool)0);
  }
  write_history_int8(3, voted_value);
  return;
}
}
int main(void) 
{ 
  int c1 ;
  int i2 ;

  {
  c1 = 0;
  gate1Failed = __VERIFIER_nondet_bool();
  gate2Failed = __VERIFIER_nondet_bool();
  gate3Failed = __VERIFIER_nondet_bool();
  VALUE1 = __VERIFIER_nondet_char();
  VALUE2 = __VERIFIER_nondet_char();
  VALUE3 = __VERIFIER_nondet_char();
  gate1Failed_History_0 = __VERIFIER_nondet_bool();
  gate1Failed_History_1 = __VERIFIER_nondet_bool();
  gate1Failed_History_2 = __VERIFIER_nondet_bool();
  gate2Failed_History_0 = __VERIFIER_nondet_bool();
  gate2Failed_History_1 = __VERIFIER_nondet_bool();
  gate2Failed_History_2 = __VERIFIER_nondet_bool();
  gate3Failed_History_0 = __VERIFIER_nondet_bool();
  gate3Failed_History_1 = __VERIFIER_nondet_bool();
  gate3Failed_History_2 = __VERIFIER_nondet_bool();
  votedValue_History_0 = __VERIFIER_nondet_char();
  votedValue_History_1 = __VERIFIER_nondet_char();
  votedValue_History_2 = __VERIFIER_nondet_char();
  i2 = init();
  if(!(i2)) {abort();}
  g1v_old = nomsg;
  g1v_new = nomsg;
  g2v_old = nomsg;
  g2v_new = nomsg;
  g3v_old = nomsg;
  g3v_new = nomsg;
  i2 = 0;
  while (i2 < 10) {
    {
    gate1_each_pals_period();
    gate2_each_pals_period();
    gate3_each_pals_period();
    voter();
    g1v_old = g1v_new;
    g1v_new = nomsg;
    g2v_old = g2v_new;
    g2v_new = nomsg;
    g3v_old = g3v_new;
    g3v_new = nomsg;
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