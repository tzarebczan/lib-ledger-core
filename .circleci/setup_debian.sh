#!/usr/bin/env bash

echo "========> Install basic config"
apt-get update
apt-get install -y apt-transport-https wget curl git python build-essential libx11-xcb-dev

echo "========> Install C++ dependencies"
apt-get install -y g++ make cmake

echo "========> Install Qt5"
apt-get install -y qt5-default libqt5websockets5 libqt5websockets5-dev

echo "========> Install Sqlite"
apt-get install -y sqlite3 sqlite libsqlite3-dev

echo "========> Install Boost"
apt-get install -y libboost-all-dev

echo "========> Install node"
curl -sL https://deb.nodesource.com/setup_9.x | bash -
apt-get install -y nodejs

echo "========> Install yarn"
curl -sS https://dl.yarnpkg.com/debian/pubkey.gpg | apt-key add -
echo "deb https://dl.yarnpkg.com/debian/ stable main" | tee /etc/apt/sources.list.d/yarn.list
apt-get update && apt-get install -y yarn
