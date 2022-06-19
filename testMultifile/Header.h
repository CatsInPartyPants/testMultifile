#include <iostream>
#include <string>
#ifndef HEADER_H_
#define HEADER_H_

const int Len = 40;

struct golf
{
	char fullname[Len] = "";
	int handicap = 0;
};

void setgolf(golf& g, const char* name, int hc);
int setgolf(golf& g);
void handicap(golf& g, int hc);
void showgolf(const golf& g);

#endif
