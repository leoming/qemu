/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_ROOT_GENERATED_TRACERS_H
#define TRACE_ROOT_GENERATED_TRACERS_H

#include "qemu-common.h"
#include "trace/control.h"

extern TraceEvent _TRACE_CPU_IN_EVENT;
extern TraceEvent _TRACE_CPU_OUT_EVENT;
extern TraceEvent _TRACE_BALLOON_EVENT_EVENT;
extern TraceEvent _TRACE_VM_STATE_NOTIFY_EVENT;
extern TraceEvent _TRACE_LOAD_FILE_EVENT;
extern TraceEvent _TRACE_RUNSTATE_SET_EVENT;
extern TraceEvent _TRACE_SYSTEM_WAKEUP_REQUEST_EVENT;
extern TraceEvent _TRACE_QEMU_SYSTEM_SHUTDOWN_REQUEST_EVENT;
extern TraceEvent _TRACE_QEMU_SYSTEM_POWERDOWN_REQUEST_EVENT;
extern TraceEvent _TRACE_MONITOR_PROTOCOL_EVENT_HANDLER_EVENT;
extern TraceEvent _TRACE_MONITOR_PROTOCOL_EVENT_EMIT_EVENT;
extern TraceEvent _TRACE_MONITOR_PROTOCOL_EVENT_QUEUE_EVENT;
extern TraceEvent _TRACE_HANDLE_HMP_COMMAND_EVENT;
extern TraceEvent _TRACE_HANDLE_QMP_COMMAND_EVENT;
extern TraceEvent _TRACE_MONITOR_SUSPEND_EVENT;
extern TraceEvent _TRACE_MONITOR_QMP_CMD_IN_BAND_EVENT;
extern TraceEvent _TRACE_MONITOR_QMP_CMD_OUT_OF_BAND_EVENT;
extern TraceEvent _TRACE_DMA_BLK_IO_EVENT;
extern TraceEvent _TRACE_DMA_AIO_CANCEL_EVENT;
extern TraceEvent _TRACE_DMA_COMPLETE_EVENT;
extern TraceEvent _TRACE_DMA_BLK_CB_EVENT;
extern TraceEvent _TRACE_DMA_MAP_WAIT_EVENT;
extern TraceEvent _TRACE_FIND_RAM_OFFSET_EVENT;
extern TraceEvent _TRACE_FIND_RAM_OFFSET_LOOP_EVENT;
extern TraceEvent _TRACE_RAM_BLOCK_DISCARD_RANGE_EVENT;
extern TraceEvent _TRACE_MEMORY_REGION_OPS_READ_EVENT;
extern TraceEvent _TRACE_MEMORY_REGION_OPS_WRITE_EVENT;
extern TraceEvent _TRACE_MEMORY_REGION_SUBPAGE_READ_EVENT;
extern TraceEvent _TRACE_MEMORY_REGION_SUBPAGE_WRITE_EVENT;
extern TraceEvent _TRACE_MEMORY_REGION_TB_READ_EVENT;
extern TraceEvent _TRACE_MEMORY_REGION_TB_WRITE_EVENT;
extern TraceEvent _TRACE_MEMORY_REGION_RAM_DEVICE_READ_EVENT;
extern TraceEvent _TRACE_MEMORY_REGION_RAM_DEVICE_WRITE_EVENT;
extern TraceEvent _TRACE_FLATVIEW_NEW_EVENT;
extern TraceEvent _TRACE_FLATVIEW_DESTROY_EVENT;
extern TraceEvent _TRACE_FLATVIEW_DESTROY_RCU_EVENT;
extern TraceEvent _TRACE_GDBSTUB_OP_START_EVENT;
extern TraceEvent _TRACE_GDBSTUB_OP_EXITING_EVENT;
extern TraceEvent _TRACE_GDBSTUB_OP_CONTINUE_EVENT;
extern TraceEvent _TRACE_GDBSTUB_OP_CONTINUE_CPU_EVENT;
extern TraceEvent _TRACE_GDBSTUB_OP_STEPPING_EVENT;
extern TraceEvent _TRACE_GDBSTUB_OP_EXTRA_INFO_EVENT;
extern TraceEvent _TRACE_GDBSTUB_HIT_WATCHPOINT_EVENT;
extern TraceEvent _TRACE_GDBSTUB_HIT_INTERNAL_ERROR_EVENT;
extern TraceEvent _TRACE_GDBSTUB_HIT_BREAK_EVENT;
extern TraceEvent _TRACE_GDBSTUB_HIT_PAUSED_EVENT;
extern TraceEvent _TRACE_GDBSTUB_HIT_SHUTDOWN_EVENT;
extern TraceEvent _TRACE_GDBSTUB_HIT_IO_ERROR_EVENT;
extern TraceEvent _TRACE_GDBSTUB_HIT_WATCHDOG_EVENT;
extern TraceEvent _TRACE_GDBSTUB_HIT_UNKNOWN_EVENT;
extern TraceEvent _TRACE_GDBSTUB_IO_REPLY_EVENT;
extern TraceEvent _TRACE_GDBSTUB_IO_BINARYREPLY_EVENT;
extern TraceEvent _TRACE_GDBSTUB_IO_COMMAND_EVENT;
extern TraceEvent _TRACE_GDBSTUB_IO_GOT_ACK_EVENT;
extern TraceEvent _TRACE_GDBSTUB_IO_GOT_UNEXPECTED_EVENT;
extern TraceEvent _TRACE_GDBSTUB_ERR_GOT_NACK_EVENT;
extern TraceEvent _TRACE_GDBSTUB_ERR_GARBAGE_EVENT;
extern TraceEvent _TRACE_GDBSTUB_ERR_OVERRUN_EVENT;
extern TraceEvent _TRACE_GDBSTUB_ERR_INVALID_REPEAT_EVENT;
extern TraceEvent _TRACE_GDBSTUB_ERR_INVALID_RLE_EVENT;
extern TraceEvent _TRACE_GDBSTUB_ERR_CHECKSUM_INVALID_EVENT;
extern TraceEvent _TRACE_GDBSTUB_ERR_CHECKSUM_INCORRECT_EVENT;
extern TraceEvent _TRACE_GUEST_CPU_ENTER_EVENT;
extern TraceEvent _TRACE_GUEST_CPU_EXIT_EVENT;
extern TraceEvent _TRACE_GUEST_CPU_RESET_EVENT;
extern TraceEvent _TRACE_GUEST_MEM_BEFORE_TRANS_EVENT;
extern TraceEvent _TRACE_GUEST_MEM_BEFORE_EXEC_EVENT;
extern TraceEvent _TRACE_GUEST_USER_SYSCALL_EVENT;
extern TraceEvent _TRACE_GUEST_USER_SYSCALL_RET_EVENT;
extern uint16_t _TRACE_CPU_IN_DSTATE;
extern uint16_t _TRACE_CPU_OUT_DSTATE;
extern uint16_t _TRACE_BALLOON_EVENT_DSTATE;
extern uint16_t _TRACE_VM_STATE_NOTIFY_DSTATE;
extern uint16_t _TRACE_LOAD_FILE_DSTATE;
extern uint16_t _TRACE_RUNSTATE_SET_DSTATE;
extern uint16_t _TRACE_SYSTEM_WAKEUP_REQUEST_DSTATE;
extern uint16_t _TRACE_QEMU_SYSTEM_SHUTDOWN_REQUEST_DSTATE;
extern uint16_t _TRACE_QEMU_SYSTEM_POWERDOWN_REQUEST_DSTATE;
extern uint16_t _TRACE_MONITOR_PROTOCOL_EVENT_HANDLER_DSTATE;
extern uint16_t _TRACE_MONITOR_PROTOCOL_EVENT_EMIT_DSTATE;
extern uint16_t _TRACE_MONITOR_PROTOCOL_EVENT_QUEUE_DSTATE;
extern uint16_t _TRACE_HANDLE_HMP_COMMAND_DSTATE;
extern uint16_t _TRACE_HANDLE_QMP_COMMAND_DSTATE;
extern uint16_t _TRACE_MONITOR_SUSPEND_DSTATE;
extern uint16_t _TRACE_MONITOR_QMP_CMD_IN_BAND_DSTATE;
extern uint16_t _TRACE_MONITOR_QMP_CMD_OUT_OF_BAND_DSTATE;
extern uint16_t _TRACE_DMA_BLK_IO_DSTATE;
extern uint16_t _TRACE_DMA_AIO_CANCEL_DSTATE;
extern uint16_t _TRACE_DMA_COMPLETE_DSTATE;
extern uint16_t _TRACE_DMA_BLK_CB_DSTATE;
extern uint16_t _TRACE_DMA_MAP_WAIT_DSTATE;
extern uint16_t _TRACE_FIND_RAM_OFFSET_DSTATE;
extern uint16_t _TRACE_FIND_RAM_OFFSET_LOOP_DSTATE;
extern uint16_t _TRACE_RAM_BLOCK_DISCARD_RANGE_DSTATE;
extern uint16_t _TRACE_MEMORY_REGION_OPS_READ_DSTATE;
extern uint16_t _TRACE_MEMORY_REGION_OPS_WRITE_DSTATE;
extern uint16_t _TRACE_MEMORY_REGION_SUBPAGE_READ_DSTATE;
extern uint16_t _TRACE_MEMORY_REGION_SUBPAGE_WRITE_DSTATE;
extern uint16_t _TRACE_MEMORY_REGION_TB_READ_DSTATE;
extern uint16_t _TRACE_MEMORY_REGION_TB_WRITE_DSTATE;
extern uint16_t _TRACE_MEMORY_REGION_RAM_DEVICE_READ_DSTATE;
extern uint16_t _TRACE_MEMORY_REGION_RAM_DEVICE_WRITE_DSTATE;
extern uint16_t _TRACE_FLATVIEW_NEW_DSTATE;
extern uint16_t _TRACE_FLATVIEW_DESTROY_DSTATE;
extern uint16_t _TRACE_FLATVIEW_DESTROY_RCU_DSTATE;
extern uint16_t _TRACE_GDBSTUB_OP_START_DSTATE;
extern uint16_t _TRACE_GDBSTUB_OP_EXITING_DSTATE;
extern uint16_t _TRACE_GDBSTUB_OP_CONTINUE_DSTATE;
extern uint16_t _TRACE_GDBSTUB_OP_CONTINUE_CPU_DSTATE;
extern uint16_t _TRACE_GDBSTUB_OP_STEPPING_DSTATE;
extern uint16_t _TRACE_GDBSTUB_OP_EXTRA_INFO_DSTATE;
extern uint16_t _TRACE_GDBSTUB_HIT_WATCHPOINT_DSTATE;
extern uint16_t _TRACE_GDBSTUB_HIT_INTERNAL_ERROR_DSTATE;
extern uint16_t _TRACE_GDBSTUB_HIT_BREAK_DSTATE;
extern uint16_t _TRACE_GDBSTUB_HIT_PAUSED_DSTATE;
extern uint16_t _TRACE_GDBSTUB_HIT_SHUTDOWN_DSTATE;
extern uint16_t _TRACE_GDBSTUB_HIT_IO_ERROR_DSTATE;
extern uint16_t _TRACE_GDBSTUB_HIT_WATCHDOG_DSTATE;
extern uint16_t _TRACE_GDBSTUB_HIT_UNKNOWN_DSTATE;
extern uint16_t _TRACE_GDBSTUB_IO_REPLY_DSTATE;
extern uint16_t _TRACE_GDBSTUB_IO_BINARYREPLY_DSTATE;
extern uint16_t _TRACE_GDBSTUB_IO_COMMAND_DSTATE;
extern uint16_t _TRACE_GDBSTUB_IO_GOT_ACK_DSTATE;
extern uint16_t _TRACE_GDBSTUB_IO_GOT_UNEXPECTED_DSTATE;
extern uint16_t _TRACE_GDBSTUB_ERR_GOT_NACK_DSTATE;
extern uint16_t _TRACE_GDBSTUB_ERR_GARBAGE_DSTATE;
extern uint16_t _TRACE_GDBSTUB_ERR_OVERRUN_DSTATE;
extern uint16_t _TRACE_GDBSTUB_ERR_INVALID_REPEAT_DSTATE;
extern uint16_t _TRACE_GDBSTUB_ERR_INVALID_RLE_DSTATE;
extern uint16_t _TRACE_GDBSTUB_ERR_CHECKSUM_INVALID_DSTATE;
extern uint16_t _TRACE_GDBSTUB_ERR_CHECKSUM_INCORRECT_DSTATE;
extern uint16_t _TRACE_GUEST_CPU_ENTER_DSTATE;
extern uint16_t _TRACE_GUEST_CPU_EXIT_DSTATE;
extern uint16_t _TRACE_GUEST_CPU_RESET_DSTATE;
extern uint16_t _TRACE_GUEST_MEM_BEFORE_TRANS_DSTATE;
extern uint16_t _TRACE_GUEST_MEM_BEFORE_EXEC_DSTATE;
extern uint16_t _TRACE_GUEST_USER_SYSCALL_DSTATE;
extern uint16_t _TRACE_GUEST_USER_SYSCALL_RET_DSTATE;
#define TRACE_CPU_IN_ENABLED 1
#define TRACE_CPU_OUT_ENABLED 1
#define TRACE_BALLOON_EVENT_ENABLED 1
#define TRACE_VM_STATE_NOTIFY_ENABLED 1
#define TRACE_LOAD_FILE_ENABLED 1
#define TRACE_RUNSTATE_SET_ENABLED 1
#define TRACE_SYSTEM_WAKEUP_REQUEST_ENABLED 1
#define TRACE_QEMU_SYSTEM_SHUTDOWN_REQUEST_ENABLED 1
#define TRACE_QEMU_SYSTEM_POWERDOWN_REQUEST_ENABLED 1
#define TRACE_MONITOR_PROTOCOL_EVENT_HANDLER_ENABLED 1
#define TRACE_MONITOR_PROTOCOL_EVENT_EMIT_ENABLED 1
#define TRACE_MONITOR_PROTOCOL_EVENT_QUEUE_ENABLED 1
#define TRACE_HANDLE_HMP_COMMAND_ENABLED 1
#define TRACE_HANDLE_QMP_COMMAND_ENABLED 1
#define TRACE_MONITOR_SUSPEND_ENABLED 1
#define TRACE_MONITOR_QMP_CMD_IN_BAND_ENABLED 1
#define TRACE_MONITOR_QMP_CMD_OUT_OF_BAND_ENABLED 1
#define TRACE_DMA_BLK_IO_ENABLED 1
#define TRACE_DMA_AIO_CANCEL_ENABLED 1
#define TRACE_DMA_COMPLETE_ENABLED 1
#define TRACE_DMA_BLK_CB_ENABLED 1
#define TRACE_DMA_MAP_WAIT_ENABLED 1
#define TRACE_FIND_RAM_OFFSET_ENABLED 1
#define TRACE_FIND_RAM_OFFSET_LOOP_ENABLED 1
#define TRACE_RAM_BLOCK_DISCARD_RANGE_ENABLED 1
#define TRACE_MEMORY_REGION_OPS_READ_ENABLED 1
#define TRACE_MEMORY_REGION_OPS_WRITE_ENABLED 1
#define TRACE_MEMORY_REGION_SUBPAGE_READ_ENABLED 1
#define TRACE_MEMORY_REGION_SUBPAGE_WRITE_ENABLED 1
#define TRACE_MEMORY_REGION_TB_READ_ENABLED 1
#define TRACE_MEMORY_REGION_TB_WRITE_ENABLED 1
#define TRACE_MEMORY_REGION_RAM_DEVICE_READ_ENABLED 1
#define TRACE_MEMORY_REGION_RAM_DEVICE_WRITE_ENABLED 1
#define TRACE_FLATVIEW_NEW_ENABLED 1
#define TRACE_FLATVIEW_DESTROY_ENABLED 1
#define TRACE_FLATVIEW_DESTROY_RCU_ENABLED 1
#define TRACE_GDBSTUB_OP_START_ENABLED 1
#define TRACE_GDBSTUB_OP_EXITING_ENABLED 1
#define TRACE_GDBSTUB_OP_CONTINUE_ENABLED 1
#define TRACE_GDBSTUB_OP_CONTINUE_CPU_ENABLED 1
#define TRACE_GDBSTUB_OP_STEPPING_ENABLED 1
#define TRACE_GDBSTUB_OP_EXTRA_INFO_ENABLED 1
#define TRACE_GDBSTUB_HIT_WATCHPOINT_ENABLED 1
#define TRACE_GDBSTUB_HIT_INTERNAL_ERROR_ENABLED 1
#define TRACE_GDBSTUB_HIT_BREAK_ENABLED 1
#define TRACE_GDBSTUB_HIT_PAUSED_ENABLED 1
#define TRACE_GDBSTUB_HIT_SHUTDOWN_ENABLED 1
#define TRACE_GDBSTUB_HIT_IO_ERROR_ENABLED 1
#define TRACE_GDBSTUB_HIT_WATCHDOG_ENABLED 1
#define TRACE_GDBSTUB_HIT_UNKNOWN_ENABLED 1
#define TRACE_GDBSTUB_IO_REPLY_ENABLED 1
#define TRACE_GDBSTUB_IO_BINARYREPLY_ENABLED 1
#define TRACE_GDBSTUB_IO_COMMAND_ENABLED 1
#define TRACE_GDBSTUB_IO_GOT_ACK_ENABLED 1
#define TRACE_GDBSTUB_IO_GOT_UNEXPECTED_ENABLED 1
#define TRACE_GDBSTUB_ERR_GOT_NACK_ENABLED 1
#define TRACE_GDBSTUB_ERR_GARBAGE_ENABLED 1
#define TRACE_GDBSTUB_ERR_OVERRUN_ENABLED 1
#define TRACE_GDBSTUB_ERR_INVALID_REPEAT_ENABLED 1
#define TRACE_GDBSTUB_ERR_INVALID_RLE_ENABLED 1
#define TRACE_GDBSTUB_ERR_CHECKSUM_INVALID_ENABLED 1
#define TRACE_GDBSTUB_ERR_CHECKSUM_INCORRECT_ENABLED 1
#define TRACE_GUEST_CPU_ENTER_ENABLED 1
#define TRACE_GUEST_CPU_EXIT_ENABLED 1
#define TRACE_GUEST_CPU_RESET_ENABLED 1
#define TRACE_GUEST_MEM_BEFORE_TRANS_ENABLED 1
#define TRACE_GUEST_MEM_BEFORE_ENABLED 1
#define TRACE_GUEST_MEM_BEFORE_EXEC_ENABLED 1
#define TRACE_GUEST_USER_SYSCALL_ENABLED 1
#define TRACE_GUEST_USER_SYSCALL_RET_ENABLED 1

#define TRACE_CPU_IN_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_cpu_in(unsigned int addr, char size, unsigned int val)
{
}

static inline void trace_cpu_in(unsigned int addr, char size, unsigned int val)
{
    if (true) {
        _nocheck__trace_cpu_in(addr, size, val);
    }
}

#define TRACE_CPU_OUT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_cpu_out(unsigned int addr, char size, unsigned int val)
{
}

static inline void trace_cpu_out(unsigned int addr, char size, unsigned int val)
{
    if (true) {
        _nocheck__trace_cpu_out(addr, size, val);
    }
}

#define TRACE_BALLOON_EVENT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_balloon_event(void * opaque, unsigned long addr)
{
}

static inline void trace_balloon_event(void * opaque, unsigned long addr)
{
    if (true) {
        _nocheck__trace_balloon_event(opaque, addr);
    }
}

#define TRACE_VM_STATE_NOTIFY_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_vm_state_notify(int running, int reason)
{
}

static inline void trace_vm_state_notify(int running, int reason)
{
    if (true) {
        _nocheck__trace_vm_state_notify(running, reason);
    }
}

#define TRACE_LOAD_FILE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_load_file(const char * name, const char * path)
{
}

static inline void trace_load_file(const char * name, const char * path)
{
    if (true) {
        _nocheck__trace_load_file(name, path);
    }
}

#define TRACE_RUNSTATE_SET_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_runstate_set(int new_state)
{
}

static inline void trace_runstate_set(int new_state)
{
    if (true) {
        _nocheck__trace_runstate_set(new_state);
    }
}

#define TRACE_SYSTEM_WAKEUP_REQUEST_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_system_wakeup_request(int reason)
{
}

static inline void trace_system_wakeup_request(int reason)
{
    if (true) {
        _nocheck__trace_system_wakeup_request(reason);
    }
}

#define TRACE_QEMU_SYSTEM_SHUTDOWN_REQUEST_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_system_shutdown_request(int reason)
{
}

static inline void trace_qemu_system_shutdown_request(int reason)
{
    if (true) {
        _nocheck__trace_qemu_system_shutdown_request(reason);
    }
}

#define TRACE_QEMU_SYSTEM_POWERDOWN_REQUEST_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_qemu_system_powerdown_request(void)
{
}

static inline void trace_qemu_system_powerdown_request(void)
{
    if (true) {
        _nocheck__trace_qemu_system_powerdown_request();
    }
}

#define TRACE_MONITOR_PROTOCOL_EVENT_HANDLER_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_monitor_protocol_event_handler(uint32_t event, void * qdict)
{
}

static inline void trace_monitor_protocol_event_handler(uint32_t event, void * qdict)
{
    if (true) {
        _nocheck__trace_monitor_protocol_event_handler(event, qdict);
    }
}

#define TRACE_MONITOR_PROTOCOL_EVENT_EMIT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_monitor_protocol_event_emit(uint32_t event, void * data)
{
}

static inline void trace_monitor_protocol_event_emit(uint32_t event, void * data)
{
    if (true) {
        _nocheck__trace_monitor_protocol_event_emit(event, data);
    }
}

#define TRACE_MONITOR_PROTOCOL_EVENT_QUEUE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_monitor_protocol_event_queue(uint32_t event, void * qdict, uint64_t rate)
{
}

static inline void trace_monitor_protocol_event_queue(uint32_t event, void * qdict, uint64_t rate)
{
    if (true) {
        _nocheck__trace_monitor_protocol_event_queue(event, qdict, rate);
    }
}

#define TRACE_HANDLE_HMP_COMMAND_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_handle_hmp_command(void * mon, const char * cmdline)
{
}

static inline void trace_handle_hmp_command(void * mon, const char * cmdline)
{
    if (true) {
        _nocheck__trace_handle_hmp_command(mon, cmdline);
    }
}

#define TRACE_HANDLE_QMP_COMMAND_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_handle_qmp_command(void * mon, const char * req)
{
}

static inline void trace_handle_qmp_command(void * mon, const char * req)
{
    if (true) {
        _nocheck__trace_handle_qmp_command(mon, req);
    }
}

#define TRACE_MONITOR_SUSPEND_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_monitor_suspend(void * ptr, int cnt)
{
}

static inline void trace_monitor_suspend(void * ptr, int cnt)
{
    if (true) {
        _nocheck__trace_monitor_suspend(ptr, cnt);
    }
}

#define TRACE_MONITOR_QMP_CMD_IN_BAND_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_monitor_qmp_cmd_in_band(const char * id)
{
}

static inline void trace_monitor_qmp_cmd_in_band(const char * id)
{
    if (true) {
        _nocheck__trace_monitor_qmp_cmd_in_band(id);
    }
}

#define TRACE_MONITOR_QMP_CMD_OUT_OF_BAND_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_monitor_qmp_cmd_out_of_band(const char * id)
{
}

static inline void trace_monitor_qmp_cmd_out_of_band(const char * id)
{
    if (true) {
        _nocheck__trace_monitor_qmp_cmd_out_of_band(id);
    }
}

#define TRACE_DMA_BLK_IO_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_dma_blk_io(void * dbs, void * bs, int64_t offset, bool to_dev)
{
}

static inline void trace_dma_blk_io(void * dbs, void * bs, int64_t offset, bool to_dev)
{
    if (true) {
        _nocheck__trace_dma_blk_io(dbs, bs, offset, to_dev);
    }
}

#define TRACE_DMA_AIO_CANCEL_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_dma_aio_cancel(void * dbs)
{
}

static inline void trace_dma_aio_cancel(void * dbs)
{
    if (true) {
        _nocheck__trace_dma_aio_cancel(dbs);
    }
}

#define TRACE_DMA_COMPLETE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_dma_complete(void * dbs, int ret, void * cb)
{
}

static inline void trace_dma_complete(void * dbs, int ret, void * cb)
{
    if (true) {
        _nocheck__trace_dma_complete(dbs, ret, cb);
    }
}

#define TRACE_DMA_BLK_CB_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_dma_blk_cb(void * dbs, int ret)
{
}

static inline void trace_dma_blk_cb(void * dbs, int ret)
{
    if (true) {
        _nocheck__trace_dma_blk_cb(dbs, ret);
    }
}

#define TRACE_DMA_MAP_WAIT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_dma_map_wait(void * dbs)
{
}

static inline void trace_dma_map_wait(void * dbs)
{
    if (true) {
        _nocheck__trace_dma_map_wait(dbs);
    }
}

#define TRACE_FIND_RAM_OFFSET_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_find_ram_offset(uint64_t size, uint64_t offset)
{
}

static inline void trace_find_ram_offset(uint64_t size, uint64_t offset)
{
    if (true) {
        _nocheck__trace_find_ram_offset(size, offset);
    }
}

#define TRACE_FIND_RAM_OFFSET_LOOP_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_find_ram_offset_loop(uint64_t size, uint64_t candidate, uint64_t offset, uint64_t next, uint64_t mingap)
{
}

static inline void trace_find_ram_offset_loop(uint64_t size, uint64_t candidate, uint64_t offset, uint64_t next, uint64_t mingap)
{
    if (true) {
        _nocheck__trace_find_ram_offset_loop(size, candidate, offset, next, mingap);
    }
}

#define TRACE_RAM_BLOCK_DISCARD_RANGE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_ram_block_discard_range(const char * rbname, void * hva, size_t length, bool need_madvise, bool need_fallocate, int ret)
{
}

static inline void trace_ram_block_discard_range(const char * rbname, void * hva, size_t length, bool need_madvise, bool need_fallocate, int ret)
{
    if (true) {
        _nocheck__trace_ram_block_discard_range(rbname, hva, length, need_madvise, need_fallocate, ret);
    }
}

#define TRACE_MEMORY_REGION_OPS_READ_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_memory_region_ops_read(int cpu_index, void * mr, uint64_t addr, uint64_t value, unsigned size)
{
}

static inline void trace_memory_region_ops_read(int cpu_index, void * mr, uint64_t addr, uint64_t value, unsigned size)
{
    if (true) {
        _nocheck__trace_memory_region_ops_read(cpu_index, mr, addr, value, size);
    }
}

#define TRACE_MEMORY_REGION_OPS_WRITE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_memory_region_ops_write(int cpu_index, void * mr, uint64_t addr, uint64_t value, unsigned size)
{
}

static inline void trace_memory_region_ops_write(int cpu_index, void * mr, uint64_t addr, uint64_t value, unsigned size)
{
    if (true) {
        _nocheck__trace_memory_region_ops_write(cpu_index, mr, addr, value, size);
    }
}

#define TRACE_MEMORY_REGION_SUBPAGE_READ_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_memory_region_subpage_read(int cpu_index, void * mr, uint64_t offset, uint64_t value, unsigned size)
{
}

static inline void trace_memory_region_subpage_read(int cpu_index, void * mr, uint64_t offset, uint64_t value, unsigned size)
{
    if (true) {
        _nocheck__trace_memory_region_subpage_read(cpu_index, mr, offset, value, size);
    }
}

#define TRACE_MEMORY_REGION_SUBPAGE_WRITE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_memory_region_subpage_write(int cpu_index, void * mr, uint64_t offset, uint64_t value, unsigned size)
{
}

static inline void trace_memory_region_subpage_write(int cpu_index, void * mr, uint64_t offset, uint64_t value, unsigned size)
{
    if (true) {
        _nocheck__trace_memory_region_subpage_write(cpu_index, mr, offset, value, size);
    }
}

#define TRACE_MEMORY_REGION_TB_READ_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_memory_region_tb_read(int cpu_index, uint64_t addr, uint64_t value, unsigned size)
{
}

static inline void trace_memory_region_tb_read(int cpu_index, uint64_t addr, uint64_t value, unsigned size)
{
    if (true) {
        _nocheck__trace_memory_region_tb_read(cpu_index, addr, value, size);
    }
}

#define TRACE_MEMORY_REGION_TB_WRITE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_memory_region_tb_write(int cpu_index, uint64_t addr, uint64_t value, unsigned size)
{
}

static inline void trace_memory_region_tb_write(int cpu_index, uint64_t addr, uint64_t value, unsigned size)
{
    if (true) {
        _nocheck__trace_memory_region_tb_write(cpu_index, addr, value, size);
    }
}

#define TRACE_MEMORY_REGION_RAM_DEVICE_READ_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_memory_region_ram_device_read(int cpu_index, void * mr, uint64_t addr, uint64_t value, unsigned size)
{
}

static inline void trace_memory_region_ram_device_read(int cpu_index, void * mr, uint64_t addr, uint64_t value, unsigned size)
{
    if (true) {
        _nocheck__trace_memory_region_ram_device_read(cpu_index, mr, addr, value, size);
    }
}

#define TRACE_MEMORY_REGION_RAM_DEVICE_WRITE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_memory_region_ram_device_write(int cpu_index, void * mr, uint64_t addr, uint64_t value, unsigned size)
{
}

static inline void trace_memory_region_ram_device_write(int cpu_index, void * mr, uint64_t addr, uint64_t value, unsigned size)
{
    if (true) {
        _nocheck__trace_memory_region_ram_device_write(cpu_index, mr, addr, value, size);
    }
}

#define TRACE_FLATVIEW_NEW_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_flatview_new(void * view, void * root)
{
}

static inline void trace_flatview_new(void * view, void * root)
{
    if (true) {
        _nocheck__trace_flatview_new(view, root);
    }
}

#define TRACE_FLATVIEW_DESTROY_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_flatview_destroy(void * view, void * root)
{
}

static inline void trace_flatview_destroy(void * view, void * root)
{
    if (true) {
        _nocheck__trace_flatview_destroy(view, root);
    }
}

#define TRACE_FLATVIEW_DESTROY_RCU_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_flatview_destroy_rcu(void * view, void * root)
{
}

static inline void trace_flatview_destroy_rcu(void * view, void * root)
{
    if (true) {
        _nocheck__trace_flatview_destroy_rcu(view, root);
    }
}

#define TRACE_GDBSTUB_OP_START_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_op_start(const char * device)
{
}

static inline void trace_gdbstub_op_start(const char * device)
{
    if (true) {
        _nocheck__trace_gdbstub_op_start(device);
    }
}

#define TRACE_GDBSTUB_OP_EXITING_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_op_exiting(uint8_t code)
{
}

static inline void trace_gdbstub_op_exiting(uint8_t code)
{
    if (true) {
        _nocheck__trace_gdbstub_op_exiting(code);
    }
}

#define TRACE_GDBSTUB_OP_CONTINUE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_op_continue(void)
{
}

static inline void trace_gdbstub_op_continue(void)
{
    if (true) {
        _nocheck__trace_gdbstub_op_continue();
    }
}

#define TRACE_GDBSTUB_OP_CONTINUE_CPU_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_op_continue_cpu(int cpu_index)
{
}

static inline void trace_gdbstub_op_continue_cpu(int cpu_index)
{
    if (true) {
        _nocheck__trace_gdbstub_op_continue_cpu(cpu_index);
    }
}

#define TRACE_GDBSTUB_OP_STEPPING_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_op_stepping(int cpu_index)
{
}

static inline void trace_gdbstub_op_stepping(int cpu_index)
{
    if (true) {
        _nocheck__trace_gdbstub_op_stepping(cpu_index);
    }
}

#define TRACE_GDBSTUB_OP_EXTRA_INFO_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_op_extra_info(const char * info)
{
}

static inline void trace_gdbstub_op_extra_info(const char * info)
{
    if (true) {
        _nocheck__trace_gdbstub_op_extra_info(info);
    }
}

#define TRACE_GDBSTUB_HIT_WATCHPOINT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_hit_watchpoint(const char * type, int cpu_gdb_index, uint64_t vaddr)
{
}

static inline void trace_gdbstub_hit_watchpoint(const char * type, int cpu_gdb_index, uint64_t vaddr)
{
    if (true) {
        _nocheck__trace_gdbstub_hit_watchpoint(type, cpu_gdb_index, vaddr);
    }
}

#define TRACE_GDBSTUB_HIT_INTERNAL_ERROR_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_hit_internal_error(void)
{
}

static inline void trace_gdbstub_hit_internal_error(void)
{
    if (true) {
        _nocheck__trace_gdbstub_hit_internal_error();
    }
}

#define TRACE_GDBSTUB_HIT_BREAK_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_hit_break(void)
{
}

static inline void trace_gdbstub_hit_break(void)
{
    if (true) {
        _nocheck__trace_gdbstub_hit_break();
    }
}

#define TRACE_GDBSTUB_HIT_PAUSED_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_hit_paused(void)
{
}

static inline void trace_gdbstub_hit_paused(void)
{
    if (true) {
        _nocheck__trace_gdbstub_hit_paused();
    }
}

#define TRACE_GDBSTUB_HIT_SHUTDOWN_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_hit_shutdown(void)
{
}

static inline void trace_gdbstub_hit_shutdown(void)
{
    if (true) {
        _nocheck__trace_gdbstub_hit_shutdown();
    }
}

#define TRACE_GDBSTUB_HIT_IO_ERROR_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_hit_io_error(void)
{
}

static inline void trace_gdbstub_hit_io_error(void)
{
    if (true) {
        _nocheck__trace_gdbstub_hit_io_error();
    }
}

#define TRACE_GDBSTUB_HIT_WATCHDOG_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_hit_watchdog(void)
{
}

static inline void trace_gdbstub_hit_watchdog(void)
{
    if (true) {
        _nocheck__trace_gdbstub_hit_watchdog();
    }
}

#define TRACE_GDBSTUB_HIT_UNKNOWN_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_hit_unknown(int state)
{
}

static inline void trace_gdbstub_hit_unknown(int state)
{
    if (true) {
        _nocheck__trace_gdbstub_hit_unknown(state);
    }
}

#define TRACE_GDBSTUB_IO_REPLY_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_io_reply(const char * message)
{
}

static inline void trace_gdbstub_io_reply(const char * message)
{
    if (true) {
        _nocheck__trace_gdbstub_io_reply(message);
    }
}

#define TRACE_GDBSTUB_IO_BINARYREPLY_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_io_binaryreply(size_t ofs, const char * line)
{
}

static inline void trace_gdbstub_io_binaryreply(size_t ofs, const char * line)
{
    if (true) {
        _nocheck__trace_gdbstub_io_binaryreply(ofs, line);
    }
}

#define TRACE_GDBSTUB_IO_COMMAND_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_io_command(const char * command)
{
}

static inline void trace_gdbstub_io_command(const char * command)
{
    if (true) {
        _nocheck__trace_gdbstub_io_command(command);
    }
}

#define TRACE_GDBSTUB_IO_GOT_ACK_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_io_got_ack(void)
{
}

static inline void trace_gdbstub_io_got_ack(void)
{
    if (true) {
        _nocheck__trace_gdbstub_io_got_ack();
    }
}

#define TRACE_GDBSTUB_IO_GOT_UNEXPECTED_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_io_got_unexpected(uint8_t ch)
{
}

static inline void trace_gdbstub_io_got_unexpected(uint8_t ch)
{
    if (true) {
        _nocheck__trace_gdbstub_io_got_unexpected(ch);
    }
}

#define TRACE_GDBSTUB_ERR_GOT_NACK_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_err_got_nack(void)
{
}

static inline void trace_gdbstub_err_got_nack(void)
{
    if (true) {
        _nocheck__trace_gdbstub_err_got_nack();
    }
}

#define TRACE_GDBSTUB_ERR_GARBAGE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_err_garbage(uint8_t ch)
{
}

static inline void trace_gdbstub_err_garbage(uint8_t ch)
{
    if (true) {
        _nocheck__trace_gdbstub_err_garbage(ch);
    }
}

#define TRACE_GDBSTUB_ERR_OVERRUN_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_err_overrun(void)
{
}

static inline void trace_gdbstub_err_overrun(void)
{
    if (true) {
        _nocheck__trace_gdbstub_err_overrun();
    }
}

#define TRACE_GDBSTUB_ERR_INVALID_REPEAT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_err_invalid_repeat(uint8_t ch)
{
}

static inline void trace_gdbstub_err_invalid_repeat(uint8_t ch)
{
    if (true) {
        _nocheck__trace_gdbstub_err_invalid_repeat(ch);
    }
}

#define TRACE_GDBSTUB_ERR_INVALID_RLE_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_err_invalid_rle(void)
{
}

static inline void trace_gdbstub_err_invalid_rle(void)
{
    if (true) {
        _nocheck__trace_gdbstub_err_invalid_rle();
    }
}

#define TRACE_GDBSTUB_ERR_CHECKSUM_INVALID_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_err_checksum_invalid(uint8_t ch)
{
}

static inline void trace_gdbstub_err_checksum_invalid(uint8_t ch)
{
    if (true) {
        _nocheck__trace_gdbstub_err_checksum_invalid(ch);
    }
}

#define TRACE_GDBSTUB_ERR_CHECKSUM_INCORRECT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_gdbstub_err_checksum_incorrect(uint8_t expected, uint8_t got)
{
}

static inline void trace_gdbstub_err_checksum_incorrect(uint8_t expected, uint8_t got)
{
    if (true) {
        _nocheck__trace_gdbstub_err_checksum_incorrect(expected, got);
    }
}

#define TRACE_GUEST_CPU_ENTER_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_guest_cpu_enter(CPUState * __cpu)
{
}

static inline void trace_guest_cpu_enter(CPUState * __cpu)
{
    if (trace_event_get_vcpu_state(__cpu, TRACE_GUEST_CPU_ENTER)) {
        _nocheck__trace_guest_cpu_enter(__cpu);
    }
}

#define TRACE_GUEST_CPU_EXIT_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_guest_cpu_exit(CPUState * __cpu)
{
}

static inline void trace_guest_cpu_exit(CPUState * __cpu)
{
    if (trace_event_get_vcpu_state(__cpu, TRACE_GUEST_CPU_EXIT)) {
        _nocheck__trace_guest_cpu_exit(__cpu);
    }
}

#define TRACE_GUEST_CPU_RESET_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_guest_cpu_reset(CPUState * __cpu)
{
}

static inline void trace_guest_cpu_reset(CPUState * __cpu)
{
    if (trace_event_get_vcpu_state(__cpu, TRACE_GUEST_CPU_RESET)) {
        _nocheck__trace_guest_cpu_reset(__cpu);
    }
}

#define TRACE_GUEST_MEM_BEFORE_TRANS_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_guest_mem_before_trans(CPUState * __cpu, uint8_t info)
{
}

static inline void trace_guest_mem_before_trans(CPUState * __cpu, uint8_t info)
{
    if (trace_event_get_vcpu_state(__cpu, TRACE_GUEST_MEM_BEFORE_TRANS)) {
        _nocheck__trace_guest_mem_before_trans(__cpu, info);
    }
}

#define TRACE_GUEST_MEM_BEFORE_EXEC_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_guest_mem_before_exec(CPUState * __cpu, uint64_t vaddr, uint8_t info)
{
}

static inline void trace_guest_mem_before_exec(CPUState * __cpu, uint64_t vaddr, uint8_t info)
{
    if (trace_event_get_vcpu_state(__cpu, TRACE_GUEST_MEM_BEFORE_EXEC)) {
        _nocheck__trace_guest_mem_before_exec(__cpu, vaddr, info);
    }
}

#define TRACE_GUEST_USER_SYSCALL_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_guest_user_syscall(CPUState * __cpu, uint64_t num, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7, uint64_t arg8)
{
}

static inline void trace_guest_user_syscall(CPUState * __cpu, uint64_t num, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7, uint64_t arg8)
{
    if (trace_event_get_vcpu_state(__cpu, TRACE_GUEST_USER_SYSCALL)) {
        _nocheck__trace_guest_user_syscall(__cpu, num, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }
}

#define TRACE_GUEST_USER_SYSCALL_RET_BACKEND_DSTATE() ( \
    false)

static inline void _nocheck__trace_guest_user_syscall_ret(CPUState * __cpu, uint64_t num, uint64_t ret)
{
}

static inline void trace_guest_user_syscall_ret(CPUState * __cpu, uint64_t num, uint64_t ret)
{
    if (trace_event_get_vcpu_state(__cpu, TRACE_GUEST_USER_SYSCALL_RET)) {
        _nocheck__trace_guest_user_syscall_ret(__cpu, num, ret);
    }
}
#endif /* TRACE_ROOT_GENERATED_TRACERS_H */
