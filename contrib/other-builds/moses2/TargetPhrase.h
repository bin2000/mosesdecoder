/*
 * TargetPhrase.h
 *
 *  Created on: 23 Oct 2015
 *      Author: hieu
 */

#pragma once

#include "Phrase.h"
#include "util/pool.hh"

class Scores;
class Manager;
class System;

class TargetPhrase : public Phrase
{
public:
  static TargetPhrase *CreateFromString(util::Pool &pool, System &system, const std::string &str);
  TargetPhrase(util::Pool &pool, System &system, size_t size);
  virtual ~TargetPhrase();

  Scores &GetScores()
  { return *m_scores; }

protected:
	Scores *m_scores;
};

