
SET(ADM_libva_SRCS
ADM_coreLibVA.cpp
)

INCLUDE_DIRECTORIES(${LIBVA_INCLUDE_DIR})	
ADD_DEFINITIONS(${LIBVA_CFLAGS})
#*************************************************
#*************************************************
ADM_ADD_SHARED_LIBRARY(ADM_coreLibVA6 ${ADM_libva_SRCS})
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/../include)
TARGET_LINK_LIBRARIES(ADM_coreLibVA6 va va-x11)
TARGET_LINK_LIBRARIES(ADM_coreLibVA6 ADM_core6 ADM_coreUI6 ADM_coreImage6)
TARGET_LINK_LIBRARIES(ADM_coreLibVA6 "c")
ADM_INSTALL_LIB(ADM_coreLibVA6)
