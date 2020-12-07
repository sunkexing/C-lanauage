#include<iostream>
using namespace std;
enum myColor{   //枚举类型
	BLACK,WHITE
};
class Mammal{
public:
	//constructors
	Mammal();//构造函数，初始化对象
	~Mammal();//构析函数，与构造函数相反，清理善后
	//accessors
	int getAge()const{
		return itsAge;
	}
	void setAge(int age){
		itsAge - age;
	}
	int getWeight()const{
		return itsWeight;
	}
	void setWeight(int weight){
		itsWeight = weight;
	}
	//Other methods
	void speak()const{
		cout << "Mammal sount!\n";
	}
protected:
	int itsAge;
	int itsWeight;
};
class Dog :public Mammal{  //继承类的公有段，内部成员
public:
	Dog();
	~Dog();
	myColor getColor() const{
		return itsColor;
	}
	void setColor(myColor color){
		itsColor = color;
	}
	void wagTail(){
		cout << "Tail wagging...\n";

	}
private:
	myColor itsColor;

};

Mammal::Mammal() ://把函数拉出类外说明
itsAge(1), itsWeight(5){
	cout << "Mammal constructor...\n";
}
Mammal::~Mammal(){
	cout << "Mammal destructor...\n";
}
Dog::Dog():
	itsColor(WHITE){
	cout << "Dog constructor...\n";
	}
Dog::~Dog(){
	
	cout << "Dog destructor...\n";
}
int main(){
	Dog jack;
	jack.speak();
	jack.wagTail();
	cout << "jack is" << jack.getAge() << "years old\n";
	return 0;
}
