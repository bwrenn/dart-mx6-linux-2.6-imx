cmd_drivers/mfd/built-in.o :=  arm-poky-linux-gnueabi-ld -EL    -r -o drivers/mfd/built-in.o drivers/mfd/stmpe.o drivers/mfd/stmpe-i2c.o drivers/mfd/wm8994-core.o drivers/mfd/wm8994-irq.o drivers/mfd/wm8994-regmap.o drivers/mfd/mc13xxx-core.o drivers/mfd/mc13xxx-spi.o drivers/mfd/mc13xxx-i2c.o drivers/mfd/mfd-core.o drivers/mfd/da9052-irq.o drivers/mfd/da9052-core.o drivers/mfd/da9052-i2c.o drivers/mfd/max17135-core.o drivers/mfd/si476x-core.o drivers/mfd/syscon.o drivers/mfd/mxc-hdmi-core.o 
