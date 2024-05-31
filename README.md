<<<<<<< HEAD
### MUSUBOU-ARについて ###
MUSUBOU-ARは、身のまわりの防災関連情報や仮想的な災害情報を、現実世界の上で可視化がおこなえる拡張現実（AR）アプリです。

![3.JPG](https://bitbucket.org/repo/yEpMMp/images/774768982-3.JPG)
![4.JPG](https://bitbucket.org/repo/yEpMMp/images/1256607693-4.JPG)
![IMG_0044.PNG](https://bitbucket.org/repo/yEpMMp/images/50710392-IMG_0044.PNG)

このアプリは，科学技術振興機構(JST) 平成27年度 科学技術コミュニケーション推進事業 問題解決型科学技術コミュニケーション支援ネットワーク形成型[「公立大学防災センター連携による地区防災教室ネットワークの構築」](http://www.jst.go.jp/pr/info/info1109/besshi.html)の中で、[大阪市立大学都市防災教育研究センター（CERD）](https://www.cerd.osaka-cu.ac.jp/)と[株式会社ブリリアントサービス](http://www.brilliantservice.co.jp/)が開発した成果物を、オープンソース化したものです。
=======
### CERD-ARについて ###
CERD-ARは、身のまわりの防災関連情報や仮想的な災害情報を、現実世界の上で可視化がおこなえる拡張現実（AR）アプリです。
このアプリは，科学技術振興機構(JST) 平成27年度 科学技術コミュニケーション推進事業 問題解決型科学技術コミュニケーション支援ネットワーク形成型[「公立大学防災センター連携による地区防災教室ネットワークの構築」](https://www.jst.go.jp/sis/scenario/list/2020/02/post-19.html) ならびに、[平成30年度日本建設情報総合センター（JACIC）研究助成](http://www.jacic.or.jp/josei/itiran_2017.html)「防災教育向けARアプリの開発とその活用に関する研究」の中で、[大阪市立大学都市防災教育研究センター（CERD）](https://www.cerd.osaka-cu.ac.jp/)が開発した成果物をオープンソース化したものです。
>>>>>>> app-store

* [ライセンスについて](https://bitbucket.org/nro2dai/cerd-ar/src/a30a858468e8554325dc7e79d2ebd7a112c019f9/LICENSE.md?fileviewer=file-view-default)
* 現行バージョン：　3.0

### 紹介動画など ###

* [CERD-AR紹介動画（Geoアクティビティコンテスト2019）](https://youtu.be/nbQuODNjh8A)
* [平成29年1月14日 放送 J:COMチャンネル（堺シティレポ） ](https://www.youtube.com/watch?v=Fz0js3CdoMs&t=59s)

<<<<<<< HEAD
### MUSUBOU-ARの機能 ###
* **対応iOS端末**：iPhone、iPad（GPS機能を使用するためセルラーモデルを推奨）
=======
### CERD-ARの機能 ###
* **対応iOS端末**：ARKit対応端末：iPhone（6s以上）、iPad (第5世代以上  ＊GPS機能を使用するためセルラーモデルが必要）
>>>>>>> app-store

* **地図表示機能**：従来の地図アプリと同様に、現在地表示や地図の拡大縮小がおこなえます。データをインポートすることで、様々な災害・防災関連情報を、地図画面上に表示することができます。また、背景地図にオープンデータのOpenStreetMap（Mapbox）を採用しています。これにより、GoogleやAppleマップ等で地図データが乏しい地域でも、自分達で地図データを作成し、本アプリにて活用することができます。また、地図表示画面やAR表示画面上のアイコン画像をクリックすることで、詳細情報（写真や動画、現在地からの距離）を確認することができます。

* **AR表示機能**：周辺の災害・防災関連情報を、現在地から見える方角にアイコン画像として表示することができます。災害アイコンには、災害の種類、現在地点から災害地点間の距離、そして災害範囲が表示されています。

* **リアルタイムに変化する災害情報**：災害の日時、災害範囲、災害の種類（現状では、火災・浸水・土砂くずれ・道路閉塞を用意）をタイマーで設定することができます。これにより、火災や浸水などの災害を指定の時間に発災させ、一定の速度で災害範囲を拡大させることができます。これにより、刻々と変化する災害状況を仮想的に作りだし、災害訓練や防災まち歩きに臨場感をもたせることが可能になります。  

* **災害範囲に近接・侵入時の視聴覚的な警告機能**：タイマーにより発災させた災害範囲に、アプリ利用者が近づく・侵入することで、警告メッセージや効果音、アプリ画面の色、バイブレーション（iPhoneのみ）により、視聴覚的に警告をおこないます。  

* **GISレイヤの重畳・AR表示機能**：XYZタイル形式のGISデータを重畳・AR表示できます。

### 機能の説明スライドなど ###

![expand.png](https://bitbucket.org/repo/yEpMMp/images/650239671-expand.png)
![仮想災害.png](https://bitbucket.org/repo/yEpMMp/images/1046686472-%E4%BB%AE%E6%83%B3%E7%81%BD%E5%AE%B3.png)

### 仮想災害のアニメーション表示例 ###

![fire.png](https://bitbucket.org/repo/yEpMMp/images/2409425470-fire.png)
![flood.png](https://bitbucket.org/repo/yEpMMp/images/1537738340-flood.png)
![house.png](https://bitbucket.org/repo/yEpMMp/images/1384585069-house.png)!
![rock.png](https://bitbucket.org/repo/yEpMMp/images/4235115275-rock.png)
![block.png](https://bitbucket.org/repo/yEpMMp/images/916872342-block.png)

### GISレイヤの表示例 ###

![gismap.PNG](https://bitbucket.org/repo/yEpMMp/images/2596667567-gismap.PNG)
![GISa.png](https://bitbucket.org/repo/yEpMMp/images/2461469203-GISa.png)
![GISb.png](https://bitbucket.org/repo/yEpMMp/images/2353364791-GISb.png)

### MUSUBOU-ARの使い方 ###

* [アプリのビルド・インストール方法について](https://bitbucket.org/nro2dai/cerd-ar/wiki/%E3%82%A2%E3%83%97%E3%83%AA%E3%81%AE%E3%82%A4%E3%83%B3%E3%82%B9%E3%83%88%E3%83%BC%E3%83%AB%E6%96%B9%E6%B3%95(XCODE13.1%E7%94%A8))
* [データのインポート方法について](https://bitbucket.org/nro2dai/cerd-ar/wiki/Data%20Import)（現在準備中）
* [データファイル(GeoJSON)の詳細について](https://bitbucket.org/nro2dai/cerd-ar/wiki/GeoJSON)（現在準備中）
* [アプリ用データ作成ツール（ベータ版）](https://cerd-ocu.github.io/CERD-ARmap/)
* [GISデータのインポート方法について](https://bitbucket.org/nro2dai/cerd-ar/wiki/GIS%20Data%20Import)

### サンプルデータファイル（data.geojson） ###

* [大阪市立大学周辺](https://www.cerd.osaka-cu.ac.jp/cerdar_pics/Sugimoto/data.geojson)

### AppStore公開版 ###

* [CERD-AR AppStore](https://apps.apple.com/jp/app/cerd-ar/id1222300758)

### 開発者 & 協力者 ###

* [大阪市立大学都市防災教育研究センター(CERD)](https://www.cerd.osaka-cu.ac.jp/)
* [応用技術株式会社](https://www.apptec.co.jp/)
* 有限会社ロケージング

### 研究資金 ###

* [科学技術振興機構(JST) SDGsの達成に向けた共創的研究開発プログラム（SOLVE for SDGs） (2020年10月〜)](https://www.jst.go.jp/ristex/solve/project/solution/solution20_mitamurapj.html)
* [日本建設情報総合センター（JACIC）研究助成 (2018年9月-2019年11月)](https://www.jacic.or.jp/josei/itiran_2017.html)
* [科学技術振興機構(JST) 科学技術コミュニケーション推進事業 (2015年7月〜2018年3月)](https://www.jst.go.jp/sis/scenario/list/2020/02/post-19.html)