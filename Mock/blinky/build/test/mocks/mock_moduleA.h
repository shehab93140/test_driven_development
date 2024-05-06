/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_MODULEA_H
#define _MOCK_MODULEA_H

#include "unity.h"
#include "moduleA.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_moduleA_Init(void);
void mock_moduleA_Destroy(void);
void mock_moduleA_Verify(void);




#define bar_IgnoreAndReturn(cmock_retval) bar_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void bar_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, unsigned char cmock_to_return);
#define bar_StopIgnore() bar_CMockStopIgnore()
void bar_CMockStopIgnore(void);
#define bar_ExpectAndReturn(cmock_retval) bar_CMockExpectAndReturn(__LINE__, cmock_retval)
void bar_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, unsigned char cmock_to_return);
typedef unsigned char (* CMOCK_bar_CALLBACK)(int cmock_num_calls);
void bar_AddCallback(CMOCK_bar_CALLBACK Callback);
void bar_Stub(CMOCK_bar_CALLBACK Callback);
#define bar_StubWithCallback bar_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif