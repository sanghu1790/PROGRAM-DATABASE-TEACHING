//This program is apache-get-tag_true-unreach-call_true-termination.c






#include <stdlib.h>
#define BOUND1 2
#define BOUND2 2
int kappa;


#define LARGE_INT 1000000

int main()
{
kappa=0;
  int tagbuf_len;
  int t;
  

  
  scanf("%d", &tagbuf_len);
  if(tagbuf_len >= 1); else goto END;

  t = 0;

  --tagbuf_len;


   
        int symb1[BOUND1];
	klee_make_symbolic(symb1, sizeof(int) * BOUND1, "symb1");
	for (int FLAG=0; FLAG < BOUND1; FLAG++)
         {
  
    if (t == tagbuf_len) {     
      if (!(0 <= t)) {
      ERROR:  ;
        }
      if (!(t <= tagbuf_len)) {
      ERROR:  ;
        }
      goto END;
    }
    if (symb1[FLAG]) {
      break;
    }
     if (t == tagbuf_len) {     
      if (!(0 <= t)) {
      ERROR:  ;
        }
      if (!(t <= tagbuf_len)) {
      ERROR:  ;
        }
      t++;
  }

   if (t == tagbuf_len) {
      if (!(0 <= t)) {
      ERROR:  ;
        }
      if (!(t <= tagbuf_len)) {
      ERROR:  ;
        }
  t++;
  }     
        int symb2[BOUND2][4];
	klee_make_symbolic(symb2, sizeof(int) * BOUND2 *4, "symb2");
	for (int FLAG=0; FLAG<BOUND2 ; FLAG++)
         {
    if (t == tagbuf_len) { 
      if (!(0 <= t)) {
      ERROR:  ;
        }
      if (!(t <= tagbuf_len)) {
      ERROR:  ;
        }
      goto END;
    }
   
     
    if (symb2[FLAG][0]) {
    
      if (symb2[FLAG][1]) {
        if (!(0 <= t)) {
      ERROR:  ;
        }
        if (!(t <= tagbuf_len)) {
      ERROR:  ;
        }
        t++;
        if (t == tagbuf_len) {
	  if (!(0 <= t)) {
      ERROR:  ;
        }
       if (!(t <= tagbuf_len)) {
      ERROR:  ;
        }
          goto END;
        }
      }
    }
    else if (symb2[FLAG][3]) {
      break;
    }

  
    if (!(0 <= t)) {
      ERROR:  ;
        }
       if (!(t <= tagbuf_len)) {
      ERROR:  ;
        }
    t++;               
  }
  
if (!(0 <= t)) {
      ERROR:  ;
        }
          if (!(t <= tagbuf_len)) {
      ERROR:  ;
        }

 END: ;
 
  return 0;
}
