# SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
# SPDX-License-Identifier: CC0-1.0
import pytest
from pytest_embedded_idf import IdfDut


@pytest.mark.esp32
@pytest.mark.esp32c3
@pytest.mark.esp32c5
@pytest.mark.esp32c6
@pytest.mark.esp32h2
@pytest.mark.esp32s2
@pytest.mark.esp32s3
@pytest.mark.esp32p4
@pytest.mark.generic
@pytest.mark.parametrize(
    'config',
    [
        'release',
    ],
    indirect=True)
def test_legacy_sigma_delta(dut: IdfDut) -> None:
    dut.run_all_single_board_cases(group='sigma_delta')
