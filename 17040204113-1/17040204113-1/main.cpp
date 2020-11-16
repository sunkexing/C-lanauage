
//求两个数的最大公约数和最小公倍数
#include<iostream>
#include<cmath>//数学方法头文件
using namespace std;//命名空间
//声明一个子函数
int fn1(int i,int j);//求最大公约数的函数
int main(){
	int i, j, x, y;
	cout << "请输入一个正整数：";
	cin >> i;//2
	cout << "请输入另外一个正整数:";
	cin >> j;//4

	x = fn1(i, j);
	y = i*j / x;
	cout << i << "和" << j << "的最大公约数是:" << x << endl;//endl-回车
	cout << i << "和" << j << "的最小公倍数是:" << y << endl;
	system("pause");
	return 0;
	
}
int fn1(int i, int j){
	int temp;
	if (i < j){
		temp = i;//2
		i = j;//4
		j = temp;//2
	}
	while (j!=0)
	{
		temp = i%j;//2
		i = j;//2
		j = temp;//2
	}
	return i;
	
}
