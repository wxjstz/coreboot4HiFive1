ifeq ($(CONFIG_ARCH_X86),y)

romstage-$(CONFIG_DRIVERS_MC146818) += mc146818rtc.c
ramstage-$(CONFIG_DRIVERS_MC146818) += mc146818rtc.c

ifeq ($(CONFIG_USE_OPTION_TABLE),y)
cbfs-files-$(CONFIG_HAVE_CMOS_DEFAULT) += cmos.default
cmos.default-file = $(CONFIG_CMOS_DEFAULT_FILE):nvramtool
cmos.default-type = cmos_default
endif

smm-$(CONFIG_DRIVERS_MC146818) += mc146818rtc.c

endif
