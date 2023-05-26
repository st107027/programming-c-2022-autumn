#include<iostream>

struct Student
{
	std::string name;
	std::string surname;
	float mark1;
	float mark2;
	float mark3;

	Student();
	Student(std::string name, std::string surname, float mark1, float mark2, float mark3) : name(name), surname(surname), mark1(mark1), mark2(mark2), mark3(mark3) {}
	Student(const Student &st) : name(st.name), surname(st.surname), mark1(st.mark1), mark2(st.mark2), mark3(st.mark3) {}

	~Student() {}

	std::string getName() { return name; }
	std::string getSurname() { return surname; }
	float getAR() { return (mark1 + mark2 + mark3) / 3; }

};

int main(int argc, char* argv[])
{
	std::string name;
	std::string surname;
	float mark1;
	float mark2;
	float mark3;
	int n;

	std::cin >> n;

	Student** list = new Student*[n]{};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> name >> surname >> mark1 >> mark2 >> mark3;

		list[i] = new Student(name, surname, mark1,mark2,mark3);
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (((*list[j]).getAR()) < ((*list[j + 1]).getAR()))
			{
				std::swap(list[j], list[j + 1]);
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << (*list[i]).getName() << " " << (*list[i]).getSurname() << std::endl;
	}

	return 0;
}