/*
 * libtinyiiod - Tiny IIO Daemon Library
 *
 * Copyright (C) 2016 Analog Devices, Inc.
 * Author: Paul Cercueil <paul.cercueil@analog.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 */

#ifndef TINYIIOD_USER_H
#define TINYIIOD_USER_H

static const char * const  xml =
		"<?xml version=\"1.0\" encoding=\"utf-8\"?>"
		"<!DOCTYPE context ["
			"<!ELEMENT context (device | context-attribute)*>"
			"<!ELEMENT context-attribute EMPTY>"
			"<!ELEMENT device (channel | attribute | debug-attribute | buffer-attribute)*>"
			"<!ELEMENT channel (scan-element?, attribute*)>"
			"<!ELEMENT attribute EMPTY>"
			"<!ELEMENT scan-element EMPTY>"
			"<!ELEMENT debug-attribute EMPTY>"
			"<!ELEMENT buffer-attribute EMPTY>"
			"<!ATTLIST context name CDATA #REQUIRED description CDATA #IMPLIED>"
			"<!ATTLIST context-attribute name CDATA #REQUIRED value CDATA #REQUIRED>"
			"<!ATTLIST device id CDATA #REQUIRED name CDATA #IMPLIED>"
			"<!ATTLIST channel id CDATA #REQUIRED type (input|output) #REQUIRED name CDATA #IMPLIED>"
			"<!ATTLIST scan-element index CDATA #REQUIRED format CDATA #REQUIRED scale CDATA #IMPLIED>"
			"<!ATTLIST attribute name CDATA #REQUIRED filename CDATA #IMPLIED>"
			"<!ATTLIST debug-attribute name CDATA #REQUIRED>"
			"<!ATTLIST buffer-attribute name CDATA #REQUIRED>"
		"]>"
		"<context name=\"xml\" description=\"Linux analog 4.9.0-g2398d50 #189 SMP PREEMPT Tue Jun 26 09:52:32 IST 2018 armv7l\" >"
			"<context-attribute name=\"local,kernel\" value=\"4.9.0-g2398d50\" />"
			"<device id=\"cf-ad9361-dds-core-lpc\" name=\"cf-ad9361-dds-core-lpc\" >"
				"<channel id=\"voltage0\" type=\"output\" >"
					"<scan-element index=\"0\" format=\"le:S16/16&gt;&gt;0\" />"
					"<attribute name=\"calibphase\" filename=\"out_voltage0_calibphase\" />"
					"<attribute name=\"calibscale\" filename=\"out_voltage0_calibscale\" />"
					"<attribute name=\"sampling_frequency\" filename=\"out_voltage_sampling_frequency\" />"
				"</channel>"
				"<channel id=\"voltage1\" type=\"output\" >"
					"<scan-element index=\"1\" format=\"le:S16/16&gt;&gt;0\" />"
					"<attribute name=\"calibphase\" filename=\"out_voltage1_calibphase\" />"
					"<attribute name=\"calibscale\" filename=\"out_voltage1_calibscale\" />"
					"<attribute name=\"sampling_frequency\" filename=\"out_voltage_sampling_frequency\" />"
				"</channel>"
				"<channel id=\"voltage2\" type=\"output\" >"
					"<scan-element index=\"2\" format=\"le:S16/16&gt;&gt;0\" />"
					"<attribute name=\"calibphase\" filename=\"out_voltage2_calibphase\" />"
					"<attribute name=\"calibscale\" filename=\"out_voltage2_calibscale\" />"
					"<attribute name=\"sampling_frequency\" filename=\"out_voltage_sampling_frequency\" />"
				"</channel>"
				"<channel id=\"voltage3\" type=\"output\" >"
					"<scan-element index=\"3\" format=\"le:S16/16&gt;&gt;0\" />"
					"<attribute name=\"calibphase\" filename=\"out_voltage3_calibphase\" />"
					"<attribute name=\"calibscale\" filename=\"out_voltage3_calibscale\" />"
					"<attribute name=\"sampling_frequency\" filename=\"out_voltage_sampling_frequency\" />"
				"</channel>"
				"<channel id=\"altvoltage3\" name=\"TX1_Q_F2\" type=\"output\" >"
					"<attribute name=\"phase\" filename=\"out_altvoltage3_TX1_Q_F2_phase\" />"
					"<attribute name=\"scale\" filename=\"out_altvoltage3_TX1_Q_F2_scale\" />"
					"<attribute name=\"frequency\" filename=\"out_altvoltage3_TX1_Q_F2_frequency\" />"
					"<attribute name=\"raw\" filename=\"out_altvoltage3_TX1_Q_F2_raw\" />"
					"<attribute name=\"sampling_frequency\" filename=\"out_altvoltage_sampling_frequency\" />"
				"</channel>"
				"<channel id=\"altvoltage1\" name=\"TX1_I_F2\" type=\"output\" >"
					"<attribute name=\"phase\" filename=\"out_altvoltage1_TX1_I_F2_phase\" />"
					"<attribute name=\"scale\" filename=\"out_altvoltage1_TX1_I_F2_scale\" />"
					"<attribute name=\"frequency\" filename=\"out_altvoltage1_TX1_I_F2_frequency\" />"
					"<attribute name=\"raw\" filename=\"out_altvoltage1_TX1_I_F2_raw\" />"
					"<attribute name=\"sampling_frequency\" filename=\"out_altvoltage_sampling_frequency\" />"
				"</channel>"
				"<channel id=\"altvoltage0\" name=\"TX1_I_F1\" type=\"output\" >"
					"<attribute name=\"phase\" filename=\"out_altvoltage0_TX1_I_F1_phase\" />"
					"<attribute name=\"scale\" filename=\"out_altvoltage0_TX1_I_F1_scale\" />"
					"<attribute name=\"frequency\" filename=\"out_altvoltage0_TX1_I_F1_frequency\" />"
					"<attribute name=\"raw\" filename=\"out_altvoltage0_TX1_I_F1_raw\" />"
					"<attribute name=\"sampling_frequency\" filename=\"out_altvoltage_sampling_frequency\" />"
				"</channel>"
				"<channel id=\"altvoltage7\" name=\"TX2_Q_F2\" type=\"output\" >"
					"<attribute name=\"phase\" filename=\"out_altvoltage7_TX2_Q_F2_phase\" />"
					"<attribute name=\"scale\" filename=\"out_altvoltage7_TX2_Q_F2_scale\" />"
					"<attribute name=\"frequency\" filename=\"out_altvoltage7_TX2_Q_F2_frequency\" />"
					"<attribute name=\"raw\" filename=\"out_altvoltage7_TX2_Q_F2_raw\" />"
					"<attribute name=\"sampling_frequency\" filename=\"out_altvoltage_sampling_frequency\" />"
				"</channel>"
				"<channel id=\"altvoltage6\" name=\"TX2_Q_F1\" type=\"output\" >"
					"<attribute name=\"phase\" filename=\"out_altvoltage6_TX2_Q_F1_phase\" />"
					"<attribute name=\"scale\" filename=\"out_altvoltage6_TX2_Q_F1_scale\" />"
					"<attribute name=\"frequency\" filename=\"out_altvoltage6_TX2_Q_F1_frequency\" />"
					"<attribute name=\"raw\" filename=\"out_altvoltage6_TX2_Q_F1_raw\" />"
					"<attribute name=\"sampling_frequency\" filename=\"out_altvoltage_sampling_frequency\" />"
				"</channel>"
				"<channel id=\"altvoltage5\" name=\"TX2_I_F2\" type=\"output\" >"
					"<attribute name=\"phase\" filename=\"out_altvoltage5_TX2_I_F2_phase\" />"
					"<attribute name=\"scale\" filename=\"out_altvoltage5_TX2_I_F2_scale\" />"
					"<attribute name=\"frequency\" filename=\"out_altvoltage5_TX2_I_F2_frequency\" />"
					"<attribute name=\"raw\" filename=\"out_altvoltage5_TX2_I_F2_raw\" />"
					"<attribute name=\"sampling_frequency\" filename=\"out_altvoltage_sampling_frequency\" />"
				"</channel>"
				"<channel id=\"altvoltage2\" name=\"TX1_Q_F1\" type=\"output\" >"
					"<attribute name=\"phase\" filename=\"out_altvoltage2_TX1_Q_F1_phase\" />"
					"<attribute name=\"scale\" filename=\"out_altvoltage2_TX1_Q_F1_scale\" />"
					"<attribute name=\"frequency\" filename=\"out_altvoltage2_TX1_Q_F1_frequency\" />"
					"<attribute name=\"raw\" filename=\"out_altvoltage2_TX1_Q_F1_raw\" />"
					"<attribute name=\"sampling_frequency\" filename=\"out_altvoltage_sampling_frequency\" />"
				"</channel>"
				"<channel id=\"altvoltage4\" name=\"TX2_I_F1\" type=\"output\" >"
					"<attribute name=\"phase\" filename=\"out_altvoltage4_TX2_I_F1_phase\" />"
					"<attribute name=\"scale\" filename=\"out_altvoltage4_TX2_I_F1_scale\" />"
					"<attribute name=\"frequency\" filename=\"out_altvoltage4_TX2_I_F1_frequency\" />"
					"<attribute name=\"raw\" filename=\"out_altvoltage4_TX2_I_F1_raw\" />"
					"<attribute name=\"sampling_frequency\" filename=\"out_altvoltage_sampling_frequency\" />"
				"</channel>"
				"<buffer-attribute name=\"watermark\" />"
				"<buffer-attribute name=\"data_available\" />"
				"<debug-attribute name=\"direct_reg_access\" />"
			"</device>"
			"<device id=\"ad9361-phy\" name=\"ad9361-phy\" >"
				"<channel id=\"altvoltage1\" name=\"TX_LO\" type=\"output\" >"
					"<attribute name=\"frequency_available\" filename=\"out_altvoltage1_RX_LO_frequency_available\" />"
					"<attribute name=\"fastlock_save\" filename=\"out_altvoltage1_RX_LO_fastlock_save\" />"
					"<attribute name=\"powerdown\" filename=\"out_altvoltage1_RX_LO_powerdown\" />"
					"<attribute name=\"fastlock_load\" filename=\"out_altvoltage1_RX_LO_fastlock_load\" />"
					"<attribute name=\"fastlock_store\" filename=\"out_altvoltage1_RX_LO_fastlock_store\" />"
					"<attribute name=\"frequency\" filename=\"out_altvoltage1_RX_LO_frequency\" />"
					"<attribute name=\"external\" filename=\"out_altvoltage1_RX_LO_external\" />"
					"<attribute name=\"fastlock_recall\" filename=\"out_altvoltage1_RX_LO_fastlock_recall\" />"
				"</channel>"
				"<channel id=\"voltage1\" type=\"output\" >"
					"<attribute name=\"rf_port_select\" filename=\"out_voltage1_rf_port_select\" />"
					"<attribute name=\"hardwaregain\" filename=\"out_voltage1_hardwaregain\" />"
					"<attribute name=\"rssi\" filename=\"out_voltage1_rssi\" />"
					"<attribute name=\"hardwaregain_available\" filename=\"out_voltage1_hardwaregain_available\" />"
					"<attribute name=\"sampling_frequency_available\" filename=\"out_voltage_sampling_frequency_available\" />"
					"<attribute name=\"rf_port_select_available\" filename=\"out_voltage_rf_port_select_available\" />"
					"<attribute name=\"filter_fir_en\" filename=\"out_voltage_filter_fir_en\" />"
					"<attribute name=\"sampling_frequency\" filename=\"out_voltage_sampling_frequency\" />"
					"<attribute name=\"rf_bandwidth_available\" filename=\"out_voltage_rf_bandwidth_available\" />"
					"<attribute name=\"rf_bandwidth\" filename=\"out_voltage_rf_bandwidth\" />"
				"</channel>"
				"<channel id=\"voltage0\" type=\"input\" >"
					"<attribute name=\"hardwaregain_available\" filename=\"in_voltage0_hardwaregain_available\" />"
					"<attribute name=\"hardwaregain\" filename=\"in_voltage0_hardwaregain\" />"
					"<attribute name=\"rssi\" filename=\"in_voltage0_rssi\" />"
					"<attribute name=\"rf_port_select\" filename=\"in_voltage0_rf_port_select\" />"
					"<attribute name=\"gain_control_mode\" filename=\"in_voltage0_gain_control_mode\" />"
					"<attribute name=\"rf_port_select_available\" filename=\"in_voltage_rf_port_select_available\" />"
					"<attribute name=\"rf_bandwidth\" filename=\"in_voltage_rf_bandwidth\" />"
					"<attribute name=\"rf_dc_offset_tracking_en\" filename=\"in_voltage_rf_dc_offset_tracking_en\" />"
					"<attribute name=\"sampling_frequency_available\" filename=\"in_voltage_sampling_frequency_available\" />"
					"<attribute name=\"quadrature_tracking_en\" filename=\"in_voltage_quadrature_tracking_en\" />"
					"<attribute name=\"sampling_frequency\" filename=\"in_voltage_sampling_frequency\" />"
					"<attribute name=\"gain_control_mode_available\" filename=\"in_voltage_gain_control_mode_available\" />"
					"<attribute name=\"filter_fir_en\" filename=\"in_voltage_filter_fir_en\" />"
					"<attribute name=\"rf_bandwidth_available\" filename=\"in_voltage_rf_bandwidth_available\" />"
					"<attribute name=\"bb_dc_offset_tracking_en\" filename=\"in_voltage_bb_dc_offset_tracking_en\" />"
				"</channel>"
				"<channel id=\"voltage1\" type=\"input\" >"
					"<attribute name=\"hardwaregain_available\" filename=\"in_voltage1_hardwaregain_available\" />"
					"<attribute name=\"hardwaregain\" filename=\"in_voltage1_hardwaregain\" />"
					"<attribute name=\"rssi\" filename=\"in_voltage1_rssi\" />"
					"<attribute name=\"rf_port_select\" filename=\"in_voltage1_rf_port_select\" />"
					"<attribute name=\"gain_control_mode\" filename=\"in_voltage1_gain_control_mode\" />"
					"<attribute name=\"rf_port_select_available\" filename=\"in_voltage_rf_port_select_available\" />"
					"<attribute name=\"rf_bandwidth\" filename=\"in_voltage_rf_bandwidth\" />"
					"<attribute name=\"rf_dc_offset_tracking_en\" filename=\"in_voltage_rf_dc_offset_tracking_en\" />"
					"<attribute name=\"sampling_frequency_available\" filename=\"in_voltage_sampling_frequency_available\" />"
					"<attribute name=\"quadrature_tracking_en\" filename=\"in_voltage_quadrature_tracking_en\" />"
					"<attribute name=\"sampling_frequency\" filename=\"in_voltage_sampling_frequency\" />"
					"<attribute name=\"gain_control_mode_available\" filename=\"in_voltage_gain_control_mode_available\" />"
					"<attribute name=\"filter_fir_en\" filename=\"in_voltage_filter_fir_en\" />"
					"<attribute name=\"rf_bandwidth_available\" filename=\"in_voltage_rf_bandwidth_available\" />"
					"<attribute name=\"bb_dc_offset_tracking_en\" filename=\"in_voltage_bb_dc_offset_tracking_en\" />"
				"</channel>"
				"<channel id=\"voltage3\" type=\"output\" >"
					"<attribute name=\"scale\" filename=\"out_voltage3_scale\" />"
					"<attribute name=\"raw\" filename=\"out_voltage3_raw\" />"
					"<attribute name=\"sampling_frequency_available\" filename=\"out_voltage_sampling_frequency_available\" />"
					"<attribute name=\"rf_port_select_available\" filename=\"out_voltage_rf_port_select_available\" />"
					"<attribute name=\"filter_fir_en\" filename=\"out_voltage_filter_fir_en\" />"
					"<attribute name=\"sampling_frequency\" filename=\"out_voltage_sampling_frequency\" />"
					"<attribute name=\"rf_bandwidth_available\" filename=\"out_voltage_rf_bandwidth_available\" />"
					"<attribute name=\"rf_bandwidth\" filename=\"out_voltage_rf_bandwidth\" />"
				"</channel>"
				"<channel id=\"altvoltage0\" name=\"RX_LO\" type=\"output\" >"
					"<attribute name=\"frequency_available\" filename=\"out_altvoltage0_RX_LO_frequency_available\" />"
					"<attribute name=\"fastlock_save\" filename=\"out_altvoltage0_RX_LO_fastlock_save\" />"
					"<attribute name=\"powerdown\" filename=\"out_altvoltage0_RX_LO_powerdown\" />"
					"<attribute name=\"fastlock_load\" filename=\"out_altvoltage0_RX_LO_fastlock_load\" />"
					"<attribute name=\"fastlock_store\" filename=\"out_altvoltage0_RX_LO_fastlock_store\" />"
					"<attribute name=\"frequency\" filename=\"out_altvoltage0_RX_LO_frequency\" />"
					"<attribute name=\"external\" filename=\"out_altvoltage0_RX_LO_external\" />"
					"<attribute name=\"fastlock_recall\" filename=\"out_altvoltage0_RX_LO_fastlock_recall\" />"
				"</channel>"
				"<channel id=\"voltage2\" type=\"output\" >"
					"<attribute name=\"raw\" filename=\"out_voltage2_raw\" />"
					"<attribute name=\"scale\" filename=\"out_voltage2_scale\" />"
					"<attribute name=\"sampling_frequency_available\" filename=\"out_voltage_sampling_frequency_available\" />"
					"<attribute name=\"rf_port_select_available\" filename=\"out_voltage_rf_port_select_available\" />"
					"<attribute name=\"filter_fir_en\" filename=\"out_voltage_filter_fir_en\" />"
					"<attribute name=\"sampling_frequency\" filename=\"out_voltage_sampling_frequency\" />"
					"<attribute name=\"rf_bandwidth_available\" filename=\"out_voltage_rf_bandwidth_available\" />"
					"<attribute name=\"rf_bandwidth\" filename=\"out_voltage_rf_bandwidth\" />"
				"</channel>"
				"<channel id=\"temp0\" type=\"input\" >"
					"<attribute name=\"input\" filename=\"in_temp0_input\" />"
				"</channel>"
				"<channel id=\"voltage0\" type=\"output\" >"
					"<attribute name=\"rf_port_select\" filename=\"out_voltage0_rf_port_select\" />"
					"<attribute name=\"hardwaregain\" filename=\"out_voltage0_hardwaregain\" />"
					"<attribute name=\"rssi\" filename=\"out_voltage0_rssi\" />"
					"<attribute name=\"hardwaregain_available\" filename=\"out_voltage0_hardwaregain_available\" />"
					"<attribute name=\"sampling_frequency_available\" filename=\"out_voltage_sampling_frequency_available\" />"
					"<attribute name=\"rf_port_select_available\" filename=\"out_voltage_rf_port_select_available\" />"
					"<attribute name=\"filter_fir_en\" filename=\"out_voltage_filter_fir_en\" />"
					"<attribute name=\"sampling_frequency\" filename=\"out_voltage_sampling_frequency\" />"
					"<attribute name=\"rf_bandwidth_available\" filename=\"out_voltage_rf_bandwidth_available\" />"
					"<attribute name=\"rf_bandwidth\" filename=\"out_voltage_rf_bandwidth\" />"
				"</channel>"
				"<channel id=\"voltage2\" type=\"input\" >"
					"<attribute name=\"offset\" filename=\"in_voltage2_offset\" />"
					"<attribute name=\"scale\" filename=\"in_voltage2_scale\" />"
					"<attribute name=\"raw\" filename=\"in_voltage2_raw\" />"
					"<attribute name=\"rf_port_select_available\" filename=\"in_voltage_rf_port_select_available\" />"
					"<attribute name=\"rf_bandwidth\" filename=\"in_voltage_rf_bandwidth\" />"
					"<attribute name=\"rf_dc_offset_tracking_en\" filename=\"in_voltage_rf_dc_offset_tracking_en\" />"
					"<attribute name=\"sampling_frequency_available\" filename=\"in_voltage_sampling_frequency_available\" />"
					"<attribute name=\"quadrature_tracking_en\" filename=\"in_voltage_quadrature_tracking_en\" />"
					"<attribute name=\"sampling_frequency\" filename=\"in_voltage_sampling_frequency\" />"
					"<attribute name=\"gain_control_mode_available\" filename=\"in_voltage_gain_control_mode_available\" />"
					"<attribute name=\"filter_fir_en\" filename=\"in_voltage_filter_fir_en\" />"
					"<attribute name=\"rf_bandwidth_available\" filename=\"in_voltage_rf_bandwidth_available\" />"
					"<attribute name=\"bb_dc_offset_tracking_en\" filename=\"in_voltage_bb_dc_offset_tracking_en\" />"
				"</channel>"
				"<channel id=\"out\" type=\"input\" >"
					"<attribute name=\"voltage_filter_fir_en\" filename=\"in_out_voltage_filter_fir_en\" />"
				"</channel>"
				"<attribute name=\"dcxo_tune_coarse\" />"
				"<attribute name=\"rx_path_rates\" />"
				"<attribute name=\"trx_rate_governor\" />"
				"<attribute name=\"calib_mode_available\" />"
				"<attribute name=\"xo_correction_available\" />"
				"<attribute name=\"gain_table_config\" />"
				"<attribute name=\"dcxo_tune_fine\" />"
				"<attribute name=\"dcxo_tune_fine_available\" />"
				"<attribute name=\"ensm_mode_available\" />"
				"<attribute name=\"multichip_sync\" />"
				"<attribute name=\"rssi_gain_step_error\" />"
				"<attribute name=\"dcxo_tune_coarse_available\" />"
				"<attribute name=\"tx_path_rates\" />"
				"<attribute name=\"trx_rate_governor_available\" />"
				"<attribute name=\"xo_correction\" />"
				"<attribute name=\"ensm_mode\" />"
				"<attribute name=\"filter_fir_config\" />"
				"<attribute name=\"calib_mode\" />"
				"<debug-attribute name=\"digital_tune\" />"
				"<debug-attribute name=\"calibration_switch_control\" />"
				"<debug-attribute name=\"multichip_sync\" />"
				"<debug-attribute name=\"gaininfo_rx2\" />"
				"<debug-attribute name=\"gaininfo_rx1\" />"
				"<debug-attribute name=\"bist_timing_analysis\" />"
				"<debug-attribute name=\"bist_tone\" />"
				"<debug-attribute name=\"bist_prbs\" />"
				"<debug-attribute name=\"loopback\" />"
				"<debug-attribute name=\"initialize\" />"
				"<debug-attribute name=\"adi,txmon-2-lo-cm\" />"
				"<debug-attribute name=\"adi,txmon-1-lo-cm\" />"
				"<debug-attribute name=\"adi,txmon-2-front-end-gain\" />"
				"<debug-attribute name=\"adi,txmon-1-front-end-gain\" />"
				"<debug-attribute name=\"adi,txmon-duration\" />"
				"<debug-attribute name=\"adi,txmon-delay\" />"
				"<debug-attribute name=\"adi,txmon-one-shot-mode-enable\" />"
				"<debug-attribute name=\"adi,txmon-dc-tracking-enable\" />"
				"<debug-attribute name=\"adi,txmon-high-gain\" />"
				"<debug-attribute name=\"adi,txmon-low-gain\" />"
				"<debug-attribute name=\"adi,txmon-low-high-thresh\" />"
				"<debug-attribute name=\"adi,gpo3-tx-delay-us\" />"
				"<debug-attribute name=\"adi,gpo3-rx-delay-us\" />"
				"<debug-attribute name=\"adi,gpo2-tx-delay-us\" />"
				"<debug-attribute name=\"adi,gpo2-rx-delay-us\" />"
				"<debug-attribute name=\"adi,gpo1-tx-delay-us\" />"
				"<debug-attribute name=\"adi,gpo1-rx-delay-us\" />"
				"<debug-attribute name=\"adi,gpo0-tx-delay-us\" />"
				"<debug-attribute name=\"adi,gpo0-rx-delay-us\" />"
				"<debug-attribute name=\"adi,gpo3-slave-tx-enable\" />"
				"<debug-attribute name=\"adi,gpo3-slave-rx-enable\" />"
				"<debug-attribute name=\"adi,gpo2-slave-tx-enable\" />"
				"<debug-attribute name=\"adi,gpo2-slave-rx-enable\" />"
				"<debug-attribute name=\"adi,gpo1-slave-tx-enable\" />"
				"<debug-attribute name=\"adi,gpo1-slave-rx-enable\" />"
				"<debug-attribute name=\"adi,gpo0-slave-tx-enable\" />"
				"<debug-attribute name=\"adi,gpo0-slave-rx-enable\" />"
				"<debug-attribute name=\"adi,gpo3-inactive-state-high-enable\" />"
				"<debug-attribute name=\"adi,gpo2-inactive-state-high-enable\" />"
				"<debug-attribute name=\"adi,gpo1-inactive-state-high-enable\" />"
				"<debug-attribute name=\"adi,gpo0-inactive-state-high-enable\" />"
				"<debug-attribute name=\"adi,gpo-manual-mode-enable-mask\" />"
				"<debug-attribute name=\"adi,gpo-manual-mode-enable\" />"
				"<debug-attribute name=\"adi,aux-dac2-tx-delay-us\" />"
				"<debug-attribute name=\"adi,aux-dac2-rx-delay-us\" />"
				"<debug-attribute name=\"adi,aux-dac2-active-in-alert-enable\" />"
				"<debug-attribute name=\"adi,aux-dac2-active-in-tx-enable\" />"
				"<debug-attribute name=\"adi,aux-dac2-active-in-rx-enable\" />"
				"<debug-attribute name=\"adi,aux-dac2-default-value-mV\" />"
				"<debug-attribute name=\"adi,aux-dac1-tx-delay-us\" />"
				"<debug-attribute name=\"adi,aux-dac1-rx-delay-us\" />"
				"<debug-attribute name=\"adi,aux-dac1-active-in-alert-enable\" />"
				"<debug-attribute name=\"adi,aux-dac1-active-in-tx-enable\" />"
				"<debug-attribute name=\"adi,aux-dac1-active-in-rx-enable\" />"
				"<debug-attribute name=\"adi,aux-dac1-default-value-mV\" />"
				"<debug-attribute name=\"adi,aux-dac-manual-mode-enable\" />"
				"<debug-attribute name=\"adi,aux-adc-decimation\" />"
				"<debug-attribute name=\"adi,aux-adc-rate\" />"
				"<debug-attribute name=\"adi,temp-sense-decimation\" />"
				"<debug-attribute name=\"adi,temp-sense-periodic-measurement-enable\" />"
				"<debug-attribute name=\"adi,temp-sense-offset-signed\" />"
				"<debug-attribute name=\"adi,temp-sense-measurement-interval-ms\" />"
				"<debug-attribute name=\"adi,elna-gaintable-all-index-enable\" />"
				"<debug-attribute name=\"adi,elna-rx2-gpo1-control-enable\" />"
				"<debug-attribute name=\"adi,elna-rx1-gpo0-control-enable\" />"
				"<debug-attribute name=\"adi,elna-bypass-loss-mdB\" />"
				"<debug-attribute name=\"adi,elna-gain-mdB\" />"
				"<debug-attribute name=\"adi,elna-settling-delay-ns\" />"
				"<debug-attribute name=\"adi,ctrl-outs-enable-mask\" />"
				"<debug-attribute name=\"adi,ctrl-outs-index\" />"
				"<debug-attribute name=\"adi,rssi-duration\" />"
				"<debug-attribute name=\"adi,rssi-wait\" />"
				"<debug-attribute name=\"adi,rssi-delay\" />"
				"<debug-attribute name=\"adi,rssi-unit-is-rx-samples-enable\" />"
				"<debug-attribute name=\"adi,rssi-restart-mode\" />"
				"<debug-attribute name=\"adi,fagc-adc-large-overload-inc-steps\" />"
				"<debug-attribute name=\"adi,fagc-power-measurement-duration-in-state5\" />"
				"<debug-attribute name=\"adi,fagc-rst-gla-if-en-agc-pulled-high-mode\" />"
				"<debug-attribute name=\"adi,fagc-rst-gla-en-agc-pulled-high-enable\" />"
				"<debug-attribute name=\"adi,fagc-rst-gla-large-lmt-overload-enable\" />"
				"<debug-attribute name=\"adi,fagc-rst-gla-large-adc-overload-enable\" />"
				"<debug-attribute name=\"adi,fagc-energy-lost-stronger-sig-gain-lock-exit-cnt\" />"
				"<debug-attribute name=\"adi,fagc-rst-gla-engergy-lost-sig-thresh-below-ll\" />"
				"<debug-attribute name=\"adi,fagc-rst-gla-engergy-lost-goto-optim-gain-enable\" />"
				"<debug-attribute name=\"adi,fagc-rst-gla-engergy-lost-sig-thresh-exceeded-enable\" />"
				"<debug-attribute name=\"adi,fagc-rst-gla-stronger-sig-thresh-above-ll\" />"
				"<debug-attribute name=\"adi,fagc-optimized-gain-offset\" />"
				"<debug-attribute name=\"adi,fagc-rst-gla-stronger-sig-thresh-exceeded-enable\" />"
				"<debug-attribute name=\"adi,fagc-use-last-lock-level-for-set-gain-enable\" />"
				"<debug-attribute name=\"adi,fagc-gain-index-type-after-exit-rx-mode\" />"
				"<debug-attribute name=\"adi,fagc-gain-increase-after-gain-lock-enable\" />"
				"<debug-attribute name=\"adi,fagc-final-overrange-count\" />"
				"<debug-attribute name=\"adi,fagc-lmt-final-settling-steps\" />"
				"<debug-attribute name=\"adi,fagc-lpf-final-settling-steps\" />"
				"<debug-attribute name=\"adi,fagc-lock-level-gain-increase-upper-limit\" />"
				"<debug-attribute name=\"adi,fagc-lock-level-lmt-gain-increase-enable\" />"
				"<debug-attribute name=\"adi,fagc-lp-thresh-increment-steps\" />"
				"<debug-attribute name=\"adi,fagc-lp-thresh-increment-time\" />"
				"<debug-attribute name=\"adi,fagc-allow-agc-gain-increase-enable\" />"
				"<debug-attribute name=\"adi,fagc-state-wait-time-ns\" />"
				"<debug-attribute name=\"adi,fagc-dec-pow-measurement-duration\" />"
				"<debug-attribute name=\"adi,agc-immed-gain-change-if-large-lmt-overload-enable\" />"
				"<debug-attribute name=\"adi,agc-immed-gain-change-if-large-adc-overload-enable\" />"
				"<debug-attribute name=\"adi,agc-gain-update-interval-us\" />"
				"<debug-attribute name=\"adi,agc-sync-for-gain-counter-enable\" />"
				"<debug-attribute name=\"adi,agc-dig-gain-step-size\" />"
				"<debug-attribute name=\"adi,agc-dig-saturation-exceed-counter\" />"
				"<debug-attribute name=\"adi,agc-lmt-overload-large-inc-steps\" />"
				"<debug-attribute name=\"adi,agc-lmt-overload-small-exceed-counter\" />"
				"<debug-attribute name=\"adi,agc-lmt-overload-large-exceed-counter\" />"
				"<debug-attribute name=\"adi,agc-adc-lmt-small-overload-prevent-gain-inc-enable\" />"
				"<debug-attribute name=\"adi,agc-adc-large-overload-inc-steps\" />"
				"<debug-attribute name=\"adi,agc-adc-large-overload-exceed-counter\" />"
				"<debug-attribute name=\"adi,agc-adc-small-overload-exceed-counter\" />"
				"<debug-attribute name=\"adi,agc-outer-thresh-low-inc-steps\" />"
				"<debug-attribute name=\"adi,agc-outer-thresh-low\" />"
				"<debug-attribute name=\"adi,agc-inner-thresh-low-inc-steps\" />"
				"<debug-attribute name=\"adi,agc-inner-thresh-low\" />"
				"<debug-attribute name=\"adi,agc-inner-thresh-high-dec-steps\" />"
				"<debug-attribute name=\"adi,agc-inner-thresh-high\" />"
				"<debug-attribute name=\"adi,agc-outer-thresh-high-dec-steps\" />"
				"<debug-attribute name=\"adi,agc-outer-thresh-high\" />"
				"<debug-attribute name=\"adi,agc-attack-delay-extra-margin-us\" />"
				"<debug-attribute name=\"adi,mgc-split-table-ctrl-inp-gain-mode\" />"
				"<debug-attribute name=\"adi,mgc-dec-gain-step\" />"
				"<debug-attribute name=\"adi,mgc-inc-gain-step\" />"
				"<debug-attribute name=\"adi,mgc-rx2-ctrl-inp-enable\" />"
				"<debug-attribute name=\"adi,mgc-rx1-ctrl-inp-enable\" />"
				"<debug-attribute name=\"adi,gc-use-rx-fir-out-for-dec-pwr-meas-enable\" />"
				"<debug-attribute name=\"adi,gc-max-dig-gain\" />"
				"<debug-attribute name=\"adi,gc-dig-gain-enable\" />"
				"<debug-attribute name=\"adi,gc-low-power-thresh\" />"
				"<debug-attribute name=\"adi,gc-dec-pow-measurement-duration\" />"
				"<debug-attribute name=\"adi,gc-lmt-overload-low-thresh\" />"
				"<debug-attribute name=\"adi,gc-lmt-overload-high-thresh\" />"
				"<debug-attribute name=\"adi,gc-adc-large-overload-thresh\" />"
				"<debug-attribute name=\"adi,gc-adc-small-overload-thresh\" />"
				"<debug-attribute name=\"adi,gc-adc-ovr-sample-size\" />"
				"<debug-attribute name=\"adi,gc-rx2-mode\" />"
				"<debug-attribute name=\"adi,gc-rx1-mode\" />"
				"<debug-attribute name=\"adi,update-tx-gain-in-alert-enable\" />"
				"<debug-attribute name=\"adi,tx-attenuation-mdB\" />"
				"<debug-attribute name=\"adi,rf-tx-bandwidth-hz\" />"
				"<debug-attribute name=\"adi,rf-rx-bandwidth-hz\" />"
				"<debug-attribute name=\"adi,qec-tracking-slow-mode-enable\" />"
				"<debug-attribute name=\"adi,dc-offset-count-low-range\" />"
				"<debug-attribute name=\"adi,dc-offset-count-high-range\" />"
				"<debug-attribute name=\"adi,dc-offset-attenuation-low-range\" />"
				"<debug-attribute name=\"adi,dc-offset-attenuation-high-range\" />"
				"<debug-attribute name=\"adi,dc-offset-tracking-update-event-mask\" />"
				"<debug-attribute name=\"adi,clk-output-mode-select\" />"
				"<debug-attribute name=\"adi,external-rx-lo-enable\" />"
				"<debug-attribute name=\"adi,external-tx-lo-enable\" />"
				"<debug-attribute name=\"adi,xo-disable-use-ext-refclk-enable\" />"
				"<debug-attribute name=\"adi,trx-synthesizer-target-fref-overwrite-hz\" />"
				"<debug-attribute name=\"adi,rx1-rx2-phase-inversion-enable\" />"
				"<debug-attribute name=\"adi,tx-rf-port-input-select-lock-enable\" />"
				"<debug-attribute name=\"adi,rx-rf-port-input-select-lock-enable\" />"
				"<debug-attribute name=\"adi,tx-rf-port-input-select\" />"
				"<debug-attribute name=\"adi,rx-rf-port-input-select\" />"
				"<debug-attribute name=\"adi,split-gain-table-mode-enable\" />"
				"<debug-attribute name=\"adi,1rx-1tx-mode-use-tx-num\" />"
				"<debug-attribute name=\"adi,1rx-1tx-mode-use-rx-num\" />"
				"<debug-attribute name=\"adi,2rx-2tx-mode-enable\" />"
				"<debug-attribute name=\"adi,digital-interface-tune-fir-disable\" />"
				"<debug-attribute name=\"adi,digital-interface-tune-skip-mode\" />"
				"<debug-attribute name=\"adi,tx-fastlock-pincontrol-enable\" />"
				"<debug-attribute name=\"adi,rx-fastlock-pincontrol-enable\" />"
				"<debug-attribute name=\"adi,rx-fastlock-delay-ns\" />"
				"<debug-attribute name=\"adi,tx-fastlock-delay-ns\" />"
				"<debug-attribute name=\"adi,tdd-skip-vco-cal-enable\" />"
				"<debug-attribute name=\"adi,tdd-use-dual-synth-mode-enable\" />"
				"<debug-attribute name=\"adi,debug-mode-enable\" />"
				"<debug-attribute name=\"adi,ensm-enable-txnrx-control-enable\" />"
				"<debug-attribute name=\"adi,ensm-enable-pin-pulse-mode-enable\" />"
				"<debug-attribute name=\"adi,frequency-division-duplex-independent-mode-enable\" />"
				"<debug-attribute name=\"adi,frequency-division-duplex-mode-enable\" />"
				"<debug-attribute name=\"direct_reg_access\" />"
			"</device>"
		"<device id=\"cf-ad9361-lpc\" name=\"cf-ad9361-lpc\" >"
				"<channel id=\"voltage0\" type=\"input\" >"
					"<scan-element index=\"0\" format=\"le:S12/16&gt;&gt;0\" />"
					"<attribute name=\"calibphase\" filename=\"in_voltage0_calibphase\" />"
					"<attribute name=\"calibbias\" filename=\"in_voltage0_calibbias\" />"
					"<attribute name=\"calibscale\" filename=\"in_voltage0_calibscale\" />"
					"<attribute name=\"samples_pps\" filename=\"in_voltage_samples_pps\" />"
					"<attribute name=\"sampling_frequency\" filename=\"in_voltage_sampling_frequency\" />"
				"</channel>"
				"<channel id=\"voltage1\" type=\"input\" >"
					"<scan-element index=\"1\" format=\"le:S12/16&gt;&gt;0\" />"
					"<attribute name=\"calibphase\" filename=\"in_voltage1_calibphase\" />"
					"<attribute name=\"calibbias\" filename=\"in_voltage1_calibbias\" />"
					"<attribute name=\"calibscale\" filename=\"in_voltage1_calibscale\" />"
					"<attribute name=\"samples_pps\" filename=\"in_voltage_samples_pps\" />"
					"<attribute name=\"sampling_frequency\" filename=\"in_voltage_sampling_frequency\" />"
				"</channel>"
				"<channel id=\"voltage2\" type=\"input\" >"
					"<scan-element index=\"2\" format=\"le:S12/16&gt;&gt;0\" />"
					"<attribute name=\"calibphase\" filename=\"in_voltage2_calibphase\" />"
					"<attribute name=\"calibbias\" filename=\"in_voltage2_calibbias\" />"
					"<attribute name=\"calibscale\" filename=\"in_voltage2_calibscale\" />"
					"<attribute name=\"samples_pps\" filename=\"in_voltage_samples_pps\" />"
					"<attribute name=\"sampling_frequency\" filename=\"in_voltage_sampling_frequency\" />"
				"</channel>"
				"<channel id=\"voltage3\" type=\"input\" >"
					"<scan-element index=\"3\" format=\"le:S12/16&gt;&gt;0\" />"
					"<attribute name=\"calibphase\" filename=\"in_voltage3_calibphase\" />"
					"<attribute name=\"calibbias\" filename=\"in_voltage3_calibbias\" />"
					"<attribute name=\"calibscale\" filename=\"in_voltage3_calibscale\" />"
					"<attribute name=\"samples_pps\" filename=\"in_voltage_samples_pps\" />"
					"<attribute name=\"sampling_frequency\" filename=\"in_voltage_sampling_frequency\" />"
				"</channel>"
				"<buffer-attribute name=\"watermark\" />"
				"<buffer-attribute name=\"data_available\" />"
				"<debug-attribute name=\"pseudorandom_err_check\" />"
				"<debug-attribute name=\"direct_reg_access\" />"
			"</device>"
		"</context>";
#endif /* TINYIIOD_USER_H */
