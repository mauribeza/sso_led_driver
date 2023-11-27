#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0x4e3699d0, "gpio_to_desc" },
	{ 0xaa2fdd5a, "gpiod_unexport" },
	{ 0xfe990052, "gpio_free" },
	{ 0xa28c8b80, "device_destroy" },
	{ 0x82a07af2, "class_destroy" },
	{ 0x51334944, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe96aae04, "cdev_init" },
	{ 0x72212c5b, "cdev_add" },
	{ 0x4925a096, "__class_create" },
	{ 0xc2cfc06e, "device_create" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xe5a6745b, "gpiod_direction_output_raw" },
	{ 0x93cc37df, "gpiod_export" },
	{ 0x15fa3b39, "gpiod_get_raw_value" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x66ca2733, "gpiod_set_raw_value" },
	{ 0xe3035aa9, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "52B4265A8E0E407F2DD4E96");
