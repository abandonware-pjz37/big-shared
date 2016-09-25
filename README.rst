big shared
----------

* Static libraries: ``foo_a``, ``foo_b``
* Shared library: ``foo_all``
* Executable: ``foo_c``

Dependency graph: ``foo_c`` -> ``foo_all`` -> {``foo_a``, ``foo_b``}
