/*
ͳ���ַ����еĵ�����Ŀ����ͳ���ַ����е��ʵ���Ŀ�������ӵĻ���һ���ı��ж����ַ��������ɵ�����Ŀͳ�ƽ����
*/

#include <iostream>
#include <string>

using namespace std;

int CountWords()
{
	cout << "Please input the sentence:" << endl;
	char str[1000];
	//cin >> str;
	cin.getline(str, 100);//
	int count = 0;//��¼���ʸ���
	//cout << str << endl;//����Ƿ��ܹ���ȡ����
	if (strlen(str) == 0)
	{
		count = 0;
	}
	else
	{
		count = 1;
	}
	for (int i = 0; i < strlen(str); i++)
	{
		if ((str[i] == ' ') && (str[i+1] != NULL) && (str[i + 1] != ' ') && (str[i + 1] != ',') && (str[i + 1] != '.'))
		{
			count++;
		}
		//cout << count << endl;
	}

	cout << "the number of the sentence:" << count << endl;

	return 0;
}