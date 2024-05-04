# MILKV-DUO Instructions

## Installing the OS
### Download the OS
* Find and install the latest OS from this link:

        `https://github.com/milkv-duo/duo-buildroot-sdk/releases/`

*Download "milkv-duo-v1.x.x-yyyy-mmdd.img.zip" not 256m*

### Prepare the installation
* Use balenaEtcher to prepare the SD card and install the OS.

    * Once complete, put the micrSD card into the DUO and plug in the USB-C Cable to power it on. The blue LED on the Duo will blink.


For further instructions, please visit the [Milk-V](https://milkv.io/docs/duo/getting-started/boot) website

## Connecting to the DUO

### Setting Up Drivers
**Windows**
1. Connect the DUO to a Windows computer using a type-C cable

2. Open *Device Manager* and you will see 'RNDIS' device listed under 'Other Devices'
    * If you do not see 'Other Devices' go into view and toggle the 'Show Hidden Devices' option

3. Right-Click on the 'RNDIS' device and select 'Update Driver'

4. Select 'Browse my computer for Drivers' 

5. Select 'Let me pick from a list of available drivers on my computer'

6. Go to 'Network adapters' and find the 'USB RNDIS Adapter' under Microsoft

7. Press next, if there is a warning press yes to ignore. Your device should now be listed under 'Network Adapters' as USB RNDIS Adapter

**Linux**
* Linux does not need to install any drivers, it should work by default
    * Use `sudo dmesg | grep usb0' to see if your device is being detected

### SSH into the DUO
* Use the command:
    `ssh root@192.168.42.1`
    * Password will be `milkv`
* If there are any issues with DUO IP authencity, run this command:
    `ssh-keygen -R 192.168.42.1`


For more information on connecting to the DUO visit the [Milk-V](https://milkv.io/docs/duo/getting-started/setup) website

## Misc set-up
* If you are running into any `not found` errors, run this command: 
    ```ln -sf /lib/ld-musl-riscv64v0p7_xthead.so.1 /lib/ld-musl-riscv64xthead.so.1```

## Milk-V DUO Pinout
![pinout](/Milk-V%20Files/duo-pinout.png)
