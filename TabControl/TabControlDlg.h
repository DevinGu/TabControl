//From http://download.csdn.net/linyijiong/

// TabControlDlg.h : 头文件
//

#pragma once
#include "afxcmn.h"
#include "Child11.h"
#include "Child12.h"


// CTabControlDlg 对话框
class CTabControlDlg : public CDialogEx
{
// 构造
public:
	CTabControlDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_TABCONTROL_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
