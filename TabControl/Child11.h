#pragma once
#include "afxcmn.h"
#include "Child21.h"
#include "Child22.h"
//From http://download.csdn.net/linyijiong/


// CChild11 �Ի���

class CChild11 : public CDialogEx
{
	DECLARE_DYNAMIC(CChild11)

public:
	CChild11(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CChild11();

// �Ի�������
	enum { IDD = IDD_Child11 };

protected:
	HICON m_hIcon;
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_tab2;
	CChild21 m_CChild21;
	CChild22 m_CChild22;
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};
