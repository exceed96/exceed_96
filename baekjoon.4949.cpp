#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	while (1)
	{
		stack <char> arr;
		string a;
		getline(cin, a);//���� ���� ���ڹޱ� ���Ͽ�
		if (a == ".")
		{
			break;
		}
		for (int i = 0; i < a.length() - 1; i++) //.�� ���ڿ��� �����ִ� a�� ũ��-1������ ���� ����
		{
			if (a[i] == '(' || a[i] == '[') // (,[�� ���ð�쿡�� stack�� �־��ش�
			{
				arr.push(a[i]);
			}
			else if (a[i] == ')') // ')'�� ���ð�� stack top�� '(' �̰� ����ִ� ĭ�� �ƴ϶�� ���� ���ش�.
			{
				if (arr.size() && arr.top() == '(')
				{
					arr.pop();
				}
				else // �ƴҰ�� stack�� )�� �߰�
				{
					arr.push(a[i]);
				}
			}
			else if (a[i] == ']') // 25~42�ٿ� ')'�� ���� ���
			{
				if (arr.size() && arr.top() == '[')
				{
					arr.pop();
				}
				else
				{
					arr.push(a[i]);
				}
			}
		}
		if (!arr.empty()) //���� ¦��������� stack�� ������� ���̹Ƿ� yes�� ��� �ƴϸ� no���
		{
			cout << "no" << "\n";
		}
		else
		{
			cout << "yes" << "\n";
		}
	}
	return 0;
}