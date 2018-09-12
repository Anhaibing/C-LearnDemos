#!/bin/sh

compile() {
	mkdir build
	cd build
	cmake ..
	make
}

build_clean() {
	rm ./build -rf
}

if [ $1 ];then
	echo "build will remove..."
	build_clean
else
	echo "start build......"
	compile
fi
