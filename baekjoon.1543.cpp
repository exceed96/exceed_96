/*https://www.acmicpc.net/problem/1543*/
#include <iostream>
#include <string>
// a�� ���ڿ��� �տ������� b���ڿ��� ���ʴ�� ���ϸ鼭 b���ڿ� ��ü�� a���ڿ��� �Ϻΰ� ������
// count++�� ���ְ� �� �κи�ŭ �ݺ����� �������� �ٽ� �����ش�.
// ���� �ٸ� a�� ���ڿ��� b�� ���ڿ��� �ٸ��ٸ� �������� 1 �����ش�.
using namespace std;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);

	int count = 0;
	string a, b;
	getline(cin, a);
	getline(cin, b);

	if (a.length() < b.length()) // a���ڿ��� ���̰� b���ڿ��� ���̺��� ª���� 0�� ����ϰ� ����
	{
		cout << 0 << "\n";
		return 0;
	}

	for (int i = 0; i < a.length();) 
	{
		bool c = true;
		for (int j = 0; j < b.length(); j++)
		{
			if (a[i + j] != b[j]) // i�� 0���� ������ ���¿��� j���� ���������� �����ָ� ������� ���ڿ� �� ����
			{
				c = false; //Ʋ����� c�� false�� �ٲ۴�.
				break;
			}
		}

		if (c) // b�� ���ڿ��� �� �������
		{
			count++;
			i += b.length(); // �������� b���ڿ��� size��ŭ ������ �κ����� ������ �ٽ� ��´�.
		}
		else // Ʋ����쿡�� a ���ڿ��� ������ 1 �����ش�.
		{
			i++;
		}
	}
	cout << count << "\n";
	return 0;
}