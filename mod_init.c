#include <sys/param.h>
#include <sys/kernel.h>
#include <sys/module.h>

extern int rust_cdev_modevent(module_t mod, int type, void *data);

static moduledata_t rust_cdev_mod = {
    "rust_cdev",
    rust_cdev_modevent,
    NULL
};

DECLARE_MODULE(rust_cdev, rust_cdev_mod, SI_SUB_DRIVERS, SI_ORDER_MIDDLE);
MODULE_VERSION(rust_cdev, 1);
