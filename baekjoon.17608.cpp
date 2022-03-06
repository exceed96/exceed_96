/*https://www.acmicpc.net/problem/17608*/
#include <iostream>
#include <stack>

using namespace std;

stack <int> arr;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int N,s,count = 1;
	cin >> N;
	while (N--)
	{
		int h;
		cin >> h;
		arr.push(h); //������ ���̸� ������� ���ÿ� �־��ش�
	}

	s = arr.top(); //�� ������ ����� ���̸� s�� ����
	arr.pop(); //�� ������ ����� ���̸� �����ش�.

	while (!arr.empty()) //arr������ ����������� ���ѷ���
	{
		if (s < arr.top()) //arr������ top�� s���� ũ�� count++
		{
			count++;
			s = arr.top(); // arr.top()�� ���ο� �������� ����
			arr.pop(); // ���ο� ������ �� ���̸� �����ش�.
		}
		else // arr������ top�� s���� ������ ���ÿ��� �����ش�.
		{
			arr.pop();
		}
	}
	cout << count << "\n";
	return 0;
}