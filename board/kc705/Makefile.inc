BOARD_PART  ?= xilinx.com:kc705:part0:1.6
XILINX_PART ?= xc7k325tffg900-2
CFG_DEVICE  ?= BPIx16 -size 32
CFG_PART    ?= 28f00ap30t-bpi-x16
MEMORY_SIZE ?= 0x40000000
ETHER_MAC   ?= 00 0a 35 00 00 05
ETHER_PHY   ?= gmii-rxid
