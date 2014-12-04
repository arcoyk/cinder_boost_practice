Cinder Boost Practice
=====================

Personal playground of C++, boost, cinder
with xcode on Mac.

#Boost
1. git clone (boost rep)
2. Make sure /usr/local/Cellar/boost exists.

#XCode
1. Start xcode, create "command line tool" cpp file.
2. At project setup, add /usr/local/Cellar/boost/(boost version)/include and /usr/local/Cellar/boost/(boost version)/lib to targes -> search paths -> header search paths.

#Cinder
1. git clone (cinder rep)
2. Open Cinder/xcode/cinder.xcodeproj, add /usr/local/Cellar/boost/(boost version)/include to cinder -> search paths -> header search paths.
3. ./fullbuid.sh (at Cinder/xcode/)

