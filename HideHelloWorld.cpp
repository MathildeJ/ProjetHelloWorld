// HideHelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <iostream>
#include <chrono>
using namespace std;


typedef int(*type_func)(const char*, ...);

int main() {
	/*
	time_t timer;

	int tab[14];

	tab[0] = -1038;
	tab[1] = -966;
	tab[2] = -865;
	tab[3] = -757;
	tab[4] = -649;
	tab[5] = -538;
	tab[6] = -506;
	tab[7] = -419;
	tab[8] = -308;
	tab[9] = -194;
	tab[10] = -86;
	tab[11] = 14;
	tab[12] = 24;
	tab[13] = 24;

	int i;

	for (i = 1; i < 13; i++) printf("%c", tab[i] - tab[i - 1]);
	*/
	cout << chrono::high_resolution_clock::period::den << endl;
	auto start_time = chrono::high_resolution_clock::now();
	int temp = 0;
	auto end_time = chrono::high_resolution_clock::now();
	cout << chrono::duration_cast<chrono::seconds>(end_time - start_time).count() << ":";
	cout << chrono::duration_cast<chrono::microseconds>(end_time - start_time).count() << ":";
	cout << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << ":";
	/*
	char* r;
	r = (char*)printf;
	char* p_f;
	p_f = (char*)qsort;

	printf("%p %p\n", r, p_f);
	*/

	return 0;

}