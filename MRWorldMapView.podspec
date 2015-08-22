
Pod::Spec.new do |s|
  s.name             = "MRWorldMapView"
  s.version          = "1.0.1"
  s.summary          = "View that displays GeoJSON map with selectable countries."
  s.description      = <<-DESC
                       `MRWorldMapView` is a `UIView` subclass that displays a world map with selectable countries.

                       Its appearance can be customized from **Interface Builder** through `IBInspectable` properties or by implementing `MRWorldMapViewDelegate` methods.

                       Limited support for loading custom [GeoJSON](http://geojson.org) maps is provided through the method `loadGeoJSONMap:withError:`.
                       DESC
  s.homepage         = "https://github.com/hectr/MRWorldMapView"
  s.screenshots      = [ "https://raw.githubusercontent.com/hectr/MRWorldMapView/master/screenshot.jpg", "https://raw.githubusercontent.com/hectr/MRWorldMapView/master/custom.jpg" ]
  s.license          = 'Apache 2.0'
  s.author           = { "hectr" => "h@mrhector.me" }
  s.source           = { :git => "https://github.com/hectr/MRWorldMapView.git", :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/hectormarquesra'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'MRWorldMapView'

  s.frameworks = 'UIKit'
end
