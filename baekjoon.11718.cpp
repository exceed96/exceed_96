/*https://www.acmicpc.net/problem/11718*/
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	while (1)
	{
		string a;
		getline(cin, a); //������ �ޱ� ���Ͽ� getline ȣ��
		if (a == "") //���ڿ��� �Է����� ������ ���ѷ��� ����
		{
			break;
		}
		cout << a << "\n";
	}
	return 0;
}