#pragma once


// Bo�te de dialogue CParam

class CParam : public CDialog
{
	DECLARE_DYNAMIC(CParam)

public:
	CParam(CWnd* pParent = NULL);   // constructeur standard
	virtual ~CParam();

// Donn�es de bo�te de dialogue
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
  BYTE m_nx;
  BYTE m_ny;
  int m_paire;
};
