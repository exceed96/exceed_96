/*https://www.acmicpc.net/problem/15726*/
#include <iostream>

using namespace std;

int main(void)
{
	double A, B, C;
	cin >> A >> B >> C; 

	if ((A * B / C) > (A / B * C))
	{
		cout << int(A * B / C) << "\n"; // �Ҽ��� �Ʒ��� ������ ���Ͽ� double���� int������ ������ȯ
	}
	else
	{	
		cout << int(A / B * C) << "\n";
	}
	return 0;
}