#Generated by VisualGDB (http://visualgdb.com)
#DO NOT EDIT THIS FILE MANUALLY UNLESS YOU ABSOLUTELY NEED TO
#USE VISUALGDB PROJECT PROPERTIES DIALOG INSTEAD

BINARYDIR := Debug

#Toolchain
CC := C:/SysGCC/linaro/bin/arm-linux-gnueabihf-gcc.exe
CXX := C:/SysGCC/linaro/bin/arm-linux-gnueabihf-g++.exe
LD := $(CXX)
AR := C:/SysGCC/linaro/bin/arm-linux-gnueabihf-ar.exe
OBJCOPY := C:/SysGCC/linaro/bin/arm-linux-gnueabihf-objcopy.exe

#Additional flags
PREPROCESSOR_MACROS := DEBUG
INCLUDE_DIRS := include ../libraries/live555/live_media/liveMedia/include ../libraries/live555/live_media/groupsock/include ../libraries/live555/live_media/BasicUsageEnvironment/include ../libraries/live555/live_media/UsageEnvironment/include ../libuvxx/include
LIBRARY_DIRS := 
LIBRARY_NAMES := 
ADDITIONAL_LINKER_INPUTS := 
MACOS_FRAMEWORKS := 
LINUX_PACKAGES := 

CFLAGS := -ggdb -ffunction-sections -O0  -std=c++1y -Wno-unused-parameter -Wextra -fno-common -pthread -D_DEBUG -fexceptions -fnon-call-exceptions -D_NO_ASYNCRTIMP
CXXFLAGS := -ggdb -ffunction-sections -O0  -std=c++1y -Wno-unused-parameter -Wextra -fno-common -pthread -D_DEBUG -fexceptions -fnon-call-exceptions -D_NO_ASYNCRTIMP
ASFLAGS := 
LDFLAGS := -Wl,-gc-sections
COMMONFLAGS := 
LINKER_SCRIPT := 

START_GROUP := -Wl,--start-group
END_GROUP := -Wl,--end-group

#Additional options detected from testing the toolchain
USE_DEL_TO_CLEAN := 1
CP_NOT_AVAILABLE := 1
IS_LINUX_PROJECT := 1