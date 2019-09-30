#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ktsg97");
MODULE_DESCRIPTION("Hello Program");
MODULE_VERSION("1.0");

static int __init hello_start(void)
{
 printk(KERN_INFO"Hello\n");
 return 0;
}

static void __exit hello_end(void)
{
 printk(KERN_INFO"Bye\n");
}

module_init(hello_start);
module_exit(hello_end);
