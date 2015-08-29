# MRWorldMapView

[![Version](https://img.shields.io/cocoapods/v/MRWorldMapView.svg?style=flat)](http://cocoapods.org/pods/MRWorldMapView)
[![License](https://img.shields.io/cocoapods/l/MRWorldMapView.svg?style=flat)](http://cocoapods.org/pods/MRWorldMapView)
[![Platform](https://img.shields.io/cocoapods/p/MRWorldMapView.svg?style=flat)](http://cocoapods.org/pods/MRWorldMapView)

## Introduction

`MRWorldMapView` is a `UIView` subclass that displays a world map with selectable countries.

Its appearance can be customized from **Interface Builder** through `IBInspectable` properties or by implementing `MRWorldMapViewDelegate` methods.

Limited support for loading custom [GeoJSON](http://geojson.org) maps is provided through the method `loadGeoJSONMap:withError:`.

The code for drawing the map is derived from the [Yuba - Cocoa framework for drawing graphs, charts and maps](https://github.com/sergeylenkov/Yuba).

![EU Map](https://raw.githubusercontent.com/hectr/MRWorldMapView/master/screenshot.jpg "EU Map")
![World Map](https://raw.githubusercontent.com/hectr/MRWorldMapView/master/custom.jpg "World Map")

## Usage

To run the example project, clone the repo, and run `pod install` from the *Example* directory first.

## Installation

### Cocoapods

**MRWorldMapView** is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your *Podfile*:

```ruby
pod "MRWorldMapView"
```

### Manually

Copy the *MRWorldMapView* directory into your project.

## License

**MRWorldMapView** is available under the Apache 2.0 license. See the *LICENSE* file for more info.

# Alternatives

Other country pickers:

- <https://github.com/nicklockwood/CountryPicker>
- <https://github.com/emcrisostomo/EMCCountryPickerController>

Other selectable maps:

- <https://github.com/ArthurGuibert/FSInteractiveMap>

GeoJSON handling:

- <https://github.com/mattt/GeoJSONSerialization>
