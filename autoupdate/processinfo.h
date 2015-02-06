////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	processinfo   version:  1.0   ? date: 04/24/2009
//  -------------------------------------------------------------
//  
//  -------------------------------------------------------------
//	Copyright (C) 2009 - All Rights Reserved
//	Written By Jack Liu
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef PROCESSINFO_H
#define PROCESSINFO_H
//////////////////////////////////////////////////////////////////////////
#include <atlmisc.h>
/************************************************************************/
/* update process info struct
*/
/************************************************************************/
struct ProcessInfo
{
	enum{TOTAL_STEPS,CUR_STEP};
	ProcessInfo():progress(0),descr(CUR_STEP){}

	CString	filename;
	UINT		progress;
	UINT		descr;
};
#endif