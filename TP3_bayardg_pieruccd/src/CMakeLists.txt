add_library(toto
  SHARED
  Dvector.cpp
Distribution.cpp
DistributionNormale.cpp
GenerateurNombreAleatoire.cpp
ParkMiller.cpp
XorShift.cpp
DistributionUniforme.cpp
)

install (TARGETS toto
	 DESTINATION lib)

file(
	GLOB 
	headers
	*.h
)

install(FILES ${headers}
  DESTINATION include/${CMAKE_PROJECT_NAME})

include_directories (${CMAKE_SOURCE_DIR}/src)

file(
	GLOB 
	usage_examples
	main.cpp
)

foreach(f ${usage_examples})
  get_filename_component(exampleName ${f} NAME_WE) 
  add_executable (${exampleName} ${f}) 
  target_link_libraries(${exampleName} toto)
  install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/${exampleName}
    DESTINATION bin
    RENAME ${CMAKE_PROJECT_NAME}-${exampleName})
endforeach(f)
