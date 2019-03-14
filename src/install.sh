#!/bin/bash

git clone http://52.201.101.99:3001/ccm/gtk.git
cd gtk
git pull
sudo apt install libgtk-3-0 libgranite-dev
