/**
  @file runas.h

  Run program as another user.
 
  Copyright (C) 2004-2005 Nokia Corporation. All rights reserved.
  
  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  version 2 as published by the Free Software Foundation.
  
  This program is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  General Public License for more details.
   
  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
  02110-1301 USA
*/

#ifndef RUNAS_H_
#define RUNAS_H_

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <ctype.h>
#include <osso-log.h>
#include <pwd.h>
#include <grp.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef FALSE
#define FALSE 0
#endif
#ifndef TRUE
#define TRUE 1
#endif

#define INVALID_UID -1

	/*
#define LESSER_UID_ENVIRONMENT_VARIABLE "RUNAS_LESSER_UID"
*/

#ifdef __cplusplus
}
#endif
#endif /* RUNAS_H_ */
