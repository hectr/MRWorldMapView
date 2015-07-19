
Pod::Spec.new do |s|
  s.name             = "MRWorldMapView"
  s.version          = "0.0.1"
  s.summary          = "View that displays a world map with selectable countries."
  s.description      = <<-DESC
                       `MRWorldMapView` is a `UIView` subclass that displays a world map with selectable countries.

                       Its appearance can be customized through `IBInspectable`s.
                       DESC
  s.homepage         = "https://github.com/hectr/MRWorldMapView"
  s.screenshots     = "https://github.com/hectr/MRWorldMapView/blob/master/screenshot.jpg?raw=true"
  s.license          = 'Apache 2.0'
  s.author           = { "hectr" => "h@mrhector.me" }
  s.source           = { :git => "https://github.com/hectr/MRWorldMapView.git", :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/hectormarquesra'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'MRWorldMapView'

  s.frameworks = 'UIKit'
end
