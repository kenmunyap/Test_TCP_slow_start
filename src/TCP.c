#include <stdio.h>
#include "TCP.h"
#include "Data.h"
#include "sequenceNumber.h"
#include "timeOutTimer.h"
#include "ack.h"

// int sizeOFBuffer =  sizeof((data->dataBuffer)/char);


void slowStart(SS_state *state,DataBlock *data){
	int counter = 0;
	int checkDupACK = 0;
	
   data->sendbase = initial_sequenceNumber();
   data->nextseqnum = initial_sequenceNumber();
   
		switch(state->state_SS){
			case SendData:
				sendData2RCV();
				data->nextseqnum = sequenceNumber();
				if(countTimer() > 50){
					state->state_SS = TimeOut;
				}else{
					state->state_SS = Acknowledge;
				}
			break;
			
			case TimeOut:
				data->nextseqnum = data->sendbase;
				printf("fast retransmit");
			break;
			
			case Acknowledge:	
				checkDupACK = recieveRxACK();
				if(recieveRxACK() > data->sendbase){
					data->sendbase = data->nextseqnum;
				}else{
					if(recieveRxACK() <= checkDupACK){ 
						counter += 1;
						if(counter == 3){
							printf("fast retransmit");
						}else{
							data->sendbase = data->nextseqnum;
						}
					}
				}
			break;
		}

	

}