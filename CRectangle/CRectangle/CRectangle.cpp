// CRectangle.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class CRectangle
{
public:
	int w;
	int h;
	int Area()
	{
		return w * h;
	}
	int Perimeter()
	{
		return 2 * (w + h);
	}
	void Init(int w_, int h_)
	{
		w = w_, h = h_;
	}
};

int main()
{
	CRectangle orect[5], temp;
	int i, j;
	for (i = 0; i < 5; i++)
		cin >> orect[i].w >> orect[i].h;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; i < 5; j++)
			if (orect[i].Area() > orect[j].Area())
			{
				temp = orect[i];
				orect[i] = orect[j];
				orect[j] = temp;
			}
	}
	for (i = 0; i < 5; i++)
	{
		cout << "w" << orect[i].w << "  h=" << orect[i].h << "  Area" << orect[i].Area() << endl;
	}
	return 0;
}