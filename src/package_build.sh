python3 setup.py build
python3 setup.py install --user
cp "build/lib.linux-x86_64-cpython-312/sample_pkg.cpython-312-x86_64-linux-gnu.so" .
clear
python3 main.py