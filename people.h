class people
{
public:
	people();
	people(const people& source);
	~people();
	void insert(const person& x);
	void display(ostream&);
	int find(const person& F);
	bool remove(person& j);
	void operator =(people& i);
	people operator +(people l);
private:
	person *map;
	int len;




};
