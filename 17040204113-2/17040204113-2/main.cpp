#include<iostream>
#include<cmath>
using namespace std;//�����ռ�
int fn1(int i);//�����˺���
int main(){
	int i;
	cout << "������һ����������";
	cin >> i;
	cout << "��1�ۼӵ�" << i << "�ĺ�Ϊ:" << fn1(i) << endl;
	system("pause");
	return 0;
}
int fn1(int i){
	if (i == 1)
		return 1;
	else
		return i + fn1(i - 1);
	
}