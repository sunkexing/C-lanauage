//设计并测试一个矩形类，属性为矩形左下角与右下角两个点的坐标，根据坐标计算矩形面积
#include<iostream>
using namespace std;
class Rectangle
{
public:
	Rectangle(int top, int left, int bottom, int right);
	~Rectangle()
	{
	}
	int getTop()const{
		return top;
	}
	int getLeft()const{
		return left;
	}
	int getBottom()const{
		return bottom;
	}
	int getRigth()const{
		return right;
	}
	void setTop(int top){
		top = top;
	}
	void setLeft(int left){
		left =left;
	}
	void setBottom(int bottom){
		bottom = bottom;
	}
	void setRight(int right){
		right = right;
	}
	int getArea()const;
private:
	int top;
	int left;
	int bottom;
	int right;
};
Rectangle::Rectangle(int top, int left, int bottom, int right){
	this->top = top;
	this->left = left;
	this->bottom = bottom;
	this->right = right;
}
int  Rectangle::getArea()const{
	int width = right - left;
	int length = top-bottom;
	return (width*length);
}
int main(){
	Rectangle r(100, 20, 50, 80);
	cout << "Area: " << r.getArea() << endl;
	system("pause");
	return 0;

}
