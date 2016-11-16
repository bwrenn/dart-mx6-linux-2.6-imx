#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfa985410, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6dcd56b4, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xf7010557, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xef2b0194, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xafc23297, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xb6548c36, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x3cc03229, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xb74116e2, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x6af0006b, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xf3bb5bc3, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x3dbcf31d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe7bdee3, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x5d37a67b, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x857bb88c, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xb499f159, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x96e4bbb2, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x18964bf7, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfa0e1e99, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EFF27B20292EA2953ACFB09");
