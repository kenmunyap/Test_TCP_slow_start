/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      CMock_Init(); \
      setUp(); \
      TestFunc(); \
      CMock_Verify(); \
  } \
  CMock_Destroy(); \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "mock_Data.h"
#include "mock_ack.h"
#include "mock_sequenceNumber.h"
#include "mock_timeOutTimer.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_successful_transmit_1st_packet(void);


//=======Mock Management=====
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  mock_Data_Init();
  mock_ack_Init();
  mock_sequenceNumber_Init();
  mock_timeOutTimer_Init();
}
static void CMock_Verify(void)
{
  mock_Data_Verify();
  mock_ack_Verify();
  mock_sequenceNumber_Verify();
  mock_timeOutTimer_Verify();
}
static void CMock_Destroy(void)
{
  mock_Data_Destroy();
  mock_ack_Destroy();
  mock_sequenceNumber_Destroy();
  mock_timeOutTimer_Destroy();
}

//=======Test Reset Option=====
void resetTest()
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_TCP.c";
  UnityBegin();
  RUN_TEST(test_successful_transmit_1st_packet, 12);

  return (UnityEnd());
}