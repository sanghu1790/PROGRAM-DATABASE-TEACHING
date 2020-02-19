//This program is coolant_basis_1_unsafe_sfty.c

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
#include <stdio.h>




int error, tempDisplay, warnLED, tempIn, chainBroken,
warnLight, temp, limit, init;


void display(int tempdiff, int warning)
{
	tempDisplay = tempdiff;
	warnLED = warning;
}

int vinToCels(int kelvin)
{
	if (temp < 0) 
	{
		error = 1;
		display(kelvin - 273, error);
	}
	return kelvin -273;
}

void coolantControl()
{
	int otime, time = 0;
	
	int symb2[BOUND2];
	klee_make_symbolic(symb2, sizeof(int) * BOUND2, "symb2");
	for (int FLAG=0;FLAG<BOUND2;FLAG++)
    {
		otime = time;
		time = otime + 1;
		tempIn = symb2[FLAG];
		temp = vinToCels(tempIn);
		if(temp > limit) 
		{
			chainBroken = 1;
		} else {
			
			chainBroken = 0;
		}
	}
}

int main()
{
kappa=0;
 init = 0;
    tempDisplay = 0;
    warnLED = 1;
    tempIn = 0;
    error = 0;
    chainBroken = 0;
    warnLight = 0;
    temp = 0;
    limit = 8;
    init = 1;
    int try = 0;
	
	
	int symb1[BOUND1];
	klee_make_symbolic(symb1, sizeof(int) * BOUND1, "symb1");
	for (int FLAG=0;FLAG<BOUND1;FLAG++)
    {
		int limit = symb1[FLAG];
		if(limit < 10 && limit > -273)
		{
			error = 0;
			display(0, error);
			break;
		} else {
			error = 1;
			display(0, error);
		}	
		if (try >= 3) {
			limit = 7;
			break;
		}
		try++;
	}
	
	init = 3;
	coolantControl();	
}
