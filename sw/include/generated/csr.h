//--------------------------------------------------------------------------------
// Auto-generated by Migen (d11565a) & LiteX (e9f0ff68) on 2020-03-11 21:28:54
//--------------------------------------------------------------------------------
#include <generated/soc.h>
#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H
#include <stdint.h>
#ifdef CSR_ACCESSORS_DEFINED
extern void csr_write_simple(unsigned long v, unsigned long a);
extern unsigned long csr_read_simple(unsigned long a);
#else /* ! CSR_ACCESSORS_DEFINED */
#include <hw/common.h>
#endif /* ! CSR_ACCESSORS_DEFINED */

/* ctrl */
#define CSR_CTRL_BASE 0xe0000000L
#define CSR_CTRL_RESET_ADDR 0xe0000000L
#define CSR_CTRL_RESET_SIZE 1
static inline uint32_t ctrl_reset_read(void) {
	return csr_read_simple(0xe0000000L);
}
static inline void ctrl_reset_write(uint32_t v) {
	csr_write_simple(v, 0xe0000000L);
}
#define CSR_CTRL_SCRATCH_ADDR 0xe0000004L
#define CSR_CTRL_SCRATCH_SIZE 1
static inline uint32_t ctrl_scratch_read(void) {
	return csr_read_simple(0xe0000004L);
}
static inline void ctrl_scratch_write(uint32_t v) {
	csr_write_simple(v, 0xe0000004L);
}
#define CSR_CTRL_BUS_ERRORS_ADDR 0xe0000008L
#define CSR_CTRL_BUS_ERRORS_SIZE 1
static inline uint32_t ctrl_bus_errors_read(void) {
	return csr_read_simple(0xe0000008L);
}

/* timer0 */
#define CSR_TIMER0_BASE 0xe0002800L
#define CSR_TIMER0_LOAD_ADDR 0xe0002800L
#define CSR_TIMER0_LOAD_SIZE 1
static inline uint32_t timer0_load_read(void) {
	return csr_read_simple(0xe0002800L);
}
static inline void timer0_load_write(uint32_t v) {
	csr_write_simple(v, 0xe0002800L);
}
#define CSR_TIMER0_RELOAD_ADDR 0xe0002804L
#define CSR_TIMER0_RELOAD_SIZE 1
static inline uint32_t timer0_reload_read(void) {
	return csr_read_simple(0xe0002804L);
}
static inline void timer0_reload_write(uint32_t v) {
	csr_write_simple(v, 0xe0002804L);
}
#define CSR_TIMER0_EN_ADDR 0xe0002808L
#define CSR_TIMER0_EN_SIZE 1
static inline uint32_t timer0_en_read(void) {
	return csr_read_simple(0xe0002808L);
}
static inline void timer0_en_write(uint32_t v) {
	csr_write_simple(v, 0xe0002808L);
}
#define CSR_TIMER0_UPDATE_VALUE_ADDR 0xe000280cL
#define CSR_TIMER0_UPDATE_VALUE_SIZE 1
static inline uint32_t timer0_update_value_read(void) {
	return csr_read_simple(0xe000280cL);
}
static inline void timer0_update_value_write(uint32_t v) {
	csr_write_simple(v, 0xe000280cL);
}
#define CSR_TIMER0_VALUE_ADDR 0xe0002810L
#define CSR_TIMER0_VALUE_SIZE 1
static inline uint32_t timer0_value_read(void) {
	return csr_read_simple(0xe0002810L);
}
#define CSR_TIMER0_EV_STATUS_ADDR 0xe0002814L
#define CSR_TIMER0_EV_STATUS_SIZE 1
static inline uint32_t timer0_ev_status_read(void) {
	return csr_read_simple(0xe0002814L);
}
static inline void timer0_ev_status_write(uint32_t v) {
	csr_write_simple(v, 0xe0002814L);
}
#define CSR_TIMER0_EV_PENDING_ADDR 0xe0002818L
#define CSR_TIMER0_EV_PENDING_SIZE 1
static inline uint32_t timer0_ev_pending_read(void) {
	return csr_read_simple(0xe0002818L);
}
static inline void timer0_ev_pending_write(uint32_t v) {
	csr_write_simple(v, 0xe0002818L);
}
#define CSR_TIMER0_EV_ENABLE_ADDR 0xe000281cL
#define CSR_TIMER0_EV_ENABLE_SIZE 1
static inline uint32_t timer0_ev_enable_read(void) {
	return csr_read_simple(0xe000281cL);
}
static inline void timer0_ev_enable_write(uint32_t v) {
	csr_write_simple(v, 0xe000281cL);
}

/* usb */
#define CSR_USB_BASE 0xe0004800L
#define CSR_USB_PULLUP_OUT_ADDR 0xe0004800L
#define CSR_USB_PULLUP_OUT_SIZE 1
static inline uint32_t usb_pullup_out_read(void) {
	return csr_read_simple(0xe0004800L);
}
static inline void usb_pullup_out_write(uint32_t v) {
	csr_write_simple(v, 0xe0004800L);
}
#define CSR_USB_ADDRESS_ADDR 0xe0004804L
#define CSR_USB_ADDRESS_SIZE 1
static inline uint32_t usb_address_read(void) {
	return csr_read_simple(0xe0004804L);
}
static inline void usb_address_write(uint32_t v) {
	csr_write_simple(v, 0xe0004804L);
}
#define CSR_USB_ADDRESS_ADDR_OFFSET 0
#define CSR_USB_ADDRESS_ADDR_SIZE 7
#define CSR_USB_NEXT_EV_ADDR 0xe0004808L
#define CSR_USB_NEXT_EV_SIZE 1
static inline uint32_t usb_next_ev_read(void) {
	return csr_read_simple(0xe0004808L);
}
#define CSR_USB_NEXT_EV_IN_OFFSET 0
#define CSR_USB_NEXT_EV_IN_SIZE 1
#define CSR_USB_NEXT_EV_OUT_OFFSET 1
#define CSR_USB_NEXT_EV_OUT_SIZE 1
#define CSR_USB_NEXT_EV_SETUP_OFFSET 2
#define CSR_USB_NEXT_EV_SETUP_SIZE 1
#define CSR_USB_NEXT_EV_RESET_OFFSET 3
#define CSR_USB_NEXT_EV_RESET_SIZE 1
#define CSR_USB_SETUP_DATA_ADDR 0xe000480cL
#define CSR_USB_SETUP_DATA_SIZE 1
static inline uint32_t usb_setup_data_read(void) {
	return csr_read_simple(0xe000480cL);
}
#define CSR_USB_SETUP_DATA_DATA_OFFSET 0
#define CSR_USB_SETUP_DATA_DATA_SIZE 8
#define CSR_USB_SETUP_CTRL_ADDR 0xe0004810L
#define CSR_USB_SETUP_CTRL_SIZE 1
static inline uint32_t usb_setup_ctrl_read(void) {
	return csr_read_simple(0xe0004810L);
}
static inline void usb_setup_ctrl_write(uint32_t v) {
	csr_write_simple(v, 0xe0004810L);
}
#define CSR_USB_SETUP_CTRL_RESET_OFFSET 5
#define CSR_USB_SETUP_CTRL_RESET_SIZE 1
#define CSR_USB_SETUP_STATUS_ADDR 0xe0004814L
#define CSR_USB_SETUP_STATUS_SIZE 1
static inline uint32_t usb_setup_status_read(void) {
	return csr_read_simple(0xe0004814L);
}
#define CSR_USB_SETUP_STATUS_EPNO_OFFSET 0
#define CSR_USB_SETUP_STATUS_EPNO_SIZE 4
#define CSR_USB_SETUP_STATUS_HAVE_OFFSET 4
#define CSR_USB_SETUP_STATUS_HAVE_SIZE 1
#define CSR_USB_SETUP_STATUS_PEND_OFFSET 5
#define CSR_USB_SETUP_STATUS_PEND_SIZE 1
#define CSR_USB_SETUP_STATUS_IS_IN_OFFSET 6
#define CSR_USB_SETUP_STATUS_IS_IN_SIZE 1
#define CSR_USB_SETUP_STATUS_DATA_OFFSET 7
#define CSR_USB_SETUP_STATUS_DATA_SIZE 1
#define CSR_USB_SETUP_EV_STATUS_ADDR 0xe0004818L
#define CSR_USB_SETUP_EV_STATUS_SIZE 1
static inline uint32_t usb_setup_ev_status_read(void) {
	return csr_read_simple(0xe0004818L);
}
static inline void usb_setup_ev_status_write(uint32_t v) {
	csr_write_simple(v, 0xe0004818L);
}
#define CSR_USB_SETUP_EV_PENDING_ADDR 0xe000481cL
#define CSR_USB_SETUP_EV_PENDING_SIZE 1
static inline uint32_t usb_setup_ev_pending_read(void) {
	return csr_read_simple(0xe000481cL);
}
static inline void usb_setup_ev_pending_write(uint32_t v) {
	csr_write_simple(v, 0xe000481cL);
}
#define CSR_USB_SETUP_EV_ENABLE_ADDR 0xe0004820L
#define CSR_USB_SETUP_EV_ENABLE_SIZE 1
static inline uint32_t usb_setup_ev_enable_read(void) {
	return csr_read_simple(0xe0004820L);
}
static inline void usb_setup_ev_enable_write(uint32_t v) {
	csr_write_simple(v, 0xe0004820L);
}
#define CSR_USB_IN_DATA_ADDR 0xe0004824L
#define CSR_USB_IN_DATA_SIZE 1
static inline uint32_t usb_in_data_read(void) {
	return csr_read_simple(0xe0004824L);
}
static inline void usb_in_data_write(uint32_t v) {
	csr_write_simple(v, 0xe0004824L);
}
#define CSR_USB_IN_DATA_DATA_OFFSET 0
#define CSR_USB_IN_DATA_DATA_SIZE 8
#define CSR_USB_IN_CTRL_ADDR 0xe0004828L
#define CSR_USB_IN_CTRL_SIZE 1
static inline uint32_t usb_in_ctrl_read(void) {
	return csr_read_simple(0xe0004828L);
}
static inline void usb_in_ctrl_write(uint32_t v) {
	csr_write_simple(v, 0xe0004828L);
}
#define CSR_USB_IN_CTRL_EPNO_OFFSET 0
#define CSR_USB_IN_CTRL_EPNO_SIZE 4
#define CSR_USB_IN_CTRL_RESET_OFFSET 5
#define CSR_USB_IN_CTRL_RESET_SIZE 1
#define CSR_USB_IN_CTRL_STALL_OFFSET 6
#define CSR_USB_IN_CTRL_STALL_SIZE 1
#define CSR_USB_IN_STATUS_ADDR 0xe000482cL
#define CSR_USB_IN_STATUS_SIZE 1
static inline uint32_t usb_in_status_read(void) {
	return csr_read_simple(0xe000482cL);
}
#define CSR_USB_IN_STATUS_IDLE_OFFSET 0
#define CSR_USB_IN_STATUS_IDLE_SIZE 1
#define CSR_USB_IN_STATUS_HAVE_OFFSET 4
#define CSR_USB_IN_STATUS_HAVE_SIZE 1
#define CSR_USB_IN_STATUS_PEND_OFFSET 5
#define CSR_USB_IN_STATUS_PEND_SIZE 1
#define CSR_USB_IN_EV_STATUS_ADDR 0xe0004830L
#define CSR_USB_IN_EV_STATUS_SIZE 1
static inline uint32_t usb_in_ev_status_read(void) {
	return csr_read_simple(0xe0004830L);
}
static inline void usb_in_ev_status_write(uint32_t v) {
	csr_write_simple(v, 0xe0004830L);
}
#define CSR_USB_IN_EV_PENDING_ADDR 0xe0004834L
#define CSR_USB_IN_EV_PENDING_SIZE 1
static inline uint32_t usb_in_ev_pending_read(void) {
	return csr_read_simple(0xe0004834L);
}
static inline void usb_in_ev_pending_write(uint32_t v) {
	csr_write_simple(v, 0xe0004834L);
}
#define CSR_USB_IN_EV_ENABLE_ADDR 0xe0004838L
#define CSR_USB_IN_EV_ENABLE_SIZE 1
static inline uint32_t usb_in_ev_enable_read(void) {
	return csr_read_simple(0xe0004838L);
}
static inline void usb_in_ev_enable_write(uint32_t v) {
	csr_write_simple(v, 0xe0004838L);
}
#define CSR_USB_OUT_DATA_ADDR 0xe000483cL
#define CSR_USB_OUT_DATA_SIZE 1
static inline uint32_t usb_out_data_read(void) {
	return csr_read_simple(0xe000483cL);
}
#define CSR_USB_OUT_DATA_DATA_OFFSET 0
#define CSR_USB_OUT_DATA_DATA_SIZE 8
#define CSR_USB_OUT_CTRL_ADDR 0xe0004840L
#define CSR_USB_OUT_CTRL_SIZE 1
static inline uint32_t usb_out_ctrl_read(void) {
	return csr_read_simple(0xe0004840L);
}
static inline void usb_out_ctrl_write(uint32_t v) {
	csr_write_simple(v, 0xe0004840L);
}
#define CSR_USB_OUT_CTRL_EPNO_OFFSET 0
#define CSR_USB_OUT_CTRL_EPNO_SIZE 4
#define CSR_USB_OUT_CTRL_ENABLE_OFFSET 4
#define CSR_USB_OUT_CTRL_ENABLE_SIZE 1
#define CSR_USB_OUT_CTRL_RESET_OFFSET 5
#define CSR_USB_OUT_CTRL_RESET_SIZE 1
#define CSR_USB_OUT_CTRL_STALL_OFFSET 6
#define CSR_USB_OUT_CTRL_STALL_SIZE 1
#define CSR_USB_OUT_STATUS_ADDR 0xe0004844L
#define CSR_USB_OUT_STATUS_SIZE 1
static inline uint32_t usb_out_status_read(void) {
	return csr_read_simple(0xe0004844L);
}
#define CSR_USB_OUT_STATUS_EPNO_OFFSET 0
#define CSR_USB_OUT_STATUS_EPNO_SIZE 4
#define CSR_USB_OUT_STATUS_HAVE_OFFSET 4
#define CSR_USB_OUT_STATUS_HAVE_SIZE 1
#define CSR_USB_OUT_STATUS_PEND_OFFSET 5
#define CSR_USB_OUT_STATUS_PEND_SIZE 1
#define CSR_USB_OUT_EV_STATUS_ADDR 0xe0004848L
#define CSR_USB_OUT_EV_STATUS_SIZE 1
static inline uint32_t usb_out_ev_status_read(void) {
	return csr_read_simple(0xe0004848L);
}
static inline void usb_out_ev_status_write(uint32_t v) {
	csr_write_simple(v, 0xe0004848L);
}
#define CSR_USB_OUT_EV_PENDING_ADDR 0xe000484cL
#define CSR_USB_OUT_EV_PENDING_SIZE 1
static inline uint32_t usb_out_ev_pending_read(void) {
	return csr_read_simple(0xe000484cL);
}
static inline void usb_out_ev_pending_write(uint32_t v) {
	csr_write_simple(v, 0xe000484cL);
}
#define CSR_USB_OUT_EV_ENABLE_ADDR 0xe0004850L
#define CSR_USB_OUT_EV_ENABLE_SIZE 1
static inline uint32_t usb_out_ev_enable_read(void) {
	return csr_read_simple(0xe0004850L);
}
static inline void usb_out_ev_enable_write(uint32_t v) {
	csr_write_simple(v, 0xe0004850L);
}

/* touch */
#define CSR_TOUCH_BASE 0xe0005800L
#define CSR_TOUCH_O_ADDR 0xe0005800L
#define CSR_TOUCH_O_SIZE 1
static inline uint32_t touch_o_read(void) {
	return csr_read_simple(0xe0005800L);
}
static inline void touch_o_write(uint32_t v) {
	csr_write_simple(v, 0xe0005800L);
}
#define CSR_TOUCH_OE_ADDR 0xe0005804L
#define CSR_TOUCH_OE_SIZE 1
static inline uint32_t touch_oe_read(void) {
	return csr_read_simple(0xe0005804L);
}
static inline void touch_oe_write(uint32_t v) {
	csr_write_simple(v, 0xe0005804L);
}
#define CSR_TOUCH_I_ADDR 0xe0005808L
#define CSR_TOUCH_I_SIZE 1
static inline uint32_t touch_i_read(void) {
	return csr_read_simple(0xe0005808L);
}

/* reboot */
#define CSR_REBOOT_BASE 0xe0006000L
#define CSR_REBOOT_CTRL_ADDR 0xe0006000L
#define CSR_REBOOT_CTRL_SIZE 1
static inline uint32_t reboot_ctrl_read(void) {
	return csr_read_simple(0xe0006000L);
}
static inline void reboot_ctrl_write(uint32_t v) {
	csr_write_simple(v, 0xe0006000L);
}
#define CSR_REBOOT_CTRL_IMAGE_OFFSET 0
#define CSR_REBOOT_CTRL_IMAGE_SIZE 2
#define CSR_REBOOT_CTRL_KEY_OFFSET 2
#define CSR_REBOOT_CTRL_KEY_SIZE 6
#define CSR_REBOOT_ADDR_ADDR 0xe0006004L
#define CSR_REBOOT_ADDR_SIZE 1
static inline uint32_t reboot_addr_read(void) {
	return csr_read_simple(0xe0006004L);
}
static inline void reboot_addr_write(uint32_t v) {
	csr_write_simple(v, 0xe0006004L);
}

/* rgb */
#define CSR_RGB_BASE 0xe0006800L
#define CSR_RGB_DAT_ADDR 0xe0006800L
#define CSR_RGB_DAT_SIZE 1
static inline uint32_t rgb_dat_read(void) {
	return csr_read_simple(0xe0006800L);
}
static inline void rgb_dat_write(uint32_t v) {
	csr_write_simple(v, 0xe0006800L);
}
#define CSR_RGB_ADDR_ADDR 0xe0006804L
#define CSR_RGB_ADDR_SIZE 1
static inline uint32_t rgb_addr_read(void) {
	return csr_read_simple(0xe0006804L);
}
static inline void rgb_addr_write(uint32_t v) {
	csr_write_simple(v, 0xe0006804L);
}
#define CSR_RGB_CTRL_ADDR 0xe0006808L
#define CSR_RGB_CTRL_SIZE 1
static inline uint32_t rgb_ctrl_read(void) {
	return csr_read_simple(0xe0006808L);
}
static inline void rgb_ctrl_write(uint32_t v) {
	csr_write_simple(v, 0xe0006808L);
}
#define CSR_RGB_CTRL_EXE_OFFSET 0
#define CSR_RGB_CTRL_EXE_SIZE 1
#define CSR_RGB_CTRL_CURREN_OFFSET 1
#define CSR_RGB_CTRL_CURREN_SIZE 1
#define CSR_RGB_CTRL_RGBLEDEN_OFFSET 2
#define CSR_RGB_CTRL_RGBLEDEN_SIZE 1
#define CSR_RGB_CTRL_RRAW_OFFSET 3
#define CSR_RGB_CTRL_RRAW_SIZE 1
#define CSR_RGB_CTRL_GRAW_OFFSET 4
#define CSR_RGB_CTRL_GRAW_SIZE 1
#define CSR_RGB_CTRL_BRAW_OFFSET 5
#define CSR_RGB_CTRL_BRAW_SIZE 1
#define CSR_RGB_RAW_ADDR 0xe000680cL
#define CSR_RGB_RAW_SIZE 1
static inline uint32_t rgb_raw_read(void) {
	return csr_read_simple(0xe000680cL);
}
static inline void rgb_raw_write(uint32_t v) {
	csr_write_simple(v, 0xe000680cL);
}
#define CSR_RGB_RAW_R_OFFSET 0
#define CSR_RGB_RAW_R_SIZE 1
#define CSR_RGB_RAW_G_OFFSET 1
#define CSR_RGB_RAW_G_SIZE 1
#define CSR_RGB_RAW_B_OFFSET 2
#define CSR_RGB_RAW_B_SIZE 1

/* version */
#define CSR_VERSION_BASE 0xe0007000L
#define CSR_VERSION_MAJOR_ADDR 0xe0007000L
#define CSR_VERSION_MAJOR_SIZE 1
static inline uint32_t version_major_read(void) {
	return csr_read_simple(0xe0007000L);
}
#define CSR_VERSION_MINOR_ADDR 0xe0007004L
#define CSR_VERSION_MINOR_SIZE 1
static inline uint32_t version_minor_read(void) {
	return csr_read_simple(0xe0007004L);
}
#define CSR_VERSION_REVISION_ADDR 0xe0007008L
#define CSR_VERSION_REVISION_SIZE 1
static inline uint32_t version_revision_read(void) {
	return csr_read_simple(0xe0007008L);
}
#define CSR_VERSION_GITREV_ADDR 0xe000700cL
#define CSR_VERSION_GITREV_SIZE 1
static inline uint32_t version_gitrev_read(void) {
	return csr_read_simple(0xe000700cL);
}
#define CSR_VERSION_GITEXTRA_ADDR 0xe0007010L
#define CSR_VERSION_GITEXTRA_SIZE 1
static inline uint32_t version_gitextra_read(void) {
	return csr_read_simple(0xe0007010L);
}
#define CSR_VERSION_DIRTY_ADDR 0xe0007014L
#define CSR_VERSION_DIRTY_SIZE 1
static inline uint32_t version_dirty_read(void) {
	return csr_read_simple(0xe0007014L);
}
#define CSR_VERSION_DIRTY_DIRTY_OFFSET 0
#define CSR_VERSION_DIRTY_DIRTY_SIZE 1
#define CSR_VERSION_MODEL_ADDR 0xe0007018L
#define CSR_VERSION_MODEL_SIZE 1
static inline uint32_t version_model_read(void) {
	return csr_read_simple(0xe0007018L);
}
#define CSR_VERSION_MODEL_MODEL_OFFSET 0
#define CSR_VERSION_MODEL_MODEL_SIZE 8
#define CSR_VERSION_SEED_ADDR 0xe000701cL
#define CSR_VERSION_SEED_SIZE 1
static inline uint32_t version_seed_read(void) {
	return csr_read_simple(0xe000701cL);
}

/* lxspi */
#define CSR_LXSPI_BASE 0xe0007800L
#define CSR_LXSPI_BITBANG_ADDR 0xe0007800L
#define CSR_LXSPI_BITBANG_SIZE 1
static inline uint32_t lxspi_bitbang_read(void) {
	return csr_read_simple(0xe0007800L);
}
static inline void lxspi_bitbang_write(uint32_t v) {
	csr_write_simple(v, 0xe0007800L);
}
#define CSR_LXSPI_BITBANG_MOSI_OFFSET 0
#define CSR_LXSPI_BITBANG_MOSI_SIZE 1
#define CSR_LXSPI_BITBANG_CLK_OFFSET 1
#define CSR_LXSPI_BITBANG_CLK_SIZE 1
#define CSR_LXSPI_BITBANG_CS_N_OFFSET 2
#define CSR_LXSPI_BITBANG_CS_N_SIZE 1
#define CSR_LXSPI_BITBANG_DIR_OFFSET 3
#define CSR_LXSPI_BITBANG_DIR_SIZE 1
#define CSR_LXSPI_MISO_ADDR 0xe0007804L
#define CSR_LXSPI_MISO_SIZE 1
static inline uint32_t lxspi_miso_read(void) {
	return csr_read_simple(0xe0007804L);
}
#define CSR_LXSPI_BITBANG_EN_ADDR 0xe0007808L
#define CSR_LXSPI_BITBANG_EN_SIZE 1
static inline uint32_t lxspi_bitbang_en_read(void) {
	return csr_read_simple(0xe0007808L);
}
static inline void lxspi_bitbang_en_write(uint32_t v) {
	csr_write_simple(v, 0xe0007808L);
}

/* messible */
#define CSR_MESSIBLE_BASE 0xe0008000L
#define CSR_MESSIBLE_IN_ADDR 0xe0008000L
#define CSR_MESSIBLE_IN_SIZE 1
static inline uint32_t messible_in_read(void) {
	return csr_read_simple(0xe0008000L);
}
static inline void messible_in_write(uint32_t v) {
	csr_write_simple(v, 0xe0008000L);
}
#define CSR_MESSIBLE_OUT_ADDR 0xe0008004L
#define CSR_MESSIBLE_OUT_SIZE 1
static inline uint32_t messible_out_read(void) {
	return csr_read_simple(0xe0008004L);
}
#define CSR_MESSIBLE_STATUS_ADDR 0xe0008008L
#define CSR_MESSIBLE_STATUS_SIZE 1
static inline uint32_t messible_status_read(void) {
	return csr_read_simple(0xe0008008L);
}
#define CSR_MESSIBLE_STATUS_FULL_OFFSET 0
#define CSR_MESSIBLE_STATUS_FULL_SIZE 1
#define CSR_MESSIBLE_STATUS_HAVE_OFFSET 1
#define CSR_MESSIBLE_STATUS_HAVE_SIZE 1

#endif
