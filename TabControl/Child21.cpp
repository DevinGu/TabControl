// Child21.cpp : 实现文件
//From http://download.csdn.net/linyijiong/


#include "stdafx.h"
#include "TabControl.h"
#include "Child21.h"
#include "afxdialogex.h"


// CChild21 对话框

IMPLEMENT_DYNAMIC(CChild21, CDialogEx)

CChild21::CChild21(CWnd* pParent /*=NULL*/)
	: CDialogEx(CChild21::IDD, pParent)
{

}

CChild21::~CChild21()
{
}

void CChild21::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CChild21, CDialogEx)
END_MESSAGE_MAP()


// CChild21 消息处理程序
