# bowden_dual_extruder
For more information check:
http://www.thingiverse.com/thing:1888865 - Bowden dual/quad extrusion extruder (single-nozzle single-drive) + video

This Repo exists so that anyone enjoy this extruder.

### Printer firmware
In your printer's firmware (Marlin, Repetier or other) make sure you setup a delay for as long as it takes for your servo to move fully.
Also make sure your printer will execute the servo G-Code on extruder switch.
I have added an working example of my Configuration.h from Repetier-Firmware.
For MarlinFirmware, follow the link above and find BigSteve's solution.

### Cura 15.04.6 - Easy option
For the older version, that still works fine, I have added a Configuration file you can simply load within Cura.
Before that, make sure your printer has 2 extruders in "Machine -> Machine settings... Extruder count [2]".
You will have to change the start2, end2 and pre and post switch G-Code to your printer's settings and Y-merger / Dual load/retract nozzle amount.

### Cura 2.3.1 Custom printer - The hard way but more powerfull
I have included a configuration for Cura 2.3.1 that defines a custom printer with multiple extruders.
This also included definitions of these extruders and their specific settings for retraction and priming filament at tool change.
Cura 2.3.1 is awesome since the software allows you to select a material/extruder per STL. Even if you want to print a couple of the same single extrusion STL's you can do so. 
Also you can expand the number of extruders. For now I have set up 4 extruders. Since this Extruder design will allow RAMPS board owners to have 2 extruders stepermotors enabling the use of 4 filaments, instead of just 2 (one extruder per stepper motor).
With the Arduino Due and RAMPS-FD you can have a thrird extruder stepper motor for a total of 6 filaments.

*For Cura 2.3.1 all you have to do is change the extruder start and end G-Code within the custom printer definition file from Cura 2.3.1 to suit your printer.
And change the start and end G-Code of the extruders definition files from Cura 2.3.1 to suit your retraction and priming distances. This depends on the distance between the tip of the nozzle to the retract resting position within the filament merger.
Make sure you add a delay on the first line of your extruder end G-code that is more than your servo delay in ms in the firmware. For instance G-Code would be: "G4 700\n ; rest of Cura EXT# end g-code", if your servo delay is 600 ms in the firmware.
If you do it that way, your G-Code will start 100 ms after the servo is done moving selecting the other filament. Hope this make any sense.
I have already added this to my Configuration.h and Cura 15.04.6 profile, both available in this repo.*

### Repetier-Firmware
There are a few major brands in the consumer 3D Printing world that use Repetier for multi-extrusion.
The support is awesome in this firmware. Also I have no choice, since they are the only ones that release a proper firmware for my Arduino Due with RAMPS-FD board. 
I have included the files that were altered in order to set up dual extrusion.
This can be adopted for up to 10 extuders.

### More information
See the link above for more information. See the comments tab at that link for my log.

