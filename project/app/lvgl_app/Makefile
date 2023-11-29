# Makefile for calling CMake with specified toolchain file and install prefix
ifeq ($(APP_PARAM), )
	APP_PARAM:=../Makefile.param
	include $(APP_PARAM)
endif

export LC_ALL=C
SHELL:=/bin/bash

CURRENT_DIR := $(shell pwd)

PKG_INSTALL_TO_ROOTFS ?= YES
PKG_NAME := lvgl_app
PKG_BIN ?= output/release
PKG_BUILD ?= build

CURRENT_DIR := $(shell pwd)

# Set the path to the CMake toolchain file
TOOLCHAIN_FILE := ../cmake/toolchainfile-rv1106.cmake

# Set the install prefix
INSTALL_PREFIX := release

# Set the source directory
SOURCE_DIR := ..

all:
	@echo "Creating output directory..."
	@mkdir -p output
	@cd output && cmake -DCMAKE_TOOLCHAIN_FILE=$(TOOLCHAIN_FILE) -DCMAKE_INSTALL_PREFIX=$(INSTALL_PREFIX) $(SOURCE_DIR)
	@make -C output -j $(nproc)
	@make -C output install
	$(call MAROC_COPY_PKG_TO_APP_OUTPUT, $(RK_APP_OUTPUT), $(PKG_BIN))

install:
	@make -C output install

clean:
	@rm -rf output

.PHONY: all install clean

