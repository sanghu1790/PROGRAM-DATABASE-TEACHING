//This Program is Problem1-LTL-RERS-2017.c







#define BOUND 12
int kappa;

int input,output;
#include <assert.h>
#include <math.h>
#include <stdlib.h>



    

	// inputs
	int inputs[] = {2,5,3,1,4};

	int errorCheck();
	int calculate_output(int);
	int calculate_outputm1(int);
	int calculate_outputm2(int);
	int calculate_outputm3(int);
	int calculate_outputm4(int);
	int calculate_outputm5(int);
	int calculate_outputm6(int);
	int calculate_outputm7(int);
	int calculate_outputm8(int);
	int calculate_outputm9(int);
	int calculate_outputm10(int);
	int calculate_outputm11(int);
	int calculate_outputm12(int);
	int calculate_outputm13(int);
	int calculate_outputm14(int);
	int calculate_outputm15(int);
	int calculate_outputm16(int);
	int calculate_outputm17(int);
	int calculate_outputm18(int);
	int calculate_outputm19(int);
	int calculate_outputm20(int);
	int calculate_outputm21(int);

	 int a52 = 9;
	 int a176 = 7;
	 int a166  = 33;
	 int cf = 1;
	 int a167  = 33;
	 int a62  = 32;
	 int a175 = 6;


	int errorCheck() {

	}
 int calculate_outputm1(int input) {
    if((((a166 == 33 &&  cf==1 ) && (input == 3)) && a176 == 6)) {
    	cf = 0;
    	a166 = 32 ;
    	a52 = 11; 
    	 //printf("%d\n", 25);  
    } 
    if(((a166 == 33 && ( cf==1  && a176 == 6)) && (input == 4))) {
    	cf = 0;
    	a166 = 34 ;
    	a167 = 34 ; 
    	 //printf("%d\n", 23);  
    } 
    if(((input == 5) && ((a166 == 33 &&  cf==1 ) && a176 == 6))) {
    	cf = 0;
    	a176 = 11; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm2(int input) {
    if(((input == 4) && ((a166 == 33 &&  cf==1 ) && a176 == 7))) {
    	cf = 0;
    	a176 = 11; 
    	 //printf("%d\n", 25);  
    } 
}
 int calculate_outputm3(int input) {
    if((((input == 3) && (a176 == 8 &&  cf==1 )) && a166 == 33)) {
    	cf = 0;
    	a166 = 35 ;
    	a175 = 6; 
    	 //printf("%d\n", 19);  
    } 
}
 int calculate_outputm4(int input) {
    if(((input == 2) && (a176 == 10 && (a166 == 33 &&  cf==1 )))) {
    	cf = 0;
    	a166 = 36 ;
    	a62 = 35 ; 
    	 //printf("%d\n", 25);  
    } 
}
 int calculate_outputm5(int input) {
    if(((( cf==1  && a166 == 33) && a176 == 11) && (input == 3))) {
    	cf = 0;
    	a166 = 36 ;
    	a62 = 33 ; 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm6(int input) {
    if(((( cf==1  && a176 == 12) && (input == 5)) && a166 == 33)) {
    	cf = 0;
    	a176 = 8; 
    	 //printf("%d\n", 26);  
    } 
    if(((( cf==1  && a176 == 12) && a166 == 33) && (input == 3))) {
    	cf = 0;
    	a166 = 32 ;
    	a52 = 8; 
    	 //printf("%d\n", 19);  
    } 
}
 int calculate_outputm7(int input) {
    if(((a166 == 32 && (a52 == 5 &&  cf==1 )) && (input == 5))) {
    	cf = 0;
    	a166 = 34 ;
    	a167 = 33 ; 
    	 //printf("%d\n", 26);  
    } 
    if(((a166 == 32 && (a52 == 5 &&  cf==1 )) && (input == 2))) {
    	cf = 0;
    	a52 = 7; 
    	 //printf("%d\n", 26);  
    } 
}
 int calculate_outputm8(int input) {
    if((((input == 5) && ( cf==1  && a166 == 32)) && a52 == 7)) {
    	cf = 0;
    	a166 = 33 ;
    	a176 = 11; 
    	 //printf("%d\n", 25);  
    } 
    if(((( cf==1  && a52 == 7) && (input == 4)) && a166 == 32)) {
    	cf = 0;
    	a166 = 34 ;
    	a167 = 32 ; 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm9(int input) {
    if(((input == 2) && (( cf==1  && a166 == 32) && a52 == 8))) {
    	cf = 0;
    	a166 = 34 ;
    	a167 = 34 ; 
    	 //printf("%d\n", 23);  
    } 
    if((a166 == 32 && (a52 == 8 && ( cf==1  && (input == 4))))) {
    	cf = 0;
    	 
    	 //printf("%d\n", 19);  
    } 
    if(((a52 == 8 && (a166 == 32 &&  cf==1 )) && (input == 5))) {
    	cf = 0;
    	a166 = 33 ;
    	a176 = 6; 
    	 //printf("%d\n", 26);  
    } 
}
 int calculate_outputm10(int input) {
    if(((a166 == 32 && (a52 == 9 &&  cf==1 )) && (input == 4))) {
    	cf = 0;
    	a166 = 33 ;
    	a176 = 6; 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm11(int input) {
    if(((a166 == 32 && ( cf==1  && a52 == 11)) && (input == 3))) {
    	cf = 0;
    	 
    	 //printf("%d\n", 25);  
    } 
}
 int calculate_outputm12(int input) {
    if(((input == 3) && (( cf==1  && a167 == 33) && a166 == 34))) {
    	cf = 0;
    	a166 = 32 ;
    	a52 = 5; 
    	 //printf("%d\n", 21);  
    } 
    if((a166 == 34 && ((input == 4) && ( cf==1  && a167 == 33)))) {
    	cf = 0;
    	a166 = 33 ;
    	a176 = 10; 
    	 //printf("%d\n", 23);  
    } 
    if(((( cf==1  && a166 == 34) && (input == 2)) && a167 == 33)) {
    	cf = 0;
    	a166 = 36 ;
    	a62 = 33 ; 
    	 //printf("%d\n", 21);  
    } 
}
 int calculate_outputm13(int input) {
    if(((( cf==1  && (input == 4)) && a166 == 34) && a167 == 32)) {
    	cf = 0;
    	a166 = 32 ;
    	a52 = 7; 
    	 //printf("%d\n", 21);  
    } 
    if(((( cf==1  && a166 == 34) && (input == 5)) && a167 == 32)) {
    	cf = 0;
    	a166 = 32 ;
    	a52 = 8; 
    	 //printf("%d\n", 24);  
    } 
    if((a166 == 34 && ((input == 3) && (a167 == 32 &&  cf==1 )))) {
    	cf = 0;
    	a166 = 35 ;
    	a175 = 4; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm14(int input) {
    if((a167 == 34 && ((a166 == 34 &&  cf==1 ) && (input == 5)))) {
    	cf = 0;
    	a166 = 36 ;
    	a62 = 33 ; 
    	 //printf("%d\n", 21);  
    } 
    if(((( cf==1  && a166 == 34) && (input == 3)) && a167 == 34)) {
    	cf = 0;
    	a166 = 32 ;
    	a52 = 9; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm15(int input) {
    if(((((input == 4) &&  cf==1 ) && a167 == 35) && a166 == 34)) {
    	cf = 0;
    	a166 = 36 ;
    	a62 = 32 ; 
    	 //printf("%d\n", 24);  
    } 
}
 int calculate_outputm16(int input) {
    if(((a175 == 4 && (a166 == 35 &&  cf==1 )) && (input == 4))) {
    	cf = 0;
    	 
    	 //printf("%d\n", 19);  
    } 
}
 int calculate_outputm17(int input) {
    if((a166 == 35 && (a175 == 6 && ( cf==1  && (input == 5))))) {
    	cf = 0;
    	a166 = 33 ;
    	a176 = 11; 
    	 //printf("%d\n", 24);  
    } 
    if((a166 == 35 && (( cf==1  && (input == 2)) && a175 == 6))) {
    	cf = 0;
    	a166 = 33 ;
    	a176 = 12; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm18(int input) {
    if((a175 == 8 && (( cf==1  && a166 == 35) && (input == 4)))) {
    	cf = 0;
    	a175 = 6; 
    	 //printf("%d\n", 26);  
    } 
}
 int calculate_outputm19(int input) {
    if((a166 == 36 && (a62 == 33 && ((input == 2) &&  cf==1 )))) {
    	cf = 0;
    	a166 = 34 ;
    	a167 = 32 ; 
    	 //printf("%d\n", 19);  
    } 
    if(((input == 5) && ((a62 == 33 &&  cf==1 ) && a166 == 36))) {
    	cf = 0;
    	a166 = 33 ;
    	a176 = 10; 
    	 //printf("%d\n", 23);  
    } 
    if(((a62 == 33 && (a166 == 36 &&  cf==1 )) && (input == 4))) {
    	cf = 0;
    	a166 = 35 ;
    	a175 = 8; 
    	 //printf("%d\n", 23);  
    } 
}
 int calculate_outputm20(int input) {
    if((a166 == 36 && (( cf==1  && a62 == 32) && (input == 5)))) {
    	cf = 0;
    	a166 = 34 ;
    	a167 = 33 ; 
    	 //printf("%d\n", 24);  
    } 
    if((a166 == 36 && (a62 == 32 && ( cf==1  && (input == 3))))) {
    	cf = 0;
    	a166 = 32 ;
    	a52 = 8; 
    	 //printf("%d\n", 19);  
    } 
}
 int calculate_outputm21(int input) {
    if((a62 == 35 && ((input == 3) && ( cf==1  && a166 == 36)))) {
    	cf = 0;
    	a166 = 32 ;
    	a52 = 5; 
    	 //printf("%d\n", 21);  
    } 
    if(((a62 == 35 && (a166 == 36 &&  cf==1 )) && (input == 4))) {
    	cf = 0;
    	a166 = 34 ;
    	a167 = 35 ; 
    	 //printf("%d\n", 21);  
    } 
}

 int calculate_output(int input) {
        cf = 1;

    if((a166 == 33 &&  cf==1 )) {
    	if((a176 == 6 &&  cf==1 )) {
    		calculate_outputm1(input);
    	} 
    	if(( cf==1  && a176 == 7)) {
    		calculate_outputm2(input);
    	} 
    	if((a176 == 8 &&  cf==1 )) {
    		calculate_outputm3(input);
    	} 
    	if(( cf==1  && a176 == 10)) {
    		calculate_outputm4(input);
    	} 
    	if((a176 == 11 &&  cf==1 )) {
    		calculate_outputm5(input);
    	} 
    	if((a176 == 12 &&  cf==1 )) {
    		calculate_outputm6(input);
    	} 
    } 
    if((a166 == 32 &&  cf==1 )) {
    	if((a52 == 5 &&  cf==1 )) {
    		calculate_outputm7(input);
    	} 
    	if(( cf==1  && a52 == 7)) {
    		calculate_outputm8(input);
    	} 
    	if(( cf==1  && a52 == 8)) {
    		calculate_outputm9(input);
    	} 
    	if(( cf==1  && a52 == 9)) {
    		calculate_outputm10(input);
    	} 
    	if((a52 == 11 &&  cf==1 )) {
    		calculate_outputm11(input);
    	} 
    } 
    if(( cf==1  && a166 == 34)) {
    	if((a167 == 33 &&  cf==1 )) {
    		calculate_outputm12(input);
    	} 
    	if((a167 == 32 &&  cf==1 )) {
    		calculate_outputm13(input);
    	} 
    	if(( cf==1  && a167 == 34)) {
    		calculate_outputm14(input);
    	} 
    	if(( cf==1  && a167 == 35)) {
    		calculate_outputm15(input);
    	} 
    } 
    if(( cf==1  && a166 == 35)) {
    	if(( cf==1  && a175 == 4)) {
    		calculate_outputm16(input);
    	} 
    	if(( cf==1  && a175 == 6)) {
    		calculate_outputm17(input);
    	} 
    	if((a175 == 8 &&  cf==1 )) {
    		calculate_outputm18(input);
    	} 
    } 
    if(( cf==1  && a166 == 36)) {
    	if((a62 == 33 &&  cf==1 )) {
    		calculate_outputm19(input);
    	} 
    	if(( cf==1  && a62 == 32)) {
    		calculate_outputm20(input);
    	} 
    	if((a62 == 35 &&  cf==1 )) {
    		calculate_outputm21(input);
    	} 
    } 
    errorCheck();

    if( cf==1 ) 
	{
    	//fprintf(stderr, "Invalid input: %d\n", input);
	}		
}

int main()
{
kappa = 0;
    // main i/o-loop
  int symb;
   for (int FLAG=0;FLAG<BOUND;FLAG++)
    {
    symb = nondet_int(); __CPROVER_input("symb",symb);

        // read input
                
        // operate eca engine
        if((symb != 2) && (symb != 5) && (symb != 3) && (symb != 1) && (symb != 4))
          return -2;
        calculate_output(symb);
    }
    
    return 0;
    }
