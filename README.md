# travis_qmake_gcc_cpp98_qt_qtests

[![Travis CI logo](TravisCI.png)](https://travis-ci.org)

[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp98_qt_qtests.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp98_qt_qtests)

This GitHub is part of [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial).

The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `gcc`
 * C++ version: `C++98`
 * Libraries: `STL` and `Qt`
 * Code coverage: none
 * GUI testing: QTest
 * Source: Multiple QDialog with Qt resource file

Less complex builds:
 * One test: [travis_qmake_gcc_cpp98_qt](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp98_qtest)
 