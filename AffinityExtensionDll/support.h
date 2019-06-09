#pragma once
#include <stdio.h>

#define DUMPFILE_PATH "C:\\TMP\\DllDebugDum.txt"


#define InfoLog(msg, ...) do {} while(0)									

#define InfoLogRet(ret, msg, ...) do {return ret;} while(0)