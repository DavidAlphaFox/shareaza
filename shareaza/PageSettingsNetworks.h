//
// PageSettingsNetworks.h
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

#if !defined(AFX_PAGESETTINGSNETWORKS_H__3E08D59B_5504_443E_BDB1_47233D685312__INCLUDED_)
#define AFX_PAGESETTINGSNETWORKS_H__3E08D59B_5504_443E_BDB1_47233D685312__INCLUDED_

#pragma once

#include "WndSettingsPage.h"


class CNetworksSettingsPage : public CSettingsPage
{
// Construction
public:
	CNetworksSettingsPage();
	virtual ~CNetworksSettingsPage();

	DECLARE_DYNCREATE(CNetworksSettingsPage)

// Dialog Data
public:
	//{{AFX_DATA(CNetworksSettingsPage)
	enum { IDD = IDD_SETTINGS_NETWORKS };
	CStatic	m_wndEDSetup;
	CStatic	m_wndG1Setup;
	CStatic	m_wndG2Setup;
	BOOL	m_bG2Enable;
	BOOL	m_bG1Enable;
	BOOL	m_bEDEnable;
	//}}AFX_DATA

// Overrides
public:
	//{{AFX_VIRTUAL(CNetworksSettingsPage)
	public:
	virtual BOOL OnSetActive();
	virtual void OnOK();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CNetworksSettingsPage)
	virtual BOOL OnInitDialog();
	afx_msg void OnG2Enable();
	afx_msg void OnG1Enable();
	afx_msg void OnEd2kEnable();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}

#endif // !defined(AFX_PAGESETTINGSNETWORKS_H__3E08D59B_5504_443E_BDB1_47233D685312__INCLUDED_)
