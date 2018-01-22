/*
统计字符串中的单词数目——统计字符串中单词的数目，更复杂的话从一个文本中读出字符串并生成单词数目统计结果。
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
	int count = 0;//记录单词个数
	//cout << str << endl;//检测是否能够获取句子
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