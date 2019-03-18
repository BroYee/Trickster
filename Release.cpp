#include "stdafx.h"
#include "Release.h"
#include "SelectMenu.h"

void Release::F_Release()
{
	S_Menu s_menu;

	ReleaseDC(g_hWnd, m_hdc);
}