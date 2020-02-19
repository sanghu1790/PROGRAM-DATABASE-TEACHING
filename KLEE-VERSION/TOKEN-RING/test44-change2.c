//This program is apache-get-tag_true-unreach-call_true-termination.c
#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif
#include <stdlib.h>
#define BOUND1 20
#define BOUND2 20
int kappa;


#define LARGE_INT 1000000

int main()
{
kappa=0;
  int tagbuf_len;
  int t;
  

  
  klee_make_symbolic(&tagbuf_len, sizeof(int), "tagbuf_len");
  if(tagbuf_len >= 1); else goto END;

  t = 0;

  --tagbuf_len;


   
        int symb1[BOUND1];
	klee_make_symbolic(symb1, sizeof(int) * BOUND1, "symb1");
	for (int FLAG=0; FLAG < BOUND1; FLAG++)
         {
  
    if (t == tagbuf_len) {
      if (!(0 <= t)) {}
      if (!(t <= tagbuf_len)) {}
     
      goto END;
    }
    
    
    if (symb1[FLAG]) {
      break;
    }
     if (!(0 <= t)) {}
      if (!(t <= tagbuf_len)) {}
    t++;
  }

   if (!(0 <= t)) {}
      if (!(t <= tagbuf_len)) {}
  t++;

        int symb2[BOUND2][4];
	klee_make_symbolic(symb2, sizeof(int) * BOUND2 *4, "symb2");
	for (int FLAG=0; FLAG<BOUND2 ; FLAG++)
         {
    if (t == tagbuf_len) { 
      if (!(0 <= t)) {}
      if (!(t <= tagbuf_len)) {}
      goto END;
    }
   
     
    if (symb2[FLAG][0]) {
    
      if (symb2[FLAG][1]) {
	 if (!(0 <= t)) {}
      if (!(t <= tagbuf_len)) {}
        t++;
        if (t == tagbuf_len) {
	 if (!(0 <= t)) {}
         if (!(t <= tagbuf_len)) {}
          goto END;
        }
      }
    }
    else if (symb2[FLAG][3]) {
      break;
    }

  
    if (!(0 <= t)) {}
    if (!(t <= tagbuf_len)) {}
    t++;               
  }
  
  if (!(0 <= t)) {}
  if (!(t <= tagbuf_len)) {}

 END: ;
 
  return 0;
}
