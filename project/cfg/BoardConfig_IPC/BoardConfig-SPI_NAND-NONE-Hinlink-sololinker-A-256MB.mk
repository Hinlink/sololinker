#!/bin/bash

# Target arch
export RK_ARCH=arm

# Target CHIP
export RK_CHIP=rv1106

# Target Toolchain Cross Compile
export RK_TOOLCHAIN_CROSS=arm-rockchip830-linux-uclibcgnueabihf

# Target boot medium: emmc/spi_nor/spi_nand
export RK_BOOT_MEDIUM=spi_nand

# Uboot defconfig
export RK_UBOOT_DEFCONFIG=rv1106_defconfig

# Uboot defconfig fragment
export RK_UBOOT_DEFCONFIG_FRAGMENT=rk-sfc.config

# Kernel defconfig
export RK_KERNEL_DEFCONFIG=rv1106_linux_sololinker_defconfig

# Kernel defconfig fragment
# export RK_KERNEL_DEFCONFIG_FRAGMENT=rv1106-evb.config

# Kernel dts
export RK_KERNEL_DTS=rv1106g-hinlink-sololinker-a.dts

#misc image
export RK_MISC=wipe_all-misc.img

# Config sensor IQ files
# RK_CAMERA_SENSOR_IQFILES format:
#     "iqfile1 iqfile2 iqfile3 ..."
# ./build.sh media and copy <SDK root dir>/output/out/media_out/isp_iqfiles/$RK_CAMERA_SENSOR_IQFILES
export RK_CAMERA_SENSOR_IQFILES="sc4336_OT01_40IRC_F16.bin sc3336_CMK-OT2119-PC1_30IRC-F16.bin sc530ai_CMK-OT2115-PC1_30IRC-F16.bin"

# Config sensor lens CAC calibrattion bin files
export RK_CAMERA_SENSOR_CAC_BIN="CAC_sc4336_OT01_40IRC_F16 CAC_sc530ai_CMK-OT2115-PC1_30IRC-F16"

# Config CMA size in environment
export RK_BOOTARGS_CMA_SIZE="66M"

# config partition in environment
# RK_PARTITION_CMD_IN_ENV format:
#     <partdef>[,<partdef>]
#       <partdef> := <size>[@<offset>](part-name)
# Note:
#   If the first partition offset is not 0x0, it must be added. Otherwise, it needn't adding.
# export RK_PARTITION_CMD_IN_ENV="256K(env),1M@256K(idblock),1M(uboot),5M(boot),160M(rootfs),48M(oem),32M(userdata)"
export RK_PARTITION_CMD_IN_ENV="256K(env),1M@256K(idblock),1M(uboot),5M(boot),235M(rootfs)"

# config partition's filesystem type (squashfs is readonly)
# emmc:    squashfs/ext4
# nand:    squashfs/ubifs
# spi nor: squashfs/jffs2
# RK_PARTITION_FS_TYPE_CFG format:
#     AAAA:/BBBB/CCCC@ext4
#         AAAA ----------> partition name
#         /BBBB/CCCC ----> partition mount point
#         ext4 ----------> partition filesystem type
# export RK_PARTITION_FS_TYPE_CFG=rootfs@IGNORE@ubifs,oem@/oem@ubifs,userdata@/userdata@ubifs
export RK_PARTITION_FS_TYPE_CFG=rootfs@IGNORE@ubifs

# config filesystem compress (Just for squashfs or ubifs)
# squashfs: lz4/lzo/lzma/xz/gzip, default xz
# ubifs:    lzo/zlib, default lzo
# export RK_SQUASHFS_COMP=xz
# export RK_UBIFS_COMP=lzo

# app config
export RK_APP_TYPE=RKIPC_RV1106

# build ipc web backend
export RK_APP_IPCWEB_BACKEND=y

# enable install app to oem partition
export RK_BUILD_APP_TO_OEM_PARTITION=n

# enable rockchip test
export RK_ENABLE_ROCKCHIP_TEST=y

# enable build wifi
export RK_ENABLE_WIFI=y
export RK_ENABLE_WIFI_CHIP=aic8800_usb
export RK_ENABLE_ADBD=y

export RK_ENABLE_I2C_TOOLS=y

# Config SPI NAND or SLC NAND
# RK_NAND_BLOCK_SIZE: block size (default 128 KB)
# RK_NAND_PAGE_SIZE: page size   (default 2 KB)
export RK_NAND_BLOCK_SIZE=0x20000
export RK_NAND_PAGE_SIZE=2048
