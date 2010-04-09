/*
 Copyright (c) 2009, OpenEmu Team
 All rights reserved.
 
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

#import <Cocoa/Cocoa.h>

@class GameCore, OECorePlugin;
@class OEGameCoreController;
@class GameAudio;

@interface OpenEmuQC : QCPlugIn
{
    // init stuff
    NSArray              *plugins;
    NSArray              *validExtensions;
    OEGameCoreController *gameCoreController;
    GameCore             *gameCore;
    GameAudio            *gameAudio;
    GLuint               gameTexture;

    BOOL loadedRom, userPaused;
    NSMutableArray       *persistantControllerData;
    NSRecursiveLock      *gameLock;
}

/*
Declare here the Obj-C 2.0 properties to be used as input and output ports for the plug-in e.g.
You can access their values in the appropriate plug-in methods using self.inputFoo or self.inputBar
*/

@property(assign) NSString *inputRom;
@property(assign) NSArray  *inputControllerData;
@property(assign) double    inputVolume;
@property(assign) BOOL      inputPauseEmulation;
@property(assign) NSString *inputSaveStatePath;
@property(assign) NSString *inputLoadStatePath;
@property(assign) id <QCPlugInOutputImageProvider> outputImage;
@property(readwrite) BOOL    loadedRom, userPaused;
@end

@interface OpenEmuQC (Execution)
- (BOOL)controllerDataValidate:(NSArray*)cData;
- (void)handleControllerData;
- (void)refresh;
- (OECorePlugin *)pluginForType:(NSString *)extension;
- (BOOL)loadRom:(NSString*)romPath;
- (void)saveState:(NSString *)fileName;
- (BOOL)loadState:(NSString *)fileName;

@end
