// WordCount.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include"WordCount.h"
using namespace std;
Word words[500];
int main(int argc,char *argv[])
{

	int k = 0;
	char *filename = argv[1];
	
	
	//cout << filename << endl;
	vector<string> lines;
	for (int i = 0; i < 500; i++)
	{
		words[i].cnt = 0;
	}
	int Count_Char = CountChar(filename);
	int Line_Count = LineCount(filename, lines);
	int Word_Number = WordNumber(filename);
	WordFCount(filename, words, k);
	SortResult(words, k);
	ResultOut(words, Count_Char, Word_Number, Line_Count);
	WordFCount(filename, words, k);
	SortResult(words, k);
	return 0;
}

