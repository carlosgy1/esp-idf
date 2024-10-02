# SPDX-FileCopyrightText: 2021-2022 Espressif Systems (Shanghai) CO LTD
# SPDX-License-Identifier: CC0-1.0

import pytest
from pytest_embedded import Dut


@pytest.mark.esp32c3
@pytest.mark.i2c_oled
@pytest.mark.parametrize(
    'config',
    [
        'release',
    ],
    indirect=True,
)
def test_i2c_lcd(dut: Dut) -> None:
    dut.run_all_single_board_cases()
