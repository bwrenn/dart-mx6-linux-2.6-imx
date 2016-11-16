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
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xc1395b, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig_reset) },
	{ 0xa84c35e2, __VMLINUX_SYMBOL_STR(usb_otg_descriptor_init) },
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xb3e09e9a, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0xa95a9ebd, __VMLINUX_SYMBOL_STR(usb_otg_descriptor_alloc) },
	{ 0xbe7035e8, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0x4dd2d7d2, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8b9aca5a, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0x81f2139e, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0x29718140, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0xfe3952e, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0x892df978, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb40ec847, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0x56948903, __VMLINUX_SYMBOL_STR(usb_add_config_only) },
	{ 0xdfca3f7c, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb225bf0d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x1f1d8f56, __VMLINUX_SYMBOL_STR(usb_remove_function) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";


MODULE_INFO(srcversion, "1217AEBAAE0D35260CBABAF");
