#include <iostream>
#include<string>
using namespace std;
class Animal
{
private:
	string Name;
	int Age;
public:
	Animal();
	void Set(string name, int age);
	void display();

};
class Cat :public Animal
{
private:
	int NumOfLegs;
public:
	Cat();
	void Set(string name, int age, int n);
	void display();
};
Cat::Cat()
{
}
void Cat::Set(string name, int age, int n) { 
	Animal::Set(name, age);
	NumOfLegs = n; }
void Cat::display() {
	Animal::display();
	cout << "number of legs is " << NumOfLegs<<endl;
}
Animal::Animal()
{
}
void Animal::Set(string name, int age) {
	Name = name;
	Age = age;
}
void Animal::display() {
	cout << "Name is " << Name << endl;
	cout << "Age is " << Age << endl;
}

int main()
{
	Cat obj;
	obj.Set("Cat",1,4);
	obj.display();

}
