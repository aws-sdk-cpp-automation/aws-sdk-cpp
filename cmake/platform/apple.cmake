
if(BUILD_SHARED_LIBS)
    SET(SUFFIX dylib)
endif()

macro(apply_post_project_platform_settings)
    set(PLATFORM_DEP_LIBS pthread)
endmacro()
