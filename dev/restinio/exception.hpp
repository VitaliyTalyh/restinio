/*
	restinio
*/

/*!
	Exception class for all exceptions thrown by RESTinio.
*/

#pragma once

#include <string>
#include <stdexcept>

namespace restinio
{

//
// exception_t
//

//! Exception class for all exceptions thrown by RESTinio.
class exception_t
	:	public std::runtime_error
{
	using bast_type_t = std::runtime_error;
	public:
		exception_t( const char * err )
			:	bast_type_t{ err }
		{}

		exception_t( const std::string & err )
			:	bast_type_t{ err }
		{}
};

} /* namespace restinio */
