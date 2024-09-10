#include <iostream>
#include <cstring>

using namespace std;

struct student
{
	string famil;
	string name, facult;
	int Nomzach;
}stud[3];

void searchall(string name, string surn, string fac, int zac)
{
	for (int i = 0; i < 3; i++) {
		if (zac == stud[i].Nomzach and
			strcmp(name.c_str(), stud[i].name.c_str()) == 0 and
			strcmp(surn.c_str(), stud[i].famil.c_str()) == 0 and
			strcmp(fac.c_str(), stud[i].facult.c_str()) == 0)
		{
			cout << name << " "
				<< surn << " "
				<< "Находится в базе" << endl;
		}
	}
}

void searchonlyname(string name)
{
	for (int i = 0; i < 3; i++) {
		if (strcmp(name.c_str(), stud[i].name.c_str()) == 0)
		{
			cout << name << " "
				<< "Находится в базе";
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	int i;
	
	string s1;
	string s2;
	string s3;
	int n;

	for (i = 0; i < 3; i++)
	{
		cout << "Введите фамилию студента\n"; 
		cin >> stud[i].famil;
	}
	for (i = 0; i < 3; i++)
	{
		cout << "Введите имя студента " << stud[i].famil << endl;
		cin >> stud[i].name;
	}
	for (i = 0; i < 3; i++)
	{
		cout << "Введите название факультета студента " << stud[i].famil << " " << stud[i].name << endl;
		cin >> stud[i].facult;
	}
	for (i = 0; i < 3; i++)
	{
		cout << "Введите номер зачётной книжки студента " << stud[i].famil << " " << stud[i].name << endl;
		cin >> stud[i].Nomzach;
	}

	for (i = 0; i < 3; i++)
	{
		cout << "Cтудент " << stud[i].name << " обучается на факультете " << stud[i].facult << ", номер зачётной книжки " << stud[i].Nomzach << endl;
	}

	cout << "Введите имя, фамилию факультет и номер зачетной книги, которого хотите найти:" << endl;
	cin >> s1;
	cin >> s2;
	cin >> s3;
	cin >> n;
	searchall(s1, s2, s3, n);
	searchonlyname(s1);

}
