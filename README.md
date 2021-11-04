# Linux_Driver_SMA1305
SMA1305 Linux Driver for Kernel 4.19

REV002: Initial Release

REV003: SDO configuration change as per hw_params.
		ISR routine minimization

REV004: Register setting update for MVT1.
		Mixer control for Speaker / Receiver(0.1W) / Receiver(0.5W)

REV005: PLL match table for 44.1KHz sample rate
		HPF configuration
		Setting change for 0.5W receiver mode
		Mixer interface for trimming

REV006: PLL configuration optimization for idle noise
		Mixer interface string change

REV007: Added Read/Write interface between Kernel and
		ABOX(Exynos Audio DSP) using ERAP IPC communication

### SMA1305 Stereo Mixer Path Setting Guide
LEFT and RIGHT are replaced with temporary prefix values

Please see the attached file for more details.
