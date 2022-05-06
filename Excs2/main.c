#include "regDefs.h"
#include <SPIv1.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    // first initialize
    if(spi_init()){
        printf("ERROR: Initialization failed\n");
        return -1;
    }
 

    // do some register reading or writing, 
    // performance commands and get status information
    // reset CC1200
    cc1200_cmd(SRES);
    sleep(1);
    writeAllRegisters();
    cc1200_cmd(SRX);
	
    while(1){
        int packet_len = 0;
	int expect_packet_len = 10;
	char a;

	while(packet_len <= expect_packet_len){
	    cc1200_reg_read(NUM_RXBYTES, &packet_len);
	}

	for(int i = 0; i < packet_len; i++){
	    printf("The packet is: %c", cc1200_reg_read(0x3F, &a));
	}
    }
