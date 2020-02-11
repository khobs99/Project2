#include "Person.h"
class people
{
public:
	people();
	people(const people& source);
	~people();
	void insert(const person& n);
	people& operator =(const people& i);
	void display(ostream& out);
private:
	person* map;
	int len;




};
