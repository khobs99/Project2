//People Header . Kenneth Hobday .  Spring 2020 .  CSC231


#include "Person_KJH.h"


class people
{
public:
	people();
	people(const people& source);
	~people();
	void insert(const person& n);
	int find(const person& x);
	void remove(const person& kill);
	people& operator =(const people& i);
	people operator +(const people& x);
	void display(ostream& out);
private:
	person* map;
	int len;




};
