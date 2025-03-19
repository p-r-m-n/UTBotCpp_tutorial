# UTBotCpp

## Introduction
UTBotCpp is a powerful tool designed to assist in unit test generation for C++ projects. It operates using a client-server architecture and serves as a wrapper for KLEE, which in turn relies on specific versions of LLVM and GCC.

## Requirements
- Ubuntu 20.04
- Visual Studio Code (VSCode)

## Installation
The latest available version encountered installation issues, so version 2022.12 was chosen, as it aligns with the tutorial in the project's GitHub wiki.

Follow the installation steps outlined in the official guide:
[Install UTBotCpp Server on Ubuntu](https://github.com/UnitTestBot/UTBotCpp/wiki/install-server-on-ubuntu)

Additionally, it's necessary to install some dependencies and `cmake` using the following command:
```sh
sudo apt-get install build-essential cmake
```
After completing the installation steps, you can run the server locally. In this setup, both the server and client are installed on the same machine.

## VSCode Plugin
One of the advantages of UTBotCpp is its integration with VSCode through a dedicated plugin. You can install the plugin using the "Install from VSIX" option.

Follow the official guide for plugin installation:
[VSCode Install and Configure](https://github.com/UnitTestBot/UTBotCpp/wiki/vscode-install-and-configure)

(Note: The server and client must run the same version.)

Additionally, install the `CMake Tools` plugin for VSCode to ensure proper functionality.

## Usage
After installing and activating the UTBot plugin in VSCode, open the repository containing your project. The plugin will automatically configure the project for testing.

To better understand how to use UTBotCpp, refer to the official tutorial video:
[UTBotCpp Usage Guide](https://www.youtube.com/watch?v=bDJyWEeYhvk)

