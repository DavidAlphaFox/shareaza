//
// PageProfileCertificate.h
//
// Copyright (c) Shareaza Development Team, 2002-2007.
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

#if !defined(AFX_PAGEPROFILECERTIFICATE_H__5689507E_F056_41D6_BEF6_CF85E4223E99__INCLUDED_)
#define AFX_PAGEPROFILECERTIFICATE_H__5689507E_F056_41D6_BEF6_CF85E4223E99__INCLUDED_

#pragma once

#include "WndSettingsPage.h"


class CCertificateProfilePage : public CSettingsPage
{
// Construction
public:
	CCertificateProfilePage();
	virtual ~CCertificateProfilePage();

	DECLARE_DYNCREATE(CCertificateProfilePage)

// Dialog Data
public:
	//{{AFX_DATA(CCertificateProfilePage)
	enum { IDD = IDD_PROFILE_CERTIFICATE };
	CString	m_sGUID;
	CString	m_sTime;
	//}}AFX_DATA

// Overrides
public:
	//{{AFX_VIRTUAL(CCertificateProfilePage)
	public:
	virtual void OnOK();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CCertificateProfilePage)
	virtual BOOL OnInitDialog();
	afx_msg void OnGuidCreate();
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}

#endif // !defined(AFX_PAGEPROFILECERTIFICATE_H__5689507E_F056_41D6_BEF6_CF85E4223E99__INCLUDED_)
