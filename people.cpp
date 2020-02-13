//People.cpp File .   Kenneth Hobday .  Spring 2020 .  CSC231

#include<iomanip>
#include<iostream>
#include<string>
#include<cstdlib>




#include"people.h"
const int MAX = 20;
using namespace std;

//postcondition:variables are initialized
people::people()
{
	map = new person[MAX];
	len = 0;
}
//Precondition:Variables have been initialized
//Postcondtion: A copy has been made of the variables
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
//Postcondition: The dynamic variable is deleted
people::~people()
{
	delete[] map;
}
//Precondition:There is an array that has been declared and initialized
//Postcondition: A new value has been inserted into the array and the length has been incremented
void people::insert(const person& n)
{
	int pos = 0;
	if (len >= MAX)
	{
		return;
	}
	while (pos < len&& map[pos] < n)
	{
		pos++;

		for (int i = len; i > pos; i--)
		{
			map[i] = map[i - 1];

		}
		map[pos]=n;
		len++;
	}
}
//Precondition:Dynamic array exists and is initialized
//Post:Returns where the sought after value is
int people::find(const person& x)
{
	for (int i = 0; i < MAX; i++)
	{
		if (map[i] == x)
		{
			return i;
		}
		else
		{
			return;
		}
	}
}
//Pre:Dynamic array exists and is initialized
//Post:Sought after value has been removed from the array and length is decremented
void people::remove(const person& kill)
{
	for (int i = 0; i < MAX; i++)
	{
		if (map[i] == kill)
		{
			for (; i < MAX - 1; i++)
			{
				map[i] = map[i + 1];
			}
			delete[](map + i);
			len--;
		}
	}
}
//Post:Assignment operator is overloaded to work with the people class
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
//Post:Two values of the array have been added together
people people::operator+(const people& x)
{
	person *new_map;
	new_map=new person[20];
	delete [] map;
	for(iint i=0;i<x.len;i++)
	{
		new_map[i]=map[i];
	}
	len=x.len;
}
//Pre: There are values in the array
//Post:The values are displayed to the screen
void people::display(ostream& out)
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		person temp = *(map + i);
		//sum += temp.get(age);
		 temp.put(out);
		out << endl;
	}
}









