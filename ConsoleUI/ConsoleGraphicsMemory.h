#pragma once
#include <iostream>
#include  <windows.h>
#include  <psapi.h>
#pragma comment(lib,"psapi.lib")
using namespace  std;
void ShowMemoryInfo()
{
    HANDLE handle = GetCurrentProcess();
    PROCESS_MEMORY_COUNTERS pmc;
    GetProcessMemoryInfo(handle, &pmc, sizeof(pmc));
    cout << "ÄÚ´æÊ¹ÓÃ:" << pmc.WorkingSetSize / 1000 << "K/" << pmc.PeakWorkingSetSize / 1000 << "K + " << pmc.PagefileUsage / 1000 << "K/" << pmc.PeakPagefileUsage / 1000 << "K" << endl;
}
