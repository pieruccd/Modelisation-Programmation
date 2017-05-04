add_library(toto
  SHARED
  Dvector.cpp
Distribution.cpp
DistributionNormale.cpp
GenerateurNombreAleatoire.cpp
ParkMiller.cpp
XorShift.cpp)

install (TARGETS toto
	 DESTINATION lib)

file(
	GLOB 
	headers
	*.h
)

install(FILES ${headers}
  DESTINATION include/${CMAKE_PROJECT_NAME})
