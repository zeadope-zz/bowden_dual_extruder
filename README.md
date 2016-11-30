# bowden_dual_extruder
For more information check:
http://www.thingiverse.com/thing:1888865 - Bowden dual/quad extrusion extruder (single-nozzle single-drive) + video

This Repo exists so that anyone enjoy this extruder.

### Cura 2.3.1 Custom printer
I have included a configuration for Cura 2.3.1 that defines a custom printer with multiple extruders.
This also included definitions of these extruders and their specific settings for retraction and priming filament at tool change.
Cura 2.3.1 is awesome since the software allows you to select a material/extruder per STL. Even if you want to print a couple of the same single extrusion STL's you can do so. 
Also you can expand the number of extruders. For now I have set up 4 extruders. Since this Extruder design will allow RAMPS board owners to have 2 extruders stepermotors enabling the use of 4 filaments, instead of just 2 (one extruder per stepper motor).
With the Arduino Due and RAMPS-FD you can have a thrird extruder stepper motor for a total of 6 filaments.

All you have to do is change the start and end G-Code within the custom printer definition file to suit your printer.
And change the start and end G-Code of the extruders definition files to suit your retraction and priming distances. This depends on the distance between the tip of the nozzle to the retract resting position within the filament merger.

### Repetier-Firmware
There are a few major brands in the consumer 3D Printing world that use Repetier for multi-extrusion.
The support is awesome in this firmware. Also I have no choice, since they are the only ones that release a proper firmware for my Arduino Due with RAMPS-FD board. 
I have included the files that were altered in order to set up dual extrusion.
This can be adopted for up to 10 extuders.

### More information
See the link above for more information. See the comments tab at that link for my log.

