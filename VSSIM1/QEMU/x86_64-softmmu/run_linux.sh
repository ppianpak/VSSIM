## VSSIM linux run script
## Copyright(c)2014
## Hanyang University, Seoul, Korea
## Embedded Software Systems Laboratory. All right reserved

#!/bin/bash

rm -rf data/*.dat
qemu-img create -f qcow ../../../RAMDISK/rd/ssd_hda_1.img 10G
./qemu-system-x86_64 -m 2048M -cpu core2duo -hda ../../../RAMDISK/rd/ssd_hda_1.img -cdrom ../../../OS/ubuntu-10.04.4-server-amd64.iso -usbdevice tablet
