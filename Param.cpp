// Param.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "Echiquier.h"
#include "Param.h"


// Boîte de dialogue CParam

IMPLEMENT_DYNAMIC(CParam, CDialog)

CParam::CParam(CWnd* pParent /*=NULL*/)
	: CDialog(CParam::IDD, pParent)
  , m_nx(0)
  , m_ny(0)
  , m_paire(0)
{

}

CParam::~CParam()
{
}

void CParam::DoDataExchange(CDataExchange* pDX)
{
  CDialog::DoDataExchange(pDX);
  DDX_Text(pDX, IDC_NX, m_nx);
  DDV_MinMaxByte(pDX, m_nx, 4, 32);
  DDX_Text(pDX, IDC_NY, m_ny);
  DDV_MinMaxByte(pDX, m_ny, 4, 32);
  DDX_Radio(pDX, IDC_PAIRE1, m_paire);
}


BEGIN_MESSAGE_MAP(CParam, CDialog)

END_MESSAGE_MAP()


// Gestionnaires de messages de CParam


