//��дһ�����鶯����Mammal�����ɴ�����������Dog�����߶�����speak������Ա�������ú����ڻ����б�����Ϊ�麯��������һ��Dog��Ķ���ͨ���˶������speak�������۲����н����
#include<iostream>
using namespace std;
class Mammal{
public:
	Mammal(){
		cout << "Mammal constructor...\n";
	}
	virtual~Mammal(){
		cout << "Mammal destructor...\n";
	}
	virtual void speak()const{
		cout << "Mammal speak!\n";
	}
};
class Dog:public Mammal{
public:
	Dog(){
		cout << "Dog Constructor...n";
	}
	~Dog(){
		cout << "Dog destructor...n";
	}
	void sprak()const{
		cout << "Woof!\n";
	}
};
int main(){
	Mammal*pDog = new Dog;
	pDog->speak();
	delete pDog;
	system("pause");
	return 0;
}