# Small-OS

## A foray into embedded Real Time Operating Systems

This repository details the progress of developing an embedded, lightweight, real time operating system, starting with the NXP LPC8xx series of micro-controllers.

The base LPC8xx is the LPC802, with 2KB of SRAM and 16KB of Flash. Starting with constrained resources will enforce strict memory management and overall program size.

This is a first time looking into operating system development, so code is likely to be rough around the edges and not really take into account edge cases just yet. I must also credit Miro Samek for his excellent online tutorial for RTOS development. 

SmallOS was also partially inspired by the fact that FreeRTOS doesn't _yet_ support the M0+. I eventually hope to have a full development suite that includes simulation and unit tests. QEMU doesn't yet support the M0+ so that might be another project, but in the meantime I'll be simulating the code in Keil and on some development boards for specific hardware testing. 

The aim is to develop an OS that is cross-platform and able to be ported to a wide variety of M0/M0+ based boards, ultimately extending to multi-core boards that use the M0(+) in a heterogeneous fashion.  
