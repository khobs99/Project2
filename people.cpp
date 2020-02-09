#ifndef Person_KJH
#define Person_KJH

#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<iomanip>



using namespace std;


#include "People.h"
#include "Person_KJH.h"

people::people()
{
	map = new person[20];
	len = 0;
}
people::people(const people& source)
{
	source = new person[20];
	len = source.len;
	*this = source;
}
people::~people()
{
	delete[] map;
}
void people::insert(const person& x)
{
	int i, pos = 0;
	if (len >= 20)
	{
		return;
	}
	while (pos < len && map[pos] < x)
	{
		pos++;
	}
	for (i = len; i > pos; i--)
	{
		map[i - 1] = map[i];
		map[pos] = x;
		len++;
	}

}
void people::display(ostream& out)
{
	out << map << endl;
}
int people::find(const person& f)
{
	for (int i = 0; i < len; i++)
	{
		if (map[i] == f)
		{
			return i;
		}
	}
	return -1;
}
bool people::remove(person& j)
{
	delete map[j];
}
people people::operator + (people l)
{
	people r(*this);
	for (int i = 0; i < len; i++)
	{
		if (l.find(map[i]) != -1)
		{
			r.insert(map[i]);
		}
	}
	return r;
}
void people::operator =(people& i)
{
	person *tempmap;
	tempmap = new person[20];
	delete[] map;
	map = tempmap;
	i.map = tempmap;
	len = i.len;
	
}

#endif
