ifneq ($(KERNELRELEASE),)
obj-m := second.o
else
KDIR ?= /lib/modules/`uname -r`/build

default:
	$(MAKE) -C $(KDIR) M=$$PWD
clean:
	rm -rf *.o  *.ko  *.order *.symvers *.mod.c .*.cmd .tmp_versions
endif
