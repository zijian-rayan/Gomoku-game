
// Echiquier.h�: fichier d'en-t�te principal pour l'application Echiquier
//
#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'stdafx.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"       // symboles principaux


// CEchiquierApp:
// Consultez Echiquier.cpp pour l'impl�mentation de cette classe
//

class CEchiquierApp : public CWinApp
{
public:
	CEchiquierApp();


// Substitutions
public:
	virtual BOOL InitInstance();

// Impl�mentation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEchiquierApp theApp;
