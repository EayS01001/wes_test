#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
	//��P��(���2�_)
	//	�ȉ��̌v�Z��2�i���œ�����B
	//	00101100 + 01010101
	cout << "\n��1��" << endl;
	cout << "����10001001" << endl;

	//	10110000 + 00001111
	cout << "����10111111" << endl;


	//��Q��(���2�_)
	//	��P��̓�����10�i���œ�����
	cout << "\n��2��" << endl;
	cout << "137" << endl;
	cout << "191" << endl;


	//��R��(���2�_)
	//	char�Aint�Afloat�Adouble�̃o�C�g�T�C�Y�͂��ꂼ�ꂢ����������B
	cout << "\n��3��" << endl;
	cout << "char�̃T�C�Y��" << sizeof(char) << endl;
	cout << "int�̃T�C�Y��" << sizeof(int) << endl;
	cout << "float�̃T�C�Y��" << sizeof(float) << endl;
	cout << "double�̃T�C�Y��" << sizeof(double) << endl;
	//��S��(���2�_)
	//	char* �Aint* �Afloat* �Adouble* �̃o�C�g�T�C�Y�͂��ꂼ�ꂢ����������B
	cout << "\n��4��" << endl;
	cout << "char*�̃T�C�Y��" << sizeof(char*) << endl;
	cout << "int*�̃T�C�Y��" << sizeof(int*) << endl;
	cout << "float*�̃T�C�Y��" << sizeof(float*) << endl;
	cout << "double*�̃T�C�Y��" << sizeof(double*) << endl;

	//��T��(20�_)
	cout << "\n��5��" << endl;
	int num = 5;
	num = num % 3;
	if (num == 0)
	{
		cout << "1�Ԃł�" << endl;
	}
	else if (num == 2)
	{
		cout << "2�Ԃł�" << endl;
	}
	else
	{
		cout << "3�Ԃł�" << endl;
	}

	//��6��
	cout << "\n��6��" << endl;
	int x, y = 0;
	int ans = 0;
	cout << "��ڂ̒l����͂��Ă�������" << endl;
	cin >> x;
	cout << "��ڂ̒l����͂��Ă�������" << endl;
	cin >> y;

	if (x % 2 == 1)
	{
		ans = x + y;
	}
	else
	{
		ans = x - y;
	}

	cout << "����" << ans << endl;


	//��V��(25�_)
	//��U��̃v���O���������[�v�ōs���悤�ɂ��A
	//end�Ɠ��͂��ꂽ�ꍇ�I������悤�ɂ��Ă��������B
	//end�̓��͂�1�Ԗڂ̒l�̏ꏊ�ł��A2�Ԗڂ̒l�̏ꏊ�ł��A
	//�ʓrend�̓��͂��󂯕t����悤�ł��ǂ�ł������ł��B
	//�ǂ����ꂩ����end�Ɠ��͂��ďI�����Ă���ΐ����Ƃ��܂��B
	cout << "\n��7��" << endl;
	string str;
	bool endF = false;
	int x7, y7 = 0;
	int ans7 = 0;

	while (!endF)
	{
		cout << "��ڂ̒l����͂��Ă�������" << endl;
		cin >> x7;
		cout << "��ڂ̒l����͂��Ă�������" << endl;
		cin >> y7;
		if (x % 2 == 1)
		{
			ans7 = x7 + y7;
		}
		else
		{
			ans7 = x7 - y7;
		}
		cout << "����" << ans7 << endl;
		cout << "�I������ꍇ�� end �Ɠ��͂��Ă�������" << endl;
		cin >> str;
		if (str == "end")
		{
			endF = !endF;
		}
	}
}


	//��W��(10�_)
	//�ȉ��̃v���O�������G���[���������A�R���p�C���G���[���Ȃ���Ԃɂ��A
	//���s�ł���悤�ɂ��Ă��������B
	//�𓚂��G���[�����R�����g�A�E�g���Ď��s�ł���悤�ɂ���̂�NG�ł��B
	//(�r���m�F�̂��߂ɃR�����g�A�E�g�����镪��OK�ł��B)
	//�ԈႦ�Ă������4�����ł��B

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