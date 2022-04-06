// Copyright 2000-2002, CAE PowerTools, LLC http://www.caept.com
// NEfileOption.h: interface for the CNEfileOption class.
#if !defined(AFX_NEFILEOPTION_H__A161E971_900A_11D5_AA8D_00A0CC3F6EAC__INCLUDED_)
#define AFX_NEFILEOPTION_H__A161E971_900A_11D5_AA8D_00A0CC3F6EAC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "NEoption.h"

class CNEfileOption : public CNEoption
{
private:
  CString m_filename;
  CString m_text;
  BOOL m_advanced;
public:
  DECLARE_SERIAL(CNEfileOption);

  void SetFileName(const TCHAR *val) { m_filename = val; }
  CString &GetFileName() { return m_filename; }
  void SetAdvanced(BOOL val) { m_advanced = val;}
  BOOL GetAdvanced() { return m_advanced;}

  virtual const TCHAR *GetText();
};
#endif // !defined(AFX_NEFILEOPTION_H__A161E971_900A_11D5_AA8D_00A0CC3F6EAC__INCLUDED_)
