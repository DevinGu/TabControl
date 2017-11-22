// Child12.cpp : 实现文件
//From http://download.csdn.net/linyijiong/


#include "stdafx.h"
#include "TabControl.h"
#include "Child12.h"
#include "afxdialogex.h"


// CChild12 对话框

IMPLEMENT_DYNAMIC(CChild12, CDialogEx)

CChild12::CChild12(CWnd* pParent /*=NULL*/)
	: CDialogEx(CChild12::IDD, pParent)
{

}

CChild12::~CChild12()
{
}

void CChild12::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CChild12, CDialogEx)
END_MESSAGE_MAP()


// CChild12 消息处理程序
