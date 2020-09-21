#include "FakeStudent.h"

int main()
{
	FakeStudent temp;

	vector<Student> s;

	for (int i = 0; i < 30; i++)
		s.push_back(temp.next());
	
	for (int i = 0; i < s.size() - 1; i++)
		for (int j = i + 1; j < s.size(); j++)
		{
			if (s[i].compareAvg(s[j]) == -1)
			{
				swap(s[i], s[j]);
			}
		}

	cout << "Top 5 students with highest average point: \n";

	for (int i = 0; i < 5; i++)
		cout << s[i].toString() << endl;

	fstream f;

	f.open("Database.txt", ios::out);

	if (!f.is_open())
	{
		cout << "Cannot create Database.txt\n";
		return -1;
	}

	for (int i = 0; i < s.size(); i++)
		f << s[i].toString() << endl;

	f.close();

	cout << "\nCreate Database.txt successfully.\n";

	return 0;
}