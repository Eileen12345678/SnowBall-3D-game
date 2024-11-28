# SnowBall-3D-game

1. Start Microsoft Visual Studio 2022.  On the right of the popup screen, click the "Create a new project" block.  Choose the "Empty Project" block and click Next.  Change the name to Tutorial20 or some suitable name and change the location to a hard drive located on the computer (typically C or D).  You will need to remember this location for steps 2 and 4.  Make sure the “Place solution and project in the same directory” checkbox is checked.  Click Create.

      - If you can't find the "Empty Project" block, try changing the top drop-down lists to select "C++", "Windows", and "Console".

       - If the Chose Location window keeps popping up again, you aren’t allowed to save files at the location you chose.  Select a different location, such as the desktop.

        - In you are logged into a University computer on campus, you may have access to an external drive such as H.  Do not put your project there.  The connection is slow, and your program may not compile correctly.

        - Older versions of Visual Studio will also work (tested on 2013).  However, setting up a project may be different.

        - Older VS versions: Click Next> or Application Settings (they go to the same place).  Check the “Empty Project” box.  Make sure the “Security development lifecycle check” is not checked.  Click Finish.

        - Newer VS versions: Change the architecture from x64 to x86 using the drop-down box at the top of the window.  The libraries we are using are 32-bit.

--------------------------------------------------------------------------------------------------------------

2.  You will have a folder called ObjLibrary and 10 other files.  In Visual C++, go to Project/Add Existing Item…, select all header (.h) and source (.cpp) files, and click Add.

        - Older VS versions: In the file selection popup, change the drop-down box at the right that says All Files to say Visual C++ Files.


--------------------------------------------------------------------------------------------------------------

3. Ensure that Solution Explorer is visible (View / Solution Explorer). In the Solution Explorer, select All Other Files and right-click it.  Choose Add / New Filter.  A new folder icon should appear in the Solution Explorer.  Name it ObjLibrary.  (This creates an imaginary folder in the project, but it does not create a Windows folder on the computer).


---------------------------------------------------------------------------------------------------------------

4. In the Solution Explorer, right click on the ObjLibrary folder icon and select Add / Existing item.  Go into the ObjLibrary folder on Windows and select all files.  The files should appear in the Solution Explorer inside the ObjLibrary folder.  You should get 26 files.

        - You can select everything with [CTRL]+[A].  This works in many programs.
