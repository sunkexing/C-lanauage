//����һ��Dog�࣬����age��weight���ԣ��Լ�����Щ���Բ����ķ�����ʵ�ֲ���������ࡣ
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
Dog::~Dog(){//���������������κι����������Ľ�����

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