//
// PageProfileAvatar.h
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

#if !defined(AFX_PAGEPROFILEAVATAR_H__F992B281_9427_4D92_9B68_C4AB87116BF6__INCLUDED_)
#define AFX_PAGEPROFILEAVATAR_H__F992B281_9427_4D92_9B68_C4AB87116BF6__INCLUDED_

#pragma once

#include "WndSettingsPage.h"


class CAvatarProfilePage : public CSettingsPage
{
// Construction
public:
	CAvatarProfilePage();
	virtual ~CAvatarProfilePage();

	DECLARE_DYNCREATE(CAvatarProfilePage)

// Dialog Data
public:
	//{{AFX_DATA(CAvatarProfilePage)
	enum { IDD = IDD_PROFILE_AVATAR };
	CButton	m_wndRemove;
	CStatic	m_wndPreview;
	//}}AFX_DATA

// Attributes
protected:
	CString		m_sAvatar;
	CBitmap		m_bmAvatar;

// Operations
protected:
	void		PrepareImage();

// Overrides
public:
	//{{AFX_VIRTUAL(CAvatarProfilePage)
	public:
	virtual void OnOK();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAvatarProfilePage)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg void OnAvatarBrowse();
	afx_msg void OnAvatarRemove();
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}

#endif // !defined(AFX_PAGEPROFILEAVATAR_H__F992B281_9427_4D92_9B68_C4AB87116BF6__INCLUDED_)
