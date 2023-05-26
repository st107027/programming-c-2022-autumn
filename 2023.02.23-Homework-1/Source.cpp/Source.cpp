#include <iostream>

struct Animal
{
	std::string type;
	std::string name;
	int age;

	Animal();

	Animal(std::string type, std::string name, int age) :type(type), name(name), age(age)
	{

	}

	Animal(const Animal& an) :type(an.type), name(an.name), age(an.age)
	{

	}

	~Animal()
	{

	}

};

void printAnimal(Animal an)
{
	std::cout << "type:" << an.type << std::endl;
	std::cout << "name:" << an.name << std::endl;
	std::cout << "age:" << an.age << std::endl;
};

void elderAnimal(Animal* an)
{
	an->age = an->age + 1;
};

int main(int argc, char* argv[])
{
	return EXIT_SUCCESS;
}