#!/bin/bash

WD=$(pwd)
CPU=$(grep -c ^processor /proc/cpuinfo)

echo "Ready to build pinpoint php agent in $WD (CPU used:$CPU)?"
echo "ctrl+c to abort, <enter> to continue"; read a


[ ! -d $WD/sources ] && {
    mkdir -p $WD/sources
    cd $WD/sources
    echo "*** "
    echo "*** Downloading thrift/boost/pinpoint sources"
    echo "*** "; sleep 2
    wget "https://dl.bintray.com/boostorg/release/1.63.0/source/boost_1_63_0.tar.bz2"
    wget "http://apache.crihan.fr/dist/thrift/0.11.0/thrift-0.11.0.tar.gz"
}

mkdir -p $WD/build $WD/install 


# BOOST
[ ! -f  $WD/install/lib/libboost*.so ] && {
    cd $WD/build
    rm -fr boost*
    tar xfj ../sources/boost_1_63_0.tar.bz2
    ln -s boost_1_63_0 boost
    cd $WD/build/boost
    ./bootstrap.sh
    ./b2  -j $CPU cxxflags=-fPIC cflags=-fPIC  install --prefix=$WD/install
}

# THRIFT
[ ! -f  $WD/install/lib/libthrift*.so  ] && {
    cd $WD/build
    rm -fr thrift*
    tar xfz ../sources/thrift-0.11.0.tar.gz
    ln -s thrift-0.11.0 thrift
    cd $WD/build/thrift
    ./configure CXXFLAGS='-DFORCE_BOOST_SMART_PTR  -fPIC' -with-cpp=yes --enable-shared --with-pic --with-c_glib=no --with-go=no --with-csharp=no --with-php=no --with-python=no --with-nodejs=no --with-lua=no --with-boost=$WD/install --prefix=$WD/install
    make -j${CPU}
    make install
}


# Pinpoint
cd $WD/..
cd $WD/../pinpoint_php

export WITH_THRIFT_PATH=$WD/install
export WITH_BOOST_PATH=$WD/install
export LD_LIBRARY_PATH=$WD/install/lib


./Build.sh --enable-release

