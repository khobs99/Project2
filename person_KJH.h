/*********************************
 * Person header
 * Created by Kenneth Hobday
 *********************************/




using namespace std;


class person
{
public:
	person();    //Constructor
	person(string first, string last);
	~person();   //Destructor
	bool get(istream&);   //Gets data from the file
	void put(ostream&);   //outputs data to the screen
	bool operator <(person c1);  //Overloads the less than operator for the class
	bool operator>(person c1);   //overloads the greater than operator for the class
	bool operator ==(person c1); //overloads the equal to operator for the class
private:
	string first_name;   //String for all the first names
	string last_name;   //string for all the last names
	int age;    //integer for age because most people dont express their age as a decimal


	//All private variables were kept private because there was no reason to change them since they are data about people that is read in



};
