/*定义一个基类，从它派生出类DerivedClass，BaseClass有成员函数fn1(),fn2(),DerivedClass也有成员函数fn1(),fn2()，在主函数声明一个DerivedClass对象，分别用
DerivedClass的对象以及BaseClass的对象以及二者的指针来调用fn1（），fn2（）观察运行结果。
*/
#include<iostream>
using namespace std;
class BaseClass
{
public:
	void fn1();
	void fn2();
};
void BaseClass::fn1(){
	cout << "调用基类的函数fn1()" << endl;
}
void BaseClass::fn2(){
	cout << "调用基类的函数fn2()" << endl;
}
class DerivedClass :public BaseClass{
public:
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
	DerivedClass *pDerivedClass = &aDerivedClass;
	BaseClass *pBaseClass = &aDerivedClass;
	aDerivedClass.fn1();
	aDerivedClass.fn2();
	pBaseClass->fn1();
	pBaseClass->fn2();
	pDerivedClass->fn1();
	pDerivedClass->fn2();
	system("pause");
	return 0;
}