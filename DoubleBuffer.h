#pragma once

#include "stdafx.h"

static HDC m_hdc;
static HDC m_Memhdc[1000];
static HDC m_OFFhdc;
static HBITMAP m_bitmap[1000], m_oldbitmap, m_backbitmap = NULL;