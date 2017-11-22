// Child22.cpp : 实现文件
//From http://download.csdn.net/linyijiong/


#include "stdafx.h"
#include "TabControl.h"
#include "Child22.h"
#include "afxdialogex.h"


// CChild22 对话框

IMPLEMENT_DYNAMIC(CChild22, CDialogEx)

CChild22::CChild22(CWnd* pParent /*=NULL*/)
	: CDialogEx(CChild22::IDD, pParent)
{

}

CChild22::~CChild22()
{
}

void CChild22::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CChild22, CDialogEx)
END_MESSAGE_MAP()


// CChild22 消息处理程序
