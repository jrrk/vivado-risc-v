BOARD_PART  ?= xilinx.com:vc707:part0:1.4
XILINX_PART ?= xc7vx485tffg1761-2
CFG_DEVICE  ?= BPIx16 -size 32
CFG_PART    ?= mt28gu01gaax1e-bpi-x16
MEMORY_SIZE ?= 0x40000000
ETHER_MAC   ?= 00 0a 35 00 00 00
ETHER_PHY   ?= sgmii
