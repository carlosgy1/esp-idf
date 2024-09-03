# SPDX-FileCopyrightText: 2021-2022 Espressif Systems (Shanghai) CO LTD
# SPDX-License-Identifier: Apache-2.0
import pytest


# If `test_env` is define, should not run on generic runner
@pytest.mark.temp_skip_ci(targets=['esp32p4'], reason='p4 support TBD')  # TODO: IDF-8942
@pytest.mark.supported_targets
@pytest.mark.esp32h2
@pytest.mark.generic
def test_param_single_dev(case_tester) -> None:       # type: ignore
    for case in case_tester.test_menu:
        if 'test_env' in case.attributes:
            continue
        case_tester.run_normal_case(case=case, reset=True)


# if `test_env` not defined, will run on `generic_multi_device` by default
# TODO: [ESP32P4] IDF-8942 [ESP32C5] IDF-10322 [ESP32C61] IDF-10949
@pytest.mark.temp_skip_ci(targets=['esp32p4', 'esp32c5', 'esp32c61'], reason='no multi-dev runner')
@pytest.mark.supported_targets
@pytest.mark.esp32h2
@pytest.mark.generic_multi_device
@pytest.mark.parametrize('count', [2,], indirect=True)
def test_param_multi_dev(case_tester) -> None:        # type: ignore
    for case in case_tester.test_menu:
        if case.attributes.get('test_env', 'generic_multi_device') == 'generic_multi_device':
            case_tester.run_multi_dev_case(case=case, reset=True)
