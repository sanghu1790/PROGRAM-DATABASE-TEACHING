//This program is coolant_basis_5_safe_sftyliveness.c
//#Safe


#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif
#include <stdlib.h>
#define BOUND1 30
#define BOUND2 30
int kappa;
#include <stdio.h>



int error, tempDisplay, warnLED, tempIn, chainBroken,
warnLight, temp, otime = 0, time = 0, limit, init = 0;


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
	int symb2[BOUND2];
	klee_make_symbolic(symb2, sizeof(int) * BOUND2, "symb2");
	for (int FLAG=0;FLAG<BOUND2;FLAG++)
    {
		otime = time;
		time = otime +1;
		tempIn = symb2[FLAG];
		temp = vinToCels(tempIn);
		if(temp > limit) 
		{
			chainBroken = 1;
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
	}
	
	init = 3;
	coolantControl();	
}
