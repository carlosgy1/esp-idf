.. output_log

.. code-block:: none

    ...
    esptool esp32h2 -p /dev/ttyUSB0 -b 460800 --before=default_reset --after=hard_reset write_flash --flash_mode dio --flash_freq 48m --flash_size 2MB 0x0 bootloader/bootloader.bin 0x10000 hello_world.bin 0x8000 partition_table/partition-table.bin
    esptool.py v4.6
    Serial port /dev/ttyUSB0
    Connecting....
    Chip is ESP32-H2 (revision v0.1)
    Features: BLE
    Crystal is 32MHz
    MAC: 60:55:f9:f7:3e:93:ff:fe
    Uploading stub...
    Running stub...
    Stub running...
    Changing baud rate to 460800
    Changed.
    Configuring flash size...
    Flash will be erased from 0x00000000 to 0x00005fff...
    Flash will be erased from 0x00010000 to 0x00034fff...
    Flash will be erased from 0x00008000 to 0x00008fff...
    Compressed 20880 bytes to 12788...
    Writing at 0x00000000... (100 %)
    Wrote 20880 bytes (12788 compressed) at 0x00000000 in 0.6 seconds (effective 297.5 kbit/s)...
    Hash of data verified.
    Compressed 149424 bytes to 79574...
    Writing at 0x00010000... (20 %)
    Writing at 0x00019959... (40 %)
    Writing at 0x00020bb5... (60 %)
    Writing at 0x00026d8f... (80 %)
    Writing at 0x0002e60a... (100 %)
    Wrote 149424 bytes (79574 compressed) at 0x00010000 in 2.1 seconds (effective 571.7 kbit/s)...
    Hash of data verified.
    Compressed 3072 bytes to 103...
    Writing at 0x00008000... (100 %)
    Wrote 3072 bytes (103 compressed) at 0x00008000 in 0.0 seconds (effective 539.7 kbit/s)...
    Hash of data verified.

    Leaving...
    Hard resetting via RTS pin...