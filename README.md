# Power PMAC Trajectory Writer

## Overview

This module provides a C-based interface for writing and executing trajectory data to Power PMAC systems using user shared memory. It is designed to integrate seamlessly into Power PMAC projects and supports modular inclusion via Git submodules.

It builds upon the following components:

* **ppmac_tcp_server** – Handles TCP communication between external clients and the Power PMAC system.
* **ppmac_ushm_buffer** – Manages shared memory buffers for efficient data exchange between user-space and kernel-space.

Together, these modules enable robust and flexible trajectory control for motion systems powered by Power PMAC.

## How to Use

### Adding into Power PMAC project

Follow the steps below to add this module to your Power PMAC project:

1. Clone or add this repository as a submodule in the desired path under **C Language**.
1. Add `ppmac_tcp_server` and `ppmac_ushm_buffer` on the *Libraries* folder, following the instructions present in each repository
1. Add the main program
    - In the Power PMAC IDE, right-click on the *Background Programs* folder and select **"Add a new..."**.
    - Enter the name `ppmac_trajectory_writer` — the same name as this repository.
    - When prompted to overwrite the file, select **"No"**.
    - Right-click on the created folder and select **"Add" > "Existing item..."**.
    - Select the source (`ppmac_trajectory_writer.c`) and header (`ppmac_trajectory_writer.h`) files from this repository.

## License

This project is licensed under the Apache 2.0 License. See the LICENSE file for details.

## Author

[Leandro Martins dos Santos](https://github.com/LeandroMartinsdS)<br>
Software Systems Engineer<br>
Diamond Light Source Ltd.<br>
