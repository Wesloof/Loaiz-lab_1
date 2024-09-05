#include <iostream>
#include <cstring>

using namespace std;

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
	struct student
	{
		string famil;
		string name, facult;
		int Nomzach;
	} stud[3];

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
	for (i = 0; i < 3; i++) {
		if (strcmp(s1.c_str(), stud[i].famil.c_str()) == 0)
		{
			if (strcmp(s2.c_str(), stud[i].name.c_str()) == 0)
			{
				if (strcmp(s3.c_str(), stud[i].facult.c_str()) == 0)
				{
					if (n == stud[i].Nomzach)
					{
						cout << stud[i].famil << " "
							<< stud[i].name << " "
							<< stud[i].facult << " " 
							<< stud[i].Nomzach << "Находится в базе";
					}
				}
			}
		}
	}

}
