// David Wu
// SID: 900632036
// This program is my own work.
// Created by David on 10/23/23.
//

#pragma once

#include <vector>

#ifndef PROJECT3_SPELLCHECK_H
#define PROJECT3_SPELLCHECK_H

std::vector<std::string> suggested_corrections(const std::string &word,
                                               std::vector<std::string> &dictionary_words,
                                               int n = 3);

#endif //PROJECT3_SPELLCHECK_H
