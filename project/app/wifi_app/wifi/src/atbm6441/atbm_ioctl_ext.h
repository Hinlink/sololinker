#ifndef ATBM_IOCTL_EXT_H
#define ATBM_IOCTL_EXT_H

#define PRIV_VERSION "2022-0228-1615"

#define ATBM_IOCTL (121)

#define ATBM_PS_SET _IOW(ATBM_IOCTL, 0, char)
#define ATBM_CONNECT _IOW(ATBM_IOCTL, 1, unsigned int)
#define ATBM_STATUS _IOR(ATBM_IOCTL, 2, unsigned int)
#define ATBM_SET_FILTER _IOW(ATBM_IOCTL, 3, unsigned int)
#define ATBM_GET_FILTER _IOR(ATBM_IOCTL, 4, unsigned int)
#define ATBM_SCAN _IO(ATBM_IOCTL, 5)
#define ATBM_SCAN_INFO _IOR(ATBM_IOCTL, 6, unsigned int)
#define ATBM_WIFI_MODE _IOW(ATBM_IOCTL, 7, char)
#define ATBM_AP_CFG _IOW(ATBM_IOCTL, 8, unsigned int)
#define ATBM_WIFI_CHANNEL _IOW(ATBM_IOCTL, 9, char)
#define ATBM_SET_COUNTRY _IOW(ATBM_IOCTL, 10, char)
#define ATBM_GET_COUNTRY _IOR(ATBM_IOCTL, 11, unsigned int)
#define ATBM_GET_STALIST _IOR(ATBM_IOCTL, 12, unsigned int)
#define ATBM_SMART_START _IO(ATBM_IOCTL, 13)
#define ATBM_SMART_STOP _IO(ATBM_IOCTL, 14)
#define ATBM_APTOUCH_START _IOW(ATBM_IOCTL, 15, unsigned int)
#define ATBM_APTOUCH_STOP _IO(ATBM_IOCTL, 16)
#define ATBM_ETF_START_TX _IOW(ATBM_IOCTL, 17, unsigned int)
#define ATBM_ETF_SINGLETONE _IOW(ATBM_IOCTL, 18, unsigned int)
#define ATBM_ETF_STOP_TX _IO(ATBM_IOCTL, 19)
#define ATBM_ETF_START_RX _IOW(ATBM_IOCTL, 20, unsigned int)
#define ATBM_ETF_STOP_RX _IO(ATBM_IOCTL, 21)
#define ATBM_ETF_RESET_RX _IO(ATBM_IOCTL, 22)
#define ATBM_ADAPTIVE _IOW(ATBM_IOCTL, 23, unsigned int)
#define ATBM_VERSION _IOR(ATBM_IOCTL, 24, unsigned int)
#define ATBM_SDK_VERSION _IOR(ATBM_IOCTL, 25, unsigned int)
#define ATBM_UPDATE_FW _IOW(ATBM_IOCTL, 26, unsigned int)
#define ATBM_LISTEN_ITVL _IOW(ATBM_IOCTL, 27, char)
#define ATBM_FW_AT_CMD _IOW(ATBM_IOCTL, 28, unsigned int)
#define ATBM_FW_DBG_PRINT _IOW(ATBM_IOCTL, 29, char)
#define ATBM_ETF_START_RX_NO_DROP _IOW(ATBM_IOCTL, 30, unsigned int)
#define ATBM_FW_SLEEP _IO(ATBM_IOCTL, 31)
#define ATBM_TX_RATE _IOR(ATBM_IOCTL, 32, unsigned int)
#define ATBM_IPC_DATA _IOW(ATBM_IOCTL, 33, unsigned int)
#define ATBM_RSSI _IOR(ATBM_IOCTL, 34, unsigned int)
#define ATBM_TIME _IOR(ATBM_IOCTL, 35, unsigned int)
#define ATBM_CLEAR_WIFI_CFG _IO(ATBM_IOCTL, 36)
#define ATBM_ETF_RX_INFO _IOR(ATBM_IOCTL, 37, unsigned int)
#define ATBM_PRE_RMMOD _IO(ATBM_IOCTL, 38)
#define ATBM_TX_EMPTY _IOR(ATBM_IOCTL, 39, unsigned int)
#define ATBM_WKUP_EVENT _IOW(ATBM_IOCTL, 40, unsigned int)
#define ATBM_NETPATTERN_ADD _IOW(ATBM_IOCTL, 41, unsigned int)
#define ATBM_NETPATTERN_DEL _IOW(ATBM_IOCTL, 42, unsigned int)
#define ATBM_CONN_PARAM_ADD _IOW(ATBM_IOCTL, 43, unsigned int)
#define ATBM_CONN_PARAM_DEL _IOW(ATBM_IOCTL, 44, unsigned int)
#define ATBM_CONN_LOSE_MAP _IOR(ATBM_IOCTL, 45, unsigned int)
#define ATBM_CONN_SWITCH _IOW(ATBM_IOCTL, 46, unsigned int)
#define ATBM_SET_WK_SSID _IOW(ATBM_IOCTL, 47, unsigned int)
#define ATBM_CLR_WK_SSID _IOW(ATBM_IOCTL, 48, unsigned int)
#define ATBM_AUTO_RECONN _IOW(ATBM_IOCTL, 49, unsigned int)
#define ATBM_CUSTOMER_CMD _IOW(ATBM_IOCTL, 50, unsigned int)
#define ATBM_CUSTOMER_CERT _IOW(ATBM_IOCTL, 51, unsigned int)
#define ATBM_CHECK_ALIVE _IOW(ATBM_IOCTL, 52, unsigned int)
#define ATBM_DIRECT_BUFFER _IOWR(ATBM_IOCTL, 53, unsigned int)
#define ATBM_CONTROL_DEBUG _IOW(ATBM_IOCTL, 54, unsigned int)
#define ATBM_FORCE_REBOOT _IO(ATBM_IOCTL, 55)
#define ATBM_AT_CMD_DIRECT _IOW(ATBM_IOCTL, 56, unsigned int)
#define ATBM_FAST_CFG_RECV _IOW(ATBM_IOCTL, 57, unsigned int)
#define ATBM_FAST_CFG_SEND _IOW(ATBM_IOCTL, 58, unsigned int)

#endif /* ATBM_IOCTL_EXT_H */
