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

    cc1200_cmd(SRES);  // reset CC1200
    sleep(1);
    writeAllRegisters();  //write the register according to the desired mode
    cc1200_cmd(SRX);
    // get status information
    cc1200_cmd(SNOP);  //refreshes the current status
    printf("INFO: Status:%s\n", get_status_cc1200_str());
	
    while(1){
        int packet_len = 0;
	int expect_packet_len = 10;  //in bytes
	char a;

	while(packet_len <= expect_packet_len){
	    /* From the datasheet: "The NUM_RXBYTES register can be polled at a given rate to get
information about the number of bytes in the RX FIFO."
	    */
	    cc1200_reg_read(NUM_RXBYTES, &packet_len);
	}

	for(int i = 0; i < packet_len; i++){
	    printf("The packet is: %c", cc1200_reg_read(0x3F, &a));
	}
    }
