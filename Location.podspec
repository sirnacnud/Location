Pod::Spec.new do |s|
  s.name          = "Location"
  s.version       = "0.0.1"
  s.summary       = "Background Location Update Programming for iOS 7/8 over an extended period of time."
  s.homepage      = "http://mobileoop.com/"
  s.license       = "MIT"
  s.author        = { "Ricky" => "" }
  s.platform      = :ios, "7.0"
  s.source        = { :git => "https://github.com/voyage11/Location.git", :commit => "ebb7da0c210c0ae80dc29804e4455cde44687118" }
  s.source_files  = "Classes", "Location/**/*.{h,m}"
  s.exclude_files = ["Location/main.m", "Location/LocationViewController.{h,m}", "Location/LocationAppDelegate.{h,m}"]
end
