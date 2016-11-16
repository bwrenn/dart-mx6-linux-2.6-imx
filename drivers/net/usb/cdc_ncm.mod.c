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
	{ 0xdd65f747, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd8daf5a2, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0x6dcd56b4, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xafc23297, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x7d0c75d9, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x1f5fc0a8, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0xe06f1b2, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xef2b0194, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x18964bf7, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xae6be568, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6a5e9b05, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xd43d096, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf18759bf, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x1be6b064, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb6548c36, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xc8c132fe, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x269a9b60, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0xa27816f4, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaaf5c4e2, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xf7010557, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x4fd405b6, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x65b01582, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0xf3bb5bc3, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x4dd2d7d2, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xcca6874c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x30357fe4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x83b50fe0, __VMLINUX_SYMBOL_STR(usbnet_get_ethernet_addr) },
	{ 0x551a9137, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x428d4cf0, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0xbf199dd2, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xf3af93b3, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x21194490, __VMLINUX_SYMBOL_STR(usbnet_unlink_rx_urbs) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3197aae5, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x3cc03229, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xfe5ce8c9, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x3430d579, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xb499f159, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x5db2c222, __VMLINUX_SYMBOL_STR(usbnet_manage_power) },
	{ 0x6af0006b, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xbdbfad7f, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "E0F062268CDC242B6769968");
