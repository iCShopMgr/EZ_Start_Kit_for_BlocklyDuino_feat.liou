# 更新資訊
* 2020/12/12 新增PCA9685。
* 2020/11/20 開啟EEPROM至視窗列表，並新增NFC/RFID讀寫功能。
* 2020/10/30 新增M5Stack官方對於M5Stick V支援的影像功能。
* 將原先使用M5Stack CORE作為核心控制M5Stick V的部份，更改為LinkIt 7697。
* 官方教學資訊的部分可以參考下列連結：
https://docs.m5stack.com/#/en/quick_start/unitv/v_function

* 本次更新使用方式可以參考Tutorial/M5StickV.pdf，範例程式則在Example/M5StickV。
<p align="center">
  <img src="https://github.com/iCShopMgr/EZ_Start_Kit_for_BlocklyDuino_feat.liou/blob/main/Album/08.png" width="700"/>
</p>

# 版本更新紀錄
* 0722 修正OLED 重複u8g2.sendBuffer();的問題.
* 0727 修正AB按鈕順序對調無法被偵測的問題.
* 0730 新增可輸入XBM自訂圖案的積木
* 1030 新增M5Stack官方對於M5Stick V支援的影像功能
* 1120 開啟EEPROM至視窗列表，並新增NFC/RFID讀寫功能。
* 1212 新增PCA9685。

# 自訂OLED顯示圖案教學步驟
* 首先下載並解壓縮BlocklyDuino V3 主程式，測試用版本是下載blocklyduino-3.0.312b-win64-ide.zip，連結如下：
https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt/releases/tag/3.0.312b
* 下載並解壓縮0730擴充程式並打開，將資料夾內的arduino-1.8.5 與package.nw 兩資料夾連同內部檔案直接複製到BlocklyDuino3 資料夾內並覆蓋檔案。
<p align="center">
  <img src="https://github.com/iCShopMgr/EZ_Start_Kit_for_BlocklyDuino_feat.liou/blob/main/Album/01.png" width="700"/>
</p>

* 開啟BlocklyDuino 並點選EZ Start Kit 可看到已擴充的程式積木，使用OLED顯示圖案會需要初始化、自訂自己的圖案、顯示等步驟，如下圖所示紅框：
<p align="center">
  <img src="https://github.com/iCShopMgr/EZ_Start_Kit_for_BlocklyDuino_feat.liou/blob/main/Album/02.png" width="700"/>
</p>

* 初始化OLED與自訂的部份我們放在初始化，顯示的部份則可以依照需求放在初始化或重複執行，在此放在重複執行，如下圖所示：
<p align="center">
  <img src="https://github.com/iCShopMgr/EZ_Start_Kit_for_BlocklyDuino_feat.liou/blob/main/Album/03.png" width="700"/>
</p>

* 接下來製作我們想顯示的圖案，用小畫家或繪圖軟體，製作一張128x64 橡素的圖片，存檔格式必須是單色點陣圖，如下圖所示：
<p align="center">
  <img src="https://github.com/iCShopMgr/EZ_Start_Kit_for_BlocklyDuino_feat.liou/blob/main/Album/04.png" width="700"/>
</p>

* 將圖片轉換成XBM格式，在此使用線上的免費服務做轉換(https://www.online-utility.org/image/convert/to/XBM)
，如下圖所示：
<p align="center">
  <img src="https://github.com/iCShopMgr/EZ_Start_Kit_for_BlocklyDuino_feat.liou/blob/main/Album/05.png" width="700"/>
</p>

* 用記事本打開轉換好的XBM檔案，將大括弧內的所有0x00, 0x....這些16進制編碼複製起來，如下圖所示：
<p align="center">
  <img src="https://github.com/iCShopMgr/EZ_Start_Kit_for_BlocklyDuino_feat.liou/blob/main/Album/06.png" width="700"/>
</p>

* 將這些編碼貼到方才我們編寫好的程式，自訂OLED點陣圖...後面的字串項內，上傳程式到LinkIt7697，即可看到OLED顯示自訂的圖案囉，如下圖所示：
<p align="center">
  <img src="https://github.com/iCShopMgr/EZ_Start_Kit_for_BlocklyDuino_feat.liou/blob/main/Album/07.png" width="700"/>
</p>

# 版本更新紀錄
* 0722 修正OLED 重複u8g2.sendBuffer();的問題.
* 0727 修正AB按鈕順序對調無法被偵測的問題.
* 0730 新增可輸入XBM自訂圖案的積木
