#!/bin/bash

if [[ ! -v APPSERVER_CFG ]]; then
  export APPSERVER_CFG=$(pwd)/cfg
fi

./bin/appserver
