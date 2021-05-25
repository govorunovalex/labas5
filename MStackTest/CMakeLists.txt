file(GLOB hdrs "*.h*")
    file(GLOB srcs "*.cpp")
    add_executable($
		   {
		   MStackTest}

		   $ {
		   srcs}

		   $ {
		   hdrs}

)
    target_link_libraries($
			  {
			  MStackTest}

			  $ {
			  MStackLib}

			  gtest)
