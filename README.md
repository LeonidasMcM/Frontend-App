# Frontend-App
Pic10C Application

Final project:
Ikagura themed game, top down spaceship shooter where the objectiver is to make it through waves of enemies
At the current time the game is intialized with sounds,graphics, and working mechanics

v1
- This game was started from a few ideas i gained from some online resources
Game Overviews for QT https://www.youtube.com/watch?v=8ntEQpg7gck
Introduction to QT https://www.youtube.com/watch?v=EkjaiDsiM-Q
GUI in QT https://www.youtube.com/watch?v=HiOOWDb4YjE

These induvidual videos are not the resource but rather the entire channel behind these videos.

- Initiated QScene and how QObjects work together
- By using inheritance games structure can be found just by watching what happens on the screen
- Items may be created and destroyed in very interesting techniques
- The player was initialized as a rectangle and given movement(But could move outside of the scene, never to be seen again)
This was fixed by limiting the players movement to within the visible screen
Examples of this was the first initilization of the projectile would continue to grow the screen indefinitely
This is fixed by setting a fixed size of screen and deleting the projectile once it get to a certain place offscreen
Therefore as the player might see nothing happening, the projectile is actually deleted after a certain position to free new memory

Later some things were changed to give a score counter on the side of the screen and restrict the enemies and player 
from entering that section of the screen

v2
- now began the adding of enemies to the screen, who were based on the pame parent class as the projectiles and the player were based upon(at this step these were all simple rectangles)
- By building them from a parent object it gave alot of flexability on how to handle them as a seperate class
- They were given a movement downwards by interval but could only be spawned from a set point, meaning all of the enemies had to come down from the same spot
This was fixed by using RNG/Width of screen position to generate where they would appear, leading them to come down from a random 
spot near the top instead of the same spot making the difficulty trivial

v3
- The enemies at this point would continue down the screen and could not be stopped by the player
- At this point the enemies were given a timer function to make one appear at intervals
Using the classes for projectile and enemy we could check for any collisions with a function from QT and delete both objects if they satisfied certain criteria
Now the enemies can be stopped by a single shot

v4
There is seemingly no objective to this game so this update is focused mainly on trying to add a reason to continue playing
- Added space to the right of the screen with 2 counters one counting Life and another counting score
-As an enemy was deleted from a collision the score would ++
-As an enemy was deleted by colliding with the ship or going offscreen life would --
-This is also the step that i encountered the most trouble, since i had wanted to change the way the controls felt so that it felt better to play
(In a further update this will be gone over in more detail)

v5
At this point i wanted to make the game more my own, so i found resources to add to it to give it a dynamic feel
-Added background over QScene
-Replaced player with a small spaceship
-Replaced projectile with small laser
-Replaced Enemy with Evil Spaceships
These changes required small reworks to the code as some of the functions changed or were not present at all for the images to replace the rectangles
Things were heavily tweaked to make the game more playable in this form since the above changes changed some things
(Warping, scaling,pixelation, other assorted easy fixes)

v6
Here is where i decided to finish the project
One of my main goals was to make the game feel very smooth, so when you pressed a key the spaceship would react to that key press 
and give the actual player a feeling of control over the enviroment
After extensive online research into Game development in QT i found that 2D games have a problem that cannot be overcome at this level
And that is that smooth continuous inputs of buttons or keys cannot translate into smooth movements of an object with heavy animation work
As that kind of work is much outside of the scale of this project i came to the idea after deliberation of releasing this version
-I tried to have a cyclic fix in which as the button was depressed that some code would execute every frame(5ms) however this became very glitchy
and would heavily slow the performance of the game, since it took a ton of calculations per second to display the screen this way
so this fix ended to no avail :(

I may try to remake this game in unity to help streamline it somewhat.
- this version is unworking but serves as a great lesson that the tools can be very important
To complete the game in its current form i would essentially have to write an engine from scratch to handle movement
Why try and reinvent the wheel ?

// Finale


Assignment 1:
Calculator app in QT


Update 0.1
-added stylized gui

Update 0.5
-Added functionality to number buttons
-added functionality to label for output

Update 1.0
-Finalized different buttons
-Fixed bug, where only single second inputs were allowed during calculation

Update 2
-Built .exe with nessecary .dll files for portability


Assignment 2:
App for Grade calculation

-finished gui look and feel
-labeling became somewhat messy and convoluted during creation so i have since abandon this version
-original scope was too large
- wanted portability from class to class, so i would be able to use it on different classes
- that style of portability was out of my range of QT knowledge so i tried to bring it down to scale
- abandon after getting lost trying to rework the labels and functions :(

Assignment 3:
Ring Queue Implementation

- Working on other code can be very frustrating, but after help from the professor 
and TA this became very interesting project
- Basing an iterator on an entirely different idea than the one i am accustomed to 
helped me to understand that an iterator is made with function in mind
- A class within a class is also an interesting concept that is worth to be explored.