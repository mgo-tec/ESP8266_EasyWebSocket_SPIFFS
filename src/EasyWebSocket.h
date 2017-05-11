/*
  EasyWebSocket.h - WebSocket for ESP-WROOM-02 ( esp8266 - SPIFFS use)
  Beta version 1.51.2

Copyright (c) 2016 Mgo-tec
This library improvement collaborator is Mr.Visyeii.

This library is used by the Arduino IDE(Tested in ver1.6.12).
This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

Reference LGPL-2.1 license statement --> https://opensource.org/licenses/LGPL-2.1

Reference Blog --> https://www.mgo-tec.com

The esp8266 core for Arduino(Tested in ver2.3.0) --> https://github.com/esp8266/Arduino
Released under the GNU LESSER GENERAL PUBLIC LICENSE Version 2.1

ESP8266WiFi.h - Included WiFi library for esp8266
WiFiServer.cpp - The library modification
Copyright (c) 2014 Ivan Grokhotkov.
This file is part of the esp8266 core for Arduino environment.
Released under the GNU LESSER GENERAL PUBLIC LICENSE Version 2.1

WiFiClientSecure.cpp - Variant of WiFiClient with TLS support
Copyright (c) 2015 Ivan Grokhotkov.
This file is part of the esp8266 core for Arduino environment.
Released under the GNU LESSER GENERAL PUBLIC LICENSE Version 2.1

Hash.h - Included library
Copyright (c) 2015 Markus Sattler.
This file is part of the esp8266 core for Arduino environment.
Released under the GNU LESSER GENERAL PUBLIC LICENSE Version 2.1

FS.h(SPIFFS-File system) - Included library
-->https://github.com/esp8266/arduino-esp8266fs-plugin
Copyright (c) 2015 Ivan Grokhotkov. All rights reserved.
Released under the GNU LESSER GENERAL PUBLIC LICENSE Version 2.1
*/

#ifndef EasyWebSocket_h_
#define EasyWebSocket_h_
#include "Arduino.h"
#include "ESP8266WiFi.h"
#include "WiFiClientSecure.h"
#include "Hash.h"
#include "FS.h"

enum HTTPClientStatus1 { HC_NONE1, HC_WAIT_READ1, HC_WAIT_CLOSE1 };
#define HTTP_MAX_DATA_WAIT 1000 //ms to wait for the client to send the request
#define HTTP_MAX_CLOSE_WAIT 2000 //ms to wait for the client to close the connection

class EasyWebSocket
{
public:
  EasyWebSocket();

  void AP_Connect(const char* ssid, const char* password);
  void SoftAP_setup(const char* ssid, const char* password);
  void handleClient();
  bool Get_Http_Req_Status();
  bool http_resp();
  void HandShake_timeout(uint8_t Num);
  File SPIFFS_open(const char *filename);
  void EWS_HandShake_main(uint8_t sel, const char* head_file1, const char* head_file2, const char* html_file1, const char* html_file2, IPAddress res_LIP, String res_html1, String res_html2, String res_html3, String res_html4, String res_html5, String res_html6, String res_html7);
  void EWS_HandShake(String _res_html1, String _res_html2, String _res_html3, String _res_html4, String _res_html5, String _res_html6, String _res_html7);
  void EWS_Dev_AutoLIP_HandShake(const char* HTML_head_file1, IPAddress res_LIP, const char* HTML_head_file2, const char* HTML_file1, String res_html1, String res_html2, String res_html3, const char* HTML_file2);
  bool EWS_HTTP_Responce();
  void Hash_Key(String h_req_key, char* h_resp_key);
  void EWS_ESP8266_Str_SEND(String str, String id);
  void EWS_PING_SEND();
  String EWS_ESP8266CharReceive(uint16_t pTime);
  String EWS_ESP8266_Binary_Receive();
  String EWS_OnOff_Button(String button_id, uint16_t width, uint16_t height, uint8_t font_size, String f_color, String b_color);
  String EWS_On_Momentary_Button(String button_id, String text, uint16_t width, uint16_t height, uint8_t font_size, String f_color, String b_color);
  String EWS_Touch_Slider_BT(String slider_id, String vbox_id);
  String EWS_Touch_Slider_T(String slider_id, String txt_id);
  String EWS_Mouse_Slider_BT(String slider_id, String vbox_id);
  String EWS_Mouse_Slider_T(String slider_id, String txt_id);
  String EWS_Sl_BoxText(String vbox_id, uint16_t width, uint16_t height, uint8_t font_size, String color);
  String EWS_Sl_Text(String text_id, uint8_t font_size, String color);
  String EWS_Body_style(String text_color, String bg_color);
  String EWS_BrowserReceiveTextTag(String id, uint8_t font_size, String fnt_col);
	String EWS_BrowserReceiveTextTag2(String id, String name, String b_color, uint8_t font_size, String fnt_col);
  String EWS_Close_Button(String name, uint16_t width, uint16_t height, uint8_t font_size);
	String EWS_Close_Button2(String name, String BG_col, uint16_t width, uint16_t height, String font_col, uint8_t font_size);
  String EWS_Window_ReLoad_Button(String name, uint16_t width, uint16_t height, uint8_t font_size);
	String EWS_Window_ReLoad_Button2(String name, String BG_col, uint16_t width, uint16_t height, String font_col, uint8_t font_size);
  String EWS_WebSocket_Reconnection_Button(String name, uint16_t width, uint16_t height, uint8_t font_size);
  String EWS_WebSocket_Reconnection_Button2(String name, String BG_col, uint16_t width, uint16_t height, String font_col, uint8_t font_size);
	String EWS_BrowserSendRate();
  String EWS_ESP8266_SendRate(String button_id);
  String EWS_Status_Text(uint8_t font_size, String color);
  String EWS_Status_Text2(String name, String b_color, uint8_t font_size, String f_color);
  String EWS_Canvas_Slider_T(String slider_id, uint16_t width, uint16_t height, String frame_col, String fill_col);
  String EWS_TextBox_Send(String id, String txt, String BT_txt);
  String EWS_Web_Get(const char* host, String target_ip, char char_tag, String Final_tag, String Begin_tag, String End_tag, String Paragraph);
  String EWS_https_Web_Get(const char* host, String target_ip, char char_tag, String Final_tag, String Begin_tag, String End_tag, String Paragraph);
	void Favicon_Response(String str, uint8_t ws, uint8_t ini_htm, uint8_t up_f);
  String Color_Picker(uint16_t top_px, uint16_t left_px, String default_col, String ID);

	
private:
  boolean _Ini_html_on = false;
  boolean _WS_on = false;
  boolean _Upgrade_first_on;
  char _Android_or_iPad;
  uint32_t _PingLastTime = 0;
  uint32_t _PongLastTime = 0;
  uint32_t _GetLoopTime = 0;
};

#endif
