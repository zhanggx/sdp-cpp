/* -----------------------------------------------------------------------------
 * Rule_fmtp_attr.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_fmtp_attr_hpp
#define Rule_fmtp_attr_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_fmtp_attr : public Rule
{
public:
  Rule_fmtp_attr(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_fmtp_attr(const Rule_fmtp_attr& rule);

  Rule_fmtp_attr& operator=(const Rule_fmtp_attr& rule);

  const Rule_fmtp_attr* clone(void) const;

  static const Rule_fmtp_attr* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */