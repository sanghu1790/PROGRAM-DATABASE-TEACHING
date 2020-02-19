//This program is psyco_math_1_true-unreach-call_false-termination.c






#define BOUND 10
// method ids
int m_isPowerOfTwo = 1;
int m_IntMath = 2;
int m_log10 = 3;
int m_checkedSubtract = 4;
int m_checkedMultiply = 5;
int m_log2 = 6;
int m_checkedAdd = 7;
int m_mod_1 = 8;
int m_mod_2 = 9;
int m_factorial_1 = 10;
int m_factorial_2 = 11;

int kappa; 

int main() {
kappa = 0;
int dummy = 1;
   int q=0,FLAG=0,i=0;
  int method_id;

  // variables
   
    // parameters
 

        int P1;
        int P2;
        int P3;
        int P4;
        int P5;
        int P6;
        int P7;
        int P8;
        int P9;
        int P10;
        int P11;
        int P12;
        int P13;
        int P14;
        int P15;
        int P16;
        int P17;
 


        P1 = nondet_int(); __CPROVER_input("P1",P1);
        P2 = nondet_int(); __CPROVER_input("P2",P2);
        P3 = nondet_int(); __CPROVER_input("P3",P3);
        P4 = nondet_int(); __CPROVER_input("P4",P4);
        P5 = nondet_int(); __CPROVER_input("P5",P5);
        
        P6 = nondet_int(); __CPROVER_input("P6",P6);
        P7 = nondet_int(); __CPROVER_input("P7",P7);
        P8 = nondet_int(); __CPROVER_input("P8",P8);
        P9 = nondet_int(); __CPROVER_input("P9",P9);
        
        P10 = nondet_int(); __CPROVER_input("P10",P10);
        P11 = nondet_int(); __CPROVER_input("P11",P11);
        P12 = nondet_int(); __CPROVER_input("P12",P12);
        
        P13 = nondet_int(); __CPROVER_input("P13",P13);
        P14 = nondet_int(); __CPROVER_input("P14",P14);
        P15 = nondet_int(); __CPROVER_input("P15",P15);
        P16 = nondet_int(); __CPROVER_input("P16",P16);
        P17 = nondet_int(); __CPROVER_input("P17",P17);
        
        
        
   int symb[20];


  for (int FLAG=0;FLAG<BOUND;FLAG++) {
       
       klee_make_symbolic(symb, sizeof(int ) * 20, "symb");
        
        
        
        
        
    // states
        if (q == 0){      
                
                if(symb[1]){
                  // assume guard
                  if ( dummy == 1 ){ 
                    // record method id
                    method_id = 2;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                  }
                  continue;
                }

          continue;
        }
        if (q == 1){      
               
                if(symb[2]){
                  // assume guard
                  if ( dummy == 1 ){ 
                    // record method id
                    method_id = 3;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    break;
                  }
                  continue;
                }
                
                if(symb[3]){
                  // assume guard
                  if ( dummy == 1 ){ 
                    // record method id
                    method_id = 6;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    break;
                  }
                  continue;
                }
                
                if(symb[4]){
                  // assume guard
                  if ( !((P1 >= 0) && (P2 > 0)) ){ 
                    // record method id
                    method_id = 9;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    break;
                  }
                  continue;
                }
                
                if(symb[5]){
                  // assume guard
                  if ( (P1 < 0) ){ 
                    // record method id
                    method_id = 10;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    break;
                  }
                  continue;
                }

          continue;
        }
        if (q == 2){      
        
                if(symb[6]){
                  // assume guard
                  if ( ( dummy == 1 ) && ((((P1 & (P1 - 1)) == 0) && (P1 > 0)) || ( dummy != 1 )) ){ 
                    // record method id
                    method_id = 1;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                  }
                  continue;
                }
                
                if(symb[7]){
                  // assume guard
                  if ( ( dummy == 1 ) && ((((P1 & (P1 - 1)) == 0) && (P1 > 0)) || ( dummy != 1 ))&& ((((P1 & (P1 - 1)) != 0) && (P1 > 0)) || ( dummy != 1 )) ){ 
                    // record method id
                    method_id = 1;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                  }
                  continue;
                }
                
                if(symb[8]){
                  // assume guard
                  if ( ( dummy == 1 ) && ((((P1 & (P1 - 1)) == 0) && (P1 > 0)) || ( dummy != 1 ))&& ((((P1 & (P1 - 1)) != 0) && (P1 > 0)) || ( dummy != 1 ))&& ((((P1 & (P1 - 1)) == 0) && (P1 <= 0)) || ( dummy != 1 )) ){ 
                    // record method id
                    method_id = 1;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                  }
                  continue;
                }
                
                if(symb[9]){
                  // assume guard
                  if ( ( dummy == 1 ) && ((((P1 & (P1 - 1)) == 0) && (P1 > 0)) || ( dummy != 1 ))&& ((((P1 & (P1 - 1)) != 0) && (P1 > 0)) || ( dummy != 1 ))&& ((((P1 & (P1 - 1)) == 0) && (P1 <= 0)) || ( dummy != 1 ))&& ((((P1 & (P1 - 1)) != 0) && (P1 <= 0)) || ( dummy != 1 )) ){ 
                    // record method id
                    method_id = 1;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                  }
                  continue;
                }
                
                if(symb[10]){
                  // assume guard
                  if ( dummy == 1 ){ 
                    // record method id
                    method_id = 3;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    break;
                  }
                  continue;
                }
                
                if(symb[11]){
                  // assume guard
                  if ( dummy == 1 ){ 
                    // record method id
                    method_id = 4;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                  }
                  continue;
                }
                
                if(symb[12]){
                  // assume guard
                  if ( dummy == 1 ){ 
                    // record method id
                    method_id = 5;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                  }
                  continue;
                }
                
                if(symb[13]){
                  // assume guard
                  if ( dummy == 1 ){ 
                    // record method id
                    method_id = 6;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    break;
                  }
                  continue;
                }
                
                if(symb[14]){
                  // assume guard
                  if ( dummy == 1 ){ 
                    // record method id
                    method_id = 7;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                  }
                  continue;
                }
                
                if(symb[15]){
                  // assume guard
                  if ( ((P1 >= 0) && (P2 > 0)) ){ 
                    // record method id
                    method_id = 8;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                  }
                  continue;
                }
                
                if(symb[16]){
                  // assume guard
                  if ( !((P1 >= 0) && (P2 > 0)) ){ 
                    // record method id
                    method_id = 9;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    break;
                  }
                  continue;
                }
                
                if(symb[17]){
                  // assume guard
                  if ( (P1 < 0) ){ 
                    // record method id
                    method_id = 10;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 1;
                    // post condition
                    break;
                  }
                  continue;
                }
                
                if(symb[18]){
                  // assume guard
                  if ( !(P1 < 0)&& (((P17 < 13) && (P17 >= 0)) || ( dummy != 1 )) ){ 
                    // record method id
                    method_id = 11;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                  }
                  continue;
                }
                
                if(symb[19]){
                  // assume guard
                  if ( !(P1 < 0) && (((P17 < 13) && (P17 >= 0)) || ( dummy != 1 ))&& (((P17 >= 13) && (P17 >= 0)) || ( dummy != 1 )) ){ 
                    // record method id
                    method_id = 11;
                    // non-conformance condition 
                    if ( dummy != 1 ) {
                      goto ERROR;
                    }
                    // state update
                    q = 2;
                    // post condition
                  }
                  continue;
                }

          continue;
        }
   

  } // end while

  ERROR:
  //printf("error \n ");


 
 

 return 0;
 }

 


 
