set (CMAKE_CXX_STANDARD 14)

set(MCMC_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(MCMC_INCLUDES "${CMAKE_CURRENT_SOURCE_DIR}/include")

add_library(MCMC SHARED "${MCMC_SOURCES}/MCMC.cpp" "${MCMC_INCLUDES}/MCMC.h")


