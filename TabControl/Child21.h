#pragma once

//From http://download.csdn.net/linyijiong/

// CChild21 对话框

class CChild21 : public CDialogEx
{
	DECLARE_DYNAMIC(CChild21)

public:
	CChild21(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CChild21();

// 对话框数据
	enum { IDD = IDD_Child21 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
