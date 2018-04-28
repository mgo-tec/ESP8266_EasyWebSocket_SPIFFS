# ESP8266_SPIFFS_EasyWebSocket
Beta ver 1.52.0  
  
Simple library for WebSocket communication with ESP-WROOM-02(ESP8266) and smartphone browser.  
This requires the Arduino core for ESP8266 WiFi chip library.  
https://github.com/esp8266/arduino  
This use SPIFFS file system.

My Blog: https://www.mgo-tec.com
# Change log:
(1.52.0)  
Fix EWS_https_Web_Get function.
Fix to prevent Websocket communication from being disconnected even if you post a web article on https.  
  
(1.51.2)  
Fix EWS_https_Web_Get.  
Fix EWS_Web_Get.  
  
(1.51)  
EWS_ESP8266_SendRate function addition.  
Fix sample sketch.  
  
(1.50)  
Greatly improved handshake function composition.  
Added a function to GET Web articles by https (SSL).  
Along with that, include WiFiClientSecure.h.  
Significant improvement of sample sketch.  
Other minor fixes.  
　　
-NEW Class-  
EWS_HandShake_main  
Get_Http_Req_Status  
EWS_https_Web_Get  
(Attention !: Consumes a lot of memory.)  
  
(1.49) 
Added a function to GET Web articles by https (SSL).  
Along with that, include WiFiClientSecure.h.  
Memory reduced sample sketch.  
Other minor fixes.  
  
-NEW Class-  
EWS_https_Web_Get  
(Attention !: Consumes a lot of memory.)  
  
(1.48)  
*Added a color picker (for Android, Windows 10) library that selects the RGB color code for determining colors in the browser.  
*Added a library that automatically obtains the local IP address and an HTML header division file accompanying it.  
*Updated the HTML header file and increased the information size of WebSocket communication status display.  
*Other minor modifications  
  
-NEW class-  
Color_Picker  
EWS_Dev_AutoLIP_HandShake_str  
  
(1.45)  
A watchdog timer of ESP8266 to create a grace period to operate, has been added here and there yield ().  
As a result, I think the operation is stable.  
Sample sketch also has been corrected.  

-NEW class-  
EWS_BrowserReceiveTextTag2  
EWS_Status_Text2  
EWS_WebSocket_Reconnection_Button2  
EWS_Close_Button2  
EWS_Window_ReLoad_Button2  

(1.39)  
*It added support for SoftAP mode.

(1.37)  
*I the suggestions for improvement from Visyeii's on twitter, I was allowed to adopt because it was very effective.  
Mr. Visyeii, Thank you very much.

*And speed of loading the spiffs_01.txt file in SPIFFS file system at the time of access from the first of the smartphone browser is much up, display of the browser is now faster.  
*Fixed a WebSocket reconnect button in (confirmed by ver 9.3.1) iOS.  
*Connections at the time I was allowed to divert the handleClient function from the library WiFiServer.cpp of Arduino core for ESP8266 WiFi chip in. I think the connection has become more reliable.  

(1.35)  
*From the Web to GET requests, add a function to extract the text by analyzing the HTML tags.  
*Add to reconnect button of WebSocket communication only.

(1.3)  
*Brush up the WebSocket handshake method.  
*Reconnection is now easier to.  
*Reload button Add Library.  
*Momentary button Add Library.  
*Text box send Add Library  
(However, up to 120 bytes, including the ID string)  
*Canvas_Slider was so that data transmission in only touched without slide.  
*Updated the HTML header file "spiffs_01.txt" be read by SPIFFS file system.

# 【更新履歴】(Japanese)
(1.52.0)  
EWS_https_Web_Get 関数修正  
https の Web記事を GET しても、Websocket 通信が切断されないように修正しました。  
  
(1.51.2)  
WS_https_Web_Get 関数修正  
Fix EWS_Web_Get　関数修正  
  
(1.51)  
EWS_ESP8266_SendRate 関数追加  
サンプルスケッチを修正  
  
(1.50)  
ハンドシェイク関数関連の構成を大幅改良。  
Web記事を https ( SSL )でGETする関数を追加。  
それに伴い、WiFiClientSecure.h をインクルード。  
サンプルスケッチの大幅改良。  
その他、軽微な修正。  
  
-以下の関数を追加-  
EWS_HandShake_main  
Get_Http_Req_Status  
EWS_https_Web_Get  
(この関数はメモリを多く消費するので注意)  
  
(1.49)  
Web記事を https ( SSL )でGETする関数を追加。  
それに伴い、WiFiClientSecure.h をインクルード。  
メモリを削減したサンプルスケッチをアップ。  
その他、軽微な修正。  
  
-NEW Class-  
EWS_https_Web_Get  
(メモリを多く消費するので注意)  
  
(1.48)  
・ブラウザで色を決定するためのRGBカラーコードを選択するカラーピッカー(Android, Windows10用)ライブラリを追加しました。  
・ローカルIPアドレスを自動取得するライブラリと、それに伴うHTMLヘッダ分割ファイルを追加しました。  
・HTMLヘッダファイルを更新し、WebSocket通信Status表示の情報量を増やしました。  
・その他、軽微な修正  
  
-NEW class-  
Color_Picker  
EWS_Dev_AutoLIP_HandShake_str  
  
(1.45)  
ESP8266のウォッチドッグタイマを作動させる猶予時間を作るために、所々 yield() を追加しました。  
それにより、多少動作が安定したと思います。
サンプルスケッチも修正しました。

-NEW class-  
EWS_BrowserReceiveTextTag2  
EWS_Status_Text2  
EWS_WebSocket_Reconnection_Button2  
EWS_Close_Button2  
EWS_Window_ReLoad_Button2  

(1.39)  
ESP-WROOM-02 (ESP8266) の SoftAPモードに対応しました。詳しくはサンプルスケッチをご覧ください。

(1.37)  
ツィッター上でVisyeiiさんから改善提案をいただき、とても有効でしたので採用させていただきました。  
Visyeiiさん、ありがとうございました。

・初回のスマートフォンブラウザからのアクセス時にSPIFFSファイルシステムでspiffs_01.txtファイルを読み込む速度が格段にアップし、ブラウザの表示が早くなりました。  
・iOS(9.3.1で動作確認済み)でのWebSocket再接続ボタンを修正しました。  
・コネクション時にArduino core for ESP8266 WiFi chip のライブラリ WiFiServer.cpp から handleClient()関数を流用させていただきました。コネクションがより確実になったかと思います。  

(1.35)  
・WebからGETリクエストして、HTMLタグを解析してテキストを抽出する関数を追加。  
・WebSocket通信のみの再接続ボタンを追加。

(1.3)  
・WebSocketハンドシェイク方法をブラッシュアップ  
・再接続がしやすくなりました。  
・再接続(Reload) ボタンライブラリ追加  
・瞬時ボタン（モーメンタリーボタン）ライブラリ追加  
・テキストボックス送信ライブラリ追加  
（※ただし、ID文字列も含め120バイトまで）  
・Canvas_Slider をスライドしなくてもタッチしただけでデータ送信するようにしました。  
・SPIFFSファイルシステムで読み出すHTMLヘッダファイル spiffs_01.txt を更新しました。  
# Credits and license
*Licensed under the GNU LESSER GENERAL PUBLIC LICENSE Version 2.1

*Copyright (c) 2016 mgo-tec

Other usage is Japanese, please visit my blog.

My Blog:  https://www.mgo-tec.com  
(ver1.39) https://www.mgo-tec.com/blog-entry-softap-esp8266-easywebsocket139.html  
(ver1.35) https://www.mgo-tec.com/blog-entry-wroom-websocket-messageboard-05.html  
(ver1.3) https://www.mgo-tec.com/blog-entry-easywebsocket-beta13.html