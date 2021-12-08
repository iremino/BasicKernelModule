/*
 *  hello-2.c - Demonstrating the module_init() and module_exit() macros.
 *  This is preferred over using init_module() and cleanup_module().
 */
#include <linux/module.h> /* Needed by all modules */
#include <linux/kernel.h> /* Needed for KERN_INFO */
#include <linux/init.h>   /* Needed for the macros */

static int __init new_init_method(void)
{
    printk(KERN_INFO "Welcome to the Kernel World with module_init()!\n");
    return 0;
}

static void __exit new_cleanup_method(void)
{
    printk(KERN_INFO "Goodbye with module_exit()!\n");
}

module_init(new_init_method);
module_exit(new_cleanup_method);
