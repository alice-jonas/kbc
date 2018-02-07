#!/usr/bin/env python2

from distutils.core import setup

setup(name='python-kbcrpc',
      version='0.1',
      description='Enhanced version of python-jsonrpc for use with Kbc',
      long_description=open('README').read(),
      author='Jeff Garzik',
      author_email='<jgarzik@exmulti.com>',
      maintainer='Jeff Garzik',
      maintainer_email='<jgarzik@exmulti.com>',
      url='http://www.github.com/jgarzik/python-kbcrpc',
      packages=['kbcrpc'],
      classifiers=['License :: OSI Approved :: GNU Library or Lesser General Public License (LGPL)', 'Operating System :: OS Independent'])
