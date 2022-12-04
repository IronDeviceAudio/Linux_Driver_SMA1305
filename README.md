# Linux_Driver_SMA1305
SMA1305 Linux Driver for Kernel 5.10

REV002: Initial Release.

REV003: SDO configuration change as per hw_params.
		ISR routine minimization.

REV004: Register setting update for MVT1.
		Mixer control for Speaker / Receiver(0.1W) / Receiver(0.5W).

REV005: PLL match table for 44.1KHz sample rate.
		HPF configuration.
		Setting change for 0.5W receiver mode.
		Mixer interface for trimming.

REV006: PLL configuration optimization for idle noise.
		Mixer interface string change.

REV007: Interrupt sharing.
		Speaker output to mono.
		
REV008: TDM interface at codec DAI.
		Compliance of GKI.
		Interrupt detection at low level.

REV009: Error return in i2c fail.

REV010: sysfs reinit node to reinitialize SMA1305.
		Remove init_vol log in sma1305_reset to comply with checkpatch script.
		Mixer control text change to match the displayed value with data spec in FDPEC gain.

REV011: Config option for factory recovery.

REV012: Fixes for defects by customer prevention tool.

REV013: Added force mute function and fixed duplicated gpio interrupt issue.

REV014: Added dai_shutdown function to match the order of SCK off and AMP off.

REV015: Check the ambient temperature and performs protective action when it is low temperature.
		Passes the ambient temperature information to qualcomm dsp.

REV016: Added Qualcomm DSP AFE port id information to DT.

REV017: Implemented to read dsp speaker temperature information.

REV018: To support Linux kernel version 5.10.

REV019: Added AMP output power mode setting in DT.

REV020: Check whether the first i2c communication is possible.

REV021: Change to using exception handling and enum values.

REV022: Added Read/Write interface between Kernel and ABOX(Exynos Audio DSP) using ERAP IPC communication.

REV023: Apply 6W boost mode optimization value.

REV024: Fixed ABOX message handling kernel panic issue.

REV025: Apply exception handling for surface temperature.