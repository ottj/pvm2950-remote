# pvm2950-remote
Project to replace the Sony RM-854 remote for calibration of Sony PVM 2950

## Background

As described in the service manual of the Sony PVM 2950 / 2950Q / 2950QM, a Sony RM-854 remote is needed to enter the service mode. One has to set the PVM to standby and then enter the following key combination (p. 29 & 30 of the service manual):
### 'Screen Display' -> 'CH5' -> 'Volume+' -> 'Power'

If you program a universal remote for Sony TVs, you wil be able to enter this combination and enter the service menu.
A problem arises though when you want to use the service menu, the keys needed are:

### 1, 2, 3, 4, 12, and power

All universal remotes I found lack the '12 key', hence I looked for an easy solution to get a working '12' key.

I found a gist https://gist.github.com/burk3/6ea991f774fb0c3db32759baa5e63dfb that contains all the IR codes for the Sony RM-854 remote.

There are many instructions available to build remotes using Raspberry PIs, Arduinos, etc. To save time I chose a pre-built one:
M5Stack M5StickC Plus, since it has a built-in battery, IR transmitter, and display.

# Instructions
1. Buy a universal remote
2. Program the universal remote for Sony TVs
3. Buy an M5Stack M5StickC Plus
4. Download the service manual from https://archive.org/details/sony_PVM-2950Q_2950QM_Service_Manual
5. Install Arduino IDE and if necessary (I had to) the drivers to detect the M5StickC Plus
6. Build and flash the M5Stick using the attached .ino code
7. Enter the service menu using the universal remote
8. Navigate in the service menu as described on p.39/30, to select an item you can press the main button on the M5Stick once
9. If asked whether you want to store a changed setting you have to press the main button on the M5Stick multiple times until an 'ok' appears in the service menu.

# Notes
My universal remote was unable to learn the '12' code sent by the M5Stick, maybe yours can?

I attached the complete list of IR codes, if anyone wants to build a more advanced remote.

# PRs, forks, etc. are appreciated!