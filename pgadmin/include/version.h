//////////////////////////////////////////////////////////////////////////
//
// pgAdmin III - PostgreSQL Tools
//
// Copyright (C) 2002 - 2015, The pgAdmin Development Team
// This software is released under the PostgreSQL Licence
//
// version.h - pgAdmin version info
//
//////////////////////////////////////////////////////////////////////////

#ifndef VERSION_H
#define VERSION_H

// Application Versions
#define VERSION_STR     wxT("1.22.0 RC 1")
#define VERSION_NUM     1,22,0,4
#define VERSION_PACKAGE 1.22.0-rc1

#define PRERELEASE 1
// #define BUILD "..."

#ifdef RC_INVOKED

#define wxT(str) str
#define _(str)   str

#include "winver.h"
#ifdef __WXDEBUG__
#define VER_DEBUG               VS_FF_DEBUG
#else
#define VER_DEBUG               0
#endif

#if PRERELEASE
#define VER_PRERELEASE          VS_FF_PRERELEASE
#else
#define VER_PRERELEASE          0
#endif
#endif
#define VERSION_WITH_DATE       wxT("Version ") VERSION_STR wxT(" (") __TDATE__ wxT(")")
#define VERSION_WITHOUT_DATE    wxT("Version ") VERSION_STR

#endif
