#ifndef TCP_H
#define TCP_H

char buffer[10000];

typedef struct{
	int sendbase;
	int nextseqnum;
	char dataBuffer[500];
}DataBlock;

typedef enum{
	SendData,
	Acknowledge,
	TimeOut,

}SlowStartState;

typedef struct{
	SlowStartState state_SS;
}SS_state;



void slowStart(SS_state *state,DataBlock *data);

#endif // TCP_H
