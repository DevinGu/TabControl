#pragma once

//From http://download.csdn.net/linyijiong/

// CChild12 对话框

class CChild12 : public CDialogEx
{
	DECLARE_DYNAMIC(CChild12)

public:
	CChild12(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CChild12();

// 对话框数据
	enum { IDD = IDD_Child12 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
