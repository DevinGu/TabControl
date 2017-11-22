#pragma once
//From http://download.csdn.net/linyijiong/


// CChild22 对话框

class CChild22 : public CDialogEx
{
	DECLARE_DYNAMIC(CChild22)

public:
	CChild22(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CChild22();

// 对话框数据
	enum { IDD = IDD_Child22 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
