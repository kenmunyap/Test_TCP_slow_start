#include "unity.h"
#include "mock_timeOutTimer.h"
#include "mock_sequenceNumber.h"
#include "mock_ack.h"
#include "mock_Data.h"
#include "TCP.h"


void setUp(void){}



void tearDown(void){}



void test_successful_transmit_1st_packet(){

 SS_state state = {.state_SS = SendData};

 DataBlock data;





 initial_sequenceNumber_CMockIgnoreAndReturn(17, 1);

 sendData2RCV_CMockIgnoreAndReturn(18, 1);

 sequenceNumber_CMockExpectAndReturn(19, 501);

 countTimer_CMockIgnoreAndReturn(20, 54);



 slowStart(&state,&data);



}
