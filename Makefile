SYSDIR=	/mnt/usb1/sys

KMOD=	rust_cdev

SRCS=	mod_init.c

OBJS=	librust_cdev.a

.include <bsd.kmod.mk>
