xcodebuild archive -scheme SideosSDK -destination "generic/platform=iOS" -archivePath ./output/SideosSdk SKIP_INSTALL=NO BUILD_LIBRARY_FOR_DISTRIBUTION=YES 

xcodebuild archive -scheme SideosSDK -destination "generic/platform=iOS Simulator" -archivePath ./output/SideosSdk-Sim SKIP_INSTALL=NO BUILD_LIBRARY_FOR_DISTRIBUTION=YES 

