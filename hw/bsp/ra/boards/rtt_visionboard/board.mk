CPU_CORE = cortex-m85
MCU_VARIANT = ra8d1

# For flash-jlink target
JLINK_DEVICE = R7FA8D1BH

# Port 1 is highspeed
PORT ?= 1

flash: flash-jlink
