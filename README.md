# rust-cdev-init

rust-cdev-init is a tool to take the output .a file from a rust project intended to be loaded as a character device on a FreeBSD machine.

Currently the project is only tested to work on a RPi3B running 64-bit FreeBSD 15.0-RELEASE but it is intended to be cross-architecture in the future.

## Usage
- Simply put the rust libxxx.a output into the same directory as the Makefile and mod_init.c file
- Rename libxxx.a to librust_cdev.a
- Run make
### Enable program
- Run kldload ./rust_cdev.ko
### Disable program
- Run kldunload rust_cdev
