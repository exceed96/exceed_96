/*https://www.acmicpc.net/problem/10799*/
#include <iostream>
#include <stack> //���� ����

using namespace std;

stack <int> arr;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int count = 0;
	string a; //���ڿ��� ��ȣ�� �Է�
	cin >> a;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == '(') // '('�Ͻ� stack�� �־��ش�
		{
			arr.push(a[i]);
		}
		else
		{
			// ')'�Ͻ� ()¦�� ���°��̹Ƿ� �����ش�. �׸��� �� ���� ���� ������
			arr.pop();
			if (a[i - 1] == '(') // �ٷ� ���� ���ڰ� '('�� ��� ������ �̹Ƿ� ���ÿ� �׿��ִ� '('��ŭ �����ش�.(�׸����� ���� ����)
			{
				count += arr.size();
			}
			else //')'�Ͻ� 1�� �����ش�.
			{
				count += 1;
			}
		}
	}
	cout << count << "\n";
	return 0;
}