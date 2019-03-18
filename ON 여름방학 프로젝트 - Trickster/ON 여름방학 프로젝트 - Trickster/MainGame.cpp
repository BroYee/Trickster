#include "stdafx.h"


//P_info.status == 0 걷는상황
//P_info.status == 1 점프하는 상황
//P_info.status == 2 트램펄린으로 점프하는 상황

TCHAR str[128];

void Main_Game::Initialize()
{
	srand((unsigned int)time(NULL));

	P_info.FposX = 200;
	P_info.FposY = 400;
	P_info.FsizeX = 240;
	P_info.FsizeY = 104;
	P_info.Fjump = 0; 
	P_info.status = 0;
	P_info.Fslowgauge = 400;
	P_info.Slow = false;

	/*Tm_1_info.FposX = WINSIZE_X;
	Tm_1_info.FposY = 640;
	Tm_1_info.FsizeX = 66;
	Tm_1_info.FsizeY = 78;
	Tm_1_info.speed = 4.5;*/

	speed = 7;

	Boost_Check = 0;

	Array_B_info[1].FposX = 814.5;
	Array_B_info[1].FposY = 740;
	Array_B_info[1].FsizeX = 1600;
	Array_B_info[1].FsizeY = 200;

	Array_O_F_info[1].FposX = 800;
	Array_O_F_info[1].FposY = 615;
	Array_O_F_info[1].FsizeX = 49;
	Array_O_F_info[1].FsizeY = 51;

	Array_B_info[2].FposX = 1070;
	Array_B_info[2].FposY = 570;
	Array_B_info[2].FsizeX = 150;
	Array_B_info[2].FsizeY = 150;

	Array_B_info[3].FposX = 1195;
	Array_B_info[3].FposY = 480;
	Array_B_info[3].FsizeX = 400;
	Array_B_info[3].FsizeY = 37;

	Array_B_info[4].FposX = 1700;
	Array_B_info[4].FposY = 740;
	Array_B_info[4].FsizeX = 340;
	Array_B_info[4].FsizeY = 200;

	Array_O_F_info[2].FposX = 1700;
	Array_O_F_info[2].FposY = 615;
	Array_O_F_info[2].FsizeX = 49;
	Array_O_F_info[2].FsizeY = 51;

	Array_B_info[5].FposX = 2090;
	Array_B_info[5].FposY = 780;
	Array_B_info[5].FsizeX = 450;
	Array_B_info[5].FsizeY = 110;

	Array_O_F_info[3].FposX = 1900;
	Array_O_F_info[3].FposY = 700;
	Array_O_F_info[3].FsizeX = 49;
	Array_O_F_info[3].FsizeY = 51;

	Array_O_F_info[4].FposX = 2250;
	Array_O_F_info[4].FposY = 700;
	Array_O_F_info[4].FsizeX = 49;
	Array_O_F_info[4].FsizeY = 51;

	Array_B_info[6].FposX = 2480;
	Array_B_info[6].FposY = 740;
	Array_B_info[6].FsizeX = 400;
	Array_B_info[6].FsizeY = 200;

	Array_B_info[7].FposX = 2830;
	Array_B_info[7].FposY = 670;
	Array_B_info[7].FsizeX = 400;
	Array_B_info[7].FsizeY = 330;

	Array_B_info[8].FposX = 3190;
	Array_B_info[8].FposY = 600;
	Array_B_info[8].FsizeX = 400;
	Array_B_info[8].FsizeY = 500;

	Array_B_info[9].FposX = 3870;
	Array_B_info[9].FposY = 420;
	Array_B_info[9].FsizeX = 170;
	Array_B_info[9].FsizeY = 130;

	Array_B_info[10].FposX = 4570;
	Array_B_info[10].FposY = 720;
	Array_B_info[10].FsizeX = 495;
	Array_B_info[10].FsizeY = 750;

	Array_B_info[11].FposX = 5370;
	Array_B_info[11].FposY = 770;
	Array_B_info[11].FsizeX = 250;
	Array_B_info[11].FsizeY = 660;

	Array_B_info[12].FposX = 6070;
	Array_B_info[12].FposY = 900;
	Array_B_info[12].FsizeX = 312;
	Array_B_info[12].FsizeY = 689;

	Array_B_info[13].FposX = 6310;
	Array_B_info[13].FposY = 1250;
	Array_B_info[13].FsizeX = 154;
	Array_B_info[13].FsizeY = 141;

	Array_B_info[14].FposX = 6480;
	Array_B_info[14].FposY = 1250;
	Array_B_info[14].FsizeX = 154;
	Array_B_info[14].FsizeY = 141;

	Array_B_info[15].FposX = 6650;
	Array_B_info[15].FposY = 1250;
	Array_B_info[15].FsizeX = 154;
	Array_B_info[15].FsizeY = 141;

	Array_B_info[16].FposX = 6820;
	Array_B_info[16].FposY = 1250;
	Array_B_info[16].FsizeX = 154;
	Array_B_info[16].FsizeY = 141;

	Array_B_info[17].FposX = 6990;
	Array_B_info[17].FposY = 1250;
	Array_B_info[17].FsizeX = 154;
	Array_B_info[17].FsizeY = 141;

	Array_B_info[18].FposX = 7160;
	Array_B_info[18].FposY = 1250;
	Array_B_info[18].FsizeX = 154;
	Array_B_info[18].FsizeY = 141;

	Array_B_info[19].FposX = 7610;
	Array_B_info[19].FposY = 1570;
	Array_B_info[19].FsizeX = 600;
	Array_B_info[19].FsizeY = 760;

	Array_B_info[20].FposX = 8010;
	Array_B_info[20].FposY = 800;
	Array_B_info[20].FsizeX = 269;
	Array_B_info[20].FsizeY = 315;

	Array_B_info[21].FposX = 8260;
	Array_B_info[21].FposY = 700;
	Array_B_info[21].FsizeX = 269;
	Array_B_info[21].FsizeY = 360;

	Array_B_info[22].FposX = 8400;
	Array_B_info[22].FposY = 740;
	Array_B_info[22].FsizeX = 180;
	Array_B_info[22].FsizeY = 500;

	Array_B_info[23].FposX = 8800;
	Array_B_info[23].FposY = 900;
	Array_B_info[23].FsizeX = 185;
	Array_B_info[23].FsizeY = 550;

	Array_B_info[24].FposX = 9190;
	Array_B_info[24].FposY = 720;
	Array_B_info[24].FsizeX = 185;
	Array_B_info[24].FsizeY = 550;

	Array_B_info[25].FposX = 9373;
	Array_B_info[25].FposY = 750;
	Array_B_info[25].FsizeX = 185;
	Array_B_info[25].FsizeY = 360;

	Array_B_info[26].FposX = 9535;
	Array_B_info[26].FposY = 800;
	Array_B_info[26].FsizeX = 185;
	Array_B_info[26].FsizeY = 249;

	Array_B_info[27].FposX = 10100;
	Array_B_info[27].FposY = 780;
	Array_B_info[27].FsizeX = 185;
	Array_B_info[27].FsizeY = 210;

	Array_B_info[28].FposX = 10600;
	Array_B_info[28].FposY = 780; // 1590 - 780 == 810
	Array_B_info[28].FsizeX = 185;
	Array_B_info[28].FsizeY = 210;

	Array_T_info[1].FposX = 10580;
	Array_T_info[1].FposY = 660;
	Array_T_info[1].FsizeX = 175;
	Array_T_info[1].FsizeY = 114;

	Array_B_info[29].FposX = 11200;
	Array_B_info[29].FposY = 580;
	Array_B_info[29].FsizeX = 185;
	Array_B_info[29].FsizeY = 470;

	Array_T_info[2].FposX = 11200;
	Array_T_info[2].FposY = 300;
	Array_T_info[2].FsizeX = 175;
	Array_T_info[2].FsizeY = 114;

	Array_B_info[30].FposX = 11850;
	Array_B_info[30].FposY = - 100;
	Array_B_info[30].FsizeX = 460;
	Array_B_info[30].FsizeY = 98;

	Array_B_info[31].FposX = 12800;
	Array_B_info[31].FposY = - 100;
	Array_B_info[31].FsizeX = 510;
	Array_B_info[31].FsizeY = 290;

	Array_Boost_info[1].FposX = 12800;
	Array_Boost_info[1].FposY = -360;
	Array_Boost_info[1].FsizeX = 400;
	Array_Boost_info[1].FsizeY = 200;

	Array_B_info[32].FposX = 13600;
	Array_B_info[32].FposY = 800;
	Array_B_info[32].FsizeX = 280;
	Array_B_info[32].FsizeY = 280;

	Array_B_info[33].FposX = 14100;
	Array_B_info[33].FposY = 900;
	Array_B_info[33].FsizeX = 280;
	Array_B_info[33].FsizeY = 280;

	Array_T_info[3].FposX = 14100;
	Array_T_info[3].FposY = 720;
	Array_T_info[3].FsizeX = 175;
	Array_T_info[3].FsizeY = 114;

	Array_B_info[34].FposX = 14635;
	Array_B_info[34].FposY = 800;
	Array_B_info[34].FsizeX = 280;
	Array_B_info[34].FsizeY = 180;

	Array_B_info[35].FposX = 14900;
	Array_B_info[35].FposY = 800;
	Array_B_info[35].FsizeX = 280;
	Array_B_info[35].FsizeY = 340;

	Array_B_info[36].FposX = 15700;
	Array_B_info[36].FposY = 900;
	Array_B_info[36].FsizeX = 1400;
	Array_B_info[36].FsizeY = 440;

	Array_B_info[37].FposX = 16600;
	Array_B_info[37].FposY = 785;
	Array_B_info[37].FsizeX = 320;
	Array_B_info[37].FsizeY = 190;

	Array_B_info[38].FposX = 16893;
	Array_B_info[38].FposY = 785;
	Array_B_info[38].FsizeX = 280;
	Array_B_info[38].FsizeY = 190;

	Array_B_info[39].FposX = 17167;
	Array_B_info[39].FposY = 785;
	Array_B_info[39].FsizeX = 280;
	Array_B_info[39].FsizeY = 190;

	Array_B_info[40].FposX = 17443;
	Array_B_info[40].FposY = 785;
	Array_B_info[40].FsizeX = 280;
	Array_B_info[40].FsizeY = 190;

	Array_B_info[41].FposX = 18083;
	Array_B_info[41].FposY = 785;
	Array_B_info[41].FsizeX = 310;
	Array_B_info[41].FsizeY = 190;

	Array_B_info[42].FposX = 18753;
	Array_B_info[42].FposY = 785;
	Array_B_info[42].FsizeX = 310;
	Array_B_info[42].FsizeY = 190;

	Array_B_info[43].FposX = 19040;
	Array_B_info[43].FposY = 785;
	Array_B_info[43].FsizeX = 280;
	Array_B_info[43].FsizeY = 190;

	Array_T_info[4].FposX = 19040;
	Array_T_info[4].FposY = 650;
	Array_T_info[4].FsizeX = 175;
	Array_T_info[4].FsizeY = 114;

	Array_B_info[44].FposX = 19842;
	Array_B_info[44].FposY = 785;
	Array_B_info[44].FsizeX = 310;
	Array_B_info[44].FsizeY = 190;

	Array_B_info[45].FposX = 20552;
	Array_B_info[45].FposY = 785;
	Array_B_info[45].FsizeX = 310;
	Array_B_info[45].FsizeY = 190;

	Array_B_info[46].FposX = 20840;
	Array_B_info[46].FposY = 785;
	Array_B_info[46].FsizeX = 280;
	Array_B_info[46].FsizeY = 190;

	Array_B_info[47].FposX = 21114;
	Array_B_info[47].FposY = 785;
	Array_B_info[47].FsizeX = 280;
	Array_B_info[47].FsizeY = 190;

	Array_B_info[48].FposX = 21387;
	Array_B_info[48].FposY = 785;
	Array_B_info[48].FsizeX = 280;
	Array_B_info[48].FsizeY = 190;

	Array_B_info[49].FposX = 22142;
	Array_B_info[49].FposY = 785;
	Array_B_info[49].FsizeX = 310;
	Array_B_info[49].FsizeY = 190;

	Array_B_info[50].FposX = 22430;
	Array_B_info[50].FposY = 785;
	Array_B_info[50].FsizeX = 280;
	Array_B_info[50].FsizeY = 190;

	Array_B_info[51].FposX = 23600;
	Array_B_info[51].FposY = 785;
	Array_B_info[51].FsizeX = 1445;
	Array_B_info[51].FsizeY = 210;

	Array_B_info[52].FposX = 200;
	Array_B_info[52].FposY = 600;
	Array_B_info[52].FsizeX = 1004;
	Array_B_info[52].FsizeY = 59;

	Array_B_info[53].FposX = 1200;
	Array_B_info[53].FposY = 600;
	Array_B_info[53].FsizeX = 1004;
	Array_B_info[53].FsizeY = 59;

	Array_B_info[54].FposX = 2200;
	Array_B_info[54].FposY = 600;
	Array_B_info[54].FsizeX = 1004;
	Array_B_info[54].FsizeY = 59;

	Array_Boost_info[2].FposX = 2200;
	Array_Boost_info[2].FposY = 490;
	Array_Boost_info[2].FsizeX = 400;
	Array_Boost_info[2].FsizeY = 200;

	Array_B_info[55].FposX = 3200;
	Array_B_info[55].FposY = 600;
	Array_B_info[55].FsizeX = 1004;
	Array_B_info[55].FsizeY = 59;

	Array_B_info[56].FposX = 4200;
	Array_B_info[56].FposY = 600;
	Array_B_info[56].FsizeX = 1004;
	Array_B_info[56].FsizeY = 59;

	Array_Boost_info[3].FposX = 4200;
	Array_Boost_info[3].FposY = 490;
	Array_Boost_info[3].FsizeX = 400;
	Array_Boost_info[3].FsizeY = 200;

	Array_B_info[57].FposX = 5200;
	Array_B_info[57].FposY = 600;
	Array_B_info[57].FsizeX = 1004;
	Array_B_info[57].FsizeY = 59;

	Array_B_info[58].FposX = 6200;
	Array_B_info[58].FposY = 600;
	Array_B_info[58].FsizeX = 1004;
	Array_B_info[58].FsizeY = 59;

	Array_Boost_info[4].FposX = 6200;
	Array_Boost_info[4].FposY = 490;
	Array_Boost_info[4].FsizeX = 400;
	Array_Boost_info[4].FsizeY = 200;

	Array_B_info[59].FposX = 7200;
	Array_B_info[59].FposY = 600;
	Array_B_info[59].FsizeX = 1004;
	Array_B_info[59].FsizeY = 59;

	Array_B_info[60].FposX = 8200;
	Array_B_info[60].FposY = 600;
	Array_B_info[60].FsizeX = 1004;
	Array_B_info[60].FsizeY = 59;

	Array_B_info[61].FposX = 9200;
	Array_B_info[61].FposY = 600;
	Array_B_info[61].FsizeX = 1004;
	Array_B_info[61].FsizeY = 59;

	Array_O_B_info[1].FposX = 9700;
	Array_O_B_info[1].FposY = 550;
	Array_O_B_info[1].FsizeX = 87;
	Array_O_B_info[1].FsizeY = 76;

	Array_B_info[62].FposX = 10200;
	Array_B_info[62].FposY = 600;
	Array_B_info[62].FsizeX = 1004;
	Array_B_info[62].FsizeY = 59;

	Array_B_info[63].FposX = 11200;
	Array_B_info[63].FposY = 600;
	Array_B_info[63].FsizeX = 1004;
	Array_B_info[63].FsizeY = 59;

	Array_Boost_info[5].FposX = 11200;
	Array_Boost_info[5].FposY = 490;
	Array_Boost_info[5].FsizeX = 400;
	Array_Boost_info[5].FsizeY = 200;

	Array_B_info[64].FposX = 12200;
	Array_B_info[64].FposY = 600;
	Array_B_info[64].FsizeX = 1004;
	Array_B_info[64].FsizeY = 59;

	Array_B_info[65].FposX = 13200;
	Array_B_info[65].FposY = 600;
	Array_B_info[65].FsizeX = 1004;
	Array_B_info[65].FsizeY = 59;

	Array_O_B_info[2].FposX = 12800;
	Array_O_B_info[2].FposY = 550;
	Array_O_B_info[2].FsizeX = 87;
	Array_O_B_info[2].FsizeY = 76;

	Array_O_FB_info[1].FposX = 13400;
	Array_O_FB_info[1].FposY = 400;
	Array_O_FB_info[1].FsizeX = 71;
	Array_O_FB_info[1].FsizeY = 63;

	Array_B_info[66].FposX = 14200;
	Array_B_info[66].FposY = 600;
	Array_B_info[66].FsizeX = 1004;
	Array_B_info[66].FsizeY = 59;
	
	Array_B_info[67].FposX = 14200;
	Array_B_info[67].FposY = 600;
	Array_B_info[67].FsizeX = 1004;
	Array_B_info[67].FsizeY = 59;

	Array_B_info[68].FposX = 14200;
	Array_B_info[68].FposY = 600;
	Array_B_info[68].FsizeX = 1004;
	Array_B_info[68].FsizeY = 59;

	Array_B_info[69].FposX = 14200;
	Array_B_info[69].FposY = 600;
	Array_B_info[69].FsizeX = 1004;
	Array_B_info[69].FsizeY = 59;

	Array_B_info[70].FposX = 14200;
	Array_B_info[70].FposY = 600;
	Array_B_info[70].FsizeX = 1004;
	Array_B_info[70].FsizeY = 59;


	




	Bg_City_1_info.FposX = 0;
	Bg_City_1_info.FposY = WINSIZE_Y;
	Bg_speed = 3;

	Jump_Check = 1;

	P_On_Distance_FposX = 100;

	Bg_City_2_info.FposX = 3200;

	m_hdc = GetDC(g_hWnd);

	m_OFFhdc = CreateCompatibleDC(m_hdc);

	m_backbitmap = CreateCompatibleBitmap(m_hdc, WINSIZE_X, WINSIZE_Y);

	m_oldbitmap = (HBITMAP)SelectObject(m_OFFhdc, m_backbitmap);

	for (int i = 0; i < 100; i++)
	{
		m_Memhdc[i] = CreateCompatibleDC(m_hdc);
	}

	//m_bitmap[0] = MyLoadImage(L"C:/Users/woori/Downloads/DVA.bmp", obstacle_info.FsizeX, obstacle_info.FsizeY); //장애물
	//m_bitmap[1] = MyLoadImage(L"C:/Users/woori/Downloads/CAR2.bmp", 0, 0); //플레이어
	//m_bitmap[2] = MyLoadImage(L"C:/Users/woori/Downloads/PAUSE.bmp", 0, 0);//일시 정지 버튼
	//m_bitmap[3] = MyLoadImage(L"C:/Users/woori/Downloads/Cop.bmp", 0, 0);//경찰과의 거리
	//m_bitmap[4] = MyLoadImage(L"C:/Users/woori/Downloads/PDistance.bmp", 0, 0);//경찰과의 거리 중에서 플레이어의 위치
	//m_bitmap[5] = MyLoadImage(L"C:/Users/woori/Downloads/TRAM.bmp", 0, 0);//트램펄린
	//m_bitmap[6] = MyLoadImage(L"C:/Users/woori/Downloads/BACKSLOW.bmp", 0, 0);//MAX슬로우 게이지
	//m_bitmap[7] = MyLoadImage(L"C:/Users/woori/Downloads/SLOW.bmp", 0, 0);//현재 슬로우 게이지
	//m_bitmap[8] = MyLoadImage(L"C:/Users/woori/Downloads/3BG.bmp", 0, 0); //배경 3BG

	m_bitmap[0] = MyLoadImage(L"./Pictures/Boost.bmp", 0, 0); // Boost
	m_bitmap[1] = MyLoadImage(L"./Pictures/Truck.bmp", 0, 0); // 플레이어
	//m_bitmap[2] = MyLoadImage(L"C:/Users/조윤재/Documents/Programing/동아리 여름방학 프로젝트/Pause.bmp", 0, 0);//일시 정지 버튼
	m_bitmap[3] = MyLoadImage(L"./Pictures/P_On_Distance.bmp", 0, 0);//거리상의 차
	m_bitmap[4] = MyLoadImage(L"./Pictures/Distance.bmp", 0, 0);// 거리
	m_bitmap[5] = MyLoadImage(L"./Pictures/Trampoline.bmp", 0, 0);//트램펄린
	m_bitmap[6] = MyLoadImage(L"./Pictures/Slow_Struct.bmp", 0, 0);//MAX슬로우 게이지
	m_bitmap[7] = MyLoadImage(L"./Pictures/Slow_C.bmp", 0, 0);//현재 슬로우 게이지
	m_bitmap[8] = MyLoadImage(L"./Pictures/City.bmp", 0, 0); // Background_City_1
	m_bitmap[9] = MyLoadImage(L"./Pictures/Fireplug.bmp", 0, 0); // Fireplug
	m_bitmap[10] = MyLoadImage(L"./Pictures/City.bmp", 0, 0); // Background_City_2
	m_bitmap[11] = MyLoadImage(L"./Pictures/Bird.bmp", 0, 0); // Bird     87 76
	m_bitmap[12] = MyLoadImage(L"./Pictures/ElectricPole.bmp", 0, 0); // Electric Pole
	m_bitmap[13] = MyLoadImage(L"./Pictures/Box.bmp", 0, 0); // Box
	m_bitmap[14] = MyLoadImage(L"./Pictures/PublicTelephone.bmp", 0, 0); // Public Telephone
	m_bitmap[15] = MyLoadImage(L"./Pictures/BlackOut_1.bmp", 0, 0); // BlackOut_1
	m_bitmap[16] = MyLoadImage(L"./Pictures/BlackOut_2.bmp", 0, 0); // BlackOut_2
	m_bitmap[17] = MyLoadImage(L"./Pictures/BlackOut_3.bmp", 0, 0); // BlackOut_3
	m_bitmap[18] = MyLoadImage(L"./Pictures/BlackOut_4.bmp", 0, 0); // BlackOut_4
	m_bitmap[19] = MyLoadImage(L"./Pictures/Bridge.bmp", 0, 0); // Background_Bridge
	m_bitmap[20] = MyLoadImage(L"./Pictures/FlyingBird.bmp", 0, 0); // Flying Bird   71 63
	m_bitmap[21] = MyLoadImage(L"./Pictures/PositionTest.bmp", 0, 0); // PositionTest
	m_bitmap[22] = MyLoadImage(L"./Pictures/ScoreBoard.bmp", 0, 0); // ScoreBoard
	m_bitmap[23] = MyLoadImage(L"./Pictures/Star_1.bmp", 0, 0); // Star_1
	m_bitmap[24] = MyLoadImage(L"./Pictures/Star_2.bmp", 0, 0); // Star_2
	m_bitmap[25] = MyLoadImage(L"./Pictures/Star_3.bmp", 0, 0); // Star_3










	m_bitmap[31] = MyLoadImage(L"./Pictures/B_1.bmp", 0, 0);
	m_bitmap[32] = MyLoadImage(L"./Pictures/B_2.bmp", 0, 0);
	m_bitmap[33] = MyLoadImage(L"./Pictures/B_3.bmp", 0, 0);
	m_bitmap[34] = MyLoadImage(L"./Pictures/B_4.bmp", 0, 0);
	m_bitmap[35] = MyLoadImage(L"./Pictures/B_5.bmp", 0, 0);
	m_bitmap[36] = MyLoadImage(L"./Pictures/B_6.bmp", 0, 0);
	m_bitmap[37] = MyLoadImage(L"./Pictures/B_7.bmp", 0, 0);
	m_bitmap[38] = MyLoadImage(L"./Pictures/B_8.bmp", 0, 0);
	m_bitmap[39] = MyLoadImage(L"./Pictures/B_9.bmp", 0, 0);
	m_bitmap[40] = MyLoadImage(L"./Pictures/B_10.bmp", 0, 0);
	m_bitmap[41] = MyLoadImage(L"./Pictures/B_11.bmp", 0, 0);
	m_bitmap[42] = MyLoadImage(L"./Pictures/B_12.bmp", 0, 0);
	m_bitmap[43] = MyLoadImage(L"./Pictures/B_13~18.bmp", 0, 0);
	m_bitmap[44] = MyLoadImage(L"./Pictures/B_19.bmp", 0, 0);
	m_bitmap[45] = MyLoadImage(L"./Pictures/B_20.bmp", 0, 0);
	m_bitmap[46] = MyLoadImage(L"./Pictures/B_21.bmp", 0, 0);
	m_bitmap[47] = MyLoadImage(L"./Pictures/B_22.bmp", 0, 0);
	m_bitmap[48] = MyLoadImage(L"./Pictures/B_23.bmp", 0, 0);
	m_bitmap[49] = MyLoadImage(L"./Pictures/B_24.bmp", 0, 0);
	m_bitmap[50] = MyLoadImage(L"./Pictures/B_25.bmp", 0, 0);
	m_bitmap[51] = MyLoadImage(L"./Pictures/B_26.bmp", 0, 0);
	m_bitmap[52] = MyLoadImage(L"./Pictures/B_27,28.bmp", 0, 0);
	m_bitmap[53] = MyLoadImage(L"./Pictures/B_29.bmp", 0, 0);
	m_bitmap[54] = MyLoadImage(L"./Pictures/B_30.bmp", 0, 0);
	m_bitmap[55] = MyLoadImage(L"./Pictures/B_31.bmp", 0, 0);
	m_bitmap[56] = MyLoadImage(L"./Pictures/B_32.bmp", 0, 0);
	m_bitmap[57] = MyLoadImage(L"./Pictures/B_33.bmp", 0, 0);
	m_bitmap[58] = MyLoadImage(L"./Pictures/B_34.bmp", 0, 0);
	m_bitmap[59] = MyLoadImage(L"./Pictures/B_35.bmp", 0, 0);
	m_bitmap[60] = MyLoadImage(L"./Pictures/B_36.bmp", 0, 0);
	m_bitmap[61] = MyLoadImage(L"./Pictures/B_37.bmp", 0, 0);
	m_bitmap[62] = MyLoadImage(L"./Pictures/B_38~40,43,45~48,50.bmp", 0, 0);
	m_bitmap[63] = MyLoadImage(L"./Pictures/B_41,42,44,45,49.bmp", 0, 0);
	m_bitmap[64] = MyLoadImage(L"./Pictures/B_51.bmp", 0, 0);
	m_bitmap[65] = MyLoadImage(L"./Pictures/B_52.bmp", 0, 0);



	//HBITMAP 객체에 LoadImage 함수로 이미지 정보를 불러와 넣어준다

	for (int j = 0; j < 100; j++)
	{
		SelectObject(m_Memhdc[j], m_bitmap[j]);
	}
}

void Main_Game::Ch_Render()
{ 
	if (End_Check == 0)
	{
		/*if (BlackOut_Check == 1)
		{
			static int a = 0;
			static unsigned long C_Time;
			static unsigned long E_Time;
			static unsigned long R_Time;
			C_Time = GetTickCount();
			if (a == 0)
			{
				E_Time = GetTickCount();
				a = 1;
			}
			R_Time = C_Time - g_S_Time - E_Time - g_S_Time;

			if (P_info.FposX >= 1700)
			{
				BitBlt(m_OFFhdc, 0, 0, 1600, 1000, m_Memhdc[17], 0, 0, SRCCOPY);
			}
			else if (R_Time >= 1800)
			{
				StretchBlt(m_OFFhdc, Bg_City_1_info.FposX, 0, 3200, 900, m_Memhdc[17], 0, 0, 4500, 1000, SRCCOPY);
				StretchBlt(m_OFFhdc, Bg_City_2_info.FposX, 0, 3200, 900, m_Memhdc[17], 0, 0, 4500, 1000, SRCCOPY);
			}
			else if (R_Time >= 900)
			{
				StretchBlt(m_OFFhdc, Bg_City_1_info.FposX, 0, 3200, 900, m_Memhdc[16], 0, 0, 4500, 1000, SRCCOPY);
				StretchBlt(m_OFFhdc, Bg_City_2_info.FposX, 0, 3200, 900, m_Memhdc[16], 0, 0, 4500, 1000, SRCCOPY);
			}
			else
			{
				StretchBlt(m_OFFhdc, Bg_City_1_info.FposX, 0, 3200, 900, m_Memhdc[15], 0, 0, 4500, 1000, SRCCOPY);
				StretchBlt(m_OFFhdc, Bg_City_2_info.FposX, 0, 3200, 900, m_Memhdc[15], 0, 0, 4500, 1000, SRCCOPY);
			}


		}*/
		//else

		//{

			//플레이어
		TransparentBlt(m_OFFhdc, rcP.left, rcP.top, P_info.FsizeX, P_info.FsizeY, m_Memhdc[1], 0, 0, P_info.FsizeX, P_info.FsizeY, RGB(255, 0, 255));


		// 거리UI
		TransparentBlt(m_OFFhdc, -50, -150, 1200, 400, m_Memhdc[4], 0, 0, 1200, 400, RGB(255, 0, 255));
		//원본 그림의 너비를 지속적으로 줄여준다. 하지만 출력 너비도 같이 줄여주지 않으면 원본 그림의 너비가 줄여진채로 출력 너비에 맞게 출력해야하므로 엄청 크게 나올 것이다. 그래서 출력 너비도 같이 줄여줘야 한다.

		// 거리상의 차
		TransparentBlt(m_OFFhdc, P_On_Distance_FposX, 100, 60, 26, m_Memhdc[3], 0, 0, 60, 26, RGB(255, 0, 255));

		// PositionTest       // Star 1 : 280    // Star 2 : 567    // Star 3 : 837
	/*	BitBlt(m_OFFhdc, 0, 100, 837, 77, m_Memhdc[21], 0, 0, SRCCOPY);*/



		//플레이어거리 UI
		//TransparentBlt(m_OFFhdc, 860, 0, 142, 130, m_Memhdc[4], 0, 0, 142, 122, RGB(255, 255, 255));

		//맥스 슬로우 게이지
		TransparentBlt(m_OFFhdc, 1110, 50, 477, 87, m_Memhdc[6], 0, 0, 477, 87, RGB(255, 0, 255));

		//현재 슬로우 게이지
		TransparentBlt(m_OFFhdc, 1130, 70, P_info.Fslowgauge, 56, m_Memhdc[7], 0, 0, 432, 56, RGB(255, 0, 255));

		if (Bg_Change_Check == 0)
		{
			// Boards 1 ~ 12
			for (int i = 1; i < 13; i++)
			{
				TransparentBlt(m_OFFhdc, Array_rcB[i].left, Array_rcB[i].top, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, m_Memhdc[i + 30], 0, 0, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, RGB(255, 255, 255));
			}

			// Boards 13 ~ 18
			for (int i = 13; i < 19; i++)
			{
				TransparentBlt(m_OFFhdc, Array_rcB[i].left, Array_rcB[i].top, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, m_Memhdc[43], 0, 0, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, RGB(255, 255, 255));
			}

			// Boards 19 ~ 26   
			for (int i = 19; i < 27; i++)
			{
				TransparentBlt(m_OFFhdc, Array_rcB[i].left, Array_rcB[i].top, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, m_Memhdc[i + 25], 0, 0, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, RGB(255, 255, 255));
			}

			// Boards 27, 28
			for (int i = 27; i < 29; i++)
			{
				TransparentBlt(m_OFFhdc, Array_rcB[i].left, Array_rcB[i].top, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, m_Memhdc[52], 0, 0, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, RGB(255, 255, 255));
			}

			// Boards 29 ~ 37    
			for (int i = 29; i < 38; i++)
			{
				TransparentBlt(m_OFFhdc, Array_rcB[i].left, Array_rcB[i].top, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, m_Memhdc[i + 24], 0, 0, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, RGB(255, 255, 255));
			}

			// Boards 38 ~ 40
			for (int i = 38; i < 41; i++)
			{
				TransparentBlt(m_OFFhdc, Array_rcB[i].left, Array_rcB[i].top, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, m_Memhdc[62], 0, 0, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, RGB(255, 255, 255));
			}

			// Boards 41, 42
			for (int i = 41; i < 43; i++)
			{
				TransparentBlt(m_OFFhdc, Array_rcB[i].left, Array_rcB[i].top, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, m_Memhdc[63], 0, 0, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, RGB(255, 255, 255));
			}

			// Boards 43

			TransparentBlt(m_OFFhdc, Array_rcB[43].left, Array_rcB[43].top, Array_B_info[43].FsizeX, Array_B_info[43].FsizeY, m_Memhdc[62], 0, 0, Array_B_info[43].FsizeX, Array_B_info[43].FsizeY, RGB(255, 255, 255));

			// Boards 44, 45

			for (int i = 44; i < 46; i++)
			{
				TransparentBlt(m_OFFhdc, Array_rcB[i].left, Array_rcB[i].top, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, m_Memhdc[63], 0, 0, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, RGB(255, 255, 255));
			}

			// Boards 46 ~ 48
			for (int i = 46; i < 49; i++)
			{
				TransparentBlt(m_OFFhdc, Array_rcB[i].left, Array_rcB[i].top, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, m_Memhdc[62], 0, 0, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, RGB(255, 255, 255));
			}

			// Boards 49
			TransparentBlt(m_OFFhdc, Array_rcB[49].left, Array_rcB[49].top, Array_B_info[49].FsizeX, Array_B_info[49].FsizeY, m_Memhdc[63], 0, 0, Array_B_info[49].FsizeX, Array_B_info[49].FsizeY, RGB(255, 255, 255));

			// Boards 50
			TransparentBlt(m_OFFhdc, Array_rcB[50].left, Array_rcB[50].top, Array_B_info[50].FsizeX, Array_B_info[50].FsizeY, m_Memhdc[50], 0, 0, Array_B_info[50].FsizeX, Array_B_info[50].FsizeY, RGB(255, 255, 255));

			// Boards 51
			TransparentBlt(m_OFFhdc, Array_rcB[51].left, Array_rcB[51].top, Array_B_info[51].FsizeX, Array_B_info[51].FsizeY, m_Memhdc[64], 0, 0, Array_B_info[51].FsizeX, Array_B_info[51].FsizeY, RGB(255, 255, 255));

			// Obstacle_Fireplug
			for (int i = 1; i < 10; i++)
			{
				TransparentBlt(m_OFFhdc, Array_rcO_F[i].left, Array_rcO_F[i].top, Array_O_F_info[i].FsizeX, Array_O_F_info[i].FsizeY, m_Memhdc[9], 0, 0, Array_O_F_info[i].FsizeX, Array_O_F_info[i].FsizeY, RGB(255, 0, 255));
			}

			// Tram
			for (int i = 1; i < 5; i++)
			{
				TransparentBlt(m_OFFhdc, Array_rcT[i].left, Array_rcT[i].top, Array_T_info[i].FsizeX, Array_T_info[i].FsizeY, m_Memhdc[5], 0, 0, Array_T_info[i].FsizeX, Array_T_info[i].FsizeY, RGB(255, 0, 255));
			}

			// Boost
			for (int i = 1; i < 2; i++)
			{
				TransparentBlt(m_OFFhdc, Array_rcBoost[i].left, Array_rcBoost[i].top, Array_Boost_info[i].FsizeX, Array_Boost_info[i].FsizeY, m_Memhdc[0], 0, 0, Array_Boost_info[i].FsizeX, Array_Boost_info[i].FsizeY, RGB(255, 0, 255));
			}
		}

		if (Bg_Change_Check == 1)
		{
			// Boards 52 ~ 
			for (int i = 52; i < 100; i++)
			{
				TransparentBlt(m_OFFhdc, Array_rcB[i].left, Array_rcB[i].top, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, m_Memhdc[65], 0, 0, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, RGB(255, 255, 255));
			}

			//// Boards 
			//for (int i = 52; i < 100; i++)
			//{
			//	TransparentBlt(m_OFFhdc, Array_rcB[i].left, Array_rcB[i].top, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, m_Memhdc[i + 13], 0, 0, Array_B_info[i].FsizeX, Array_B_info[i].FsizeY, RGB(255, 255, 255));
			//}

			// Boost 2 ~
			for (int i = 2; i < 10; i++)
			{
				TransparentBlt(m_OFFhdc, Array_rcBoost[i].left, Array_rcBoost[i].top, Array_Boost_info[i].FsizeX, Array_Boost_info[i].FsizeY, m_Memhdc[0], 0, 0, Array_Boost_info[i].FsizeX, Array_Boost_info[i].FsizeY, RGB(255, 0, 255));
			}

			// Trampolines 5 ~ 10
			for (int i = 5; i < 10; i++)
			{
				TransparentBlt(m_OFFhdc, Array_rcT[i].left, Array_rcT[i].top, Array_T_info[i].FsizeX, Array_T_info[i].FsizeY, m_Memhdc[5], 0, 0, Array_T_info[i].FsizeX, Array_T_info[i].FsizeY, RGB(255, 0, 255));
			}

			// Birds
			for (int i = 1; i < 30; i++)
			{
				TransparentBlt(m_OFFhdc, Array_rcO_B[i].left, Array_rcO_B[i].top, Array_O_B_info[i].FsizeX, Array_O_B_info[i].FsizeY, m_Memhdc[11], 0, 0, Array_O_B_info[i].FsizeX, Array_O_B_info[i].FsizeY, RGB(255, 0, 255));
			}

			// Flying Birds
			for (int i = 1; i < 30; i++)
			{
				TransparentBlt(m_OFFhdc, Array_rcO_FB[i].left, Array_rcO_FB[i].top, Array_O_FB_info[i].FsizeX, Array_O_FB_info[i].FsizeY, m_Memhdc[20], 0, 0, Array_O_FB_info[i].FsizeX, Array_O_FB_info[i].FsizeY, RGB(255, 0, 255));
			}
		}
		//}

	}
}

void Main_Game::Bg_Render()
{
	if (End_Check == 0)
	{
		//BitBlt(m_OFFhdc, Bg_info.FposX, 0, 4500, Bg_info.FposY, m_Memhdc[8], 0, 175, SRCCOPY);//배경
		if (Bg_Change_Check == 0)
		{
			StretchBlt(m_OFFhdc, Bg_City_1_info.FposX, 0, 3200, 900, m_Memhdc[8], 0, 0, 949, 209, SRCCOPY);
			StretchBlt(m_OFFhdc, Bg_City_2_info.FposX, 0, 3200, 900, m_Memhdc[8], 0, 0, 949, 209, SRCCOPY);
		}

		else if (Bg_Change_Check == 1)
		{
			StretchBlt(m_OFFhdc, Bg_Bridge_1_info.FposX, 0, 3200, 900, m_Memhdc[19], 0, 0, 3200, 1000, SRCCOPY); // 4500 800
			StretchBlt(m_OFFhdc, Bg_Bridge_2_info.FposX, 0, 3200, 900, m_Memhdc[19], 0, 0, 3200, 1000, SRCCOPY);
		}
		//BitBlt(m_OFFhdc, Bg_info.FposX + WINSIZE_X, 0, WINSIZE_X * 2, WINSIZE_Y, m_Memhdc[2], 0, 175, SRCCOPY);
	}
}

void Main_Game::P_OutPut(bool menu)
{
	//dwTimeObstacle = GetTickCount();//dwTimeObstacle은 GetTickCount로 부터 부팅 된 후의 시간을 받아준다.
	//wsprintf(str, TEXT("SlowGauge = %d"), (int)P_info.Fslowgauge);
	//TextOut(m_OFFhdc, 20, 20, str, lstrlen(str));
	//wsprintf(str, TEXT("Slow ||| 0 = false, 1 = true  ||| %d"), (int)P_info.Slow);
	//TextOut(m_OFFhdc, 40, 40, str, lstrlen(str));

	if (menu == false)
	{
		//obstacle_info.RandTime_obs = rand() % 100;//장애물이 나오는 시간을 랜덤으로 잡아준다

		//if (obstacle_info.speed <= 30.0)//실험결과 성공적
		//{
		//	obstacle_info.speed += 0.0045;//0.0025
		//}

		/*if (Tm_info.speed <= 25)
		{
			Tm_info.speed += 0.0035;
		}*/

		//if (obstacle_info.FposX <= -60.0)//만약 장애물이 앞으로 너무가서 화면에서 사라졌다면
		//{
		//	if (GetTickCount() >= dwTimeObstacle + obstacle_info.RandTime_obs)//랜덤으로 잡아준 숫자를 time에 더해줘 겟틱카운트와 숫자 차이를 벌어지게만들어 딜레이를 만들어준다.
		//	{
		//		obstacle_info.FposY = rand() % 330 + 300;
		//		//dwTimeObstacle = GetTickCount();//time을 다시 겟틱카운트로 초기화해준다.
		//		obstacle_info.FposX = WINSIZE_X;//다시 뒤로돌린다.
		//	}
		//}
		if (End_Check == 0)
		{
			if (BlackOut_Check == 0)
			{
				if (Bg_City_2_info.FposX == 0 || Bg_City_2_info.FposX == 2 || Bg_City_2_info.FposX == 4 || Bg_City_2_info.FposX == 6 || Bg_City_2_info.FposX == 8)
				{
					Bg_City_1_info.FposX = 3200;
				}

				if (Bg_City_1_info.FposX == 0 || Bg_City_1_info.FposX == 2 || Bg_City_1_info.FposX == 4 || Bg_City_1_info.FposX == 6 || Bg_City_1_info.FposX == 8)
				{
					Bg_City_2_info.FposX = 3200;
				}
			}
			else if (Bg_Change_Check == 1)
			{
				static int a = 0;
				if (a == 0)
				{
					P_info.FposX = -300;
					P_info.FposY = 400;
					a = 1;
					Array_B_info[50].FposX = -20000;
					Array_B_info[51].FposX = -20000;
				}
				if (P_info.FposX >= 200)
				{
					static int a = 0;
					if (a == 0)
					{
						Bg_speed = 3;
						speed = 7;
						a = 1;
					}
					Camera_Move_Check_3 = 0;
					Jump_Check = 1;
				}
				if (Bg_Bridge_2_info.FposX == 0 || Bg_Bridge_2_info.FposX == 2 || Bg_Bridge_2_info.FposX == 4 || Bg_Bridge_2_info.FposX == 6 || Bg_Bridge_2_info.FposX == 8)
				{
					Bg_Bridge_1_info.FposX = 3200;
				}

				if (Bg_Bridge_1_info.FposX == 0 || Bg_Bridge_1_info.FposX == 2 || Bg_Bridge_1_info.FposX == 4 || Bg_Bridge_1_info.FposX == 6 || Bg_Bridge_1_info.FposX == 8)
				{
					Bg_Bridge_2_info.FposX = 3200;
				}
			}
		}

		//if (Tm_info.FposX <= -60)//트램펄린이 배경 뒤로 갔다면
		//{
		//	Tm_info.FposX = WINSIZE_X;//다시 처음 부분으로 돌려 놔 준다.
		//}
		BitBlt(m_hdc, 0, 0, WINSIZE_X, WINSIZE_Y, m_OFFhdc, 0, 0, SRCCOPY);//최종적으로 모두 출력시킨다.
		if (End_Check == 1)
		{
			Sleep(1000); 
		}
	}
}

void Main_Game::Crash_Check(bool menu)
{
	if (menu == false)
	{
		rcP.left = P_info.FposX - P_info.FsizeX / 2;
		rcP.top = P_info.FposY - P_info.FsizeY / 2;
		rcP.right = P_info.FposX + P_info.FsizeX / 2;
		rcP.bottom = P_info.FposY + P_info.FsizeY / 2;

		
		// Boards
		for (int i = 1; i < 100; i++)
		{
			Array_rcB[i].left = Array_B_info[i].FposX - Array_B_info[i].FsizeX / 2;
			Array_rcB[i].top = Array_B_info[i].FposY - Array_B_info[i].FsizeY / 2;
			Array_rcB[i].right = Array_B_info[i].FposX + Array_B_info[i].FsizeX / 2;
			Array_rcB[i].bottom = Array_B_info[i].FposY + Array_B_info[i].FsizeY / 2;
		}

		// Obstacle_Fireplug
		for (int i = 1; i < 10; i++)
		{
			Array_rcO_F[i].left = Array_O_F_info[i].FposX - Array_O_F_info[i].FsizeX / 2;
			Array_rcO_F[i].top = Array_O_F_info[i].FposY - Array_O_F_info[i].FsizeY / 2;
			Array_rcO_F[i].right = Array_O_F_info[i].FposX + Array_O_F_info[i].FsizeX / 2;
			Array_rcO_F[i].bottom = Array_O_F_info[i].FposY + Array_O_F_info[i].FsizeY / 2;
		}

		// Tram
		for (int i = 1; i < 10; i++)
		{
			Array_rcT[i].left = Array_T_info[i].FposX - Array_T_info[i].FsizeX / 2;
			Array_rcT[i].top = Array_T_info[i].FposY - Array_T_info[i].FsizeY / 2;
			Array_rcT[i].right = Array_T_info[i].FposX + Array_T_info[i].FsizeX / 2;
			Array_rcT[i].bottom = Array_T_info[i].FposY + Array_T_info[i].FsizeY / 2;
		}

		// Boosts
		for (int i = 1; i < 10; i++)
		{
			Array_rcBoost[i].left = Array_Boost_info[i].FposX - Array_Boost_info[i].FsizeX / 2;
			Array_rcBoost[i].top = Array_Boost_info[i].FposY - Array_Boost_info[i].FsizeY / 2;
			Array_rcBoost[i].right = Array_Boost_info[i].FposX + Array_Boost_info[i].FsizeX / 2;
			Array_rcBoost[i].bottom = Array_Boost_info[i].FposY + Array_Boost_info[i].FsizeY / 2;
		}

		// Birds
		for (int i = 1; i < 30; i++)
		{
			Array_rcO_B[i].left = Array_O_B_info[i].FposX - Array_O_B_info[i].FsizeX / 2;
			Array_rcO_B[i].top = Array_O_B_info[i].FposY - Array_O_B_info[i].FsizeY / 2;
			Array_rcO_B[i].right = Array_O_B_info[i].FposX + Array_O_B_info[i].FsizeX / 2;
			Array_rcO_B[i].bottom = Array_O_B_info[i].FposY + Array_O_B_info[i].FsizeY / 2;
		}

		// Flying Birds
		for (int i = 1; i < 30; i++)
		{
			Array_rcO_FB[i].left = Array_O_FB_info[i].FposX - Array_O_FB_info[i].FsizeX / 2;
			Array_rcO_FB[i].top = Array_O_FB_info[i].FposY - Array_O_FB_info[i].FsizeY / 2;
			Array_rcO_FB[i].right = Array_O_FB_info[i].FposX + Array_O_FB_info[i].FsizeX / 2;
			Array_rcO_FB[i].bottom = Array_O_FB_info[i].FposY + Array_O_FB_info[i].FsizeY / 2;
		}





		if (Bg_Change_Check == 0)
		{
			for (int i = 1; i < 5; i++)
			{
				if (IntersectRect(&rcTemp, &rcP, &Array_rcT[i]))
				{
					if (P_info.status != 2 || P_info.status == 2)//플레이어의 상황이 걷는상황 이거나 점프하는 상황이거나 Z키를 누른 상황이라면
					{
						P_info.status = 2;//플레이어는 트램펄린을 밟고 점프한 상황으로 만들어준다.
						P_info.Fjump = 30;//점프를 할 수 있게 점프에 값 30을 넣어준다.
					}
				}
			}

			for (int i = 0; i < 52; i++)
			{
				if (IntersectRect(&rcTemp, &rcP, &Array_rcB[i]))
				{
					P_info.Fdown = 0;
					P_info.BalCheck = i;
					SetRect(&rcTemp, 0, 0, rcTemp.right - rcTemp.left, rcTemp.bottom - rcTemp.top);

					if (rcTemp.right > rcTemp.bottom)//위아래
					{
						if ((rcP.bottom + rcP.top) / 2 < (Array_rcB[i].bottom + Array_rcB[i].top) / 2)
						{
							P_info.FposY -= rcTemp.bottom / 2;
							P_info.status = 0;
						}
					}
					else//양 옆
					{

					}
				}
				else if (!IntersectRect(&rcTemp, &rcP, &Array_rcB[i]) && P_info.status != 1 && P_info.status != 2 && P_info.BalCheck == i)//충돌을 안했다면
				{
					P_info.status = 3;
					P_info.Fdown += 0.6;
					P_info.FposY += P_info.Fdown;
				}
			}
		}

		else if (Bg_Change_Check == 1)
		{
			for (int i = 5; i < 10; i++)
			{
				if (IntersectRect(&rcTemp, &rcP, &Array_rcT[i]))
				{
					if (P_info.status != 2)//플레이어의 상황이 걷는상황 이거나 점프하는 상황이거나 Z키를 누른 상황이라면
					{
						P_info.status = 2;//플레이어는 트램펄린을 밟고 점프한 상황으로 만들어준다.
						P_info.Fjump = 30;//점프를 할 수 있게 점프에 값 30을 넣어준다.
					}
				}
			}

			for (int i = 52; i < 100; i++)
			{
				if (IntersectRect(&rcTemp, &rcP, &Array_rcB[i]))
				{
					P_info.Fdown = 0;
					P_info.BalCheck = i;
					SetRect(&rcTemp, 0, 0, rcTemp.right - rcTemp.left, rcTemp.bottom - rcTemp.top);

					if (rcTemp.right > rcTemp.bottom)//위아래
					{
						if ((rcP.bottom + rcP.top) / 2 < (Array_rcB[i].bottom + Array_rcB[i].top) / 2)
						{
							P_info.FposY -= rcTemp.bottom / 2;
							P_info.status = 0;
						}
					}
					else//양 옆
					{

					}
				}
				else if (!IntersectRect(&rcTemp, &rcP, &Array_rcB[i]) && P_info.status != 1 && P_info.status != 2 && P_info.BalCheck == i)//충돌을 안했다면
				{
					P_info.status = 3;
					P_info.Fdown += 0.6;
					P_info.FposY += P_info.Fdown;
				}
			}

		}


	/*	for (int i = 1; i < 100; i++)
		{
			if (Collision(rcTemp, rcP, Array_rcB[i], 1))
			{
				P_info.BalCheck = i;
				P_info.Fdown = 0;
			}

			else if (!IntersectRect(&rcTemp, &rcP, &Array_rcB[i]) && P_info.status != 1 && P_info.status != 2 && P_info.BalCheck == i)
			{
				P_info.status = 3;
				P_info.Fdown += 0.6;
				P_info.FposY += P_info.Fdown;
			}
		}*/


		// Collision with Obstacles
		
		int check = 0;

		//if (P_info.FposY >= 1000) exit(0);
		if (Bg_Change_Check == 0)
		{
			for (int i = 1; i < 10; i++)
			{
				//if (Collision(rcTemp, rcP, Array_rcO_F[i], 3)) check = 1;   // PROBLEM!!!!
				if (IntersectRect(&rcTemp, &rcP, &Array_rcO_F[i])) check = 1;
			}

			for (int i = 1; i < 52; i++)
			{
				if (Collision(rcTemp, rcP, Array_rcB[i], 2)) check = 1;
			}
		}

		else if (Bg_Change_Check == 1)
		{
			for (int i = 52; i < 100; i++)
			{
				if (Collision(rcTemp, rcP, Array_rcB[i], 2)) check = 1;
			}

			for (int i = 1; i < 30; i++)
			{
				if (Collision(rcTemp, rcP, Array_rcO_B[i], 2)) check = 1;
			}

			for (int i = 1; i < 30; i++)
			{
				if (Collision(rcTemp, rcP, Array_rcO_FB[i], 2)) check = 1;
			}
		}


		//Sleep(1000);//일단은 일시적으로 게임 종료 효과를 넣어봤다.
		//exit(0);
		if (check == 1)
		{
			BitBlt(m_OFFhdc, 0, 0, 1500, 1000, m_Memhdc[22], 0, 0, SRCCOPY);
			switch (NumberOfStar)
			{
			case 3:
				TransparentBlt(m_OFFhdc, 360, 200, 810, 484, m_Memhdc[25], 0, 0, 810, 484, RGB(255, 255, 255));
				break;
			case 2:
				TransparentBlt(m_OFFhdc, 360, 200, 810, 484, m_Memhdc[24], 0, 0, 810, 484, RGB(255, 255, 255));
				break;
			case 1:
				TransparentBlt(m_OFFhdc, 360, 200, 810, 484, m_Memhdc[23], 0, 0, 810, 484, RGB(255, 255, 255));
				break;

			}
				
			End_Check = 1;



			
			//Sleep(1000);
			//exit(0);
		}


		else//장애물과 플레이어가 충돌 하지 않았다면
		{

		}

	}
}

//void Main_Game::Ob_Spawn()
//{
//	//if(enemy_count < 2)
//	ObInfo *OB_info = new ObInfo;
//	//OB_info->x를 설정,y를설정
//
//	delete(OB_info);//생성된 놈이 화면 밖으로 넘어가게 된다면 파괴시킨다.
//}

void Main_Game::Ch_Progress(bool menu)
{
	if (menu == false)
	{
		if (End_Check == 1)
		{
			if (GetAsyncKeyState(VK_RETURN))
			{
				End_Check = 0;
			}
		}
		if (Jump_Check == 1)
		{
			if (GetAsyncKeyState(VK_SPACE))//스페이스바를 누르게 되면
			{
				if (P_info.status == 0)//점프 상황이 아니라면
				{
					P_info.Fjump = 18;//F점프의 값을 다시 30으로 만들어준다
					P_info.status = 1;//플레이어는 점프 한다.
				}
			}
		}

		if (GetAsyncKeyState(0x5A) && P_info.Fslowgauge >= 0)//Z키를 누르고 슬로우 게이지가 0보다 크거나 같으면
		{
			if (P_info.Fslowgauge <= 3.15)//만약 슬로우 게이지가 4.1(감소치)보다 작다면
			{
				P_info.Fslowgauge = -0.001;//슬로우 게이지는 Z를 누르면 4.1(감소치)만큼 닳게되는데 그렇게되면 슬로우 게이지가 4.1보다 작아도 4.1만큼 닳게 되어서 0보다 더 적어지는 상황이 발생하여 게이지가 늦게 차 오를 수도 있기 때문에 위의 조건을 걸어 슬로우게이지가 4.1보다 작은 상태에서 Z를 누르면 슬로우게이지를 -0.001로 만들게 해준다.
			}
			else
			{
				P_info.Fslowgauge -= 3.15;//슬로우 게이지는 Z를 누르면 4.1만큼 닳게된다
			}
			P_info.Slow = true;//슬로우 능력이 ON 된다	
		}
		else if (GetAsyncKeyState(0x5A) && P_info.Fslowgauge <= 0)//Z키를 누르고 슬로우 게이지가 0보다 적거나 같으면
		{
			P_info.Fslowgauge += 0.1;
			P_info.Slow = false;
		}

		if (GetAsyncKeyState(0x5A) & 0x8000 ? 0 : 1)//Z키를 때게 된다면
		{
			if (P_info.Fslowgauge >= 300)
			{
				P_info.Fslowgauge = 300;
			}

			P_info.Slow = false;//슬로우 능력이 OFF가 된다.
			P_info.Fslowgauge += 0.1;
		}

		if (P_info.status == 1)//플레이어의 점프 상황, F점프의 초기값은 30이다.
		{
			P_info.Fjump -= 0.65;//점프의 값을 지속적으로 낮춰주어서 1.15
			P_info.FposY -= P_info.Fjump;//플레이어의 Y값에 점프값을 빼준다    Y값은 낮을수록 위에 있고 높을수록 아래에 있다
												  //점프의 값이 계속 낮아지다보면 음수가되는데 그 때에는 땅으로 내려온다 ->플레이어Y값 = 플레이어Y값 - (-점프값) == 플레이어 Y값 = 플레이어Y값 + 점프값

		}

		if (P_info.status == 2)//플레이어가 트램펄린을 밟고 점프한 상황
		{
			P_info.Fdown = 0;
			P_info.Fjump -= 0.86;
			P_info.FposY -= P_info.Fjump;
		}





		static int check_1;

		// CameraMoving_1 on B_12
		if (Collision(rcTemp, rcP, Array_rcB[12], 1))
		{
			int a = 0;
			if (a == 0)
			{
				Camera_Move_Check_1 = 1;
				a = 1;
			}
		}

		// Falling B 13 ~ B 18
		for (int i = 1; i < 7; i++)
		{
			if (Collision(rcTemp, rcP, Array_rcB[i + 12], 1)) Array_C_Check_B_13_18[i] = 1;
		}


		// CameraMoving_2 on T_1
		if (Collision(rcTemp, rcP, Array_rcT[1], 1))
		{
			int a = 0;
			check_1 = 1;
			if (a == 0)
			{
				Camera_Move_Check_2 = 1;
				a = 1;
			}
		}

		// CameraMoving_3 on B_51
		if (Collision(rcTemp, rcP, Array_rcB[51], 1))
		{
			int a = 0;
			check_1 = 1;
			if (a == 0)
			{
				Camera_Move_Check_3 = 1;
				a = 1;
			}
		}


		// Boosts
		for (int i = 1; i < 10; i++)
		{
			if (IntersectRect(&rcTemp, &rcP, &Array_rcBoost[i])) Boost_Check = 1;
		}
		// Star 1 : 280    // Star 2 : 567    // Star 3 : 837
		if (P_On_Distance_FposX >= 947) End_Check = 1;
		else if (P_On_Distance_FposX >= 837) NumberOfStar = 3;
		else if (P_On_Distance_FposX >= 567) NumberOfStar = 2;
		else if (P_On_Distance_FposX >= 280) NumberOfStar = 1;

	
		


		////////////////////////////////////////////////////////////////


		if (P_info.Slow == true)//플레이어가 슬로우 능력을 쓰게 된다면
		{
			P_On_Distance_FposX += speed / 88;

			if (Boost_Check == 1)
			{
				static int a = 0;
				static unsigned int C_Check = 0;
				static unsigned int E_Check = 0;
				C_Check = GetTickCount();
				if (a == 0)
				{
					E_Check = GetTickCount();
					a = 1;
				}
				if (C_Check - g_S_Time >= E_Check - g_S_Time + 2700)
				{
					Boost_Check = 0;
					speed = 7 / 2;
					Bg_speed = 3 / 2;
				}
				else
				speed = 14 / 2;
				Bg_speed = 5 / 2;

			}
			if (Camera_Move_Check_3 == 0)
			{
				Bg_City_1_info.FposX -= Bg_speed / 2;//배경의 이동속도는 / 2 가 된다.
				Bg_City_2_info.FposX -= Bg_speed / 2;//배경의 이동속도는 / 2 가 된다.
			}
			else if (Bg_Change_Check == 1)
			{
				Bg_Bridge_1_info.FposX -= Bg_speed / 2;
				Bg_Bridge_2_info.FposX -= Bg_speed / 2;
			}


			if (Bg_Change_Check == 0)
			{
				// Boards
				for (int i = 1; i < 52; i++)
				{
					Array_B_info[i].FposX -= speed / 2;
				}

				// Obstacles
				for (int i = 1; i < 10; i++)
				{
					Array_O_F_info[i].FposX -= speed / 2;
				}

				// Trampolines
				for (int i = 1; i < 5; i++)
				{
					Array_T_info[i].FposX -= speed / 2;
				}

				// Boosts
				for (int i = 1; i < 2; i++)
				{
					Array_Boost_info[i].FposX -= speed / 2;
				}

			}

			else if (Bg_Change_Check == 1)
			{
				// Boards
				for (int i = 52; i < 100; i++)
				{
					Array_B_info[i].FposX -= speed / 2;
				}

				// Trampolines
				for (int i = 5; i < 10; i++)
				{
					Array_T_info[i].FposX -= speed / 2;
				}

				// Boosts
				for (int i = 2; i < 10; i++)
				{
					Array_Boost_info[i].FposX -= speed / 2;
				}

				// Birds
				for (int i = 1; i < 30; i++)
				{
					Array_O_B_info[i].FposX -= speed / 2;
				}

				// Flying Birds
				for (int i = 1; i < 30; i++)
				{
					Array_O_FB_info[i].FposX -= speed / 2;
				}
			}

			

			


			for (int i = 1; i < 7; i++)
			{
				if (Array_C_Check_B_13_18[i] == 1) Array_B_info[i + 12].FposY += 3 / 2;
			}



			
			if (Camera_Move_Check_1 == 1)

			{
				for (int i = 11; i < 20; i++)
				{
					Array_B_info[i].FposY -= 3;
				}

				if (Array_B_info[13].FposY <= 640) Camera_Move_Check_1 = 0;

			}

			else if (Camera_Move_Check_2 == 1)

			{
				for (int i = 28; i < 32; i++)
				{
					Array_B_info[i].FposY += 2;
				}

				for (int i = 1; i < 3; i++)
				{
					Array_T_info[i].FposY += 2;
				}

				Array_Boost_info[1].FposY += 2;

				if (Array_B_info[28].FposY >= 1590) Camera_Move_Check_2 = 0;
			}

			else if (Camera_Move_Check_3 == 1)

			{
				Jump_Check = 0;
				speed = 0;
				Bg_speed = 0;
				P_info.FposX += 7 / 2;
				if (IntersectRect(&rcTemp, &rcP, &Array_rcB[51]))
				{
					BlackOut_Check = 1;
				}
				if (P_info.FposX >= 1700)
				{
					Camera_Move_Check_3 = 0;
					Bg_Change_Check = 1;
					Jump_Check = 1;
					Bg_speed = 3;
				}
			}


		}
		else//슬로우 능력을 쓰지 않는다면
		{
			P_On_Distance_FposX += speed / 44; /////////////////////////////////////////////

			if (Boost_Check == 1)
			{
				static int a = 0;
				static unsigned int C_Check = 0;
				static unsigned int E_Check = 0;
				C_Check = GetTickCount();
				if (a == 0)
				{
					E_Check = GetTickCount();
					a = 1;
				}
				if (C_Check - g_S_Time >= E_Check - g_S_Time + 2700)
				{
					Boost_Check = 0;
					speed = 7;
					Bg_speed = 3;
				}
				else
					speed = 14;
					Bg_speed = 5;
			}
			if (Camera_Move_Check_3 == 0)
			{
				Bg_City_1_info.FposX -= Bg_speed;
				Bg_City_2_info.FposX -= Bg_speed;
			}
			if (Bg_Change_Check == 1)
			{
				Bg_Bridge_1_info.FposX -= Bg_speed;
				Bg_Bridge_2_info.FposX -= Bg_speed;
			}


			if (Bg_Change_Check == 0)
			{
				// Boards
				for (int i = 1; i < 52; i++)
				{
					Array_B_info[i].FposX -= speed;
				}

				// Obstacles
				for (int i = 1; i < 10; i++)
				{
					Array_O_F_info[i].FposX -= speed;
				}

				// Trampolines
				for (int i = 1; i < 5; i++)
				{
					Array_T_info[i].FposX -= speed;
				}

				// Boosts
				for (int i = 1; i < 2; i++)
				{
					Array_Boost_info[i].FposX -= speed;
				}

			}

			else if (Bg_Change_Check == 1)
			{
				// Boards
				for (int i = 52; i < 100; i++)
				{
					Array_B_info[i].FposX -= speed;
				}

				// Trampolines
				for (int i = 5; i < 10; i++)
				{
					Array_T_info[i].FposX -= speed;
				}

				// Boosts
				for (int i = 2; i < 10; i++)
				{
					Array_Boost_info[i].FposX -= speed;
				}

				// Birds
				for (int i = 1; i < 30; i++)
				{
					Array_O_B_info[i].FposX -= speed;
				}

				// Flying Birds
				for (int i = 1; i < 30; i++)
				{
					Array_O_FB_info[i].FposX -= speed;
				}
			}



			for (int i = 1; i < 7; i++)
			{
				if (Array_C_Check_B_13_18[i] == 1) Array_B_info[i + 12].FposY += 3;
			}




			if (Camera_Move_Check_1 == 1)

			{
				for (int i = 11; i < 20; i++)
				{
					Array_B_info[i].FposY -= 6;
				}

				if (Array_B_info[13].FposY <= 640) Camera_Move_Check_1 = 0;

			}

			else if (Camera_Move_Check_2 == 1)

			{
				for (int i = 28; i < 32; i++)
				{
					Array_B_info[i].FposY += 4;
				}

				for (int i = 1; i < 3; i++)
				{
					Array_T_info[i].FposY += 4;
				}

				Array_Boost_info[1].FposY += 4;

				if (Array_B_info[28].FposY >= 1590) Camera_Move_Check_2 = 0;
			}

			else if (Camera_Move_Check_3 == 1)

			{
				Jump_Check = 0;
				speed = 0;
				Bg_speed = 0;
				P_info.FposX += 7;
				if (IntersectRect(&rcTemp, &rcP, &Array_rcB[51]))
				{
					BlackOut_Check = 1;
				}
				if (P_info.FposX >= 1700)
				{
					Camera_Move_Check_3 = 0;
					Bg_Change_Check = 1;
				}
			}

			/*else if (Camera_Move_Check_3 == 0 || Bg_Change_Check == 1)

			{
				Bg_speed = 3;

			}*/

			
		}
	}
}

void Main_Game::Release()
{
	for (int k = 0; k < 1000; k++)
	{
		DeleteDC(m_Memhdc[k]);
	}
	for (int k = 0; k < 1000; k++)
	{
		DeleteObject(m_bitmap[k]);
	}

	DeleteDC(m_OFFhdc);

	ReleaseDC(g_hWnd, m_hdc);

	DeleteObject(SelectObject(m_OFFhdc, m_oldbitmap));
	DeleteObject(m_backbitmap);
}

int Collision(RECT rcTemp, RECT rcPlayer, RECT rcOb, int Method)
{
	IntersectRect(&rcTemp, &rcPlayer, &rcOb);

	SetRect(&rcTemp, 0, 0, rcTemp.right - rcTemp.left, rcTemp.bottom - rcTemp.top);

	if (Method == 1) // Down Collision
	{
		if (rcTemp.right > rcTemp.bottom)
		{
			if ((rcPlayer.bottom + rcPlayer.top) / 2 < (rcOb.bottom + rcOb.top) / 2)
			{
				P_info.FposY -= rcTemp.bottom - 3;
				return 1;
			}
			else
			{
				P_info.FposY += rcTemp.bottom;
				return 1;
			}
		}
		else return 0;

	}
	else if (Method == 2)  // Right Collision
	{
		if (rcTemp.right < rcTemp.bottom) {
			if ((rcPlayer.right + rcPlayer.left) / 2 < (rcOb.right + rcOb.left) / 2)
			{
				P_info.FposY -= rcTemp.right;
				return 1;
			}

			else
			{
				P_info.FposY += rcTemp.right;
				return 1;
			}
		}
		else return 0;
	}

	else if (Method == 3)  // Both Collision
	{
		if (rcTemp.right > rcTemp.bottom)
		{
			if ((rcPlayer.bottom + rcPlayer.top) / 2 < (rcOb.bottom + rcOb.top) / 2)
			{
				P_info.FposY -= rcTemp.bottom - 3;
				return 1;
			}
			else
			{
				P_info.FposY += rcTemp.bottom;
				return 1;
			}
			return 0;
		}

		else if (rcTemp.right < rcTemp.bottom)
		{
			if (rcTemp.right < rcTemp.bottom) {
				if ((rcPlayer.right + rcPlayer.left) / 2 < (rcOb.right + rcOb.left) / 2)
				{
					P_info.FposY -= rcTemp.right;
					return 1;
				}

				else
				{
					P_info.FposY += rcTemp.right;
					return 1;
				}
			}
			else return 0;
		}

	}

	else return 0;
}