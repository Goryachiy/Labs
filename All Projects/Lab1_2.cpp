#include "iostream"
#include "conio.h"
using namespace std;

class Computer
{
public:
	virtual void Working() //Виртуальный класс
	{
		cout << "All components work properly" << endl;
	};
	class Working_capacity //Локальный класс
	{
	public:
		void Confidence()
		{
			cout << "For the correct operation of the computer, all components must be connected" << endl;
		}
	};
};

class GPU : public Computer //Наследование
{
public:
	void Working()
	{
		cout << "GPU - check" << endl;
	}
};

class CPU : public Computer //Наследование
{
	void Working()
	{
		cout << "CPU - check" << endl;
	}
};

class RAM : public Computer //Наследование
{
	void Working()
	{
		cout << "RAM - check" << endl;
	}
};

/*
Я не придумал как именно можно перегрузить оператор с использованием данных классов, но про саму перегрузку
прочитал
//////////////////////////////////////////////////////////////////////////////////////////////
	class Rational {
public:
  Rational(int numerator, int denominator = 1);    
  Rational operator+(Rational const& rhs) const;
};
 
int main() {
  Rational a, b, c;
  int i;
  a = b + c; //ok, no conversion necessary
  a = b + i; //ok, implicit conversion of the second argument
  a = i + c; //ERROR: first argument can not be implicitly converted
}
//////////////////////////////////////////////////////////////////////////////////////////////
*/

int main()
{
	Computer* comp;
	GPU* gpu = new GPU;
	CPU* cpu = new CPU;
	RAM* ram = new RAM;

	comp = gpu;
	comp->Working();

	comp = cpu;
	comp->Working();

	comp = ram;
	comp->Working();


	system("pause");
	return 0;
}