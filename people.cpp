

#include<iomanip>
#include<iostream>
#include<string>
#include<cstdlib>




#include"people.h"
const int MAX = 20;
using namespace std;

people::people()
{
	map = new person[MAX];
	len = 0;
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
people::~people()
{
	delete[] map;
}

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
people people::operator+(people x)
{
	if ((len + x.len) > 20)
	{
		cout << "List is full" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < MAX; i++)
		{
			*map = *(x.map + i);
		}
	}
	return *this;
}
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









