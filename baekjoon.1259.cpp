/*https://www.acmicpc.net/problem/1259*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	while (1)
	{
		string a, b;
		cin >> a;
		if (a == "0") //0�� �Էµ� ��� break
		{
			break;
		}
		b = a; //b�� a�� ���ڿ��� ����
		reverse(a.begin(), a.end()); //a�� ������ �ڵ�

		if (a == b)
		{
			cout << "yes" << "\n";
		}
		else
		{
			cout << "no" << "\n";
		}
	}
	return 0;
}