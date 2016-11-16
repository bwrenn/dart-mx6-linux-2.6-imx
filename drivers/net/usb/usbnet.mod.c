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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb74116e2, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x208614a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xda06bbf0, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdd65f747, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4aad08a9, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xc26e85, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xd9ea01aa, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xdf6c2760, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x89107cbc, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x5200c3b4, __VMLINUX_SYMBOL_STR(usb_scuttle_anchored_urbs) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x18964bf7, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x49fcab7e, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcfddf9d7, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xc4aabc87, __VMLINUX_SYMBOL_STR(usb_get_urb) },
	{ 0x9fae98f9, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6a5e9b05, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xc8d9e062, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xab62f53b, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x7546fa03, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x45a165e, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xcc7171b9, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xf3bb59b5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xef6e4ee6, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xc8c132fe, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x51af98d2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x7f08c3cc, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface_async) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xc95c2f32, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x754b794e, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7267eeee, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x26f41b47, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x39aa32af, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x2c1d880b, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xcca6874c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc1cf5aae, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xe2f9e010, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_async) },
	{ 0x5a205374, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1c063d41, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x96b4d80e, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xaa4a7797, __VMLINUX_SYMBOL_STR(hex2bin) },
	{ 0xd03104e1, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xaf98deb, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_no_resume) },
	{ 0xa346e62a, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb1bc92e2, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x3cc0044a, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd685f97c, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x71a4e2be, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7fb8f997, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xb499f159, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xfd701065, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x6f983e91, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x89d386f9, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0xa1635a27, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xd24f188e, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xfc59e0d0, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x69645803, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "35BAA7DC8CACABFE8977982");
