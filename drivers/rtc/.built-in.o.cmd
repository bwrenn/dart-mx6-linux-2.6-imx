cmd_drivers/rtc/built-in.o :=  arm-poky-linux-gnueabi-ld -EL    -r -o drivers/rtc/built-in.o drivers/rtc/rtc-lib.o drivers/rtc/hctosys.o drivers/rtc/systohc.o drivers/rtc/rtc-core.o drivers/rtc/rtc-ds1307.o drivers/rtc/rtc-mxc.o drivers/rtc/rtc-mc13xxx.o drivers/rtc/rtc-snvs.o 
