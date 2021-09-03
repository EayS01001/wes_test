#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
	//第１問(一問2点)
	//	以下の計算に2進数で答えよ。
	//	00101100 + 01010101
	cout << "\n第1問" << endl;
	cout << "答え10001001" << endl;

	//	10110000 + 00001111
	cout << "答え10111111" << endl;


	//第２問(一問2点)
	//	第１問の答えを10進数で答えよ
	cout << "\n第2問" << endl;
	cout << "137" << endl;
	cout << "191" << endl;


	//第３問(一問2点)
	//	char、int、float、doubleのバイトサイズはそれぞれいくつか答えよ。
	cout << "\n第3問" << endl;
	cout << "charのサイズは" << sizeof(char) << endl;
	cout << "intのサイズは" << sizeof(int) << endl;
	cout << "floatのサイズは" << sizeof(float) << endl;
	cout << "doubleのサイズは" << sizeof(double) << endl;
	//第４問(一問2点)
	//	char* 、int* 、float* 、double* のバイトサイズはそれぞれいくつか答えよ。
	cout << "\n第4問" << endl;
	cout << "char*のサイズは" << sizeof(char*) << endl;
	cout << "int*のサイズは" << sizeof(int*) << endl;
	cout << "float*のサイズは" << sizeof(float*) << endl;
	cout << "double*のサイズは" << sizeof(double*) << endl;

	//第５問(20点)
	cout << "\n第5問" << endl;
	int num = 5;
	num = num % 3;
	if (num == 0)
	{
		cout << "1番です" << endl;
	}
	else if (num == 2)
	{
		cout << "2番です" << endl;
	}
	else
	{
		cout << "3番です" << endl;
	}

	//第6門
	cout << "\n第6問" << endl;
	int x, y = 0;
	int ans = 0;
	cout << "一つ目の値を入力してください" << endl;
	cin >> x;
	cout << "二つ目の値を入力してください" << endl;
	cin >> y;

	if (x % 2 == 1)
	{
		ans = x + y;
	}
	else
	{
		ans = x - y;
	}

	cout << "答え" << ans << endl;


	//第７問(25点)
	//第６問のプログラムをループで行うようにし、
	//endと入力された場合終了するようにしてください。
	//endの入力は1番目の値の場所でも、2番目の値の場所でも、
	//別途endの入力を受け付けるようでもどれでもいいです。
	//どこか一か所でendと入力して終了していれば正解とします。
	cout << "\n第7問" << endl;
	string str;
	bool endF = false;
	int x7, y7 = 0;
	int ans7 = 0;

	while (!endF)
	{
		cout << "一つ目の値を入力してください" << endl;
		cin >> x7;
		cout << "二つ目の値を入力してください" << endl;
		cin >> y7;
		if (x % 2 == 1)
		{
			ans7 = x7 + y7;
		}
		else
		{
			ans7 = x7 - y7;
		}
		cout << "答え" << ans7 << endl;
		cout << "終了する場合は end と入力してください" << endl;
		cin >> str;
		if (str == "end")
		{
			endF = !endF;
		}
	}
}


	//第８問(10点)
	//以下のプログラムをエラーを解決し、コンパイルエラーがない状態にし、
	//実行できるようにしてください。
	//解答がエラー個所をコメントアウトして実行できるようにするのはNGです。
	//(途中確認のためにコメントアウトをする分はOKです。)
	//間違えている個所は4か所です。

	//class Point
	//{
	//public:
	//	Point() { Clear(); }

	//	void Clear()
	//	{
	//		x = 0;
	//		y = 0;
	//		z = 0;
	//	}
	//public:
	//	int x, y, z;
	//};
	//int main()
	//{
	//	Point point;
	//	Point nextPoint;

	//	nextPoint.x = 100;
	//	nextPoint.y = 30;

	//	while (1)
	//	{
	//		if (point.x < nextPoint.x)
	//		{
	//			point.x++;
	//		}
	//		else if (point.x > nextPoint.x)
	//		{
	//			point.x--;
	//		}

	//		if (point.y < nextPoint.y)
	//		{
	//			point.y++;
	//		}
	//		else if (point.y > nextPoint.y)
	//		{
	//			point.y--;
	//		}
	//		//printf("pointX = %d\n", point.x);
	//		//printf("pointY = %d\n", point.y);
	//		cout << "pointX= " << point.x;
	//		cout << "pointY= " << point.y<<endl;
	//		if (point.x == nextPoint.x &&
	//			point.y == nextPoint.y)
	//		{
	//			break;
	//		}
	//	}
	//}