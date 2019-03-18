#include "stdafx.h"
#include "SelectMenu.h"
#include "DoubleBuffer.h"

void S_Menu::Main_Menu(bool menu)
{
	if (menu == true)
	{
		Rectangle(m_Memhdc[0], 700, 450, 840, 500);
		TextOut(m_Memhdc[0], 740, 468, TEXT("GameStart"), 9);

		Rectangle(m_Memhdc[0], 700, 510, 840, 560);

		BitBlt(m_OFFhdc, 0, 0, 1500, 1000, m_Memhdc[0], 0, 0, SRCCOPY);//��� �� ��ư
		BitBlt(m_OFFhdc, 700, 510, 840, 560, m_Memhdc[1], 0, 0, SRCCOPY);
		BitBlt(m_OFFhdc, 0, 0, 1200, 800, m_Memhdc[2], 0, 0, SRCCOPY);

		BitBlt(m_hdc, 0, 0, 1500, 1000, m_OFFhdc, 0, 0, SRCCOPY);
	}
}

void S_Menu::Release()
{
	DeleteDC(m_Memhdc[0]);
	DeleteDC(m_Memhdc[1]);
	DeleteDC(m_Memhdc[2]);

	DeleteDC(m_OFFhdc);

	ReleaseDC(g_hWnd, m_hdc);

	DeleteObject(m_bitmap[0]);
	DeleteObject(m_bitmap[1]);
	DeleteObject(m_bitmap[2]);

	DeleteObject(SelectObject(m_OFFhdc, m_oldbitmap));

	DeleteObject(m_backbitmap);
}

void S_Menu::Picture_Set()
{
	m_hdc = GetDC(g_hWnd);

	m_OFFhdc = CreateCompatibleDC(m_hdc);

	m_Memhdc[0] = CreateCompatibleDC(m_hdc);
	m_Memhdc[1] = CreateCompatibleDC(m_hdc);
	m_Memhdc[2] = CreateCompatibleDC(m_hdc);

	m_backbitmap = CreateCompatibleBitmap(m_hdc, 1500, 1000);

	m_oldbitmap = (HBITMAP)SelectObject(m_OFFhdc, m_backbitmap);

	m_bitmap[0] = MyLoadImage(L"./Pictures/Bitch.bmp", 1500, 800);//���
	m_bitmap[1] = MyLoadImage(L"./Pictures/Test.bmp", 140, 50);
	m_bitmap[2] = MyLoadImage(L"./Pictures/Obs.bmp", 0, 0);

	//HBITMAP ��ü�� LoadImage �Լ��� �̹��� ������ �ҷ��� �־��ش�

	//Rectangle(m_hdc, -100, -100, 20000, 200000);

	//if (m_bitmap == NULL)//�̹��� �ҷ����� ���� ���� ����ó��
	//{									//���� ����							//���� �˸�
	//	MessageBox(g_hWnd, L"CTRL + ALT + DELETE�� �۾������ڸ� �ҷ� �� �ֽʽÿ�.", L"�̹��� �ҷ����� ����", MB_CANCELTRYCONTINUE);
	//}

	SelectObject(m_Memhdc[0], m_bitmap[0]);
	SelectObject(m_Memhdc[1], m_bitmap[1]);
	SelectObject(m_Memhdc[2], m_bitmap[2]);
}