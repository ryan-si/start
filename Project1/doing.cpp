#include <iostream>   // 包含头文件iostream
#include <cstring>
using namespace std;  // 使用命名空间std
class Car
{
public:
	Car();
	Car(int pId, char* pBrand, float pPower, int pNumOfPersons);
	Car(Car& car);
private:
	int id;
	char* brand;
	float power;
	int numOfPersons;
};

Car::Car()
{
	cout << "Constructed without any parameter." << endl;
}
Car::Car(int pId, char* pBrand, float pPower, int pNumOfPersons)
{
	id = pId;
	brand = pBrand;
	power = pPower;
	numOfPersons = pNumOfPersons;
	cout << "Constructed with all parameters." << endl;
}
Car::Car(Car& car)
{
	//start
// 对成员数据赋值
//end
	cout << "Deep Constucted." << endl;
}
Car::~Car()
{
	delete[] brand;
	cout << "Deconstructed." << endl;
}
void Car::printCar()
{
	cout << "id: " << id << ", "
		<< "brand: " << brand << ", "
		<< "power: " << power << ", "
		<< "numOfPersons: " << numOfPersons << endl;
}
void Car::setId(int pId)
{
	//start
// 对汽车的id赋值
//end
}
int main()
{
	Car car1(1001, "丰田", 1.8f, 5);
	Car car2 = car1;
	car2.setId(1002);
	Car car3 = car1;
	car3.setId(1003);
	car1.printCar();
	car2.printCar();
	car3.printCar();
	return 0;
}