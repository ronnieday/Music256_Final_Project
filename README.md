# Sapphire
"Pot-Smoking" Sequencer

Abstract:

Functionally, sapphire is an audio sequencer, but one with a unique and totally "pot-smoking" geometry.  At a high level, it translates a normal grid-type sequencer into a clock-like circular motion model.  It is intended to be both fun, and perhaps a bit informative.  Although it is my goal for the interface to be intuitive, you may still be wondering: how does it work?

A glowing blue hexadecagon (yeah, apparently that's a real word) fills most of the screen.  Each of its sixteen radii represent one clock tick, and as the clock progresses, each radius lights up in turn.  Every clock tick contains eight notes, expressed as small circles.  Along any given radius, these circles generate pitches of a pre-selected musical scale, where the lowest tone is along the outer edge of the Sapphire, and the highest tone is near its center.  If the user clicks on a circle, it becomes activated and glows bright blue.  Then, when the clock ticks past the row containing that note, it will be sounded.  Only notes that the use has thusly selected will be performed.

In this way, it is my hope that the user will be able to build interesting and varried musical patterns.  It is also my hope that these patterns, in addition to sounding great, will also look really "pot smoking".

Build Instructions:

Sapphire is built on top of the OpenFrameworks package.  To run it, please download the latest version of OpenFrameworks, and place the top-level Sapphire directory into the "Apps" folder of your OpenFrameworks install.
