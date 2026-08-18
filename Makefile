FREERTOS := middlewares/freertos

FREERTOS_SRC := \
    $(FREERTOS)/tasks.c \
    $(FREERTOS)/queue.c \
    $(FREERTOS)/list.c \
    $(FREERTOS)/timers.c \
    $(FREERTOS)/portable/GCC/ARM_CM3/port.c
