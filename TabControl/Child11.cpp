// Child11.cpp : 实现文件
//From http://download.csdn.net/linyijiong/


#include "stdafx.h"
#include "TabControl.h"
#include "Child11.h"
#include "afxdialogex.h"


// CChild11 对话框

IMPLEMENT_DYNAMIC(CChild11, CDialogEx)

CChild11::CChild11(CWnd* pParent /*=NULL*/)
	: CDialogEx(CChild11::IDD, pParent)
{

}

CChild11::~CChild11()
{
}

void CChild11::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TAB1, m_tab2);
}


BEGIN_MESSAGE_MAP(CChild11, CDialogEx)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, &CChild11::OnTcnSelchangeTab1)
END_MESSAGE_MAP()


// CChild11 消息处理程序
BOOL CChild11::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。


	// TODO:  在此添加额外的初始化代码
	CRect tabRect;   // 标签控件客户区的位置和大小   

	m_tab2.InsertItem(0, _T("第二层1")); 
	m_tab2.InsertItem(1, _T("第二层2"));  
	m_CChild21.Create(IDD_Child21, &m_tab2);    
	m_CChild22.Create(IDD_Child22, &m_tab2);  

	m_tab2.GetClientRect(&tabRect); 
	tabRect.left += 1;
	tabRect.right -= 1;
	tabRect.top += 25;
	tabRect.bottom -= 1;
	m_CChild21.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_SHOWWINDOW);
	m_CChild22.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
	return TRUE; 
}

void CChild11::OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: Add your control notification handler code here   
	*pResult = 0;
	CRect tabRect;    // 标签控件客户区的Rect   

	m_tab2.GetClientRect(&tabRect);
	tabRect.left += 1;
	tabRect.right -= 1;
	tabRect.top += 25;
	tabRect.bottom -= 1;

	switch (m_tab2.GetCurSel())
	{
	case 0:
		m_CChild21.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_SHOWWINDOW);
		m_CChild22.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
		break;
	case 1:
		m_CChild21.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_HIDEWINDOW);
		m_CChild22.SetWindowPos(NULL, tabRect.left, tabRect.top, tabRect.Width(), tabRect.Height(), SWP_SHOWWINDOW);
		break;
	default:
		break;
	}
}
