// mss.cc : Defines the exported functions for the DLL application.
//

#include "../deps/miles/include/mss.h"

#ifdef __cplusplus
extern "C" {
#endif

DXDEC HPROVIDER AILCALL RIB_alloc_provider_handle(long module) { return 0; }
DXDEC void AILCALL RIB_free_provider_handle(HPROVIDER provider) {}

DXDEC HPROVIDER AILCALL RIB_load_provider_library(C8 const *filename) {
  return 0;
}
DXDEC void AILCALL RIB_free_provider_library(HPROVIDER provider) {}

DXDEC RIBRESULT AILCALL
RIB_register_interface(HPROVIDER provider, C8 const *interface_name,
                       S32 entry_count, RIB_INTERFACE_ENTRY const *rlist) {
  return 0;
}

DXDEC RIBRESULT AILCALL
RIB_unregister_interface(HPROVIDER provider, C8 const *interface_name,
                         S32 entry_count, RIB_INTERFACE_ENTRY const *rlist) {
  return 0;
}

DXDEC RIBRESULT AILCALL RIB_request_interface(HPROVIDER provider,
                                              C8 const *interface_name,
                                              S32 entry_count,
                                              RIB_INTERFACE_ENTRY *rlist) {
  return 0;
}

DXDEC RIBRESULT AILCALL RIB_request_interface_entry(HPROVIDER provider,
                                                    C8 const *interface_name,
                                                    RIB_ENTRY_TYPE entry_type,
                                                    C8 const *entry_name,
                                                    UINTa *token) {
  return 0;
}

DXDEC S32 AILCALL RIB_enumerate_interface(HPROVIDER provider,
                                          C8 *interface_name,
                                          RIB_ENTRY_TYPE type, HMSSENUM *next,
                                          RIB_INTERFACE_ENTRY *dest) {
  return 0;
}

DXDEC S32 AILCALL RIB_enumerate_providers(C8 *interface_name, HMSSENUM *next,
                                          HPROVIDER *dest) {
  return 0;
}

DXDEC C8 *AILCALL RIB_type_string(void const *data, RIB_DATA_SUBTYPE subtype) {
  return 0;
}

DXDEC HPROVIDER AILCALL RIB_find_file_provider(C8 const *interface_name,
                                               C8 const *property_name,
                                               C8 const *file_suffix) {
  return 0;
}

DXDEC HPROVIDER AILCALL RIB_find_provider(C8 const *interface_name,
                                          C8 const *property_name,
                                          void const *property_value) {
  return 0;
}

//
// Static library definitions
//

#ifdef IS_STATIC
#define RIB_MAIN_NAME(name) name##_RIB_Main

DXDEC S32 AILCALL RIB_MAIN_NAME(SRS)(HPROVIDER provider_handle, U32 up_down) {}
DXDEC S32 AILCALL RIB_MAIN_NAME(DTS)(HPROVIDER provider_handle, U32 up_down) {}
DXDEC S32 AILCALL RIB_MAIN_NAME(DolbySurround)(HPROVIDER provider_handle,
                                               U32 up_down) {}
DXDEC S32 AILCALL RIB_MAIN_NAME(MP3Dec)(HPROVIDER provider_handle,
                                        U32 up_down) {}
DXDEC S32 AILCALL RIB_MAIN_NAME(OggDec)(HPROVIDER provider_handle,
                                        U32 up_down) {}
DXDEC S32 AILCALL RIB_MAIN_NAME(SpxDec)(HPROVIDER provider_handle,
                                        U32 up_down) {}
DXDEC S32 AILCALL RIB_MAIN_NAME(SpxEnc)(HPROVIDER provider_handle,
                                        U32 up_down) {}
DXDEC S32 AILCALL RIB_MAIN_NAME(Voice)(HPROVIDER provider_handle, U32 up_down) {
}
DXDEC S32 AILCALL RIB_MAIN_NAME(SpxVoice)(HPROVIDER provider_handle,
                                          U32 up_down) {}
DXDEC S32 AILCALL RIB_MAIN_NAME(DSP)(HPROVIDER provider_handle, U32 up_down) {}

#else
DXDEC S32 AILCALL RIB_Main(HPROVIDER provider_handle, U32 up_down) { return 0; }
#endif

DXDEC HPROVIDER AILCALL RIB_load_static_provider_library(RIB_MAIN_FUNC main,
                                                         char *description) {
  return 0;
}

DXDEC HPROVIDER AILCALL RIB_find_files_provider(C8 const *interface_name,
                                                C8 const *property_name_1,
                                                C8 const *file_suffix_1,
                                                C8 const *property_name_2,
                                                C8 const *file_suffix_2) {
  return 0;
}

DXDEC HPROVIDER AILCALL RIB_find_file_dec_provider(C8 const *interface_name,
                                                   C8 const *property_name_1,
                                                   U32 decimal_property_value_1,
                                                   C8 const *property_name_2,
                                                   C8 const *file_suffix_2) {
  return 0;
}

DXDEC S32 AILCALL RIB_load_application_providers(C8 const *filespec) {
  return 0;
}

DXDEC void AILCALL RIB_set_provider_user_data(HPROVIDER provider, U32 index,
                                              SINTa value) {}

DXDEC SINTa AILCALL RIB_provider_user_data(HPROVIDER provider, U32 index) {
  return 0;
}

DXDEC void AILCALL RIB_set_provider_system_data(HPROVIDER provider, U32 index,
                                                SINTa value) {}

DXDEC SINTa AILCALL RIB_provider_system_data(HPROVIDER provider, U32 index) {
  return 0;
}

DXDEC C8 *AILCALL RIB_error(void) { return 0; }

#if defined(IS_WINDOWS) || defined(IS_MAC) || defined(IS_LINUX) || \
    defined(IS_XBOX) || defined(IS_XENON) || defined(IS_PS3) ||    \
    defined(IS_PS2) || defined(IS_WII)

DXDEC U32 AILCALL AIL_get_timer_highest_delay(void) { return 0; }

DXDEC void AILCALL AIL_serve(void) {}

#endif

#ifdef IS_WIN32API

#ifdef NTAPI
HANDLE hAppThread;
#endif

#endif

//
// Background flag for timers
//

volatile S32 AIL_bkgnd_flag;

//
// Global preference array
//

SINTa AIL_preference[N_PREFS];

//
// DIG_DRIVER list
//

HDIGDRIVER DIG_first;

//
// MDI_DRIVER list
//

HMDIDRIVER MDI_first;

S32 AILCALLBACK SP_ASI_DECODER_callback(UINTa user, void *dest,
                                        S32 bytes_requested, S32 offset) {
  return 0;
}

DXDEC void *AILCALL AIL_mem_alloc_lock(UINTa size) { return 0; }
DXDEC void AILCALL AIL_mem_free_lock(void *ptr) {}

DXDEC S32 AILCALL AIL_file_error(void) { return 0; }

DXDEC S32 AILCALL AIL_file_size(char const *filename) { return 0; }

DXDEC void *AILCALL AIL_file_read(char const *filename, void *dest) {
  return 0;
}

DXDEC S32 AILCALL AIL_file_write(char const *filename, void const *buf,
                                 U32 len) {
  return 0;
}

DXDEC S32 AILCALL AIL_WAV_file_write(char const *filename, void const *buf,
                                     U32 len, S32 rate, S32 format) {
  return 0;
}

DXDEC S32 AILCALL AIL_file_append(char const *filename, void const *buf,
                                  U32 len) {
  return 0;
}

#ifndef IS_DOS

DXDEC AILMEMALLOCCB AILCALL AIL_mem_use_malloc(AILMEMALLOCCB fn) { return 0; }
DXDEC AILMEMFREECB AILCALL AIL_mem_use_free(AILMEMFREECB fn) { return 0; }

#endif

#ifdef ON_MAC_USE_FSS

DXDEC S32 AILCALL AIL_file_fss_size(FSSpec const *filename) {}

DXDEC void *AILCALL AIL_file_fss_read(FSSpec const *filename, void *dest) {}

DXDEC S32 AILCALL AIL_file_fss_write(FSSpec const *filename, void const *buf,
                                     U32 len) {}

DXDEC S32 AILCALL AIL_file_fss_attrib_write(FSSpec const *filename,
                                            void const *buf, U32 len, U32 type,
                                            U32 creator) {}

DXDEC S32 AILCALL AIL_WAV_file_fss_write(FSSpec const *filename,
                                         void const *buf, U32 len, S32 rate,
                                         S32 format) {}

#endif

//
// Compiler-independent CRTL helper functions for PS2
// Exported here for use in demo programs as well as MSS itself
//

DXDEC C8 *AILCALL AIL_ftoa(F32 val) { return 0; }

//
// High-level support services
//

#ifndef IS_DOS

DXDEC S32 AILCALL AIL_startup(void) { return 0; }

DXDEC SINTa AILCALL AIL_get_preference(U32 number) { return 0; }

#endif

DXDEC void AILCALL AIL_shutdown(void) {}

DXDEC SINTa AILCALL AIL_set_preference(U32 number, SINTa value) { return 0; }

DXDEC char *AILCALL AIL_last_error(void) { return 0; }

DXDEC void AILCALL AIL_set_error(char const *error_msg) {}

//
// Low-level support services
//

DXDEC void
#if !defined(IS_MAC) && !defined(IS_LINUX) && !defined(IS_PS2) && \
    !defined(IS_PS3) && !defined(IS_WII)
    __cdecl
#endif
    AIL_debug_printf(C8 const *fmt, ...) {
}

#ifdef IS_X86

DXDEC U32 AILCALL AIL_MMX_available(void) { return 0; }

#endif

DXDEC void AILCALL AIL_lock(void) {}
DXDEC void AILCALL AIL_unlock(void) {}

#if defined(IS_WIN32API) || defined(IS_MAC) || defined(IS_LINUX)

DXDEC void AILCALL AIL_lock_mutex(void) {}
DXDEC void AILCALL AIL_unlock_mutex(void) {}

#endif

DXDEC void AILCALL AIL_delay(S32 intervals) {}

DXDEC S32 AILCALL AIL_background(void) { return 0; }

#ifndef IS_DOS

DXDEC AILTRACECB AILCALL AIL_register_trace_callback(AILTRACECB cb, S32 level) {
  return 0;
}

#endif

//
// Process services
//

DXDEC HTIMER AILCALL AIL_register_timer(AILTIMERCB fn) { return 0; }

DXDEC UINTa AILCALL AIL_set_timer_user(HTIMER timer, UINTa user) { return 0; }

DXDEC void AILCALL AIL_set_timer_period(HTIMER timer, U32 microseconds) {}

DXDEC void AILCALL AIL_set_timer_frequency(HTIMER timer, U32 hertz) {}

DXDEC void AILCALL AIL_set_timer_divisor(HTIMER timer, U32 PIT_divisor) {}

DXDEC void AILCALL AIL_start_timer(HTIMER timer) {}
DXDEC void AILCALL AIL_start_all_timers(void) {}

DXDEC void AILCALL AIL_stop_timer(HTIMER timer) {}
DXDEC void AILCALL AIL_stop_all_timers(void) {}

DXDEC void AILCALL AIL_release_timer_handle(HTIMER timer) {}
DXDEC void AILCALL AIL_release_all_timers(void) {}

#ifdef IS_WIN32

/*
#ifndef __RADINDLL__

// static function that handles shutdown
int __cdecl MSS_auto_cleanup(void) {}

#ifdef _MSC_VER
// on MSVC, automatically register a cleanup function
#define AIL_startup() (MSS_auto_cleanup(),AIL_startup())
#endif

#endif
*/

DXDEC HWND AILCALL AIL_HWND(void) { return 0; }

#else
#ifdef IS_MAC
#if defined(__PROCESSES__)
DXDEC ProcessSerialNumber AIL_Process(void) {}
#endif
#endif
#endif

//
// high-level digital services
//

DXDEC HDIGDRIVER AILCALL AIL_open_digital_driver(U32 frequency, S32 bits,
                                                 S32 channel, U32 flags) {
  return 0;
}

DXDEC void AILCALL AIL_close_digital_driver(HDIGDRIVER dig) {}

#ifdef IS_LINUX

DXDEC S32 AILCALL AIL_digital_handle_release(HDIGDRIVER drvr) { return 0; }

DXDEC S32 AILCALL AIL_digital_handle_reacquire(HDIGDRIVER drvr) { return 0; }
#else

#ifdef IS_WINDOWS

DXDEC S32 AILCALL AIL_digital_handle_release(HDIGDRIVER drvr) { return 0; }

DXDEC S32 AILCALL AIL_digital_handle_reacquire(HDIGDRIVER drvr) { return 0; }

#else

#ifdef IS_MAC

#if defined(__RESOURCES__)

typedef MSS_STRUCT MSS_VersionType_ { Str255 version_name; }
MSS_VersionType;

#define AIL_MSS_version(str, len)                                      \
  {                                                                    \
    long _res = HOpenResFile(0, 0, "\p" MSSDLLNAME, fsRdPerm) {}       \
    if (_res == -1) {                                                  \
      str[0] = 0;                                                      \
    } else {                                                           \
      Handle _H;                                                       \
      short _Err;                                                      \
      long _cur = CurResFile() {}                                      \
      UseResFile(_res) {}                                              \
      _H = GetResource('vers', 2) {}                                   \
      _Err = ResError() {}                                             \
      if ((_Err != noErr) || (_H == 0)) {                              \
        str[0] = 0;                                                    \
        UseResFile(_cur) {}                                            \
        CloseResFile(_res) {}                                          \
      } else {                                                         \
        if (GetHandleSize(_H) == 0) {                                  \
          str[0] = 0;                                                  \
          UseResFile(_cur) {}                                          \
          CloseResFile(_res) {}                                        \
        } else {                                                       \
          MSS_VersionType *_vt = (MSS_VersionType *)*_H;               \
          if ((U32)_vt->version_name[6] > 4)                           \
            _vt->version_name[6] -= 4;                                 \
          else                                                         \
            _vt->version_name[6] = 0;                                  \
          if (((U32)len) <= ((U32)_vt->version_name[6]))               \
            _vt->version_name[6] = (U8)len - 1;                        \
          memcpy(str, _vt->version_name + 11, _vt->version_name[6]) {} \
          str[_vt->version_name[6]] = 0;                               \
          UseResFile(_cur) {}                                          \
          CloseResFile(_res) {}                                        \
        }                                                              \
        ReleaseResource(_H) {}                                         \
      }                                                                \
    }                                                                  \
  }

#endif

DXDEC S32 AILCALL AIL_digital_handle_release(HDIGDRIVER drvr) { return 0; }

DXDEC S32 AILCALL AIL_digital_handle_reacquire(HDIGDRIVER drvr) { return 0; }

#else

#ifdef IS_DOS

//
// DOS installation services
//

DXDEC IO_PARMS *AILCALL AIL_get_IO_environment(AIL_DRIVER *drvr) { return 0; }

DXDEC AIL_DRIVER *AILCALL AIL_install_driver(U8 const *driver_image,
                                             U32 n_bytes) {
  return 0;
}

DXDEC void AILCALL AIL_uninstall_driver(AIL_DRIVER *drvr) {}

DXDEC S32 AILCALL AIL_install_DIG_INI(HDIGDRIVER *dig) { return 0; }

DXDEC HDIGDRIVER AILCALL AIL_install_DIG_driver_file(char const *filename,
                                                     IO_PARMS *IO) {
  return 0;
}

DXDEC void AILCALL AIL_uninstall_DIG_driver(HDIGDRIVER dig) {}

DXDEC HDIGDRIVER AILCALL AIL_install_DIG_driver_image(void const *driver_image,
                                                      U32 size, IO_PARMS *IO) {
  return 0;
}
#endif
#endif
#endif
#endif

DXDEC char *AILCALL AIL_set_redist_directory(char const *dir) { return 0; }

DXDEC S32 AILCALL AIL_background_CPU_percent(void) { return 0; }

DXDEC S32 AILCALL AIL_digital_CPU_percent(HDIGDRIVER dig) { return 0; }

DXDEC S32 AILCALL AIL_digital_latency(HDIGDRIVER dig) { return 0; }

DXDEC HSAMPLE AILCALL AIL_allocate_sample_handle(HDIGDRIVER dig) { return 0; }

DXDEC void AILCALL AIL_set_speaker_configuration(HDIGDRIVER dig,
                                                 MSSVECTOR3D *array,
                                                 S32 n_channels,
                                                 F32 falloff_power) {}

DXDEC MSSVECTOR3D *AILCALL AIL_speaker_configuration(
    HDIGDRIVER dig, S32 *n_physical_channels, S32 *n_logical_channels,
    F32 *falloff_power, MSS_MC_SPEC *channel_spec) {
  return 0;
}

DXDEC void AILCALL AIL_set_listener_relative_receiver_array(
    HDIGDRIVER dig, MSS_RECEIVER_LIST *array, S32 n_receivers) {}

DXDEC MSS_RECEIVER_LIST *AILCALL
AIL_listener_relative_receiver_array(HDIGDRIVER dig, S32 *n_receivers) {
  return 0;
}
#ifndef IS_XBOX

DXDEC void AILCALL AIL_set_speaker_reverb_levels(
    HDIGDRIVER dig, F32 *wet_array, F32 *dry_array,
    MSS_SPEAKER const *speaker_index_array, S32 n_levels) {}

DXDEC S32 AILCALL
AIL_speaker_reverb_levels(HDIGDRIVER dig, F32 **wet_array, F32 **dry_array,
                          MSS_SPEAKER const **speaker_index_array) {
  return 0;
}

#endif

DXDEC
S32 AILEXPORT AIL_calculate_3D_channel_levels(
    HDIGDRIVER dig,  //)
    F32 *channel_levels, MSS_SPEAKER const **speaker_array,
    MSSVECTOR3D *src_pos, MSSVECTOR3D *src_face, MSSVECTOR3D *src_up,
    F32 src_inner_angle, F32 src_outer_angle, F32 src_outer_volume,
    F32 src_max_dist, F32 src_min_dist, MSSVECTOR3D *listen_pos,
    MSSVECTOR3D *listen_face, MSSVECTOR3D *listen_up, F32 rolloff_factor,
    MSSVECTOR3D *doppler_velocity, F32 *doppler_shift) {
  return 0;
}

DXDEC void AILCALL AIL_release_sample_handle(HSAMPLE S) {}

DXDEC S32 AILCALL AIL_init_sample(HSAMPLE S, S32 format) { return 0; }

DXDEC S32 AILCALL AIL_set_sample_file(HSAMPLE S, void const *file_image,
                                      S32 block) {
  return 0;
}

DXDEC S32 AILCALL AIL_set_sample_info(HSAMPLE S, AILSOUNDINFO const *info) {
  return 0;
}

DXDEC S32 AILCALL AIL_set_named_sample_file(HSAMPLE S,
                                            C8 const *file_type_suffix,
                                            void const *file_image,
                                            U32 file_size, S32 block) {
  return 0;
}

DXDEC HPROVIDER AILCALL AIL_set_sample_processor(HSAMPLE S,
                                                 SAMPLESTAGE pipeline_stage,
                                                 HPROVIDER provider) {
  return 0;
}

DXDEC HPROVIDER AILCALL AIL_set_digital_driver_processor(
    HDIGDRIVER dig, DIGDRVSTAGE pipeline_stage, HPROVIDER provider) {
  return 0;
}

DXDEC HPROVIDER AILCALL AIL_sample_processor(HSAMPLE S,
                                             SAMPLESTAGE pipeline_stage) {
  return 0;
}

DXDEC HPROVIDER AILCALL
AIL_digital_driver_processor(HDIGDRIVER dig, DIGDRVSTAGE pipeline_stage) {
  return 0;
}

DXDEC void AILCALL AIL_set_sample_adpcm_block_size(HSAMPLE S, U32 blocksize) {}

DXDEC void AILCALL AIL_set_sample_address(HSAMPLE S, void const *start,
                                          U32 len) {}

DXDEC void AILCALL AIL_start_sample(HSAMPLE S) {}

DXDEC void AILCALL AIL_stop_sample(HSAMPLE S) {}

DXDEC void AILCALL AIL_resume_sample(HSAMPLE S) {}

DXDEC void AILCALL AIL_end_sample(HSAMPLE S) {}

DXDEC void AILCALL AIL_set_sample_playback_rate(HSAMPLE S, S32 playback_rate) {}

DXDEC void AILCALL AIL_set_sample_volume_pan(HSAMPLE S, F32 volume, F32 pan) {}

DXDEC void AILCALL AIL_set_sample_volume_levels(HSAMPLE S, F32 left_level,
                                                F32 right_level) {}

DXDEC void AILCALL AIL_set_sample_channel_levels(
    HSAMPLE S, MSS_SPEAKER const *source_speaker_indexes,
    MSS_SPEAKER const *dest_speaker_indexes, F32 const *levels, S32 n_levels) {}

DXDEC void AILCALL AIL_set_sample_reverb_levels(HSAMPLE S, F32 dry_level,
                                                F32 wet_level) {}

DXDEC void AILCALL AIL_set_sample_low_pass_cut_off(
    HSAMPLE S, S32 /*-1 or MSS_SPEAKER*/ channel, F32 cut_off) {}

DXDEC void AILCALL AIL_set_sample_loop_count(HSAMPLE S, S32 loop_count) {}

DXDEC void AILCALL AIL_set_sample_loop_block(HSAMPLE S, S32 loop_start_offset,
                                             S32 loop_end_offset) {}

DXDEC S32 AILCALL AIL_sample_loop_block(HSAMPLE S, S32 *loop_start_offset,
                                        S32 *loop_end_offset) {
  return 0;
}

DXDEC U32 AILCALL AIL_sample_status(HSAMPLE S) { return 0; }

DXDEC S32 AILCALL AIL_sample_playback_rate(HSAMPLE S) { return 0; }

DXDEC void AILCALL AIL_sample_volume_pan(HSAMPLE S, F32 *volume, F32 *pan) {}

DXDEC void AILCALL AIL_sample_channel_levels(
    HSAMPLE S, MSS_SPEAKER const *source_speaker_indexes,
    MSS_SPEAKER const *dest_speaker_indexes, F32 *levels, S32 n_levels) {}

DXDEC void AILCALL AIL_sample_volume_levels(HSAMPLE S, F32 *left_level,
                                            F32 *right_level) {}

DXDEC void AILCALL AIL_sample_reverb_levels(HSAMPLE S, F32 *dry_level,
                                            F32 *wet_level) {}

DXDEC F32 AILCALL
AIL_sample_low_pass_cut_off(HSAMPLE S, S32 /*-1 or MSS_SPEAKER*/ channel) {
  return 0;
}

DXDEC S32 AILCALL AIL_sample_loop_count(HSAMPLE S) { return 0; }

DXDEC void AILCALL AIL_set_digital_master_volume_level(HDIGDRIVER dig,
                                                       F32 master_volume) {}

DXDEC F32 AILCALL AIL_digital_master_volume_level(HDIGDRIVER dig) { return 0; }

DXDEC void AILCALL AIL_set_sample_51_volume_pan(HSAMPLE S, F32 volume, F32 pan,
                                                F32 fb_pan, F32 center_level,
                                                F32 sub_level) {}

DXDEC void AILCALL AIL_sample_51_volume_pan(HSAMPLE S, F32 *volume, F32 *pan,
                                            F32 *fb_pan, F32 *center_level,
                                            F32 *sub_level) {}

DXDEC void AILCALL AIL_set_sample_51_volume_levels(
    HSAMPLE S, F32 f_left_level, F32 f_right_level, F32 b_left_level,
    F32 b_right_level, F32 center_level, F32 sub_level) {}

DXDEC void AILCALL AIL_sample_51_volume_levels(
    HSAMPLE S, F32 *f_left_level, F32 *f_right_level, F32 *b_left_level,
    F32 *b_right_level, F32 *center_level, F32 *sub_level) {}
#if !defined(IS_XBOX)

DXDEC void AILCALL AIL_set_digital_master_reverb(HDIGDRIVER dig,
                                                 F32 reverb_decay_time,
                                                 F32 reverb_predelay,
                                                 F32 reverb_damping) {}

DXDEC void AILCALL AIL_digital_master_reverb(HDIGDRIVER dig, F32 *reverb_time,
                                             F32 *reverb_predelay,
                                             F32 *reverb_damping) {}

#endif

DXDEC void AILCALL AIL_set_digital_master_reverb_levels(HDIGDRIVER dig,
                                                        F32 dry_level,
                                                        F32 wet_level) {}

DXDEC void AILCALL AIL_digital_master_reverb_levels(HDIGDRIVER dig,
                                                    F32 *dry_level,
                                                    F32 *wet_level) {}

//
// low-level digital services
//

DXDEC S32 AILCALL AIL_minimum_sample_buffer_size(HDIGDRIVER dig,
                                                 S32 playback_rate,
                                                 S32 format) {
  return 0;
}

DXDEC S32 AILCALL AIL_sample_buffer_ready(HSAMPLE S) { return 0; }

DXDEC S32 AILCALL AIL_load_sample_buffer(HSAMPLE S, S32 buff_num,
                                         void const *buffer, U32 len) {
  return 0;
}

DXDEC void AILCALL AIL_request_EOB_ASI_reset(HSAMPLE S, U32 buff_num,
                                             S32 new_stream_position) {}

DXDEC S32 AILCALL AIL_sample_buffer_info(HSAMPLE S,  //)
                                         S32 buff_num, U32 *pos, U32 *len,
                                         S32 *head, S32 *tail) {
  return 0;
}

DXDEC U32 AILCALL AIL_sample_granularity(HSAMPLE S) { return 0; }

DXDEC void AILCALL AIL_set_sample_position(HSAMPLE S, U32 pos) {}

DXDEC U32 AILCALL AIL_sample_position(HSAMPLE S) { return 0; }

DXDEC AILSAMPLECB AILCALL AIL_register_SOB_callback(HSAMPLE S,
                                                    AILSAMPLECB SOB) {
  return 0;
}

DXDEC AILSAMPLECB AILCALL AIL_register_EOB_callback(HSAMPLE S,
                                                    AILSAMPLECB EOB) {
  return 0;
}

DXDEC AILSAMPLECB AILCALL AIL_register_EOS_callback(HSAMPLE S,
                                                    AILSAMPLECB EOS) {
  return 0;
}

DXDEC AILFALLOFFCB AILCALL
AIL_register_falloff_function_callback(HSAMPLE S, AILFALLOFFCB falloff_cb) {
  return 0;
}

DXDEC void AILCALL AIL_set_sample_user_data(HSAMPLE S, U32 index, SINTa value) {
}

DXDEC SINTa AILCALL AIL_sample_user_data(HSAMPLE S, U32 index) { return 0; }

DXDEC S32 AILCALL AIL_active_sample_count(HDIGDRIVER dig) { return 0; }

DXDEC void AILCALL AIL_digital_configuration(HDIGDRIVER dig, S32 *rate,
                                             S32 *format, char *string) {}

DXDEC S32 AILCALL AIL_platform_property(void *object,
                                        MSS_PLATFORM_PROPERTY property,
                                        void *before_value,
                                        void const *new_value,
                                        void *after_value) {
  return 0;
}

#ifdef IS_WIN32API

DXDEC S32 AILCALL AIL_set_direct_buffer_control(HSAMPLE S, U32 command) {
  return 0;
}

DXDEC void AILCALL AIL_get_DirectSound_info(HSAMPLE S, AILLPDIRECTSOUND *lplpDS,
                                            AILLPDIRECTSOUNDBUFFER *lplpDSB) {}

#ifdef IS_WIN32
DXDEC S32 AILCALL AIL_set_DirectSound_HWND(HDIGDRIVER dig, HWND wnd) {
  return 0;
}
#endif

#endif

DXDEC void AILCALL AIL_set_sample_ms_position(HSAMPLE S,  //)
                                              S32 milliseconds) {}

DXDEC void AILCALL AIL_sample_ms_position(HSAMPLE S,  //)
                                          S32 *total_milliseconds,
                                          S32 *current_milliseconds) {}

//
// Digital input services
//

#if defined(IS_WINDOWS) || defined(IS_MAC) || defined(IS_LINUX) || \
    defined(IS_XBOX) || defined(IS_XENON)

DXDEC HDIGINPUT AILCALL AIL_open_input(AIL_INPUT_INFO *info) { return 0; }

DXDEC void AILCALL AIL_close_input(HDIGINPUT dig) {}

DXDEC AIL_INPUT_INFO *AILCALL AIL_get_input_info(HDIGINPUT dig) { return 0; }

DXDEC S32 AILCALL AIL_set_input_state(HDIGINPUT dig, S32 enable) { return 0; }
#endif

//
// High-level XMIDI services
//

DXDEC HMDIDRIVER AILCALL AIL_open_XMIDI_driver(U32 flags) { return 0; }

DXDEC void AILCALL AIL_close_XMIDI_driver(HMDIDRIVER mdi) {}

#if defined(IS_MAC) || defined(IS_LINUX)

DXDEC S32 AILCALL AIL_MIDI_handle_release(HMDIDRIVER mdi) {}

DXDEC S32 AILCALL AIL_MIDI_handle_reacquire(HMDIDRIVER mdi) {}

#else

#ifdef IS_WINDOWS

DXDEC S32 AILCALL AIL_midiOutOpen(HMDIDRIVER *drvr, LPHMIDIOUT *lphMidiOut,
                                  S32 dwDeviceID) {
  return 0;
}

DXDEC void AILCALL AIL_midiOutClose(HMDIDRIVER mdi) {}

DXDEC S32 AILCALL AIL_MIDI_handle_release(HMDIDRIVER mdi) { return 0; }

DXDEC S32 AILCALL AIL_MIDI_handle_reacquire(HMDIDRIVER mdi) { return 0; }

#else

#ifdef IS_DOS

DXDEC S32 AILCALL AIL_install_MDI_INI(HMDIDRIVER *mdi) {}

DXDEC HMDIDRIVER AILCALL AIL_install_MDI_driver_file(char const *filename,
                                                     IO_PARMS *IO) {}

DXDEC void AILCALL AIL_uninstall_MDI_driver(HMDIDRIVER mdi) {}

DXDEC HMDIDRIVER AILCALL AIL_install_MDI_driver_image(void const *driver_image,
                                                      U32 size, IO_PARMS *IO) {}

DXDEC S32 AILCALL AIL_MDI_driver_type(HMDIDRIVER mdi) {}

DXDEC void AILCALL AIL_set_GTL_filename_prefix(char const *prefix) {}

DXDEC S32 AILCALL AIL_timbre_status(HMDIDRIVER mdi, S32 bank, S32 patch) {}

DXDEC S32 AILCALL AIL_install_timbre(HMDIDRIVER mdi, S32 bank, S32 patch) {}

DXDEC void AILCALL AIL_protect_timbre(HMDIDRIVER mdi, S32 bank, S32 patch) {}

DXDEC void AILCALL AIL_unprotect_timbre(HMDIDRIVER mdi, S32 bank, S32 patch) {}

#endif

#endif

#endif

DXDEC HSEQUENCE AILCALL AIL_allocate_sequence_handle(HMDIDRIVER mdi) {
  return 0;
}

DXDEC void AILCALL AIL_release_sequence_handle(HSEQUENCE S) {}

DXDEC S32 AILCALL AIL_init_sequence(HSEQUENCE S, void const *start,
                                    S32 sequence_num) {
  return 0;
}

DXDEC void AILCALL AIL_start_sequence(HSEQUENCE S) {}

DXDEC void AILCALL AIL_stop_sequence(HSEQUENCE S) {}

DXDEC void AILCALL AIL_resume_sequence(HSEQUENCE S) {}

DXDEC void AILCALL AIL_end_sequence(HSEQUENCE S) {}

DXDEC void AILCALL AIL_set_sequence_tempo(HSEQUENCE S, S32 tempo,
                                          S32 milliseconds) {}

DXDEC void AILCALL AIL_set_sequence_volume(HSEQUENCE S, S32 volume,
                                           S32 milliseconds) {}

DXDEC void AILCALL AIL_set_sequence_loop_count(HSEQUENCE S, S32 loop_count) {}

DXDEC U32 AILCALL AIL_sequence_status(HSEQUENCE S) { return 0; }

DXDEC S32 AILCALL AIL_sequence_tempo(HSEQUENCE S) { return 0; }

DXDEC S32 AILCALL AIL_sequence_volume(HSEQUENCE S) { return 0; }

DXDEC S32 AILCALL AIL_sequence_loop_count(HSEQUENCE S) { return 0; }

DXDEC void AILCALL AIL_set_XMIDI_master_volume(HMDIDRIVER mdi,
                                               S32 master_volume) {}

DXDEC S32 AILCALL AIL_XMIDI_master_volume(HMDIDRIVER mdi) { return 0; }

//
// Low-level XMIDI services
//

DXDEC S32 AILCALL AIL_active_sequence_count(HMDIDRIVER mdi) { return 0; }

DXDEC S32 AILCALL AIL_controller_value(HSEQUENCE S, S32 channel,
                                       S32 controller_num) {
  return 0;
}

DXDEC S32 AILCALL AIL_channel_notes(HSEQUENCE S, S32 channel) { return 0; }

DXDEC void AILCALL AIL_sequence_position(HSEQUENCE S, S32 *beat, S32 *measure) {
}

DXDEC void AILCALL AIL_branch_index(HSEQUENCE S, U32 marker) {}

DXDEC AILPREFIXCB AILCALL AIL_register_prefix_callback(HSEQUENCE S,
                                                       AILPREFIXCB callback) {
  return 0;
}

DXDEC AILTRIGGERCB AILCALL
AIL_register_trigger_callback(HSEQUENCE S, AILTRIGGERCB callback) {
  return 0;
}

DXDEC AILSEQUENCECB AILCALL
AIL_register_sequence_callback(HSEQUENCE S, AILSEQUENCECB callback) {
  return 0;
}

DXDEC AILBEATCB AILCALL AIL_register_beat_callback(HSEQUENCE S,
                                                   AILBEATCB callback) {
  return 0;
}

DXDEC AILEVENTCB AILCALL AIL_register_event_callback(HMDIDRIVER mdi,
                                                     AILEVENTCB callback) {
  return 0;
}

DXDEC AILTIMBRECB AILCALL AIL_register_timbre_callback(HMDIDRIVER mdi,
                                                       AILTIMBRECB callback) {
  return 0;
}

DXDEC void AILCALL AIL_set_sequence_user_data(HSEQUENCE S, U32 index,
                                              SINTa value) {}

DXDEC SINTa AILCALL AIL_sequence_user_data(HSEQUENCE S, U32 index) { return 0; }

DXDEC void AILCALL AIL_register_ICA_array(HSEQUENCE S, U8 *array) {}

DXDEC S32 AILCALL AIL_lock_channel(HMDIDRIVER mdi) { return 0; }

DXDEC void AILCALL AIL_release_channel(HMDIDRIVER mdi, S32 channel) {}

DXDEC void AILCALL AIL_map_sequence_channel(HSEQUENCE S, S32 seq_channel,
                                            S32 new_channel) {}

DXDEC S32 AILCALL AIL_true_sequence_channel(HSEQUENCE S, S32 seq_channel) {
  return 0;
}

DXDEC void AILCALL AIL_send_channel_voice_message(HMDIDRIVER mdi, HSEQUENCE S,
                                                  S32 status, S32 data_1,
                                                  S32 data_2) {}

DXDEC void AILCALL AIL_send_sysex_message(HMDIDRIVER mdi, void const *buffer) {}

DXDEC HWAVESYNTH AILCALL AIL_create_wave_synthesizer(HDIGDRIVER dig,
                                                     HMDIDRIVER mdi,
                                                     void const *wave_lib,
                                                     S32 polyphony) {
  return 0;
}

DXDEC void AILCALL AIL_destroy_wave_synthesizer(HWAVESYNTH W) {}

DXDEC void AILCALL AIL_set_sequence_ms_position(HSEQUENCE S,  //)
                                                S32 milliseconds) {}

DXDEC void AILCALL AIL_sequence_ms_position(HSEQUENCE S,  //)
                                            S32 *total_milliseconds,
                                            S32 *current_milliseconds) {}

#if !defined(IS_XBOX) && !defined(IS_XENON) && !defined(IS_PS2) && \
    !defined(IS_PS3) && !defined(IS_WII)

DXDEC HREDBOOK AILCALL AIL_redbook_open(U32 which) { return 0; }

#ifdef IS_MAC
DXDEC HREDBOOK AILCALL AIL_redbook_open_volume(char const *drive) {}
#else
DXDEC HREDBOOK AILCALL AIL_redbook_open_drive(S32 drive) { return 0; }
#endif

DXDEC void AILCALL AIL_redbook_close(HREDBOOK hand) {}

DXDEC void AILCALL AIL_redbook_eject(HREDBOOK hand) {}

DXDEC void AILCALL AIL_redbook_retract(HREDBOOK hand) {}

DXDEC U32 AILCALL AIL_redbook_status(HREDBOOK hand) { return 0; }

DXDEC U32 AILCALL AIL_redbook_tracks(HREDBOOK hand) { return 0; }

DXDEC U32 AILCALL AIL_redbook_track(HREDBOOK hand) { return 0; }

DXDEC void AILCALL AIL_redbook_track_info(HREDBOOK hand, U32 tracknum,
                                          U32 *startmsec, U32 *endmsec) {}

DXDEC U32 AILCALL AIL_redbook_id(HREDBOOK hand) { return 0; }

DXDEC U32 AILCALL AIL_redbook_position(HREDBOOK hand) { return 0; }

DXDEC U32 AILCALL AIL_redbook_play(HREDBOOK hand, U32 startmsec, U32 endmsec) {
  return 0;
}

DXDEC U32 AILCALL AIL_redbook_stop(HREDBOOK hand) { return 0; }

DXDEC U32 AILCALL AIL_redbook_pause(HREDBOOK hand) { return 0; }

DXDEC U32 AILCALL AIL_redbook_resume(HREDBOOK hand) { return 0; }

DXDEC F32 AILCALL AIL_redbook_volume_level(HREDBOOK hand) { return 0; }

DXDEC F32 AILCALL AIL_redbook_set_volume_level(HREDBOOK hand, F32 volume) {
  return 0;
}

#endif

#ifdef IS_WIN16
#define AIL_ms_count timeGetTime
DXDEC U32 AILCALL AIL_us_count(void) { return 0; }
#else
DXDEC U32 AILCALL AIL_ms_count(void) { return 0; }
DXDEC U32 AILCALL AIL_us_count(void) { return 0; }
#endif

DXDEC HSTREAM AILCALL AIL_open_stream(HDIGDRIVER dig, char const *filename,
                                      S32 stream_mem) {
  return 0;
}

DXDEC void AILCALL AIL_close_stream(HSTREAM stream) {}

DXDEC HSAMPLE AILCALL AIL_stream_sample_handle(HSTREAM stream) { return 0; }

DXDEC S32 AILCALL AIL_service_stream(HSTREAM stream, S32 fillup) { return 0; }

DXDEC void AILCALL AIL_start_stream(HSTREAM stream) {}

DXDEC void AILCALL AIL_pause_stream(HSTREAM stream, S32 onoff) {}

DXDEC S32 AILCALL AIL_stream_loop_count(HSTREAM stream) { return 0; }

DXDEC void AILCALL AIL_set_stream_loop_count(HSTREAM stream, S32 count) {}

DXDEC void AILCALL AIL_set_stream_loop_block(HSTREAM S, S32 loop_start_offset,
                                             S32 loop_end_offset) {}

DXDEC S32 AILCALL AIL_stream_status(HSTREAM stream) { return 0; }

DXDEC void AILCALL AIL_set_stream_position(HSTREAM stream, S32 offset) {}

DXDEC S32 AILCALL AIL_stream_position(HSTREAM stream) { return 0; }

DXDEC void AILCALL AIL_stream_info(HSTREAM stream, S32 *datarate, S32 *sndtype,
                                   S32 *length, S32 *memory) {}

DXDEC AILSTREAMCB AILCALL AIL_register_stream_callback(HSTREAM stream,
                                                       AILSTREAMCB callback) {
  return 0;
}

DXDEC void AILCALL AIL_auto_service_stream(HSTREAM stream, S32 onoff) {}

DXDEC void AILCALL AIL_set_stream_user_data(HSTREAM S, U32 index, SINTa value) {
}

DXDEC SINTa AILCALL AIL_stream_user_data(HSTREAM S, U32 index) { return 0; }

DXDEC void AILCALL AIL_set_stream_ms_position(HSTREAM S, S32 milliseconds) {}

DXDEC void AILCALL AIL_stream_ms_position(HSTREAM S,  //)
                                          S32 *total_milliseconds,
                                          S32 *current_milliseconds) {}

DXDEC void AILCALL AIL_set_file_callbacks(AIL_file_open_callback opencb,
                                          AIL_file_close_callback closecb,
                                          AIL_file_seek_callback seekcb,
                                          AIL_file_read_callback readcb) {}

#ifdef IS_32

DXDEC void AILCALL AIL_set_file_async_callbacks(
    AIL_file_open_callback opencb, AIL_file_close_callback closecb,
    AIL_file_seek_callback seekcb, AIL_file_async_read_callback areadcb,
    AIL_file_async_status_callback statuscb) {}

#endif

//
// High-level DLS functions
//

DXDEC HDLSDEVICE AILCALL AIL_DLS_open(HMDIDRIVER mdi, HDIGDRIVER dig,
#ifdef IS_STATIC
                                      AILSTATICDLS const *staticdls,
#else
                                      char const *libname,
#endif
                                      U32 flags, U32 rate, S32 bits,
                                      S32 channels) {
  return 0;
}

//
// Parameters for the dwFlag used in DLSClose() and flags in AIL_DLS_close
//

DXDEC void AILCALL AIL_DLS_close(HDLSDEVICE dls, U32 flags) {}

DXDEC HDLSFILEID AILCALL AIL_DLS_load_file(HDLSDEVICE dls, char const *filename,
                                           U32 flags) {
  return 0;
}

DXDEC HDLSFILEID AILCALL AIL_DLS_load_memory(HDLSDEVICE dls,
                                             void const *memfile, U32 flags) {
  return 0;
}

//
// other parameters for AIL_DLS_unload
//

DXDEC void AILCALL AIL_DLS_unload(HDLSDEVICE dls, HDLSFILEID dlsid) {}

DXDEC void AILCALL AIL_DLS_compact(HDLSDEVICE dls) {}

DXDEC void AILCALL AIL_DLS_get_info(HDLSDEVICE dls, AILDLSINFO *info,
                                    S32 *PercentCPU) {}

DXDEC HSAMPLE AILCALL AIL_DLS_sample_handle(HDLSDEVICE dls) { return 0; }

//
// Quick-integration service functions and data types
//

DXDEC S32 AILCALL
#if defined(IS_WINDOWS) || defined(IS_MAC) || defined(IS_LINUX) || \
    defined(IS_XBOX) || defined(IS_XENON) || defined(IS_PS2) ||    \
    defined(IS_PS3) || defined(IS_WII)
AIL_quick_startup(
#else
AIL_quick_startup_with_start(
    void *startup,
#endif
    S32 use_digital, S32 use_MIDI, U32 output_rate, S32 output_bits,
    S32 output_channels) {
  return 0;
}

DXDEC void AILCALL AIL_quick_shutdown(void) {}

DXDEC void AILCALL AIL_quick_handles(HDIGDRIVER *pdig, HMDIDRIVER *pmdi,
                                     HDLSDEVICE *pdls) {}

DXDEC HAUDIO AILCALL AIL_quick_load(char const *filename) { return 0; }

#ifdef ON_MAC_USE_FSS
DXDEC HAUDIO AILCALL AIL_quick_fss_load(FSSpec const *filename) {}
#endif

DXDEC HAUDIO AILCALL AIL_quick_load_mem(void const *mem, U32 size) { return 0; }

DXDEC HAUDIO AILCALL AIL_quick_load_named_mem(void const *mem,
                                              char const *filename, U32 size) {
  return 0;
}

DXDEC HAUDIO AILCALL AIL_quick_copy(HAUDIO audio) { return 0; }

DXDEC void AILCALL AIL_quick_unload(HAUDIO audio) {}

DXDEC S32 AILCALL AIL_quick_play(HAUDIO audio, U32 loop_count) { return 0; }

DXDEC void AILCALL AIL_quick_halt(HAUDIO audio) {}

DXDEC S32 AILCALL AIL_quick_status(HAUDIO audio) { return 0; }

DXDEC HAUDIO AILCALL AIL_quick_load_and_play(char const *filename,
                                             U32 loop_count, S32 wait_request) {
  return 0;
}

#ifdef ON_MAC_USE_FSS
DXDEC HAUDIO AILCALL AIL_quick_fss_load_and_play(FSSpec const *filename,
                                                 U32 loop_count,
                                                 S32 wait_request) {
  return 0;
}
#endif

DXDEC void AILCALL AIL_quick_set_speed(HAUDIO audio, S32 speed) {}

DXDEC void AILCALL AIL_quick_set_volume(HAUDIO audio, F32 volume,
                                        F32 extravol) {}

DXDEC void AILCALL AIL_quick_set_reverb_levels(HAUDIO audio, F32 dry_level,
                                               F32 wet_level) {}

DXDEC void AILCALL AIL_quick_set_low_pass_cut_off(HAUDIO S, S32 channel,
                                                  F32 cut_off) {}

DXDEC void AILCALL AIL_quick_set_ms_position(HAUDIO audio, S32 milliseconds) {}

DXDEC S32 AILCALL AIL_quick_ms_position(HAUDIO audio) { return 0; }

DXDEC S32 AILCALL AIL_quick_ms_length(HAUDIO audio) { return 0; }

DXDEC S32 AILCALL AIL_quick_type(HAUDIO audio) { return 0; }

DXDEC S32 AILCALL AIL_WAV_info(void const *data, AILSOUNDINFO *info) {
  return 0;
}

DXDEC S32 AILCALL AIL_size_processed_digital_audio(U32 dest_rate,
                                                   U32 dest_format,
                                                   S32 num_srcs,
                                                   AILMIXINFO const *src) {
  return 0;
}

DXDEC S32 AILCALL AIL_process_digital_audio(void *dest_buffer,
                                            S32 dest_buffer_size, U32 dest_rate,
                                            U32 dest_format, S32 num_srcs,
                                            AILMIXINFO *src) {
  return 0;
}

DXDEC S32 AILCALL AIL_compress_ASI(AILSOUNDINFO const *info,  //)
                                   char const *filename_ext, void **outdata,
                                   U32 *outsize, AILLENGTHYCB callback) {
  return 0;
}

DXDEC S32 AILCALL AIL_decompress_ASI(void const *indata,  //)
                                     U32 insize, char const *filename_ext,
                                     void **wav, U32 *wavsize,
                                     AILLENGTHYCB callback) {
  return 0;
}

DXDEC S32 AILCALL AIL_compress_ADPCM(AILSOUNDINFO const *info, void **outdata,
                                     U32 *outsize) {
  return 0;
}

DXDEC S32 AILCALL AIL_decompress_ADPCM(AILSOUNDINFO const *info, void **outdata,
                                       U32 *outsize) {
  return 0;
}

DXDEC S32 AILCALL AIL_compress_DLS(void const *dls,
                                   char const *compression_extension,
                                   void **mls, U32 *mlssize,
                                   AILLENGTHYCB callback) {
  return 0;
}

DXDEC S32 AILCALL AIL_merge_DLS_with_XMI(void const *xmi, void const *dls,
                                         void **mss, U32 *msssize) {
  return 0;
}

DXDEC S32 AILCALL AIL_extract_DLS(void const *source_image,  //)
                                  U32 source_size, void **XMI_output_data,
                                  U32 *XMI_output_size, void **DLS_output_data,
                                  U32 *DLS_output_size, AILLENGTHYCB callback) {
  return 0;
}

DXDEC S32 AILCALL AIL_filter_DLS_with_XMI(void const *xmi, void const *dls,
                                          void **dlsout, U32 *dlssize,
                                          S32 flags, AILLENGTHYCB callback) {
  return 0;
}

DXDEC S32 AILCALL AIL_MIDI_to_XMI(void const *MIDI, U32 MIDI_size, void **XMIDI,
                                  U32 *XMIDI_size, S32 flags) {
  return 0;
}

#if defined(IS_WIN32) || defined(IS_MAC)

DXDEC S32 AILCALL AIL_list_DLS(void const *DLS, char **lst, U32 *lst_size,
                               S32 flags, C8 *title) {
  return 0;
}

DXDEC S32 AILCALL AIL_list_MIDI(void const *MIDI, U32 MIDI_size, char **lst,
                                U32 *lst_size, S32 flags) {
  return 0;
}
#endif

DXDEC S32 AILCALL AIL_file_type(void const *data, U32 size) { return 0; }

DXDEC S32 AILCALL AIL_file_type_named(void const *data, char const *filename,
                                      U32 size) {
  return 0;
}

DXDEC S32 AILCALL AIL_find_DLS(void const *data, U32 size, void **xmi,
                               U32 *xmisize, void **dls, U32 *dlssize) {
  return 0;
}

DXDEC void AILCALL AIL_inspect_MP3(MP3_INFO *inspection_state,
                                   U8 *MP3_file_image, S32 MP3_image_size) {}

DXDEC S32 AILCALL AIL_enumerate_MP3_frames(MP3_INFO *inspection_state) {
  return 0;
}

#if defined(IS_WIN32API) || defined(IS_MAC) || defined(IS_LINUX) || \
    defined(IS_DOS) || defined(IS_PS2) || defined(IS_PS3) || defined(IS_WII)

//
// Auxiliary 2D interface calls
//

DXDEC HDIGDRIVER AILCALL AIL_primary_digital_driver(HDIGDRIVER new_primary) {
  return 0;
}

//
// 3D-related calls
//

DXDEC S32 AILCALL AIL_room_type(HDIGDRIVER dig) { return 0; }

DXDEC void AILCALL AIL_set_room_type(HDIGDRIVER dig, S32 room_type) {}

DXDEC F32 AILCALL AIL_3D_rolloff_factor(HDIGDRIVER dig) { return 0; }

DXDEC void AILCALL AIL_set_3D_rolloff_factor(HDIGDRIVER dig, F32 factor) {}

DXDEC F32 AILCALL AIL_3D_doppler_factor(HDIGDRIVER dig) { return 0; }

DXDEC void AILCALL AIL_set_3D_doppler_factor(HDIGDRIVER dig, F32 factor) {}

DXDEC F32 AILCALL AIL_3D_distance_factor(HDIGDRIVER dig) { return 0; }

DXDEC void AILCALL AIL_set_3D_distance_factor(HDIGDRIVER dig, F32 factor) {}

DXDEC void AILCALL AIL_set_sample_obstruction(HSAMPLE S, F32 obstruction) {}

DXDEC void AILCALL AIL_set_sample_occlusion(HSAMPLE S, F32 occlusion) {}

DXDEC void AILCALL AIL_set_sample_exclusion(HSAMPLE S, F32 exclusion) {}

DXDEC F32 AILCALL AIL_sample_obstruction(HSAMPLE S) { return 0; }

DXDEC F32 AILCALL AIL_sample_occlusion(HSAMPLE S) { return 0; }

DXDEC F32 AILCALL AIL_sample_exclusion(HSAMPLE S) { return 0; }

DXDEC void AILCALL AIL_set_sample_3D_distances(HSAMPLE S, F32 max_dist,
                                               F32 min_dist,
                                               S32 auto_3D_wet_atten) {}

DXDEC void AILCALL AIL_sample_3D_distances(HSAMPLE S, F32 *max_dist,
                                           F32 *min_dist,
                                           S32 *auto_3D_wet_atten) {}

DXDEC void AILCALL AIL_set_sample_3D_cone(HSAMPLE S, F32 inner_angle,
                                          F32 outer_angle,
                                          F32 outer_volume_level) {}

DXDEC void AILCALL AIL_sample_3D_cone(HSAMPLE S, F32 *inner_angle,
                                      F32 *outer_angle,
                                      F32 *outer_volume_level) {}

DXDEC void AILCALL AIL_set_sample_3D_position(HSAMPLE obj, F32 X, F32 Y,
                                              F32 Z) {}

DXDEC void AILCALL AIL_set_sample_3D_velocity(HSAMPLE obj, F32 dX_per_ms,
                                              F32 dY_per_ms, F32 dZ_per_ms,
                                              F32 magnitude) {}

DXDEC void AILCALL AIL_set_sample_3D_velocity_vector(HSAMPLE obj, F32 dX_per_ms,
                                                     F32 dY_per_ms,
                                                     F32 dZ_per_ms) {}

DXDEC void AILCALL AIL_set_sample_3D_orientation(HSAMPLE obj, F32 X_face,
                                                 F32 Y_face, F32 Z_face,
                                                 F32 X_up, F32 Y_up, F32 Z_up) {
}

DXDEC S32 AILCALL AIL_sample_3D_position(HSAMPLE obj, F32 *X, F32 *Y, F32 *Z) {
  return 0;
}

DXDEC void AILCALL AIL_sample_3D_velocity(HSAMPLE obj, F32 *dX_per_ms,
                                          F32 *dY_per_ms, F32 *dZ_per_ms) {}

DXDEC void AILCALL AIL_sample_3D_orientation(HSAMPLE obj, F32 *X_face,
                                             F32 *Y_face, F32 *Z_face,
                                             F32 *X_up, F32 *Y_up, F32 *Z_up) {}

DXDEC void AILCALL AIL_update_sample_3D_position(HSAMPLE obj,
                                                 F32 dt_milliseconds) {}

DXDEC void AILCALL AIL_set_listener_3D_position(HDIGDRIVER dig, F32 X, F32 Y,
                                                F32 Z) {}

DXDEC void AILCALL AIL_set_listener_3D_velocity(HDIGDRIVER dig, F32 dX_per_ms,
                                                F32 dY_per_ms, F32 dZ_per_ms,
                                                F32 magnitude) {}

DXDEC void AILCALL AIL_set_listener_3D_velocity_vector(HDIGDRIVER dig,
                                                       F32 dX_per_ms,
                                                       F32 dY_per_ms,
                                                       F32 dZ_per_ms) {}

DXDEC void AILCALL AIL_set_listener_3D_orientation(HDIGDRIVER dig, F32 X_face,
                                                   F32 Y_face, F32 Z_face,
                                                   F32 X_up, F32 Y_up,
                                                   F32 Z_up) {}

DXDEC void AILCALL AIL_listener_3D_position(HDIGDRIVER dig, F32 *X, F32 *Y,
                                            F32 *Z) {}

DXDEC void AILCALL AIL_listener_3D_velocity(HDIGDRIVER dig, F32 *dX_per_ms,
                                            F32 *dY_per_ms, F32 *dZ_per_ms) {}

DXDEC void AILCALL AIL_listener_3D_orientation(HDIGDRIVER dig, F32 *X_face,
                                               F32 *Y_face, F32 *Z_face,
                                               F32 *X_up, F32 *Y_up,
                                               F32 *Z_up) {}

DXDEC void AILCALL AIL_update_listener_3D_position(HDIGDRIVER dig,
                                                   F32 dt_milliseconds) {}

#endif

#ifdef MSS_FLT_SUPPORTED

//
// Pipeline filter calls
//

DXDEC HPROVIDER AILCALL AIL_digital_output_filter(HDIGDRIVER dig) { return 0; }

DXDEC S32 AILCALL AIL_enumerate_filters(HMSSENUM *next, HPROVIDER *dest,
                                        C8 **name) {
  return 0;
}
DXDEC HDRIVERSTATE AILCALL AIL_open_filter(HPROVIDER lib, HDIGDRIVER dig) {
  return 0;
}

DXDEC void AILCALL AIL_close_filter(HDRIVERSTATE filter) {}

DXDEC S32 AILCALL AIL_find_filter(C8 const *name, HPROVIDER *ret) { return 0; }

DXDEC S32 AILCALL AIL_enumerate_filter_properties(HPROVIDER lib, HMSSENUM *next,
                                                  RIB_INTERFACE_ENTRY *dest) {
  return 0;
}

DXDEC S32 AILCALL AIL_filter_property(HPROVIDER lib, C8 const *name,
                                      void *before_value, void const *new_value,
                                      void *after_value) {
  return 0;
}

DXDEC S32 AILCALL AIL_enumerate_output_filter_driver_properties(
    HPROVIDER lib, HMSSENUM *next, RIB_INTERFACE_ENTRY *dest) {
  return 0;
}

DXDEC S32 AILCALL AIL_output_filter_driver_property(HDIGDRIVER dig,
                                                    C8 const *name,
                                                    void *before_value,
                                                    void const *new_value,
                                                    void *after_value) {
  return 0;
}

DXDEC S32 AILCALL AIL_enumerate_output_filter_sample_properties(
    HPROVIDER lib, HMSSENUM *next, RIB_INTERFACE_ENTRY *dest) {
  return 0;
}

DXDEC S32 AILCALL AIL_enumerate_filter_sample_properties(
    HPROVIDER lib, HMSSENUM *next, RIB_INTERFACE_ENTRY *dest) {
  return 0;
}

DXDEC S32 AILCALL AIL_enumerate_sample_stage_properties(
    HSAMPLE S, SAMPLESTAGE stage, HMSSENUM *next, RIB_INTERFACE_ENTRY *dest) {
  return 0;
}

DXDEC S32 AILCALL AIL_sample_stage_property(HSAMPLE S, SAMPLESTAGE stage,
                                            C8 const *name, S32 channel,
                                            void *before_value,
                                            void const *new_value,
                                            void *after_value) {
  return 0;
}

#endif

#ifndef IS_PS2

#if defined(_PUSHPOP_SUPPORTED) || PRAGMA_STRUCT_PACKPUSH
#pragma pack(pop)
#else
#pragma pack()
#endif

#else

DXDEC MSS_RESOURCE_POLICY AILCALL
AIL_set_scratchpad_policy(MSS_RESOURCE_POLICY policy) {}
DXDEC MSS_RESOURCE_POLICY AILCALL AIL_scratchpad_policy(void) {}

#endif

#ifndef __RADINDLL__
#ifdef FSSpec
#undef FSSpec
#endif
#endif

#ifdef __cplusplus
}
#endif
