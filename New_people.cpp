#ifndef Person_KJH
#define Person_KJH

#include<iomanip>
#include<iostream>
#include<string>
#include<cstdlib>




#include"people.h"
#include "Person_KJH.h"


people::people()
{
	map = new person[20];
	len = 0;
}
people::~people()
{
	delete[] map;
}
people::people(const people& source)
{
	source = new person[20];   //error no operator matches these operands
	len = source.len;
	*this = source;
}

people& people::operator= (const people &source)
{
	if (this == &source)
	{
		return *this;
	}
	for(int i=0;i<len;i++)
	{
		map[i]=source.map[i];
	}
	len = source.len;
	return *this;
	
}
void people::display(ostream& out)
{
	out << map<<endl;
}







#endif
