//定义并实现一个矩形类，有长宽两个属性，由成员函计算矩形的面积
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
	cout << "请输入矩形长度：";
	cin >> length;
	cout << "请输入矩形宽度: ";
	cin >> width;
	Rectangle r(length, width);
	cout << "矩形的长为：" << length << "矩形的宽为：" << width << "矩形的面积为：" << r.getArea() << endl;
	system("pause");
	return 0;
}


