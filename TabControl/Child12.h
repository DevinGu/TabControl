#pragma once

//From http://download.csdn.net/linyijiong/

// CChild12 �Ի���

class CChild12 : public CDialogEx
{
	DECLARE_DYNAMIC(CChild12)

public:
	CChild12(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CChild12();

// �Ի�������
	enum { IDD = IDD_Child12 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
