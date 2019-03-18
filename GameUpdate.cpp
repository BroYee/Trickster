#include "stdafx.h"
#include "GameUpdate.h"
#include "MainGame.h"

void GM_U::Gm_Update(bool menu)
{
	Main_Game MG;

	MG.Bg_Render();
	MG.Ch_Progress(menu);
	MG.Crash_Check(menu);
	MG.Ch_Render();
	MG.P_OutPut(menu);
}
