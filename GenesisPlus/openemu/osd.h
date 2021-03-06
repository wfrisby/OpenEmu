/*
 Copyright (c) 2009, OpenEmu Team
 
 
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright
 notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright
 notice, this list of conditions and the following disclaimer in the
 documentation and/or other materials provided with the distribution.
 * Neither the name of the OpenEmu Team nor the
 names of its contributors may be used to endorse or promote products
 derived from this software without specific prior written permission.
 
 THIS SOFTWARE IS PROVIDED BY OpenEmu Team ''AS IS'' AND ANY
 EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL OpenEmu Team BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _OSD_H_
#define _OSD_H_

#define MAX_INPUTS 8
#define MAX_KEYS 8
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include "types.h"
#include "config.h"
#include "shared.h"
#include "fileio.h"

#define strnicmp strncasecmp

//TO DO: define these later
#define DEFAULT_PATH  "/genplus"
#define GG_ROM        "/genplus/ggenie.bin"
#define AR_ROM        "/genplus/areplay.bin"
#define OS_ROM        "/genplus/bios.bin"
#define SK_ROM        "/genplus/sk.bin"
#define SK_UPMEM      "/genplus/sk2chip.bin"

void openemu_input_UpdateEmu();

#define osd_input_Update() openemu_input_UpdateEmu()

#endif /* _VDP_H_ */