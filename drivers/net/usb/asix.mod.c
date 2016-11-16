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
	{ 0xb74116e2, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x208614a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xda06bbf0, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4eeaf9f6, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0x6dcd56b4, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x681a303c, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0xafc23297, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x7d0c75d9, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x1f5fc0a8, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0xef2b0194, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xae5b6cac, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xbefdba40, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0x18964bf7, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x2be5d746, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xae6be568, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0x49fcab7e, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2e8b410d, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0x6a5e9b05, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x29666ff5, __VMLINUX_SYMBOL_STR(phy_start_aneg) },
	{ 0x890be61, __VMLINUX_SYMBOL_STR(phy_print_status) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf18759bf, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x91f72255, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0xcc7171b9, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xb6548c36, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xa1d96b0, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0x857bb88c, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xa27816f4, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x96e4bbb2, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x7267eeee, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xaaf5c4e2, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xf7010557, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x4fd405b6, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x65b01582, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0xfa0e1e99, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xf3bb5bc3, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xcca6874c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf6353c2, __VMLINUX_SYMBOL_STR(mdiobus_register) },
	{ 0x5305067b, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x425a1090, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x56a805d2, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0x551a9137, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x88180bfc, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x83f419dd, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0xf3af93b3, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0xd03104e1, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x21194490, __VMLINUX_SYMBOL_STR(usbnet_unlink_rx_urbs) },
	{ 0xa346e62a, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5d37a67b, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x40d2bd8b, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x1f02bf2f, __VMLINUX_SYMBOL_STR(phy_connect) },
	{ 0x3cc03229, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe4abeb04, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0x541d2f14, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd685f97c, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xb499f159, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xfd701065, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x6af0006b, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xbdbfad7f, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x7f0b0664, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FE714F923595234F122F542");
