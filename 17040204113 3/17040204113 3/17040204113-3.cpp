//定义一个Dog类，包含age，weight属性，以及对这些属性操作的方法，实现并测试这个类。
#include<iostream>
using namespace std;

class Dog{
public:
	Dog(int initialAge = 0, int initialWeight = 5);
	~Dog();
	int getAge(){
		return age;
	}
	void setAge(int age){
		this->age = age;
	}
	int getWight(){
		return weight;
	}
	void setWight(int wight){
		this->weight = weight;
	}
private:
	int age, weight;
};
Dog::Dog(int initialAge, int initialWeight){
	age = initialAge;
	weight = initialWeight;
}
Dog::~Dog(){//构析函数，不作任何工作，函数的解析。

}
int main(){
	Dog Jack(2, 10);
	cout << "Jack is a Dog who is ";
	cout << Jack.getAge() << " years old and " << Jack.getWight() << " pounds weight" << endl;
	Jack.setAge(7);
	Jack.setWight(20);
	cout << "Now Jack is ";
	cout << Jack.getAge() << " years old and " << Jack.getWight() << " pounds weight" << endl;
	system("pause");
	return 0;
}