#pragma once

//From http://download.csdn.net/linyijiong/

// CChild21 �Ի���

class CChild21 : public CDialogEx
{
	DECLARE_DYNAMIC(CChild21)

public:
	CChild21(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CChild21();

// �Ի�������
	enum { IDD = IDD_Child21 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
