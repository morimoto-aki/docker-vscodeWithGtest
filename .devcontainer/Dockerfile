# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.195.0/containers/cpp/.devcontainer/base.Dockerfile
# [Choice] Debian / Ubuntu version (use Debian 11/9, Ubuntu 18.04/21.04 on local arm64/Apple Silicon): debian-11, debian-10, debian-9, ubuntu-21.04, ubuntu-20.04, ubuntu-18.04
ARG VARIANT=debian-11
FROM mcr.microsoft.com/vscode/devcontainers/cpp:0-${VARIANT}

#WORKDIR /tmp/src

#RUN curl -OL https://github.com/google/googletest/archive/release-1.10.0.tar.gz \
#    && tar -zxvf release-1.10.0.tar.gz \
#    && mkdir ./googletest-release-1.10.0/build
# Google testのインストール
#WORKDIR /tmp/src/googletest-release-1.10.0/build

# [Optional] Uncomment this section to install additional packages.
# RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
#     && apt-get -y install --no-install-recommends <your-package-list-here>
