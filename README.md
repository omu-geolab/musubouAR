# MUSUBOU-AR（旧名称：CERD-AR）
MUSUBOU-ARは、身のまわりの防災関連情報や仮想的な災害情報を、現実世界の上で可視化がおこなえる拡張現実（AR）アプリです。
このアプリは，科学技術振興機構(JST) 平成27年度 科学技術コミュニケーション推進事業 問題解決型科学技術コミュニケーション支援ネットワーク形成型[「公立大学防災センター連携による地区防災教室ネットワークの構築」](https://www.jst.go.jp/sis/scenario/list/2020/02/post-19.html) ならびに、[平成30年度日本建設情報総合センター（JACIC）研究助成](http://www.jacic.or.jp/josei/itiran_2017.html)「防災教育向けARアプリの開発とその活用に関する研究」の中で、[大阪市立大学都市防災教育研究センター（CERD）](https://www.cerd.osaka-cu.ac.jp/)が開発した成果物をオープンソース化したものです。

* [ライセンスについて](https://bitbucket.org/nro2dai/cerd-ar/src/a30a858468e8554325dc7e79d2ebd7a112c019f9/LICENSE.md?fileviewer=file-view-default)
* 現行バージョン：　4.0

### 紹介動画など ###

* [大阪狭山市さくらフェス](https://youtu.be/QWwnTAh-36k)
* [ARアプリを活用した防災授業](https://youtu.be/aflbRBEv1v4)

### MUSUBOU-ARの機能 ###
* **対応iOS端末**：ARKit対応端末：iPhone（6s以上）、iPad (第5世代以上  ＊GPS機能を使用するためセルラーモデルが必要）

* **地図表示機能**：従来の地図アプリと同様に、現在地表示や地図の拡大縮小がおこなえます。データをインポートすることで、様々な災害・防災関連情報を、地図画面上に表示することができます。また、背景地図にオープンデータのOpenStreetMap（Mapbox）を採用しています。これにより、GoogleやAppleマップ等で地図データが乏しい地域でも、自分達で地図データを作成し、本アプリにて活用することができます。また、地図表示画面やAR表示画面上のアイコン画像をクリックすることで、詳細情報（写真や動画、現在地からの距離）を確認することができます。

* **AR表示機能**：周辺の災害・防災関連情報を、現在地から見える方角にアイコン画像として表示することができます。災害アイコンには、災害の種類、現在地点から災害地点間の距離、そして災害範囲が表示されています。

* **リアルタイムに変化する災害情報**：災害の日時、災害範囲、災害の種類（現状では、火災・浸水・土砂くずれ・道路閉塞を用意）をタイマーで設定することができます。これにより、火災や浸水などの災害を指定の時間に発災させ、一定の速度で災害範囲を拡大させることができます。これにより、刻々と変化する災害状況を仮想的に作りだし、災害訓練や防災まち歩きに臨場感をもたせることが可能になります。  

* **災害範囲に近接・侵入時の視聴覚的な警告機能**：タイマーにより発災させた災害範囲に、アプリ利用者が近づく・侵入することで、警告メッセージや効果音、アプリ画面の色、バイブレーション（iPhoneのみ）により、視聴覚的に警告をおこないます。  

* **GISレイヤの重畳・AR表示機能**：XYZタイル形式のGISデータを重畳・AR表示できます。

### Xcodeでのビルド前の準備 ###
```shell-session
git clone https://github.com/omu-geolab/musubouAR.git
```
```shell-session
cd musubouAR
```
```shell-session
./bootstrap.sh
```
Xcodeで CerdAR.xcworkspace を開き、ビルドを実行

* AR表示機能のソースコード（Unity）は[こちら](https://github.com/omu-geolab/musubouAR-Unity)

### MUSUBOU-ARの使い方 ###
* [使い方ガイドなど](https://www.hdcdp.jp/musubou-ar/)
* [アプリ用データ作成ツール](https://cerdar.reearth.io/)

### サンプルデータファイル（data.geojson） ###

* [大阪公立大学周辺など](https://www.musubou.net/musubou-ar/data.geojson)

### AppStore公開版 ###

* [MUSUBOU-AR AppStore](https://apps.apple.com/jp/app/musubou-ar/id1222300758)

### 開発者 & 協力者 ###

* [大阪公立大学 大学院情報学研究科 吉田大介研究室](https://www.omu.ac.jp/i/geo/)
* [応用技術株式会社](https://www.apptec.co.jp/)
* 有限会社ロケージング

### 研究資金 ###
* [科学技術振興機構(JST) 共創の場形成支援プログラム (COI-NEXT) 本格型 (2023年4月〜)](https://miraiinfra.otri.osaka-u.ac.jp/)
* [科学技術振興機構(JST) SDGsの達成に向けた共創的研究開発プログラム（SOLVE for SDGs） (2020年10月〜)](https://www.jst.go.jp/ristex/solve/project/solution/solution20_mitamurapj.html)
* [日本建設情報総合センター（JACIC）研究助成 (2018年9月-2019年11月)](https://www.jacic.or.jp/josei/itiran_2017.html)
* [科学技術振興機構(JST) 科学技術コミュニケーション推進事業 (2015年7月〜2018年3月)](https://www.jst.go.jp/sis/scenario/list/2020/02/post-19.html)
