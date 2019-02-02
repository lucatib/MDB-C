#ifndef PREPROCESSORS
#define PREPROCESSORS

/*Response codes & rX()/tX() Return Values*/
#define ACK 0x0 /*ACKnowledge  PREVIOUSLY WAS 1*/
#define NAK 0xff /*Negative AcKnowledge  PREVIOUSLY WAS 2*/
#define RET 0xAA /*RETransmit   PREVIOUSLY WAS 3*/
#define NO_RESPONSE 0x4 /*NO RESPONSE Received*/
#define IGNORED 0x5 /*Received data should be ignored*/
#define RECEIVED 0x6 /*Received data should be looked at*/
#define DISORDERED 0x7 /*Received data is not what is expected*/
#define DISTORTED 0x8 /*Recieved data is distorted*/
/*Device Addresses*/
#define VMC_ADDRESS 0x00
#define CHANGER_ADDRESS 0x08
#define CASHLESS1_ADDRESS 0x10
#define COMMUNICATIONS_GATEWAY_ADDRESS 0x18
#define DISPLAY_ADDRESS 0x20
#define ENERGY_MANAGEMENT_SYSTEM_ADDRESS 0x28
#define BILL_VALIDATOR_ADDRESS 0x30
#define RESERVED_FOR_FUTURE_STANDARD_PERIPHERAL_ADDRESS 0x38
#define UNIVERSAL_SATELLITE_DEVICE1_ADDRESS 0x40
#define UNIVERSAL_SATELLITE_DEVICE2_ADDRESS 0x48
#define UNIVERSAL_SATELLITE_DEVICE3_ADDRESS 0x50
#define COIN_HOPPER1_ADDRESS 0x58
#define CASHLESS2_ADDRESS 0x60
#define AGE_VERIFICATION_DEVICE_ADDRESS 0x68
#define COIN_HOPPER2_ADDRESS 0x70
#define RESERVED_FOR_FUTURE_STANDARD_PERIPHERAL2_ADDRESS 0x78
#define RESERVED_FOR_FUTURE_STANDARD_PERIPHERAL3_ADDRESS 0x80
#define RESERVED_FOR_FUTURE_STANDARD_PERIPHERAL4_ADDRESS 0x88
#define RESERVED_FOR_FUTURE_STANDARD_PERIPHERAL5_ADDRESS 0x90
#define RESERVED_FOR_FUTURE_STANDARD_PERIPHERAL6_ADDRESS 0x98
#define RESERVED_FOR_FUTURE_STANDARD_PERIPHERAL7_ADDRESS 0xa0
#define RESERVED_FOR_FUTURE_STANDARD_PERIPHERAL8_ADDRESS 0xa8
#define RESERVED_FOR_FUTURE_STANDARD_PERIPHERAL9_ADDRESS 0xb0
#define RESERVED_FOR_FUTURE_STANDARD_PERIPHERAL10_ADDRESS 0xb8
#define RESERVED_FOR_FUTURE_STANDARD_PERIPHERAL11_ADDRESS 0xc0
#define RESERVED_FOR_FUTURE_STANDARD_PERIPHERAL12_ADDRESS 0xc8
#define RESERVED_FOR_FUTURE_STANDARD_PERIPHERAL13_ADDRESS 0xd0
#define RESERVED_FOR_FUTURE_STANDARD_PERIPHERAL14_ADDRESS 0xd8
#define EXPERIMENTAL_PERIPHERAL1_ADDRESS 0xe0
#define EXPERIMENTAL_PERIPHERAL2_ADDRESS 0xe8
#define VENDING_MACHINE_SPECIFIC_PERIPHERAL1_ADDRESS 0xf0
#define VENDING_MACHINE_SPECIFIC_PERIPHERAL2_ADDRESS 0xf8

/*chronoLogic() Commands (incoming)*/
#define TIMER_RESET 0
#define TIMER_UPDATE 1

/*chronoLogic() zReturn values (outgoing)*/
#define OK 0x0
#define T_INTER_BYTE 0x1 /*Recieved transmission completed & inter-byte time-out has been reached before a response*/
#define T_RESPONSE 0x2   /*Transmission Completed & Non-Response time reached before a response*/
#define T_BREAK 0x3      /*Bus Reset is taking place*/
#define T_SETUP 0x04     /*Bus Reset is over*/

#endif /*PREPROCESSORS*/