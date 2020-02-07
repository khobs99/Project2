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
	persn = new string[20];
}
people::people(const int& person)
{

}
people::~people()
{
	delete[] persn;
}
bool people::insert(const person& x)
{

}
bool people::operator + (people l)
{
	
}

#endif
