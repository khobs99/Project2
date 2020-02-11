#ifndef Person_KJH
#define Person_KJH

#include<iomanip>
#include<iostream>
#include<string>
#include<cstdlib>




#include"people.h"
#include"Person.h"
const int MAX = 20;

people::people()
{
	map = new person[MAX];
	len = 0;
}
people::~people()
{
	delete[] map;
}
people::people(const people& source)
{
	delete[] map;   
	len = source.len;
	map = new person[MAX];
	for (int i = 0; i < MAX; i++)
	{
		map[i] = source.map[i];
		len++;
	}
}
void people::insert(const person& n)
{
	int pos = 0;
	if (len >= MAX)
	{
		return;
	}
	while (pos < len&& map[pos]<n)
	{
		pos++;
	
	for (int i = len; i > pos; i--)
	{
		map[i] = map[i-1];

	}
		len++;
	}
}
people& people::operator= (const people& source)
{
	if (this == &source)
	{
		return *this;
	}
	delete[]map;
	people tempmap;
	for (int i = 0; i < len; i++)
	{
		tempmap.map[i] = source.map[i];
	}
	len = source.len;
	return *this;

}
void people::display(ostream& out)
{
for(int i=0;i<len;i++)
{
	sum+=map[i].age;
	map.put(out);
	out<<endl;
}
}







#endif
