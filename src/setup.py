from setuptools import setup, Extension

module = Extension('sample_pkg', sources=['samplemodule.c'])

setup(
    name='sample_pkg',
    version='1.0',
    description='A sample Python module written in C',
    author='Manu Devappa',
    ext_modules=[module],
)