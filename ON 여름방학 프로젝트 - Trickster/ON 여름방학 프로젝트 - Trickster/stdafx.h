// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 또는 프로젝트 관련 포함 파일이
// 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용은 Windows 헤더에서 제외합니다.
// Windows 헤더 파일:
#include <windows.h>

// C 런타임 헤더 파일입니다.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#include "SelectMenu.h"
#include "MainGame.h"
#include "DoubleBuffer.h"
#include "WinSize.h"

#include <time.h>


// TODO: 프로그램에 필요한 추가 헤더는 여기에서 참조합니다.
extern HWND g_hWnd;
extern unsigned long g_S_Time;
#define MyLoadImage(load, szx, szy) (HBITMAP)LoadImage(NULL, load, IMAGE_BITMAP, szx, szy, LR_LOADFROMFILE); //NULL, L"C:/Users/woori/Downloads/Widow.bmp", IMAGE_BITMAP, 100, 100, LR_LOADFROMFILE