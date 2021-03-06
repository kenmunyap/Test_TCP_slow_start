/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_Data.h"

typedef struct _CMOCK_sendData2RCV_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ReturnVal;
  int CallOrder;

} CMOCK_sendData2RCV_CALL_INSTANCE;

static struct mock_DataInstance
{
  int sendData2RCV_IgnoreBool;
  char sendData2RCV_FinalReturn;
  CMOCK_sendData2RCV_CALLBACK sendData2RCV_CallbackFunctionPointer;
  int sendData2RCV_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE sendData2RCV_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_Data_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.sendData2RCV_IgnoreBool)
    Mock.sendData2RCV_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.sendData2RCV_CallInstance, cmock_line, "Function 'sendData2RCV' called less times than expected.");
  if (Mock.sendData2RCV_CallbackFunctionPointer != NULL)
    Mock.sendData2RCV_CallInstance = CMOCK_GUTS_NONE;
}

void mock_Data_Init(void)
{
  mock_Data_Destroy();
}

void mock_Data_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.sendData2RCV_CallbackFunctionPointer = NULL;
  Mock.sendData2RCV_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

char sendData2RCV(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_sendData2RCV_CALL_INSTANCE* cmock_call_instance = (CMOCK_sendData2RCV_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.sendData2RCV_CallInstance);
  Mock.sendData2RCV_CallInstance = CMock_Guts_MemNext(Mock.sendData2RCV_CallInstance);
  if (Mock.sendData2RCV_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.sendData2RCV_FinalReturn;
    Mock.sendData2RCV_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.sendData2RCV_CallbackFunctionPointer != NULL)
  {
    return Mock.sendData2RCV_CallbackFunctionPointer(Mock.sendData2RCV_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'sendData2RCV' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'sendData2RCV' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'sendData2RCV' called later than expected.");
  return cmock_call_instance->ReturnVal;
}

void sendData2RCV_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, char cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_sendData2RCV_CALL_INSTANCE));
  CMOCK_sendData2RCV_CALL_INSTANCE* cmock_call_instance = (CMOCK_sendData2RCV_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.sendData2RCV_CallInstance = CMock_Guts_MemChain(Mock.sendData2RCV_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.sendData2RCV_IgnoreBool = (int)1;
}

void sendData2RCV_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_sendData2RCV_CALL_INSTANCE));
  CMOCK_sendData2RCV_CALL_INSTANCE* cmock_call_instance = (CMOCK_sendData2RCV_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.sendData2RCV_CallInstance = CMock_Guts_MemChain(Mock.sendData2RCV_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void sendData2RCV_StubWithCallback(CMOCK_sendData2RCV_CALLBACK Callback)
{
  Mock.sendData2RCV_CallbackFunctionPointer = Callback;
}

