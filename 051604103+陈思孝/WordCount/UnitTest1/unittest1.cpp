#include "stdafx.h"
#include "CppUnitTest.h"
#include"D:\SE\PersonProject-C\051604103+��˼Т\WordCount\WordCount\WordCount.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			int ans = sum1(10, 20);
			Assert::AreEqual(ans, (int)30);
		}
		TEST_METHOD(TestMethod2)
		{
			// TODO: �ڴ�������Դ���
			vector<string> str;
			str.push_back("Hsaseqww");
			Lower(str);
			Assert::AreEqual(str[0], (string)"hsaseqww");
		}
	};
}