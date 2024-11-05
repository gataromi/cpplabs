#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Point {
private:
	double x;
	double y;

public:
	Point(double x, double y) : x(x), y(y) {}

	string print() const {
		return "{" + to_string(x) + ";" + to_string(y) + "}";
	}
};

class Name {
private:
	string lastName;
	string firstName;
	string middleName;

public:
	Name(const string& last, const string& first, const string& middle) :
		lastName(last), firstName(first), middleName(middle) {}

	string print() const {
		string result;
		if (!lastName.empty()) {
			result += lastName + " ";
		}
		if (!firstName.empty()) {
			result += firstName + " ";
		}
		if (!middleName.empty()) {
			result += middleName;
		}
		return result;
	}
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int choice;
	cout << "������� ����� �������" << endl;
	cin >> choice;
	cout << "\n�� ������� " << choice << endl;
	switch (choice)
	{

	case 1:
	{
		Point point1(1.1, 1.2);
		Point point2(2.1, 2.2);
		Point point3(3.1, 3.2);
		cout << point1.print() << endl;
		cout << point2.print() << endl;
		cout << point3.print() << endl;
		
	}; break;

	case 2:
	{
		Name name1("", "���������", "");
		Name name2("������", "���������", "���������");
		Name name3("����������", "��������", "");
		cout << name1.print() << endl;
		cout << name2.print() << endl;
		cout << name3.print() << endl;
	};


	}

	

	return 0;
}