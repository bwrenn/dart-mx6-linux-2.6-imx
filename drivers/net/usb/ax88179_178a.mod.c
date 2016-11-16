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
	{ 0xef2b0194, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xafc23297, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xef6e4ee6, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xf18759bf, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0xbdbfad7f, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0xf3af93b3, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x5305067b, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xa346e62a, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xaaf5c4e2, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x2be5d746, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x88180bfc, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xb6548c36, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x3cc03229, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xf7010557, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x6dcd56b4, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x857bb88c, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc26e85, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcc7171b9, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xae6be568, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0x1a6eda58, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0x6af0006b, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5d37a67b, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xb74116e2, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x1f5fc0a8, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa985a9ed, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x3309bb06, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0xf3bb5bc3, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xae5b6cac, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x89d386f9, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0xda06bbf0, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xe7bdee3, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x551a9137, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x863ca30, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x3dbcf31d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x18964bf7, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x96e4bbb2, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x206f5997, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4C676DD260D26D648107038");
