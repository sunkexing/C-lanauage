//定义一个基类BaseClass，从他的派生类DerivedClass，BaseClass有成员函数fn1（），fn2（），fn1（）是虚函数
//DerivedClass也有成员函数fn1（），fn2（），在主函数中声明一个DerivedClass的对象，分别用BaseClass和DerivedClass的指针指向DerivedClass的对象
//并通过指针调用fn1（），fn2（），观察运行结果
#include<iostream>
using namespace std;
class BaseClass{
public:
	virtual void fn1();
	void fn2();
};
void BaseClass::fn1(){
	cout << "调用基类的虚函数fn1()" << endl;
}
void BaseClass::fn2(){
	cout << "调用基类的非虚函数fn2()" << endl;
}
class DerivedClass :public BaseClass{
public :
	void fn1();
	void fn2();
};
void DerivedClass::fn1(){
	cout << "调用派生类的函数fn1()" << endl;
}
void DerivedClass::fn2(){
	cout << "调用派生类的函数fn2()" << endl;
}
int main(){
	DerivedClass aDerivedClass;
	DerivedClass*pDerivedClass = &aDerivedClass;
	BaseClass*pBaseClass = &aDerivedClass;
	pBaseClass->fn1();
	pBaseClass->fn2();
	pDerivedClass -> fn1();
	pDerivedClass->fn2();
	system("pause");
	return 0;
}

