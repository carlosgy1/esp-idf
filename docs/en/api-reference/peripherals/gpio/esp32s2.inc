.. This file gets included from other .rst files in this folder.
.. It contains target-specific snippets.
.. Comments and '---' lines act as delimiters.
..
.. This is necessary mainly because RST doesn't support substitutions
.. (defined in RST, not in Python) inside code blocks. If that is ever implemented,
.. These code blocks can be moved back to the main .rst files, with target-specific
.. file names being replaced by substitutions.

.. gpio-summary

The {IDF_TARGET_NAME} chip features 43 physical GPIO pins (GPIO0 ~ GPIO21 and GPIO26 ~ GPIO46). Each pin can be used as a general-purpose I/O, or be connected to an internal peripheral signal. Through IO MUX, RTC IO MUX and the GPIO matrix, peripheral input signals can be from any IO pins, and peripheral output signals can be routed to any IO pins. Together these modules provide highly configurable I/O. For more details, see *{IDF_TARGET_NAME} Technical Reference Manual* > *IO MUX and GPIO Matrix (GPIO, IO_MUX)* [`PDF <{IDF_TARGET_TRM_EN_URL}#iomuxgpio>`__].

The table below provides more information on pin usage, and please note the comments in the table for GPIOs with restrictions.

.. list-table::
    :header-rows: 1
    :widths: 8 12 12 20

    * - GPIO
      - Analog Function
      - RTC GPIO
      - Comment

    * - GPIO0
      -
      - RTC_GPIO0
      - Strapping pin

    * - GPIO1
      - ADC1_CH0
      - RTC_GPIO1
      -

    * - GPIO2
      - ADC1_CH1
      - RTC_GPIO2
      -

    * - GPIO3
      - ADC1_CH2
      - RTC_GPIO3
      -

    * - GPIO4
      - ADC1_CH3
      - RTC_GPIO4
      -

    * - GPIO5
      - ADC1_CH4
      - RTC_GPIO5
      -

    * - GPIO6
      - ADC1_CH5
      - RTC_GPIO6
      -

    * - GPIO7
      - ADC1_CH6
      - RTC_GPIO7
      -

    * - GPIO8
      - ADC1_CH7
      - RTC_GPIO8
      -

    * - GPIO9
      - ADC1_CH8
      - RTC_GPIO9
      -

    * - GPIO10
      - ADC1_CH9
      - RTC_GPIO10
      -

    * - GPIO11
      - ADC2_CH0
      - RTC_GPIO11
      -

    * - GPIO12
      - ADC2_CH1
      - RTC_GPIO12
      -

    * - GPIO13
      - ADC2_CH2
      - RTC_GPIO13
      -

    * - GPIO14
      - ADC2_CH3
      - RTC_GPIO14
      -

    * - GPIO15
      - ADC2_CH4
      - RTC_GPIO15
      -

    * - GPIO16
      - ADC2_CH5
      - RTC_GPIO16
      -

    * - GPIO17
      - ADC2_CH6
      - RTC_GPIO17
      -

    * - GPIO18
      - ADC2_CH7
      - RTC_GPIO18
      -

    * - GPIO19
      - ADC2_CH8
      - RTC_GPIO19
      -

    * - GPIO20
      - ADC2_CH9
      - RTC_GPIO20
      -

    * - GPIO21
      -
      - RTC_GPIO21
      -

    * - GPIO26
      -
      -
      - SPI0/1

    * - GPIO27
      -
      -
      - SPI0/1

    * - GPIO28
      -
      -
      - SPI0/1

    * - GPIO29
      -
      -
      - SPI0/1

    * - GPIO30
      -
      -
      - SPI0/1

    * - GPIO31
      -
      -
      - SPI0/1

    * - GPIO32
      -
      -
      - SPI0/1

    * - GPIO33
      -
      -
      -

    * - GPIO34
      -
      -
      -

    * - GPIO35
      -
      -
      -

    * - GPIO36
      -
      -
      -

    * - GPIO37
      -
      -
      -

    * - GPIO38
      -
      -
      -

    * - GPIO39
      -
      -
      - JTAG

    * - GPIO40
      -
      -
      - JTAG

    * - GPIO41
      -
      -
      - JTAG

    * - GPIO42
      -
      -
      - JTAG

    * - GPIO43
      -
      -
      -

    * - GPIO44
      -
      -
      -

    * - GPIO45
      -
      -
      - Strapping pin

    * - GPIO46
      -
      -
      - GPI；Strapping pin

.. note::

    - Strapping pin: GPIO0, GPIO45 and GPIO46 are strapping pins. For more information, please refer to `ESP32-S2 datasheet <{IDF_TARGET_DATASHEET_EN_URL}>`_
    - SPI0/1: GPIO26-32 are usually used for SPI flash and PSRAM and not recommended for other uses.
    - JTAG: GPIO39-42 are usually used for inline debug.
    - GPI: GPIO46 is fixed to pull-down and is input only.

---
