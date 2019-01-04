#ifndef _LOGGER_H
#define _LOGGER_H 

#include <string>

#include <spdlog/fmt/fmt.h>

namespace Sapphire
{

  class Logger
  {

  private:
    std::string m_logFile;
    Logger();
    ~Logger();

  public:

    static void init( const std::string& logPath );

    // todo: this is a minor increase in build time because of fmtlib, but much less than including spdlog directly

    static void error( const std::string& text );
    template< typename... Args >
    static void error( const std::string& fmt, const Args&... args )
    {
      error( fmt::format( fmt, args... ) );
    }

    static void warn( const std::string& text );
    template< typename... Args >
    static void warn( const std::string& fmt, const Args&... args )
    {
      warn( fmt::format( fmt, args... ) );
    }


    static void info( const std::string& text );
    template< typename... Args >
    static void info( const std::string& fmt, const Args&... args )
    {
      info( fmt::format( fmt, args... ) );
    }


    static void debug( const std::string& text );
    template< typename... Args >
    static void debug( const std::string& fmt, const Args&... args )
    {
      debug( fmt::format( fmt, args... ) );
    }


    static void fatal( const std::string& text );
    template< typename... Args >
    static void fatal( const std::string& fmt, const Args&... args )
    {
      fatal( fmt::format( fmt, args... ) );
    }


    static void trace( const std::string& text );
    template< typename... Args >
    static void trace( const std::string& fmt, const Args&... args )
    {
      trace( fmt::format( fmt, args... ) );
    }


  };

}


#endif
