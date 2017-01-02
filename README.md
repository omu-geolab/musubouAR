### CERD-ARについて ###
CERD-ARは、身のまわりの防災関連情報や仮想的な災害情報を、現実世界の上で可視化がおこなえる拡張現実（AR）アプリです。

![3.JPG](https://bitbucket.org/repo/yEpMMp/images/774768982-3.JPG)
![4.JPG](https://bitbucket.org/repo/yEpMMp/images/1256607693-4.JPG)
![IMG_0044.PNG](https://bitbucket.org/repo/yEpMMp/images/50710392-IMG_0044.PNG)

このアプリは，科学技術振興機構(JST) 平成27年度 科学技術コミュニケーション推進事業 問題解決型科学技術コミュニケーション支援ネットワーク形成型[「公立大学防災センター連携による地区防災教室ネットワークの構築」](http://www.jst.go.jp/pr/info/info1109/besshi.html)の中で、[大阪市立大学都市防災教育研究センター（CERD）](https://www.cerd.osaka-cu.ac.jp/)と[株式会社ブリリアントサービス](http://www.brilliantservice.co.jp/)が開発した成果物を、オープンソース化したものです。

* [ライセンスについて](https://bitbucket.org/nro2dai/cerd-ar/src/a30a858468e8554325dc7e79d2ebd7a112c019f9/LICENSE.md?fileviewer=file-view-default)
* 現行バージョン：　0.1

### CERD-ARの機能 ###
* **地図表示機能**：従来の地図アプリと同様に、現在地表示や地図の拡大縮小がおこなえます。データをインポートすることで、様々な災害・防災関連情報を、地図画面上に表示することができます（図1）。また、背景地図にオープンデータのOpenStreetMapを採用しています。これにより、GoogleやAppleマップ等で地図データが乏しい地域でも、自分達で地図データを作成し、本アプリにて活用することができます。また、地図表示画面やAR表示画面上のアイコン画像をクリックすることで、詳細情報（写真や動画、現在地からの距離）を確認することができます。

* **AR表示機能**：周辺の災害・防災関連情報を、現在地から見える方角にアイコン画像として表示することができます。図3・４で表示されている災害アイコンには、災害の種類、現在地点から災害地点間の距離、そして災害範囲が表示されています。画面左下のボタンで、前述の地図表示画面へ切り替えることができます。

* **タイマーによる災害発生・範囲拡大の機能**：災害の日時、災害範囲、災害の種類（現状では、火災・浸水・土砂くずれ・道路閉塞を用意）を設定することができます。これにより、火災や浸水などの災害を指定の時間に発災させ、一定の速度で災害範囲を拡大させることができます。

* **災害範囲に近接・侵入時の視聴覚的な警告機能**：タイマーにより発災させた災害範囲に、アプリ利用者が近づく・侵入することで、警告メッセージや効果音、アプリ画面の色により、視聴覚的に警告をおこないます。
![6.png](https://bitbucket.org/repo/yEpMMp/images/182153318-6.png)

![IMG_0093.PNG](https://bitbucket.org/repo/yEpMMp/images/3265366701-IMG_0093.PNG)
![IMG_0091.PNG](https://bitbucket.org/repo/yEpMMp/images/2932532370-IMG_0091.PNG)
![IMG_0087.JPG](https://bitbucket.org/repo/yEpMMp/images/2570443320-IMG_0087.JPG)

### CERD-ARの使い方 ###

* [アプリのインストール方法について](https://bitbucket.org/nro2dai/cerd-ar/wiki/Home)（現在準備中）
* [データのインポート方法について](https://bitbucket.org/nro2dai/cerd-ar/wiki/DataImport)（現在準備中）
* [データファイル(GeoJSON)の詳細について](https://bitbucket.org/nro2dai/cerd-ar/wiki/Tag)（現在準備中）

### 開発者 ###

* [大阪市立大学都市防災教育研究センター（CERD）](https://www.cerd.osaka-cu.ac.jp/)
* [株式会社ブリリアントサービス](http://www.brilliantservice.co.jp/)