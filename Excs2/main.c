// ADD .h FILES !!!!!


int main(int argc, char *argv[]){

	// first initialize
  if(spi_init()){
    printf("ERROR: Initialization failed\n");
    return -1;}
 
  

  // do some register reading or writing, 
  // performance commands and get status information
 
  // reset CC1200
  cc1200_cmd(SRES);


  sleep(1);

  writeAllRegisters();



  cc1200_cmd(SRX);
