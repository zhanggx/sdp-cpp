/* -----------------------------------------------------------------------------
 * Rule_path_absolute.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_path_absolute_hpp
#define Rule_path_absolute_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_path_absolute : public Rule
{
public:
  Rule_path_absolute(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_path_absolute(const Rule_path_absolute& rule);

  Rule_path_absolute& operator=(const Rule_path_absolute& rule);

  const Rule_path_absolute* clone(void) const;

  static const Rule_path_absolute* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */