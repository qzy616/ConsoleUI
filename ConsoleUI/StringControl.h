#pragma once
#include "ConsoleGraphicsBase.h"
typedef int ControlCode;
/*
* 操作码：
* 1：在字符串1后面插入字符串2。
* 2：在字符串1指定的位置中提取出字符串2。
* 3：在字符串1指定的位置插入字符串2。
* 4：在字符串1中寻找字符串2，并返回其位置。
* 5：在字符串1中删除特定位置的内容。
* 6：对字符串1的每个字符进行大小写转化。
*/
string Add(string s1, string s2);
string Cut(string s1, int start, int end);
string Insert(string s1, string s2, int pos);
int Find(string s1, string s2);

string Add(string s1,string s2) {
	return s1 + s2;
}
string Cut(string s1, int start, int end) {
	s1 = s1.substr(start, end);
	return s1;
}
string Insert(string s1, string s2, int pos) {
	s1.insert(pos, s2);
	return s1;
}
int Find(string s1, string s2) {
	if (s1.find(s2) != s1.npos) return (int)s1.find(s2);
	else return -1;
}
string Delete(string s1, int start, int end) {
	s1.erase(start, end);
	return s1;
}
string Letter(string s1, bool ctrl) {
	if (ctrl == 1) {
		for (int i = 0; i <= s1.size(); i++) {
			if (isupper(s1[i]) == 1) s1[i] = tolower(s1[i]);
		}
	}
	else if (ctrl == 0) {
		for (int i = 0; i <= s1.size(); i++) {
			if (islower(s1[i]) == 1) s1[i] = toupper(s1[i]);
		}
	}
}