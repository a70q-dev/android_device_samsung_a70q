// SPDX-License-Identifier: Apache-2.0
// Copyright (C) 2022 The LineageOS Project

#pragma once

// Fingerprint requests
#define FINGERPRINT_REQUEST_ENROLL_SESSION 1002
#define FINGERPRINT_REQUEST_ENROLL_TYPE 18
#define FINGERPRINT_REQUEST_ENUMERATE 11
#define FINGERPRINT_REQUEST_GET_FP_IDS 1003
#define FINGERPRINT_REQUEST_GET_MAX_TEMPLATE_NUMBER 1004
#define FINGERPRINT_REQUEST_GET_SENSOR_INFO 5
#define FINGERPRINT_REQUEST_GET_SENSOR_STATUS 6
#define FINGERPRINT_REQUEST_GET_TOUCH_CNT 1007
#define FINGERPRINT_REQUEST_GET_UNIQUE_ID 7
#define FINGERPRINT_REQUEST_GET_USERIDS 12
#define FINGERPRINT_REQUEST_GET_VERSION 4
#define FINGERPRINT_REQUEST_HAS_FEATURE 1006
#define FINGERPRINT_REQUEST_LOCKOUT 1001
#define FINGERPRINT_REQUEST_NAVIGATION_LCD_ONOFF 17
#define FINGERPRINT_REQUEST_NAVIGATION_MODE_END 16
#define FINGERPRINT_REQUEST_NAVIGATION_MODE_START 15
#define FINGERPRINT_REQUEST_PAUSE 0
#define FINGERPRINT_REQUEST_PROCESS_FIDO 9
#define FINGERPRINT_REQUEST_REMOVE_FINGER 1000
#define FINGERPRINT_REQUEST_RESUME 1
#define FINGERPRINT_REQUEST_SENSOR_TEST_NORMALSCAN 3
#define FINGERPRINT_REQUEST_SESSION_OPEN 2
#define FINGERPRINT_REQUEST_SET_ACTIVE_GROUP 8
#define FINGERPRINT_REQUEST_UPDATE_SID 10

#define SEM_REQUEST_FORCE_CBGE 21
#define SEM_REQUEST_GET_FINGER_ICON_REMAIN_TIME 1010
#define SEM_REQUEST_GET_SECURITY_LEVEL 30
#define SEM_REQUEST_GET_SENSOR_TEST_RESULT 19
#define SEM_REQUEST_GET_TA_VERSION 10000
#define SEM_REQUEST_GET_TSP_BLOCK_STATUS 0x3F9
#define SEM_REQUEST_HIDE_INDISPLAY_AUTH_ANIMATION 0x3F4
#define SEM_REQUEST_INSTALL_TA 10001
#define SEM_REQUEST_IS_NEW_MATCHER 27
#define SEM_REQUEST_IS_TEMPLATE_CHANGED 25
#define SEM_REQUEST_MASK_CTL 0x3F5
#define SEM_REQUEST_MOVE_INDISPLAY_ICON 0x3F3
#define SEM_REQUEST_OPTICAL_CALIBRATION 0x3F8
#define SEM_REQUEST_REMOVE_ALL_USER 0x3F6
#define SEM_REQUEST_SET_ASP_LEVEL 20
#define SEM_REQUEST_SET_BOUNCER_SCREEN_STATUS 0x3FA
#define SEM_REQUEST_SET_SCREEN_STATUS 0x3F0
#define SEM_REQUEST_SHOW_INDISPLAY_AUTH_ANIMATION 1009
#define SEM_REQUEST_TOUCH_EVENT 22
#define SEM_REQUEST_TOUCH_SENSITIVE_CHANGE 0x3F7
#define SEM_REQUEST_UPDATE_MATCHER 28
#define SEM_REQUEST_VENDOR_EGIS_CALIBRATION 23
#define SEM_REQUEST_VENDOR_QCOM_REMOVE_CBGE 24
#define SEM_REQUEST_WIRELESS_CHARGER_STATUS 29

// Fingerprint aquired codes
#define SEM_FINGERPRINT_ACQUIRED_DUPLICATED_IMAGE 1002
#define SEM_FINGERPRINT_ACQUIRED_LIGHT_TOUCH 1003
#define SEM_FINGERPRINT_ACQUIRED_TSP_BLOCK 1004
#define SEM_FINGERPRINT_ACQUIRED_TSP_UNBLOCK 1005
#define SEM_FINGERPRINT_ACQUIRED_WET_FINGER 1001

// Fingerprint errors
#define SEM_FINGERPRINT_ERROR_CALIBRATION 1001
#define SEM_FINGERPRINT_ERROR_DISABLED_BIOMETRICS 5002
#define SEM_FINGERPRINT_ERROR_INVALID_HW 1005
#define SEM_FINGERPRINT_ERROR_NEED_TO_RETRY 5000
#define SEM_FINGERPRINT_ERROR_ONE_HAND_MODE 5001
#define SEM_FINGERPRINT_ERROR_PATTERN_DETECTED 1007
#define SEM_FINGERPRINT_ERROR_SERVICE_FAILURE 1003
#define SEM_FINGERPRINT_ERROR_SMART_VIEW 5003
#define SEM_FINGERPRINT_ERROR_SYSTEM_FAILURE 1002
#define SEM_FINGERPRINT_ERROR_TA_UPDATE -100
#define SEM_FINGERPRINT_ERROR_TEMPLATE_CORRUPTED 1004
#define SEM_FINGERPRINT_ERROR_TEMPLATE_FORMAT_CHANGED 1006
#define SEM_FINGERPRINT_ERROR_WIRELESS_CHARGING 5004

// Fingerprint events
#define SEM_FINGERPRINT_EVENT_BASE 10000
#define SEM_FINGERPRINT_EVENT_CAPTURE_COMPLETED 10003
#define SEM_FINGERPRINT_EVENT_CAPTURE_FAILED 10006
#define SEM_FINGERPRINT_EVENT_CAPTURE_READY 10001
#define SEM_FINGERPRINT_EVENT_CAPTURE_STARTED 10002
#define SEM_FINGERPRINT_EVENT_CAPTURE_SUCCESS 10005
#define SEM_FINGERPRINT_EVENT_FACTORY_SNSR_SCRIPT_END 10009
#define SEM_FINGERPRINT_EVENT_FACTORY_SNSR_SCRIPT_START 10008
#define SEM_FINGERPRINT_EVENT_FINGER_LEAVE 10004
#define SEM_FINGERPRINT_EVENT_FINGER_LEAVE_TIMEOUT 10007
#define SEM_FINGERPRINT_EVENT_GESTURE_DTAP 20003
#define SEM_FINGERPRINT_EVENT_GESTURE_LPRESS 20004
#define SEM_FINGERPRINT_EVENT_GESTURE_SWIPE_DOWN 20002
#define SEM_FINGERPRINT_EVENT_GESTURE_SWIPE_UP 20001
#define SEM_FINGERPRINT_EVENT_SPEN_CONTROL_OFF 30002
#define SEM_FINGERPRINT_EVENT_SPEN_CONTROL_ON 30001

// Fingerprint sensor status codes
#define SEM_SENSOR_STATUS_CALIBRATION_ERROR 100045
#define SEM_SENSOR_STATUS_ERROR 100042
#define SEM_SENSOR_STATUS_OK 100040
#define SEM_SENSOR_STATUS_WORKING 100041
