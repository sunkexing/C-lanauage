
//�������������Լ������С������
#include<iostream>
#include<cmath>//��ѧ����ͷ�ļ�
using namespace std;//�����ռ�
//����һ���Ӻ���
int fn1(int i,int j);//�����Լ���ĺ���
int main(){
	int i, j, x, y;
	cout << "������һ����������";
	cin >> i;//2
	cout << "����������һ��������:";
	cin >> j;//4

	x = fn1(i, j);
	y = i*j / x;
	cout << i << "��" << j << "�����Լ����:" << x << endl;//endl-�س�
	cout << i << "��" << j << "����С��������:" << y << endl;
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
