
// Echiquier.cpp : Définit les comportements de classe pour l'application.
//

#include "stdafx.h"
//#include "afxwinappex.h"
#include "Echiquier.h"
#include "MainFrm.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEchiquierApp

BEGIN_MESSAGE_MAP(CEchiquierApp, CWinApp)
	ON_COMMAND(ID_APP_ABOUT, &CEchiquierApp::OnAppAbout)
END_MESSAGE_MAP()


// construction CEchiquierApp

CEchiquierApp::CEchiquierApp()
{

	// TODO? ajoutez ici du code de construction,
	// Placez toutes les initialisations significatives dans InitInstance
}

// Seul et unique objet CEchiquierApp

CEchiquierApp theApp;


// initialisation de CEchiquierApp

BOOL CEchiquierApp::InitInstance()
{
	// InitCommonControlsEx() est requis sur Windows XP si le manifeste de l'application
	// spécifie l'utilisation de ComCtl32.dll version? ou ultérieure pour activer les
	// styles visuels.  Dans le cas contraire, la création de fenêtres échouera.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// ?définir pour inclure toutes les classes de contrôles communs ?utiliser
	// dans votre application.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();

	// Initialisation standard
	// Si vous n'utilisez pas ces fonctionnalités et que vous souhaitez réduire la taille
	// de votre exécutable final, vous devez supprimer ci-dessous
	// les routines d'initialisation spécifiques dont vous n'avez pas besoin.
	// Changez la cl?de Registre sous laquelle nos paramètres sont enregistrés
	// TODO : modifiez cette chaîne avec des informations appropriées,
	// telles que le nom de votre sociét?ou organisation
	SetRegistryKey(_T("Applications locales générées par AppWizard"));

	// Pour créer la fenêtre principale, ce code crée un nouvel objet fenêtre frame
	// qu'il définit ensuite en tant qu'objet fenêtre principale de l'application
	CMainFrame* pFrame = new CMainFrame;
	if (!pFrame)
		return FALSE;
	m_pMainWnd = pFrame;
	// crée et charge le frame avec ses ressources
	pFrame->LoadFrame(IDR_MAINFRAME,
		WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE, NULL,
		NULL);
	//AfxGetApp()->LoadIconW(IDI_ICON1);






	// La seule fenêtre a ét?initialisée et peut donc être affichée et mise ?jour
	pFrame->ShowWindow(SW_SHOW);
	pFrame->UpdateWindow();
	// appelle DragAcceptFiles uniquement s'il y a un suffixe
	//  Dans une application SDI, cet appel doit avoir lieu juste après ProcessShellCommand
	return TRUE;
}


// gestionnaires de messages pour CEchiquierApp




// boîte de dialogue CAboutDlg utilisée pour la boîte de dialogue '?propos de' pour votre application

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Données de boîte de dialogue
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

// Implémentation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()

// Commande App pour exécuter la boîte de dialogue
void CEchiquierApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}

// gestionnaires de messages pour CEchiquierApp



