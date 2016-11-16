#!/bin/bash

source ~/bin/cmd_echo.bash

cp arch/arm/boot/uImage /media/bwrenn/Boot\ var-so
sudo make ARCH=arm modules_install INSTALL_MOD_PATH=/media/bwrenn/93bc9817-7ec3-4c47-904d-d767511d7ec7
cp arch/arm/boot/dts/*var*.dtb /media/bwrenn/Boot\ var-so
