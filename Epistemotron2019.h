
// Epistemotron2019.h : main header file for the Epistemotron2019 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CEpistemotron2019App:
// See Epistemotron2019.cpp for the implementation of this class
//

class CEpistemotron2019App : public CWinAppEx
{
public:
	CEpistemotron2019App() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEpistemotron2019App theApp;
