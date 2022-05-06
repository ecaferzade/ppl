#define  IOCFG3             0x00 
#define  IOCFG2             0x01 
#define  IOCFG1             0x02 
#define  IOCFG0             0x03 
#define  SYNC3              0x04 
#define  SYNC2              0x05 
#define  SYNC1              0x06 
#define  SYNC0              0x07 
#define  SYNC_CFG1          0x08 
#define  SYNC_CFG0          0x09 
#define  DEVIATION_M        0x0A 
#define  MODCFG_DEV_E       0x0B 
#define  DCFILT_CFG         0x0C 
#define  PREAMBLE_CFG1      0X0D 
#define  PREAMBLE_CFG0      0x0E 
#define  IQIC               0x0F 
#define  CHAN_BW            0x10 
#define  MDMCFG1            0x11 
#define  MDMCFG0            0x12 
#define  SYMBOL_RATE2       0x13 
#define  SYMBOL_RATE1       0x14 
#define  SYMBOL_RATE0       0x15 
#define  AGC_REF            0x16 
#define  AGC_CS_THR         0x17 
#define  AGC_GAIN_ADJUST    0x18 
#define  AGC_CFG3           0x19 
#define  AGC_CFG2           0x1A 
#define  AGC_CFG1           0x1B 
#define  AGC_CFG0           0x1C 
#define  FIFO_CFG           0X1D 
#define  DEV_ADDR           0x1E 
#define  SETTLING_CFG       0x1F 
#define  FS_CFG             0x20 
#define  WOR_CFG1           0x21 
#define  WOR_CFG0           0x22 
#define  WOR_EVENT0_MSB     0x23 
#define  WOR_EVENT0_LSB     0x24 
#define  RXDCM_TIME         0x25 
#define  PKT_CFG2           0x26 
#define  PKT_CFG1           0x27 
#define  PKT_CFG0           0x28 
#define  RFEND_CFG1         0x29 
#define  RFEND_CFG0         0x2A 
#define  PA_CFG1            0x2B 
#define  PA_CFG0            0x2C 
#define  ASK_CFG            0X2D 
#define  PKT_LEN            0x2E 
#define  IF_MIX_CFG         0x2F00
#define  FREQOFF_CFG        0x2F01
#define  TOC_CFG            0x2F02
#define  MARC_SPARE         0x2F03
#define  ECG_CFG            0x2F04
#define  MDMCFG2            0x2F05
#define  EXT_CTRL           0x2F06
#define  RCCAL_FINE         0x2F07
#define  RCCAL_COARSE       0x2F08
#define  RCCAL_OFFSET       0x2F09
#define  FREQOFF1           0x2F0A
#define  FREQOFF0           0x2F0B
#define  FREQ2              0x2F0C
#define  FREQ1              0x2F0D
#define  FREQ0              0x2F0E
#define  IF_ADC2            0x2F0F
#define  IF_ADC1            0x2F10
#define  IF_ADC0            0x2F11
#define  FS_DIG1            0x2F12
#define  FS_DIG0            0x2F13
#define  FS_CAL3            0x2F14
#define  FS_CAL2            0x2F15
#define  FS_CAL1            0x2F16
#define  FS_CAL0            0x2F17
#define  FS_CHP             0x2F18
#define  FS_DIVTWO          0x2F19
#define  FS_DSM1            0x2F1A
#define  FS_DSM0            0x2F1B
#define  FS_DVC1            0x2F1C
#define  FS_DVC0            0x2F1D
#define  FS_LBI             0x2F1E
#define  FS_PFD             0x2F1F
#define  FS_PRE             0x2F20
#define  FS_REG_DIV_CML     0x2F21
#define  FS_SPARE           0x2F22
#define  FS_VCO4            0x2F23
#define  FS_VCO3            0x2F24
#define  FS_VCO2            0x2F25
#define  FS_VCO1            0x2F26
#define  FS_VCO0            0x2F27
#define  GBIAS6             0x2F28
#define  GBIAS5             0x2F29
#define  GBIAS4             0x2F2A
#define  GBIAS3             0x2F2B
#define  GBIAS2             0x2F2C
#define  GBIAS1             0x2F2D
#define  GBIAS0             0x2F2E
#define  IFAMP              0x2F2F
#define  LNA                0x2F30
#define  RXMIX              0x2F31
#define  XOSC5              0x2F32
#define  XOSC4              0x2F33
#define  XOSC3              0x2F34
#define  XOSC2              0x2F35
#define  XOSC1              0x2F36
#define  XOSC0              0x2F37
#define  ANALOG_SPARE       0x2F38
#define  PA_CFG3            0x2F39
#define  WOR_TIME1          0x2F64
#define  WOR_TIME0          0x2F65
#define  WOR_CAPTURE1       0x2F66
#define  WOR_CAPTURE0       0x2F67
#define  BIST               0x2F68
#define  DCFILTOFFSET_I1    0x2F69
#define  DCFILTOFFSET_I0    0x2F6A
#define  DCFILTOFFSET_Q1    0x2F6B
#define  DCFILTOFFSET_Q0    0x2F6C
#define  IQIE_I1            0x2F6D
#define  IQIE_I0            0x2F6E
#define  IQIE_Q1            0x2F6F
#define  IQIE_Q0            0x2F70
#define  RSSI1              0x2F71
#define  RSSI0              0x2F72
#define  MARCSTATE          0x2F73
#define  LQI_VAL            0x2F74
#define  PQT_SYNC_ERR       0x2F75
#define  DEM_STATUS         0x2F76
#define  FREQOFF_EST1       0x2F77
#define  FREQOFF_EST0       0x2F78
#define  AGC_GAIN3          0x2F79
#define  AGC_GAIN2          0x2F7A
#define  AGC_GAIN1          0x2F7B
#define  AGC_GAIN0          0x2F7C
#define  CFM_RX_DATA_OUT    0x2F7D
#define  CFM_TX_DATA_IN     0x2F7E
#define  ASK_SOFT_RX_DATA   0x2F7F
#define  RNDGEN             0x2F80
#define  MAGN2              0x2F81
#define  MAGN1              0x2F82
#define  MAGN0              0x2F83
#define  ANG1               0x2F84
#define  ANG0               0x2F85
#define  CHFILT_I2          0x2F86
#define  CHFILT_I1          0x2F87
#define  CHFILT_I0          0x2F88
#define  CHFILT_Q2          0x2F89
#define  CHFILT_Q1          0x2F8A
#define  CHFILT_Q0          0x2F8B
#define  GPIO_STATUS        0x2F8C
#define  FSCAL_CTRL         0x2F8D
#define  PHASE_ADJUST       0x2F8E
#define  PARTNUMBER         0x2F8F
#define  PARTVERSION        0x2F90
#define  SERIAL_STATUS      0x2F91
#define  MODEM_STATUS1      0x2F92
#define  MODEM_STATUS0      0x2F93
#define  MARC_STATUS1       0x2F94
#define  MARC_STATUS0       0x2F95
#define  PA_IFAMP_TEST      0x2F96
#define  FSRF_TEST          0x2F97
#define  PRE_TEST           0x2F98
#define  PRE_OVR            0x2F99
#define  ADC_TEST           0x2F9A
#define  DVC_TEST           0x2F9B
#define  ATEST              0x2F9C
#define  ATEST_LVDS         0x2F9D
#define  ATEST_MODE         0x2F9E
#define  XOSC_TEST1         0x2F9F
#define  XOSC_TEST0         0x2FA0
#define  AES                0x2FA1
#define  MDM_TEST           0x2FA2
#define  RXFIRST            0x2FD2
#define  TXFIRST            0x2FD3
#define  RXLAST             0x2FD4
#define  TXLAST             0x2FD5
#define  NUM_TXBYTES        0x2FD6
#define  NUM_RXBYTES        0x2FD7
#define  FIFO_NUM_TXBYTES   0x2FD8
#define  FIFO_NUM_RXBYTES   0x2FD9
#define  RXFIFO_PRE_BUF     0x2FDA

typedef struct {
        int adr;  /**< Register Adresse  */
        int val;  /**< Wert des Registers */
} REG_TYPE;

#define MAX_REG  47
#define MAX_EXT_REG  130
