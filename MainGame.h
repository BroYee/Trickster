#pragma once

#include "stdafx.h"

struct Main_Game
{
	void Initialize();
	void Ch_Render();
	void Bg_Render();
	void P_OutPut(bool menu);
	void Crash_Check(bool menu);
	//void Ob_Spawn();
	void Ch_Progress(bool menu);
	void Release();

	DWORD dwTimeObstacle;
};

//typedef struct Pobject
//{
//	float FposX;
//	float FposY;
//	float FsizeX;
//	float FsizeY;
//	float Fjump = 30;
//	float speed = 5;
//	float Fslowgauge;
//	float Fdown = 0;
//
//	int RandTime_obs;
//	int status;
//	int obTime;
//	int obstacle_check;
//	int BalCheck = 10;
//
//	bool Slow;
//	bool fallcheck = false;
//}ObInfo;

typedef struct Pobject
{
	float FposX;
	float FposY;
	float FsizeX;
	float FsizeY;
	float Fjump;
	float speed;
	float Fslowgauge;
	float Fdown;

	int RandTime_obs;
	int status;
	int obTime;
	int obstacle_check;
	int BalCheck;

	bool Slow;
	bool fallcheck;
}ObInfo;

static ObInfo P_info;
static ObInfo Bg_City_1_info;
static ObInfo Bg_City_2_info;

static float P_On_Distance_FposX;

static ObInfo Bg_Bridge_1_info;
static ObInfo Bg_Bridge_2_info;

static ObInfo Array_B_info[100];

static ObInfo Array_O_F_info[10];

static ObInfo Array_O_B_info[30];
static ObInfo Array_O_FB_info[30];

static ObInfo Array_T_info[10];

static ObInfo Array_Boost_info[10];

static int Array_C_Check_B_13_18[7];

static int Camera_Move_Check_1;
static int Camera_Move_Check_2;
static int Camera_Move_Check_3;
static int Camera_Move_Check_4;

static int Boost_Check;

static int BlackOut_Check;

static int Bg_Change_Check;

static int Jump_Check;

static int NumberOfStar;

static int End_Check;

static RECT rcP, rcTemp;

static RECT Array_rcB[100];
static RECT Array_rcO_F[10];
static RECT Array_rcO_B[30];
static RECT Array_rcO_FB[30];
static RECT Array_rcT[10];
static RECT Array_rcBoost[10];

static float speed;
static int Bg_speed;

int Collision(RECT rcTemp, RECT rcPlayer, RECT rcOb, int Method);