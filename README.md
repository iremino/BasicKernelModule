# Welcome to the basic kernel module example

Uses Kernel init_module and cleanup_module functions.
The Kernel Version that i used is  5.4.0-91

# How To Build

* run make command

* choose related ".ko" file, and "insmod" it to the kernel:

```
sudo insmod hello-1.ko
```

* You can check if your module inserted to the kernel with "lsmod":

```
lsmod | grep hello
```

and if you check the kernel logs from syslog, you shoud see the log that we added to the init_module for the hello-1 example

```
tail /var/log/syslog
ubuntu kernel: Welcome to the Kernel World!
```

* You can remove the module from kernel with "rmmod"

```
sudo rmmod hello-1
ubuntu kernel: Goodbye ..
```

# Notes

* The *.ko files are the kernel modules. That's why we are insmoded it to the kernel.
* insmod: insert module
* rmmod: remove module
* Kernel modules must have at least two functions: a "start" (initialization) function called init_module() which is called when the module is insmoded into the kernel, and an "end" (cleanup) function called cleanup_module() which is called just before it is rmmoded.
* Things have changed starting with kernel 2.3.13. You can now use whatever name you like for the start and end functions of a module. In fact, the new method is the preferred method.
