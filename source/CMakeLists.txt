#######################################################
# cmake file for building DQMEventDisplay package
# @author Eté Rémi
# Copyright (c)
#######################################################

# include directories
include_directories( BEFORE include )

# require proper c++
add_definitions( "-pedantic -Wunused-value -O2" )
add_definitions("-Wno-long-long -Wreturn-type -Werror")

#AUX_SOURCE_DIRECTORY( src SRC_FILES )
SET( SRC_FILES ${SRC_FILES} src/plugins/RootGeoImportPlugin.cc )

if( BUILD_DD4HEP_PLUGINS )
  SET( SRC_FILES ${SRC_FILES} src/plugins/DD4hepGeoPlugin.cc )
endif()

add_shared_library( ${PROJECT_NAME} ${SRC_FILES} )

install(
  TARGETS ${PROJECT_NAME}
  LIBRARY DESTINATION lib
)

# add executable macro
macro( BUILD_EXECUTABLE _dir _name _install_loc )
	add_executable( ${_name} ${_dir}/${_name}.cc )
  if(TARGET ${PROJECT_NAME})
	   target_link_libraries( ${_name} ${PROJECT_NAME} )
   endif()
	install (
	    TARGETS ${_name}
	    RUNTIME DESTINATION ${_install_loc}
	)
endmacro()

BUILD_EXECUTABLE( main dqm4hep-online-display bin )

dqm4hep_run_clang_tidy()
dqm4hep_run_clang_format()

install_directory( include DESTINATION . FILES_MATCHING PATTERN "*.h" PATTERN "*.cc" )
