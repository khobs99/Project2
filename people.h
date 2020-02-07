class people
{
public:
	people();
	people(const people& source);
	~people();
	bool insert(const person& x);
	void display(ostream&);
	bool find(const person& F);
	bool remove(const person& j);
	bool operator =(people i);
	bool operator +(people l);
private:
	string *persn;
	int len;




};
