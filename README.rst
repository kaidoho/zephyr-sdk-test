Preperation
===========

.. code-block:: console

  mkdir demo
  cd demo
  west init -m https://github.com/kaidoho/zephyr-sdk-test
  west update
  
Init Environment (not required)
===============================

.. code-block:: console
  
  OS\zephyr\zephyr-env.cmd
  

Building
========

.. code-block:: console
  
  west build -b nucleo_f767zi Test -- -G"Eclipse CDT4 - Ninja" -DCMAKE_VERBOSE_MAKEFILE=ON
