# Based on Ubuntu 16.04 Xenial
FROM ubuntu:xenial

# Install required dependencies
RUN apt-get update && apt-get install -y g++ make cmake

# Define environment variables
ENV APPSERVER /appserver
ENV APPSERVER_CFG ${APPSERVER}/cfg

# Change working directory
WORKDIR ${APPSERVER}

# Copy everything from current directory to /appserver
ADD . ${APPSERVER}

# Build application
RUN ./clean.sh && ./build.sh

# Run application
RUN ./run.sh

