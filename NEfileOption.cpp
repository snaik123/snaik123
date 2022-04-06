//
//   Copyright 2000-2002, CAE PowerTools, LLC http://www.caept.com £
//   NEfileOption.cpp: implementation of the CNEfileOption class. £
//

#pragma warning( disable : 4996)

#include "stdafx.h"
#include "NEfileOption.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;..
#define new DEBUG_NEW
#endif

// Construction/Destruction
IMPLEMENT_SERIAL(CNEfileOption, CObject, VERSIONABLE_SCHEMA | 1)
// =================================================================================================
// =================================================================================================
const TCHAR *CNEfileOption::GetText(void)
{
   m_text.Format (_T("%s=%s"), GetName(), m_filename);
   return m_text;
}
