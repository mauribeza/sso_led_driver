# LED Driver para Raspberry Pi

Este es un simple driver en C para controlar LEDs en una Raspberry Pi a través de comandos. Puedes encender o apagar uno o varios LEDs usando los comandos adecuados.

## Requisitos

- Raspberry Pi con sistema operativo compatible (p. ej., Raspbian).
- Conexión a internet para descargar las dependencias.

## Conexión de LEDs

### Materiales necesarios:

1. Raspberry Pi.
2. LEDs.
3. Resistencias de 330 ohmios.
4. Cables de conexión.

### Instrucciones de conexión:

1. **LEDs:**

   - Conecta el polo largo (ánodo) del LED al pin GPIO 21 de la Raspberry Pi.
   - Conecta el polo corto (cátodo) del LED a través de una resistencia de 330 ohmios al suelo (GND) de la Raspberry Pi.

2. **Resistencias:**

   - Conecta una resistencia de 330 ohmios al polo corto (cátodo) de cada LED.
   - Conecta el otro extremo de la resistencia al suelo (GND) de la Raspberry Pi.

3. **Conexión general:**

   - Asegúrate de que la Raspberry Pi esté apagada antes de realizar las conexiones.
   - Conecta los cables cuidadosamente para evitar cortocircuitos.
   - Enciende la Raspberry Pi después de realizar todas las conexiones.

### Esquema de conexión:

![Representación grafíca de la conexión de los Leds en la Raspberry Pi 4](https://github.com/mauribeza/sso_led_driver/blob/main/Screenshot%202023-11-27%20at%202.06.08%20PM.png)

## Instalación

### Opción 1: Usar el archivo .ko proporcionado

1. Clona este repositorio en tu Raspberry Pi:

    ```bash
    git clone https://github.com/mauribeza/sso_led_driver.git
    ```

2. Navega al directorio del driver:

    ```bash
    cd sso_led_driver/led_driver
    ```

3. **Carga el módulo:**

    Utiliza el siguiente comando para cargar el módulo:

    ```bash
    sudo insmod led_driver.ko
    ```

### Opción 2: Compilar y cargar el módulo

1. Clona este repositorio en tu Raspberry Pi:

    ```bash
    git clone https://github.com/mauribeza/sso_led_driver.git
    ```

2. Navega al directorio del driver:

    ```bash
    cd sso_led_driver/led_driver
    ```

3. Compila el código fuente:

    ```bash
    make
    ```

4. **Carga el módulo:**

    Utiliza el siguiente comando para cargar el módulo:

    ```bash
    sudo insmod led_driver.ko
    ```

## Uso

Antes de ejecutar los comandos para controlar los LEDs, asegúrate de tener los permisos adecuados. Puedes hacerlo ejecutando el siguiente comando para cambiar al usuario superusuario:

```bash
sudo su
```

Luego podrás utilizar los siguientes comandos para controlar los LEDs:

- Encender LED:
  
```bash
echo 1 > /dev/etx_device
```

- Apagar LED:
  
```bash
echo 0 > /dev/etx_device 
```

## Notas adicionales:

- Ajusta la resistencia de 330 ohmios según las especificaciones de tu LED y la alimentación de la Raspberry Pi para garantizar un funcionamiento seguro.

- Asegúrate de que el pin GPIO 21 no esté configurado para funciones especiales antes de ejecutar el driver.

- Una vez cargado el módulo usando el comando:
  
 ```bash
 sudo insmod led_driver.ko
 ```

Asegúrate que el módulo haya cargado correctamente usando el comando:

 ```bash
 lsmod | grep led_driver
 ```

- Verifica en los logs del kernel por si aprece algún mensaje de error al momento de cargar el módulo con el comando:

```bash
 lsmod | grep led_driver
 ```

- Si deseas desmontar el módulo, utiliza el siguiente comando:

```bash
 sudo rmmod led_driver
 ```
