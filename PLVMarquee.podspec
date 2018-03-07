Pod::Spec.new do |s|

  s.name         = "PLVMarquee"
  s.version      = "0.0.2"
  s.summary      = "iOS 防录屏跑马灯组件"
  s.description  = <<-DESC
  PLVMarquee
  iOS 防录屏跑马灯组件
                   DESC
  s.homepage     = "https://github.com/polyv/PLVMarquee"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "bqlin" => "bqlins@163.com" }

  s.source       = { :git => "https://github.com/polyv/PLVMarquee.git", :tag => "#{s.version}" }
  s.source_files  = "PLVMarquee/*.{h,m}"
  s.requires_arc = true
  s.platform     = :ios, "8.0"

end
