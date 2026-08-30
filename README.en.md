# MUSUBOU-AR (formerly CERD-AR)

[日本語](README.md) | English

MUSUBOU-AR is an augmented reality (AR) app that visualizes disaster preparedness information about the user's surroundings and simulated disaster information by overlaying it on the real world.

This app is an open-source release of software developed by the [Center for Education and Research of Disaster Reduction (CERD), Osaka City University](https://www.cerd.osaka-cu.ac.jp/) through two projects: the Japan Science and Technology Agency (JST) FY2015 Science and Technology Communication Promotion Program, Problem-Solving Science and Technology Communication Support, Network Development Type, [“Establishment of a Community Disaster Preparedness Classroom Network through Collaboration among Public University Disaster Prevention Centers”](https://www.jst.go.jp/sis/scenario/list/2020/02/post-19.html); and the [Japan Construction Information Center (JACIC) FY2018 Research Grant](http://www.jacic.or.jp/josei/itiran_2017.html) project, “Research on the Development and Use of an AR App for Disaster Education.”

* [License](https://bitbucket.org/nro2dai/cerd-ar/src/a30a858468e8554325dc7e79d2ebd7a112c019f9/LICENSE.md?fileviewer=file-view-default)
* Current version: 4.5

### Videos

* [Osaka-Sayama Sakura Festival](https://youtu.be/QWwnTAh-36k)
* [Disaster preparedness lessons using the AR app](https://youtu.be/aflbRBEv1v4)

### MUSUBOU-AR Features

* **Supported iOS devices:** ARKit-compatible devices: iPhone 6s or later and iPad (5th generation or later; a cellular model is required because the app uses GPS).

* **Map display:** As with conventional map apps, users can view their current location and zoom the map in and out. By importing data, various types of disaster and disaster preparedness information can be displayed on the map. The app uses open-source OpenStreetMap data (via Mapbox) as its basemap. This allows users to create and use their own map data even in areas where Google Maps, Apple Maps, and similar services have limited coverage. Users can also select icons on the map or AR display to view details such as photos, videos, and the distance from their current location.

* **AR display:** Disaster and disaster preparedness information about the surrounding area can be displayed as icons in the direction it lies from the user's current location. Each disaster icon shows the disaster type, the distance from the user's current location to the disaster location, and the affected area.

* **Real-time changes in simulated disaster information:** A timer can be used to set the date and time, affected area, and type of disaster (currently fire, flooding, landslide, or road blockage). This allows a simulated fire, flood, or other disaster to begin at a specified time and its affected area to expand at a defined rate. By simulating a disaster situation that changes over time, the app can make disaster drills and disaster preparedness walking tours more immersive.

* **Audiovisual warnings when approaching or entering a disaster area:** When users approach or enter a simulated disaster area activated by the timer, the app provides audiovisual warnings through alert messages, sound effects, changes to the screen color, and vibration (iPhone only).

* **GIS layer overlay and AR display:** GIS data in XYZ tile format can be overlaid on the map and displayed in AR.

### Preparing to Build with Xcode

```shell-session
git clone https://github.com/omu-geolab/musubouAR.git
```

```shell-session
cd musubouAR
```

```shell-session
./bootstrap.sh
```

```shell-session
cd CerdAR
```

```shell-session
open CerdAR.xcworkspace
```

Build the project in Xcode.

* [Source code for the AR display (Unity)](https://github.com/omu-geolab/musubouAR-Unity)

### Using MUSUBOU-AR

* [User guides](https://www.hdcdp.jp/musubou-ar/)
* [Data creation tool for the app](https://cerdar.reearth.io/)

### Sample Data File (data.geojson)

* [Osaka Metropolitan University and surrounding areas](https://www.musubou.net/musubou-ar/data.geojson)

### App Store Release

* [MUSUBOU-AR on the App Store](https://apps.apple.com/jp/app/musubou-ar/id1222300758)

### Developers & Contributors

* [Daisuke Yoshida Laboratory, Graduate School of Informatics, Osaka Metropolitan University](https://www.omu.ac.jp/i/geo/)
* [Applied Technology Co., Ltd.](https://www.apptec.co.jp/)
* Locaging Inc.

### Citation

```
Yoshida, D., Nguyen, V. T., Hayashi, H., and Ishihara, K.: MUSUBOU-AR: An Open-Source Geospatial AR Framework for Integrating Public GIS Data, Field Authoring, and Disaster Walking Tours, Int. Arch. Photogramm. Remote Sens. Spatial Inf. Sci., L-4/W1-2026, 367–374, https://doi.org/10.5194/isprs-archives-L-4-W1-2026-367-2026, 2026.
```

### Funding

* [JST Program on Open Innovation Platform for Industry-academia Co-creation (COI-NEXT), Full-scale Type (April 2023–present)](https://miraiinfra.otri.osaka-u.ac.jp/)
* [JST Solution-Driven Co-creative R&D Program for SDGs (SOLVE for SDGs) (October 2020–present)](https://www.jst.go.jp/ristex/solve/project/solution/solution20_mitamurapj.html)
* [Japan Construction Information Center (JACIC) Research Grant (September 2018–November 2019)](https://www.jacic.or.jp/josei/itiran_2017.html)
* [JST Science and Technology Communication Promotion Program (July 2015–March 2018)](https://www.jst.go.jp/sis/scenario/list/2020/02/post-19.html)
