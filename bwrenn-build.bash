#!/bin/bash

source ~/bin/cmd-echo.bash
source /opt/fsl-imx-x11/4.1.15-1.2.0/environment-setup-cortexa9hf-vfp-neon-poky-linux-gnueabi

runcmd make mrproper
runcmd cp bwrenn-config arch/arm/configs/imx_v7_var_defconfig
runcmd make imx_v7_var_defconfig
runcmd make -j4 LOADADDR=0x10008000 uImage
runcmd make -j4 LOADADDR=0x10008000 modules
runcmd make -j4 dtbs
