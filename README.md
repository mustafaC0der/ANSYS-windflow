# Wind Catcher Simulation

This project simulates wind catchers using ANSYS Fluent and custom User-Defined Functions (UDFs). The primary objective is to analyze the airflow dynamics through a wind catcher system under varying wind speeds and environmental conditions.

## Project Structure

- **`udf/`**: Custom User-Defined Functions (UDFs) for simulation control and customization.
- **`config/`**: Configuration files for solver settings and boundary conditions.
- **`simulation/`**: Contains mesh files, simulation case setups, and results.
- **`scripts/`**: Automation scripts for running and post-processing the simulations.
- **`docs/`**: Documentation, including the project report.

## Setup Instructions

1. Clone the repository:
    ```bash
    git clone <repository-url>
    ```

2. Install necessary dependencies for ANSYS Fluent, if not already installed.

3. Configure the simulation settings:
    - Modify the `config/boundary_conditions.json` and `config/solver_settings.json` as needed.

4. Run the simulation:
    ```bash
    ./scripts/run_simulation.sh
    ```

5. Post-process the results:
    ```bash
    python scripts/post_process.py
    ```

## Documentation

For a detailed explanation of the methodology and results, refer to the `docs/report.md` file.
