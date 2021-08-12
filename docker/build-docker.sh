#!/usr/bin/env bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd $DIR/..

DOCKER_IMAGE=${DOCKER_IMAGE:-PESPCOIN/PESPCOINd-develop}
DOCKER_TAG=${DOCKER_TAG:-latest}

BUILD_DIR=${BUILD_DIR:-.}

rm docker/bin/*
mkdir docker/bin
cp $BUILD_DIR/src/PESPCOINd docker/bin/
cp $BUILD_DIR/src/PESPCOIN-cli docker/bin/
cp $BUILD_DIR/src/PESPCOIN-tx docker/bin/
strip docker/bin/PESPCOINd
strip docker/bin/PESPCOIN-cli
strip docker/bin/PESPCOIN-tx

docker build --pull -t $DOCKER_IMAGE:$DOCKER_TAG -f docker/Dockerfile docker
