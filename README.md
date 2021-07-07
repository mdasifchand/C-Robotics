# C-Robotics
Putting together interesting ideas
## TODO
### Initial implementation would be to start with Monte Carlo Integration using sampling technqiues to calculate integration of a function on GPU's 
### Determine important alternative cpp packages -> for Visualization, BLAS, logging
# Organize the project file structure  
    |
    |--------- bin  (output execs, both for application as well as learning, test go in here)
    |
    |--------- include (subpackages) 
    |
    |--------- src (project sourcefiles + main.cpp. People also tend to have it outside but I think this would be good for readability)
    |
    |--------- extras (anything which is required by the project like may be videos/images/*.bk file/scripts
    |
    |--------- third-party (third-party softwares)
    |
    |--------- docker (Dockerfile, if any)
    |
    |--------- test (all the important tests)
    |
    |--------- gpu (for separable compilation this makes sense)
    |
    |--------- doc (important documents)
    |
    |--------- build (build files)
    |
    |-------- CMakeLists.txt 
    |
    |-------- Readme.md
    |
    |--------  github/workflows/superlinter.yml
    |
    |-------- .gitignore
    |
    |-------- .dockignore
    |
    |-------- spike-tests (to test random things, with a small chunk of code) 
    |
    |--------- clang-format
    |
    |--------- clang-tidy
    |
    |--------- .idea
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
