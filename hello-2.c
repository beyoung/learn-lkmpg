/* 
 * hello-1.c - The simplest kernel module. 
 */
#include <linux/init.h>
#include <linux/kernel.h> /* Needed for pr_info() */ 
#include <linux/module.h> /* Needed by all modules */ 
 

static int __init hello_2_init(void)
{
	pr_info("hello world 2\n");
	return 0;
}

static void __exit hello_2_exit(void)
{
	pr_info("Goodbye, world 2\n"); 
}


module_init(hello_2_init);
module_exit(hello_2_exit);

MODULE_LICENSE("GPL");
