# Hololens3DViewer

This viewer is only capable of opening a single .glb file at a time and has only been tested with those exported from ABB RobotStudio.
It has only been tested on a Hololens 2 with Windows Holographic for Business 22621.1254

## Future of this project

I do not plan on really supporting this project because of the following main reasons:

* My lack of Unreal Engine knowledge makes everything take way to long for the time I can dedicate to it.
* I do not own a Hololens 2 and therefore have to borrow one each time I want to test something and buying one is to expensive just for this little fun project.

Future plans for this project (these are however very unlikely to be implemented):

* Swapping the materials of the imported objects to the UXT Unlit materials
  * Increases Performance
  * Would increase viewing experience due to the ability to remove the lights from unreal engine
* Adding a file picker to select what file to open
* Add Scaling functionality
* Add ability to place the opened object
* Support more filetypes

## Usage

The file that should be opened needs to be in the .glb format and has to be put in the windows user directory "3D Objects" prior to starting the app. This can for example be done using usb or the explorer of the Hololens.\
After starting the app the 3D model is placed somewhere in the world. To position it correctly in the world [this qr-code](docs/qrcode.pdf) needs to be printed out, put on the floor and looked at.

## Building from Source

This Project has been build in UnrealEngine 5.0.3\
With the following plugins:\
glTFRuntime 20230706\
Microsoft OpenXR 1.1.15\
Mixed Reality Toolkit Hub 0.1.2\
Mixed Reality UX Tools 0.12.1\
Visual Studio Integration Tools 2.3\
XRVisualization 1.0\
The used Visual Studio 2019 Configuration is available [here](docs/.vsconfig).\
Beware most of my installed Visual Studio packages are probably unnecessary for this project.