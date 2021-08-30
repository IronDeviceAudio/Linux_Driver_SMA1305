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

# SMA1305 Stereo Mixer Path Setting Guide
LEFT and RIGHT are replaced with temporary prefix values

<!-- SMA1305 Stereo Playback -->
<!-- LEFT SMA1305 -->
<ctl name="LEFT Port In/Out port config" value="OUT_Port" />
<ctl name="LEFT SDO Output0 Source" value="Battery" />
<ctl name="LEFT SDO Pad Output Ctrl(1:L_0:H)" value="0" />
<ctl name="LEFT SDO output2(1:Two_0:One)" value="0" />
<ctl name="LEFT Monitoring OSC and PLL" value="Data output at SDO" />
<ctl name="LEFT SDO output1(1:HighZ_0:Logic)" value="0" />
<ctl name="LEFT SDO output3(1:24k_0:48k)" value="0" />
<ctl name="LEFT Speaker Mode" value="Stereo" />
<ctl name="LEFT LR_DATA_SW(1:swap_0:normal)" value="0" />
<!-- RIGHT SMA1305 -->
<ctl name="RIGHT Port In/Out port config" value="OUT_Port" />
<ctl name="RIGHT SDO Output1 Source" value="Battery" />
<ctl name="RIGHT SDO Pad Output Ctrl(1:L_0:H)" value="1" />
<ctl name="RIGHT SDO output2(1:Two_0:One)" value="0" />
<ctl name="RIGHT Monitoring OSC and PLL" value="Data output at SDO" />
<ctl name="RIGHT SDO output1(1:HighZ_0:Logic)" value="0" />
<ctl name="RIGHT SDO output3(1:24k_0:48k)" value="0" />
<ctl name="RIGHT Speaker Mode" value="Stereo" />
<ctl name="RIGHT LR_DATA_SW(1:swap_0:normal)" value="1" />

