/*����һ�����࣬������������DerivedClass��BaseClass�г�Ա����fn1(),fn2(),DerivedClassҲ�г�Ա����fn1(),fn2()��������������һ��DerivedClass���󣬷ֱ���
DerivedClass�Ķ����Լ�BaseClass�Ķ����Լ����ߵ�ָ��������fn1������fn2�����۲����н����
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
	cout << "���û���ĺ���fn1()" << endl;
}
void BaseClass::fn2(){
	cout << "���û���ĺ���fn2()" << endl;
}
class DerivedClass :public BaseClass{
public:
	void fn1();
	void fn2();

};
void DerivedClass::fn1(){
	cout << "����������ĺ���fn1()" << endl;
}
void DerivedClass::fn2(){
	cout << "����������ĺ���fn2()" << endl;
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