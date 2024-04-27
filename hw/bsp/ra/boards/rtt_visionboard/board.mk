CPU_CORE = cortex-m85
MCU_VARIANT = ra8d1

# For flash-pyocd target
PYOCD_TARGET = R7FA8D1BH

# Port 1 is highspeed
PORT ?= 0

CFLAGS += \
    -DBOARD_TUD_RHPORT=${PORT} \
    -DBOARD_TUH_RHPORT=1

flash: flash-pyocd
