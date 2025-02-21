#!/bin/bash
find -regex '.*[c,h]pp' | xargs clang-format --style=file:.clang-format -i --verbose
find -regex '.*cu' | xargs clang-format --style=file:.clang-format -i --verbose