cmd_drivers/bluetooth/built-in.o :=  arm-poky-linux-gnueabi-ld -EL    -r -o drivers/bluetooth/built-in.o drivers/bluetooth/hci_uart.o drivers/bluetooth/btusb.o drivers/bluetooth/btintel.o 
