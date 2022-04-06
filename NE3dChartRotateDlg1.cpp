// NE3dChartRotateDlg1.cpp : implementation file
#include "stdafx.h"
#include "ne_editor.h"
#include "NE3dChartRotateDlg1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// =====================================================================================================================
//   NE3dChartRotateDlg dialog

// =====================================================================================================================
NE3dChartRotateDlg::NE3dChartRotateDlg(CWnd *pParent /* NULL */ ) : CDialog(NE3dChartRotateDlg::IDD, pParent)
{
   //{{AFX_DATA_INIT(NE3dChartRotateDlg)
   m_yangle = 0;
   m_zangle = 0;
   m_xangle = 0;
   //}}AFX_DATA_INIT
   m_xangle = -25;
   m_yangle = 0;
   m_zangle = 30;
}

// =====================================================================================================================

// =======================================================================================================================
void NE3dChartRotateDlg::DoDataExchange(CDataExchange *pDX)
{
   CDialog::DoDataExchange (pDX);
   //{{AFX_DATA_MAP(NE3dChartRotateDlg)
   DDX_Control(pDX, IDC_SPIN3, m_zspin);
   DDX_Control(pDX, IDC_SPIN2, m_yspin);
   DDX_Control(pDX, IDC_SPIN1, m_xspin);
   DDX_Control(pDX, IDC_BUTTON1, m_reset);
   DDX_Text(pDX, IDC_YANGLE, m_yangle);
   DDV_MinMaxInt(pDX, m_yangle, -90, 90);
   DDX_Text(pDX, IDC_ZANGLE, m_zangle);
   DDV_MinMaxInt(pDX, m_zangle, -90, 90);
   DDX_Text(pDX, IDC_XANGLE, m_xangle);
   DDV_MinMaxInt(pDX, m_xangle, -90, 90);
   //}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(NE3dChartRotateDlg, CDialog)
   //{{AFX_MSG_MAP(NE3dChartRotateDlg)
   ON_EN_CHANGE(IDC_ZANGLE, OnChangeEdit2)
   ON_EN_CHANGE(IDC_YANGLE, OnChangeEdit3)
   ON_EN_CHANGE(IDC_XANGLE, OnChangeEdit4)
   ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER1, OnCustomdrawSlider1)
//   ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER2, OnCustomdrawSlider2)
//   ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER3, OnCustomdrawSlider3)
   ON_BN_CLICKED(IDC_BUTTON1, OnReset)
   //}}AFX_MSG_MAP
END_MESSAGE_MAP()

// =====================================================================================================================
//   NE3dChartRotateDlg message handlers

// =====================================================================================================================
void NE3dChartRotateDlg::OnChangeEdit2()
{
}

// =====================================================================================================================

// =======================================================================================================================
void NE3dChartRotateDlg::OnChangeEdit3()
{
   // TODO: If this is a RICHEDIT control, the control will not
   // send this notification unless you override the CDialog::OnInitDialog()
   // function and call CRichEditCtrl().SetEventMask()
   // with the ENM_CHANGE flag ORed into the mask.
   // TODO: Add your control notification handler code here
}

// =====================================================================================================================

// =======================================================================================================================
void NE3dChartRotateDlg::OnChangeEdit4()
{
   // TODO: If this is a RICHEDIT control, the control will not
   // send this notification unless you override the CDialog::OnInitDialog()
   // function and call CRichEditCtrl().SetEventMask()
   // with the ENM_CHANGE flag ORed into the mask.
   // TODO: Add your control notification handler code here
}

// =====================================================================================================================

// =======================================================================================================================
void NE3dChartRotateDlg::OnReset()
{
   m_xangle = -25;
   m_yangle = 0;
   m_zangle = 30;
   EndDialog (1);
}

// =====================================================================================================================

// =======================================================================================================================
void NE3dChartRotateDlg::OnCustomdrawSlider1(NMHDR *pNMHDR, LRESULT *pResult)
{
   // TODO: Add your control notification handler code here
   *pResult = 0;
}

// =====================================================================================================================

// =======================================================================================================================
void NE3dChartRotateDlg::OnCustomdrawSlider2(NMHDR *pNMHDR, LRESULT *pResult)
{
   // TODO: Add your control notification handler code here
   *pResult = 0;
}

// =====================================================================================================================

// =======================================================================================================================
void NE3dChartRotateDlg::OnCustomdrawSlider3(NMHDR *pNMHDR, LRESULT *pResult)
{
   // TODO: Add your control notification handler code here
   *pResult = 0;
}

// =====================================================================================================================

// =======================================================================================================================
BOOL NE3dChartRotateDlg::OnInitDialog(void)
{
   CDialog::OnInitDialog ();

   // get ptr to control
   CSpinButtonCtrl   *p = (CSpinButtonCtrl *)GetDlgItem (IDC_SPIN1);
   CEdit             *pedit = (CEdit *)GetDlgItem (IDC_EDIT2);
   CSpinButtonCtrl   *p2 = (CSpinButtonCtrl *)GetDlgItem (IDC_SPIN2);
   CEdit             *pedit2 = (CEdit *)GetDlgItem (IDC_EDIT3);
   CSpinButtonCtrl   *p3 = (CSpinButtonCtrl *)GetDlgItem (IDC_SPIN3);
   CEdit             *pedit3 = (CEdit *)GetDlgItem (IDC_EDIT4);

   ASSERT (pedit);
   ASSERT (pedit2);
   ASSERT (pedit3);

   // set range
   p->SetRange32 (-90, 90);
   p2->SetRange32 (-90, 90);
   p3->SetRange32 (-90, 90);

   p->SetBuddy (pedit);
   p2->SetBuddy (pedit2);
   p3->SetBuddy (pedit3);

   UDACCEL  delta;

   delta.nInc = 0;
   delta.nSec = 1;

   return(TRUE);  // return TRUE unless you set the focus to a control
   // EXCEPTION: OCX Property Pages should return FALSE
}
