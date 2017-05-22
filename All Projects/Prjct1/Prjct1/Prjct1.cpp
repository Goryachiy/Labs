#include <iostream>
#include <conio.h>
using namespace std;

class monitor;

class Computer 
{
private:
	int HDD, CPU, GPU, RAM, MB;
	static int components;
public:
	void components()
	{
		HDD = 3;
		CPU = 1;
		GPU = 2;
		RAM = 4;
		MB = 1;
	}
		void setName(int name_HDD, int name_CPU, int name_GPU, int name_RAM, int name_MB)
		{
			this-> HDD = name_HDD;
			this-> CPU = name_CPU;
			this-> GPU = name_GPU;
			this-> RAM = name_RAM;
			this-> MB = name_MB;
		}
		void getName()
		{
			cout << "Enter the name of your Hardware: " << endl;
			cout << "CPU: ";
			cin >> CPU;
			cout << endl;
			cout << "HDD: ";
			cin >> HDD;
			cout << endl;
			cout << "GPU: ";
			cin >> GPU;
			cout << endl;
			cout << "RAM: ";
			cin >> RAM;
			cout << endl;
			cout << "Mother Board: ";
			cin >> MB;
			cout << endl;

		}
		void allName()
		{
			cout << "Now your PC has such this hardware: " << endl;
			cout << "HDD: " << HDD << endl;
			cout << "CPU: " << CPU << endl;
			cout << "GPU: " << GPU << endl;
			cout << "RAM: " << RAM << endl;
			cout << "Mother Board: " << MB << endl;
			cout << "Monitor: " << endl;
		}
		friend monitor;
};
class monitor
{
private:
	int mName;
	int resolution, quality;
public:
	void setName(int Moni_Name, int Res, int Qaly)
	{
		this->mName = Moni_Name;
		this->resolution = Res;
		this->quality = Qaly;
	}
	void Capabilities()
	{
		cout << "What are the characteristics of your monitor?" << endl;
		cout << "Resolution: ";
		cin >> resolution;
		cout << endl;
		cout << "Quality: ";
		cin >> quality;
		cout << endl;
		cout << "This monitor was saved to work with your PC" << endl;
	}
};

int main(int argc, char* argv[])
{




	system("pause");
	return 0;
}