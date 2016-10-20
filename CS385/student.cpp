// I pledge my honor that I have abided by the Stevens honor system- John Spicer
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>

using namespace std;

class Student
{
	public:
		Student(const string &first, const string &last, const float gpa, const int id): first_(first), last_(last), gpa_(gpa), id_(id)
		{
		}

		inline string full_name() const
		{
			return first_ + " " + last_;
		}

		inline int id() const
		{
			return id_;
		}

		inline float gpa() const
		{
			return gpa_;
		}

		inline void print_info() const
		{
			cout << fixed << full_name() << ", GPA: " << setprecision(2) << gpa() << ", ID: " << id() << endl;
		}

	private:
		string first_;
		string last_;
		float gpa_;
		int id_;
};

vector<Student> find_failing_students(const vector<Student> &students)
{
	vector<Student> failing_students;
        // Always make sure you use the pre-increment operator when working with
        // iterators. Declare iterator inside loop to reduce its scope.
        for(vector<Student>::const_iterator it = students.begin(); it != students.end(); ++it)
        {
                if(it->gpa() < 1.0)
                {
                	failing_students.push_back(*it);
                }
        }
        return failing_students;
}

void print_students(const vector<Student> &students)
{
	for(vector<Student>::const_iterator it = students.begin(); it != students.end(); ++it)
	{
		it->print_info();
	}
}


/**
* Allows the user to enter information for multiple students, then
* find those students whose GPA is below 1.0 and prints them to the
* screen.
*/
int main()
{
	string first_name, last_name;
	float gpa;
	int id;
	char repeat;
	vector<Student> students;
	do
	{
		cout << "Enter student's first name: ";
		cin >> first_name;
		cout << "Enter student's last name: ";
		cin >> last_name;
		gpa = -1;

		while (gpa < 0 || gpa > 4)
		{
			cout << "Enter student's GPA (0.0-4.0): ";
			cin >> gpa;
		}
		cout << "Enter student's ID: ";
		cin >> id;
		students.push_back(Student(first_name, last_name, gpa, id));
		cout << "Add another student to database (Y/N)? ";
		cin >> repeat;
	} while (repeat == 'Y' || repeat == 'y');
	cout << endl << "All students:" << endl;
	print_students(students);
	cout << endl << "Failing students:";
	vector<Student> failing_students = find_failing_students(students);
	if(failing_students.empty())
	{
		cout << " None";
	}
	else
	{
		cout << endl;
		print_students(failing_students);
	}
	return 0;
}
