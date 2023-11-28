# LED Driver for Raspberry Pi

This is a C driver to control LEDs on a Raspberry Pi via commands. You can turn one or more LEDs on or off using the appropriate commands.

## Requirement

- Raspberry Pi with compatible operating system (e.g. Raspbian).
- Internet connection to download dependencies.

## LEDs Connection

### Materials needed:

1. Raspberry Pi.
2. LEDs.
3. 330 ohm resistors.
4. Connection cables.

### Connection instructions:

1. **LEDs:**

   - Connect the long pole (anode) of the LED to GPIO pin 21 of the Raspberry Pi.
   - Connect the short pole (cathode) of the LED through a 330 ohm resistor to the ground (GND) of the Raspberry Pi.

2. **Resistances:**

- Connect a 330 ohm resistor to the short pole (cathode) of each LED.
- Connect the other end of the ground resistor (GND) of the Raspberry Pi.

3. **General connection:**

- Make sure the Raspberry Pi is turned off before making connections.
- Connect the cables carefully to avoid short circuits.
- Turn on the Raspberry Pi after making all connections.

### Connection diagram:

![Graphic representation of the connection of the LEDs on the Raspberry Pi 4](https://github.com/mauribeza/sso_led_driver/blob/main/Screenshot%202023-11-27%20at%202.06.08%20PM.png)

## Installing

### Option 1: Use the provided .ko file

1. Clone this repository to your Raspberry Pi:

    ```bash
    git clone https://github.com/mauribeza/sso_led_driver.git
    ```

2. Navigate to the driver directory:

    ```bash
    cd sso_led_driver/led_driver
    ```

3. **Load the module:**

   Use the following command to load the module:

    ```bash
    sudo insmod led_driver.ko
    ```

### Option 2: Compile and load the module

1. Clone this repository to your Raspberry Pi:

    ```bash
    git clone https://github.com/mauribeza/sso_led_driver.git
    ```

2. Navigate to the driver directory:

    ```bash
    cd sso_led_driver/led_driver
    ```

3. Compile the source code:

    ```bash
    make
    ```

4. **Load the module:**

    Use the following command to load the module:

    ```bash
    sudo insmod led_driver.ko
    ```

## Use

Before running the commands to control the LEDs, make sure you have the appropriate permissions. You can do this by running the following command to change the user to superuser:

```bash
sudo su
```

Then you can use the following commands to control the LEDs:

- Turn on LED:
  
```bash
echo 1 > /dev/etx_device
```

- Turn off LED:
  
```bash
echo 0 > /dev/etx_device 
```

## Additional notes:

- Adjust the 330 ohm resistor according to the specifications of your LED and the power of the Raspberry Pi to ensure safe operation.

- Make sure GPIO pin 21 is not configured for special functions before running the driver.

- Once the module is loaded using the command:
  
 ```bash
 sudo insmod led_driver.ko
 ```

Make sure the module has loaded correctly using the command:

 ```bash
 lsmod | grep led_driver
 ```

- Check the kernel logs for any error messages when loading the module with the command:

```bash
 dmesg
 ```

- If you want to unmount the module, use the following command:

```bash
 sudo rmmod led_driver
 ```
