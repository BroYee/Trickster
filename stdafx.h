// stdafx.h : ���� ��������� ���� ��������� �ʴ�
// ǥ�� �ý��� ���� ���� �Ǵ� ������Ʈ ���� ���� ������
// ��� �ִ� ���� �����Դϴ�.
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // ���� ������ �ʴ� ������ Windows ������� �����մϴ�.
// Windows ��� ����:
#include <windows.h>

// C ��Ÿ�� ��� �����Դϴ�.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#include "SelectMenu.h"
#include "MainGame.h"
#include "DoubleBuffer.h"
#include "WinSize.h"

#include <time.h>


// TODO: ���α׷��� �ʿ��� �߰� ����� ���⿡�� �����մϴ�.
extern HWND g_hWnd;
extern unsigned long g_S_Time;
#define MyLoadImage(load, szx, szy) (HBITMAP)LoadImage(NULL, load, IMAGE_BITMAP, szx, szy, LR_LOADFROMFILE); //NULL, L"C:/Users/woori/Downloads/Widow.bmp", IMAGE_BITMAP, 100, 100, LR_LOADFROMFILE