//���岢ʵ��һ�������࣬�г����������ԣ��ɳ�Ա��������ε����
#include<iostream>
using namespace std;

class Rectangle
{
public:
	Rectangle(float l,float w)
	{
		length = l;
		width= w;
	}

	~Rectangle()
	{
	}
	float getArea(){
		return length*width;
	}
	float getLength(){
		return length;
	}
	float getWidht(){
		return width;
	}

private:
	float length;
	float width;
};
int main(){
	float length, width;
	cout << "��������γ��ȣ�";
	cin >> length;
	cout << "��������ο��: ";
	cin >> width;
	Rectangle r(length, width);
	cout << "���εĳ�Ϊ��" << length << "���εĿ�Ϊ��" << width << "���ε����Ϊ��" << r.getArea() << endl;
	system("pause");
	return 0;
}


