//
// DlgFolderScan.h
//
// Copyright (c) Shareaza Development Team, 2002-2009.
// This file is part of SHAREAZA (shareaza.sourceforge.net)
//
// Shareaza is free software; you can redistribute it
// and/or modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2 of
// the License, or (at your option) any later version.
//
// Shareaza is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Shareaza; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

#pragma once

#include "DlgSkinDialog.h"


class CFolderScanDlg : public CSkinDialog
{
public:
	CFolderScanDlg(CWnd* pParent = NULL);

	enum { IDD = IDD_FOLDER_SCAN };

	static void Update(LPCTSTR pszName, DWORD nVolume);

protected:
	static	CCriticalSection	m_pSection;
	static	CFolderScanDlg*		m_pDialog;

	CStatic	m_wndVolume;
	CStatic	m_wndFiles;
	CStatic	m_wndFile;

	CString	m_sName;
	DWORD	m_nCookie;
	DWORD	m_nFiles;
	DWORD	m_nVolume;

	virtual void DoDataExchange(CDataExchange* pDX);
	virtual BOOL OnInitDialog();

	afx_msg void OnDestroy();
	afx_msg void OnTimer(UINT_PTR nIDEvent);

	DECLARE_MESSAGE_MAP()
};
