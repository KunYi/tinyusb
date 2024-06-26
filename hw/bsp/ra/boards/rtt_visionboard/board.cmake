set(CMAKE_SYSTEM_PROCESSOR cortex-m85 CACHE INTERNAL "System Processor")
set(MCU_VARIANT ra8d1)

set(JLINK_DEVICE R7FA8D1BH)

# Device port default to PORT1 Highspeed
if (NOT DEFINED PORT)
set(PORT 1)
endif()

# Host port will be the other port
set(HOST_PORT $<NOT:${PORT}>)

function(update_board TARGET)
  target_compile_definitions(${TARGET} PUBLIC
    BOARD_TUD_RHPORT=${PORT}
    BOARD_TUH_RHPORT=${HOST_PORT}
    # port 0 is fullspeed, port 1 is highspeed
    BOARD_TUD_MAX_SPEED=$<IF:${PORT},OPT_MODE_HIGH_SPEED,OPT_MODE_FULL_SPEED>
    BOARD_TUH_MAX_SPEED=$<IF:${HOST_PORT},OPT_MODE_HIGH_SPEED,OPT_MODE_FULL_SPEED>
    )
endfunction()
