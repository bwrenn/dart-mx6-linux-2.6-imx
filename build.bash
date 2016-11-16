#!/bin/bash

source ~/bin/cmd_echo.bash
source /opt/fsl-imx-x11/4.1.15-1.2.0/environment-setup-cortexa9hf-vfp-neon-poky-linux-gnueabi

runcmd make mrproper

#runcmd make bwrenn_defconfig
runcmd make imx_v7_var_defconfig
mv bwrenn_config .config

runcmd make -j4 LOADADDR=0x10008000 uImage
runcmd make -j4 LOADADDR=0x10008000 modules
runcmd make -j4 dtbs
