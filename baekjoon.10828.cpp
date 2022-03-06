#include <iostream>
#include <stack> //���� �����ϱ� ���� stack 

using namespace std;

stack <int> arr;

void push_(int x) //�Է¹����� arr���ÿ� push
{
	arr.push(x);
}

void pop_() //����� �������� top�κ��� �����ְ� ����� �ڵ�
{
	if (arr.size())
	{
		cout << arr.top() << "\n";
		arr.pop();
	}
	else
	{
		cout << "-1" << "\n";
	}
}

void size_() // arr���ÿ� ����� ��ȯ
{
	cout << arr.size() << "\n";
}

void empty_() //arr������ ������ ũ��� 0���� ũ�Ƿ� 0����� ������  1���
{
	if (arr.size())
	{
		cout << "0" << "\n";
	}
	else
	{
		cout << "1" << "\n";
	}
}

void top_() //arr���ÿ� ���Ұ� ������ �� ���߿� �Էµ� ���� ���
{
	if (arr.size())
	{
		cout << arr.top() << "\n";
	}
	else
	{
		cout << "-1" << "\n";
	}
}
int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int N;
	cin >> N;
	while (N--)
	{
		string a;
		cin >> a;
		if (a == "push")
		{
			int n;
			cin >> n;
			push_(n);
		}
		else if (a == "pop")
		{
			pop_();
		}
		else if (a == "empty")
		{
			empty_();
		}
		else if (a == "size")
		{
			size_();
		}
		else
		{
			top_();
		}
	}
	return 0;
}