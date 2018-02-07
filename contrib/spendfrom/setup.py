from distutils.core import setup
setup(name='kbcspendfrom',
      version='1.0',
      description='Command-line utility for kbc "coin control"',
      author='Gavin Andresen',
      author_email='gavin@kbcfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
