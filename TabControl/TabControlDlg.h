//From http://download.csdn.net/linyijiong/

// TabControlDlg.h : ͷ�ļ�
//

#pragma once
#include "afxcmn.h"
#include "Child11.h"
#include "Child12.h"


// CTabControlDlg �Ի���
class CTabControlDlg : public CDialogEx
{
// ����
public:
	CTabControlDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_TABCONTROL_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_tab1;
	CChild11 m_CChild11;
	CChild12 m_CChild12;
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};
