#include "testcase.h"
#include "stdafx.h"

void test_basic_feature()
{
	WordDictionary wd;
	wd.addWord("a");
	wd.addWord("ab");
	wd.addWord("abc");
	wd.addWord("cba");
	wd.addWord("bbb");
	wd.addWord("aaa");

	cout << wd.search(".bc") << endl;
}

void test_time_cost_insert_2ch()
{
	WordDictionary wd;

	clock_t start = clock();
	char c1;
	char c2;
	char ch[3];
	for (c1='a'; c1 <= 'z'; c1++)
	{
		for (c2='a'; c2 <= 'z'; c2++)
		{
			ch[0] = c1;
			ch[1] = c2;
			ch[2] = '\0';
			string s = ch;
			wd.addWord(s);
		}
	}
	clock_t end = clock();
	float time = (float)(end - start) / CLOCKS_PER_SEC;
	cout << time << endl;
}

void test_time_cost_insert_3ch()
{
	WordDictionary wd;

	clock_t start = clock();
	char c1, c2, c3;

	char ch[4];
	for (c1='a'; c1 <= 'z'; c1++)
	{
		for (c2='a'; c2 <= 'z'; c2++)
		{
			for (c3='a'; c3 <= 'z'; c3++)
			{
				ch[0] = c1;
				ch[1] = c2;
				ch[2] = c3;
				ch[3] = '\0';
				string s = ch;
				wd.addWord(s);
			}
		}
	}
	clock_t end = clock();
	float time = (float)(end - start) / CLOCKS_PER_SEC;
	cout << time << endl;
}

void test_time_cost_insert_4ch()
{
	WordDictionary wd;

	clock_t start = clock();
	char c1, c2, c3, c4;
	char ch[5];
	for (c1='a'; c1 <= 'z'; c1++)
	{
		for (c2='a'; c2 <= 'z'; c2++)
		{
			for (c3='a'; c3 <= 'z'; c3++)
			{
				for (c4='a'; c4 <= 'z'; c4++)
				{

					ch[0] = c1;
					ch[1] = c2;
					ch[2] = c3;
					ch[3] = c4;
					ch[4] = '\0';
					string s = ch;
					wd.addWord(s);
				}
			}
		}
	}
	clock_t end = clock();
	float time = (float)(end - start) / CLOCKS_PER_SEC;
	cout << time << endl;
}

WordDictionary init_with_234ch()
{
	WordDictionary wd;

	char c1 = 'a';
	char c2 = 'a';
	char c3 = 'a';
	char c4 = 'a';
	char ch1[3];
	char ch2[4];
	char ch3[5];
	for (c1='a'; c1 <= 'z'; c1++)
	{
		for (c2='a'; c2 <= 'z'; c2++)
		{
			ch1[0] = c1;
			ch1[1] = c2;
			ch1[2] = '\0';
			wd.addWord(ch1);
			for (c3='a'; c3 <= 'z'; c3++)
			{
				ch2[0] = c1;
				ch2[1] = c2;
				ch2[2] = c3;
				ch2[3] = '\0';
				wd.addWord(ch2);
				for (c4='a'; c4 <= 'z'; c4++)
				{
					ch3[0] = c1;
					ch3[1] = c2;
					ch3[2] = c3;
					ch3[3] = c4;
					ch3[4] = '\0';
					wd.addWord(ch3);
				}
			}
		}
	}
	return wd;
}

void test_time_cost_insert_and_search_2ch()
{
	clock_t start = clock();
	WordDictionary wd = init_with_234ch();
	clock_t end = clock();
	float time = (float)(end - start) / CLOCKS_PER_SEC;
	cout << "insert cost(ms): "<< time << endl;

	clock_t start2 = clock();
	for (int i = 0; i < 100000; i++)
	{
		wd.search(".");
	}
	clock_t end2 = clock();
	float time2 = (float)(end2 - start2) / CLOCKS_PER_SEC;
	cout << "search 10000 . cost(ms): " << time2 << endl;

}

