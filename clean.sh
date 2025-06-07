    #!/bin/bash

    # Define the directory where your build outputs are located.
    # IMPORTANT: Make sure this matches where your build.sh puts files!
    # If your build.sh puts files directly in the current directory,
    # you might need to adjust this to remove the executable and .o files.
    BUILD_DIRECTORY="build" # Assuming your build output goes into a 'build' folder

    echo "--- Cleaning build artifacts ---"

    # Check if the build directory exists before trying to remove it
    if [ -d "$BUILD_DIRECTORY" ]; then
        # rm -rf forcefully removes the directory and its contents
        rm -rf "$BUILD_DIRECTORY"
        echo "Successfully removed '$BUILD_DIRECTORY/' directory."
    else
        echo "No '$BUILD_DIRECTORY/' directory found. Nothing to clean."
        # If your build process puts files directly in the current directory (not 'build/'),
        # you might uncomment the line below and adjust 'my_program' and '*.o'
        # to match your executable name and object file pattern.
        # For example: rm -f my_program *.o
    fi

    echo "Clean process finished."