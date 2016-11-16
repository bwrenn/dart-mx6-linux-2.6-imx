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
	{ 0x208614a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa1e43714, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0xa097548, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xc5c429d7, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0xa279ef40, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0xe06f1b2, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xe151e669, __VMLINUX_SYMBOL_STR(gether_get_host_addr_cdc) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x18964bf7, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x49fcab7e, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9e59b30d, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0xd3b2fafa, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x6a5e9b05, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xac808b39, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0x34c60f2b, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xab62f53b, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x87b74f0d, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0xb3e09e9a, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x1be6b064, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf3bb59b5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x4ed6d71e, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x51af98d2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xb7f21c29, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0x7267eeee, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xcb85124d, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0x8f1d669d, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xd578d71f, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x2a62b8b4, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x26f41b47, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x4dd2d7d2, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5fd1ecad, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xcca6874c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x30357fe4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x428d4cf0, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0xd5cf7673, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x18c4f9c2, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x2e6fba8b, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3197aae5, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xd9f674dd, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x8ac51720, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x5994096f, __VMLINUX_SYMBOL_STR(hrtimer_try_to_cancel) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xb499f159, __VMLINUX_SYMBOL_STR(skb_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether,configfs";


MODULE_INFO(srcversion, "8872A2A530990FBCBC24476");
