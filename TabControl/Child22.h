#pragma once
//From http://download.csdn.net/linyijiong/


// CChild22 �Ի���

class CChild22 : public CDialogEx
{
	DECLARE_DYNAMIC(CChild22)

public:
	CChild22(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CChild22();

// �Ի�������
	enum { IDD = IDD_Child22 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
