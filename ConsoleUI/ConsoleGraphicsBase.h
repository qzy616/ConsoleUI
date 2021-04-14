#pragma once
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <string>
#include <ctime>
#include <algorithm>
#include <Windows.h>
#include <conio.h>
#include <process.h>
#include <thread>
/*使用本图形库的程序，后缀名应为.cpp / .cc 。
*main函数中首先应该以Init函数开始，以End函数结束。
* 源代码开源，转载或使用应声明作者（QZY），允许商业使用。
* 版本0.2，基础内容已完成，UI部分待完成。
*/
using namespace std;
#define  IsKeyPressed(nVirtKey)     ((GetKeyState(nVirtKey) & (1<<(sizeof(SHORT)*8-1))) != 0)
void Init(short width,short height);//初始化
void Pos(short x, short y);//光标位置
void Color(short ForeColor, short BackGroundColor);//字体颜色
void Cursor(bool k, int size);//光标属性
void Title(char* t);//控制台标题
void End();//结束程序
void Bk(short ForeColor, short BackGroundColor);//背景
void Cls();//清屏

void Init(int width, int height) {
    char command[40];
    sprintf_s(command, "mode con cols=%d lines=%d", width, height);
    system(command);
    return;
}
void Pos(short x, short y) {

    COORD c = { x , y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    return;
}
void Color(short ForeColor, short BackGroundColor)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ForeColor + BackGroundColor * 16);
}
void Cursor(bool k, int size) {
    CONSOLE_CURSOR_INFO CursorInfo;
    CursorInfo.bVisible = k;
    CursorInfo.dwSize = size;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CursorInfo);
    return;
}
void Title(char* t) {
    SetConsoleTitleA(t);
    return;
}
void Cls() {
    system("cls");
}
void End() {
    Color(0x0f, 0x00);
    Cls();
    int pid;
    pid = _getpid();
    char command[30];
    sprintf_s(command, "taskkill /f /pid %d", pid);
    system(command);
    Color(0, 0);
}
void Bk(short BackGroundColor) {
    Color(0 , BackGroundColor);
    for (int i = 0; i <= 80 * 30; i++) cout << " ";
}
