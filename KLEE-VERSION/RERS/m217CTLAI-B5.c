#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif

#include <stdio.h> 
#include <assert.h>
#include <math.h>
#include <stdlib.h>

#define BOUND 5
int kappa;
	// inputs
	int inputs[] = {55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79};

	void calculate_output(int);
	void calculate_outputm1(int);
	void calculate_outputm2(int);
	void calculate_outputm3(int);
	void calculate_outputm4(int);
	void calculate_outputm5(int);
	void calculate_outputm6(int);
	void calculate_outputm7(int);
	void calculate_outputm8(int);
	void calculate_outputm9(int);
	void calculate_outputm10(int);
	void calculate_outputm11(int);
	void calculate_outputm12(int);
	void calculate_outputm13(int);

	 int a1040915427  = 36;
	 int a1466855028 = 7;
	 int a110741160 = 12;
	 int a1406914022 = 13;
	 int a51114272  = 36;
	 int cf = 1;

 void calculate_outputm1(int input) {
    if(( cf==1  && (input == 58))) {
    	cf = 0;
    	a51114272 = 36 ;
    	a1406914022 = (a110741160 - 1); 
    	 printf("");//printf("%d\n", 89); fflush(stdout); 
    } if(( cf==1  && (input == 59))) {
    	cf = 0;
    	a51114272 = 33 ;
    	a1406914022 = ((a110741160 / a110741160) - -8); 
    	 printf("");//printf("%d\n", 91); fflush(stdout); 
    } 
}
 void calculate_outputm2(int input) {
    if(((input == 65) &&  cf==1 )) {
    	cf = 0;
    	a51114272 = 34 ;
    	a1466855028 = ((a110741160 / a110741160) + 3); 
    	 printf("");//printf("%d\n", 84); fflush(stdout); 
    } if(((input == 56) &&  cf==1 )) {
    	cf = 0;
    	a51114272 = 36 ;
    	a1406914022 = (a110741160 - 4); 
    	 printf("");//printf("%d\n", 88); fflush(stdout); 
    } if(((input == 57) &&  cf==1 )) {
    	cf = 0;
    	a51114272 = 34 ;
    	a1466855028 = ((a110741160 - a110741160) + 3); 
    	 printf("");//printf("%d\n", 80); fflush(stdout); 
    } 
}
 void calculate_outputm3(int input) {
    if(( cf==1  && (input == 73))) {
    	cf = 0;
    	a51114272 = 36 ;
    	a1406914022 = 13; 
    	 printf("");//printf("%d\n", 89); fflush(stdout); 
    } if(( cf==1  && (input == 63))) {
    	cf = 0;
    	a51114272 = 36 ;
    	a1406914022 = 7; 
    	 printf("");//printf("%d\n", 86); fflush(stdout); 
    } if(((input == 74) &&  cf==1 )) {
    	cf = 0;
    	a51114272 = 36 ;
    	a1406914022 = 7; 
    	 printf("");//printf("%d\n", 86); fflush(stdout); 
    } if(((input == 76) &&  cf==1 )) {
    	cf = 0;
    	a51114272 = 36 ;
    	a1406914022 = 7; 
    	 printf("");//printf("%d\n", 86); fflush(stdout); 
    } if(((input == 78) &&  cf==1 )) {
    	cf = 0;
    	a51114272 = 36 ;
    	a1406914022 = 7; 
    	 printf("");//printf("%d\n", 86); fflush(stdout); 
    } if(((input == 77) &&  cf==1 )) {
    	cf = 0;
    	a51114272 = 36 ;
    	a1406914022 = 7; 
    	 printf("");//printf("%d\n", 86); fflush(stdout); 
    } if(( cf==1  && (input == 79))) {
    	cf = 0;
    	a51114272 = 36 ;
    	a1406914022 = 7; 
    	 printf("");//printf("%d\n", 86); fflush(stdout); 
    } 
}
 void calculate_outputm4(int input) {
    if(((input == 75) &&  cf==1 )) {
    	cf = 0;
    	a51114272 = 35 ;
    	a1040915427 = 34 ; 
    	 printf("");//printf("%d\n", 90); fflush(stdout); 
    } if(((input == 64) &&  cf==1 )) {
    	cf = 0;
    	a51114272 = 34 ;
    	a1466855028 = ((a1406914022 + a1406914022) + -19); 
    	 printf("");//printf("%d\n", 80); fflush(stdout); 
    } if(((input == 61) &&  cf==1 )) {
    	cf = 0;
    	a51114272 = 34 ;
    	a1466855028 = (a1406914022 + -8); 
    	 printf("");//printf("%d\n", 80); fflush(stdout); 
    } 
}
 void calculate_outputm5(int input) {
    if(( cf==1  && (input == 71))) {
    	cf = 0;
    	a51114272 = 36 ;
    	a1406914022 = (a1466855028 + 3); 
    	 printf("");//printf("%d\n", 88); fflush(stdout); 
    } if(((input == 72) &&  cf==1 )) {
    	cf = 0;
    	a51114272 = 36 ;
    	a1406914022 = ((a1466855028 - a1466855028) + 13); 
    	 printf("");//printf("%d\n", 89); fflush(stdout); 
    } 
}
 void calculate_outputm6(int input) {
    if(( cf==1  && (input == 71))) {
    	cf = 0;
    	a51114272 = 36 ;
    	a1406914022 = ((a1466855028 - a1466855028) - -11); 
    	 printf("");//printf("%d\n", 88); fflush(stdout); 
    } if(( cf==1  && (input == 72))) {
    	cf = 0;
    	a1466855028 = 3; 
    	 printf("");//printf("%d\n", 80); fflush(stdout); 
    } 
}
 void calculate_outputm7(int input) {
    if(((input == 75) &&  cf==1 )) {
    	cf = 0;
    	a51114272 = 35 ;
    	a1040915427 = 34 ; 
    	 printf("");//printf("%d\n", 82); fflush(stdout); 
    } if(( cf==1  && (input == 64))) {
    	cf = 0;
    	a51114272 = 36 ;
    	a1406914022 = (a1466855028 - -6); 
    	 printf("");//printf("%d\n", 89); fflush(stdout); 
    } if(((input == 61) &&  cf==1 )) {
    	cf = 0;
    	a51114272 = 36 ;
    	a1406914022 = (a1466855028 + 6); 
    	 printf("");//printf("%d\n", 89); fflush(stdout); 
    } 
}
 void calculate_outputm8(int input) {
    if(( cf==1  && (input == 60))) {
    	cf = 0;
    	a51114272 = 36 ;
    	a1406914022 = 13; 
    	 printf("");//printf("%d\n", 89); fflush(stdout); 
    } 
}
 void calculate_outputm9(int input) {
    if(((input == 70) &&  cf==1 )) {
    	cf = 0;
    	a51114272 = 34 ;
    	a1466855028 = (a1406914022 - -1); 
    	 printf("");//printf("%d\n", 83); fflush(stdout); 
    } 
}
 void calculate_outputm10(int input) {
    if(( cf==1  && (input == 55))) {
    	cf = 0;
    	a1406914022 = 13; 
    	 printf("");//printf("%d\n", 89); fflush(stdout); 
    } if(( cf==1  && (input == 67))) {
    	cf = 0;
    	a1406914022 = 9; 
    	 printf("");//printf("%d\n", 87); fflush(stdout); 
    } if(( cf==1  && (input == 68))) {
    	cf = 0;
    	a1406914022 = 13; 
    	 printf("");//printf("%d\n", 89); fflush(stdout); 
    } if(((input == 66) &&  cf==1 )) {
    	cf = 0;
    	a1406914022 = 13; 
    	 printf("");//printf("%d\n", 89); fflush(stdout); 
    } if(( cf==1  && (input == 69))) {
    	cf = 0;
    	a1406914022 = 13; 
    	 printf("");//printf("%d\n", 89); fflush(stdout); 
    } 
}
 void calculate_outputm11(int input) {
    if(((input == 70) &&  cf==1 )) {
    	cf = 0;
    	a51114272 = 32 ;
    	a110741160 = ((a1406914022 * a1406914022) - 66); 
    	 printf("");//printf("%d\n", 85); fflush(stdout); 
    } 
}
 void calculate_outputm12(int input) {
    if(( cf==1  && (input == 70))) {
    	cf = 0;
    	a51114272 = 33 ; 
    	 printf("");//printf("%d\n", 83); fflush(stdout); 
    } 
}
 void calculate_outputm13(int input) {
    if(((input == 62) &&  cf==1 )) {
    	cf = 0;
    	a51114272 = 32 ;
    	a110741160 = (a1406914022 - -1); 
    	 printf("");//printf("%d\n", 81); fflush(stdout); 
    } 
}

 void calculate_output(int input) {
        cf = 1;

    if((a51114272 == 32 &&  cf==1 )) {
    	if((a110741160 == 14 &&  cf==1 )) {
    		calculate_outputm1(input);
    	} 
    	if(( cf==1  && a110741160 == 15)) {
    		calculate_outputm2(input);
    	} 
    } 
    if(( cf==1  && a51114272 == 33)) {
    	if(( cf==1  && a1406914022 == 9)) {
    		calculate_outputm3(input);
    	} 
    	if(( cf==1  && a1406914022 == 11)) {
    		calculate_outputm4(input);
    	} 
    } 
    if(( cf==1  && a51114272 == 34)) {
    	if(( cf==1  && a1466855028 == 3)) {
    		calculate_outputm5(input);
    	} 
    	if((a1466855028 == 4 &&  cf==1 )) {
    		calculate_outputm6(input);
    	} 
    	if(( cf==1  && a1466855028 == 7)) {
    		calculate_outputm7(input);
    	} 
    } 
    if(( cf==1  && a51114272 == 35)) {
    	if((a1040915427 == 34 &&  cf==1 )) {
    		calculate_outputm8(input);
    	} 
    } 
    if(( cf==1  && a51114272 == 36)) {
    	if((a1406914022 == 6 &&  cf==1 )) {
    		calculate_outputm9(input);
    	} 
    	if(( cf==1  && a1406914022 == 7)) {
    		calculate_outputm10(input);
    	} 
    	if(( cf==1  && a1406914022 == 9)) {
    		calculate_outputm11(input);
    	} 
    	if((a1406914022 == 11 &&  cf==1 )) {
    		calculate_outputm12(input);
    	} 
    	if((a1406914022 == 13 &&  cf==1 )) {
    		calculate_outputm13(input);
    	} 
    } 


    if( cf==1 ) 
    {
    	//fprintf(stderr, "Invalid input: %d\n", input); 
} 
}

int input,output;
int main()
{
kappa = 0;
    // main i/o-loop

   int symb;
   for (int FLAG=0;FLAG<BOUND;FLAG++)
    {
    klee_make_symbolic(&symb, sizeof(int ), "symb");     
        // operate eca engine
        if((symb != 55) && (symb != 56) && (symb != 57) && (symb != 58) && (symb != 59) && (symb != 60) && (symb != 61) && (symb != 62) && (symb != 63) && (symb != 64) && (symb != 65) && (symb != 66) && (symb != 67)){ 
        
        if((symb != 68) && (symb != 69) && (symb != 70) && (symb != 71) && (symb != 72) && (symb != 73) && (symb != 74) && (symb != 75) && (symb != 76) && (symb != 77) && (symb != 78) && (symb != 79)){
          return -2;
          }
       }
        calculate_output(symb);
    }
}
