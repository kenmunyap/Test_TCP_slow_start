#include "unity.h"
#include "TCP.h"
#include "mock_Data.h"
#include "mock_sequenceNumber.h"
#include "mock_timeOutTimer.h"
#include "mock_ack.h"

void setUp(void){}

void tearDown(void){}

void test_successful_transmit_1st_packet(){
	SS_state state = {.state_SS = SendData};
	DataBlock data;
	
	
	initial_sequenceNumber_IgnoreAndReturn(1);
	sendData2RCV_IgnoreAndReturn(1);
	sequenceNumber_ExpectAndReturn(501);
	countTimer_IgnoreAndReturn(54);
	// recieveRxACK_IgnoreAndReturn(501);
	slowStart(&state,&data);
	// TEST_ASSERT_EQUAL(501,data.sendbase);
}
