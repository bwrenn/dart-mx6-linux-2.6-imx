cmd_arch/arm/boot/dts/imx6ul-var-dart-sd_nand.dtb := mkdir -p arch/arm/boot/dts/ ; arm-poky-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6ul-var-dart-sd_nand.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6ul-var-dart-sd_nand.dtb.dts.tmp arch/arm/boot/dts/imx6ul-var-dart-sd_nand.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6ul-var-dart-sd_nand.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6ul-var-dart-sd_nand.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6ul-var-dart-sd_nand.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6ul-var-dart-sd_nand.dtb.d.pre.tmp arch/arm/boot/dts/.imx6ul-var-dart-sd_nand.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6ul-var-dart-sd_nand.dtb.d

source_arch/arm/boot/dts/imx6ul-var-dart-sd_nand.dtb := arch/arm/boot/dts/imx6ul-var-dart-sd_nand.dts

deps_arch/arm/boot/dts/imx6ul-var-dart-sd_nand.dtb := \
  arch/arm/boot/dts/imx6ul-var-dart.dtsi \
  arch/arm/boot/dts/include/dt-bindings/input/input.h \
  arch/arm/boot/dts/imx6ul.dtsi \
  arch/arm/boot/dts/include/dt-bindings/clock/imx6ul-clock.h \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6ul-pinfunc.h \
  arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/imx6ul-var-dart-sd_nand.dtb: $(deps_arch/arm/boot/dts/imx6ul-var-dart-sd_nand.dtb)

$(deps_arch/arm/boot/dts/imx6ul-var-dart-sd_nand.dtb):
