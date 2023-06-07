Development Workflow
====================

.. contents::
   :local:

Checkout and Initialization
---------------------------

.. code-block:: console

   $ cd ~                            # <--- or wherever you like
   $ git clone https://github.com/jfasch/FH-ECE21-LabExam-2023-06-12.git
   $ cd ~/FH-ECE21-LabExam-2023-06-12
   $ git submodule init
   $ git submodule update

Build
-----

Create build directory for Intel architecture (``x86_64``)

.. code-block:: console

   $ mkdir ~/FH-ECE21-LabExam-2023-06-12-x86_64         # <--- or wherever you like
   $ cd ~/FH-ECE21-LabExam-2023-06-12-x86_64
   $ cmake ~/FH-ECE21-LabExam-2023-06-12
   $ make

Test
----

.. code-block:: console

   $ pwd
   /home/jfasch/FH-ECE21-LabExam-2023-06-12-x86_64      # <--- or whatever you have chosen

.. code-block:: console

   $ ./tests/test-suite-fh-2023-06-12 
   Running main() from /home/jfasch/tmp/FH-ECE21-LabExam-2023-06-12/googletest/googletest/src/gtest_main.cc
   [==========] Running 3 tests from 2 test suites.
   [----------] Global test environment set-up.
   [----------] 1 test from sensor_mock_suite
   [ RUN      ] sensor_mock_suite.basic
   [       OK ] sensor_mock_suite.basic (0 ms)
   [----------] 1 test from sensor_mock_suite (0 ms total)
   
   [----------] 2 tests from switch_mock_suite
   [ RUN      ] switch_mock_suite.initial_state
   [       OK ] switch_mock_suite.initial_state (0 ms)
   [ RUN      ] switch_mock_suite.set_on_off
   [       OK ] switch_mock_suite.set_on_off (0 ms)
   [----------] 2 tests from switch_mock_suite (0 ms total)
   
   [----------] Global test environment tear-down
   [==========] 3 tests from 2 test suites ran. (0 ms total)
   [  PASSED  ] 3 tests.
