# Wind Catcher Simulation

This project will use ANSYS Fluent and custom User-Defined Functions (UDFs) to simulate a wind catcher. The primary goal is to examine the airflow dynamics through a wind catcher system with various wind speeds and environmental conditions.

## Project Structure

- **`udf/`**: Custom User-Defined Functions for control or modification of simulation.
- **`config/`**: Configuration files for solver settings and boundary conditions.
- **`simulation/`**: Contains mesh files, simulation case setups, and results.
- **`scripts/`**: Scripts to automate running and post-processing the simulation.
- `docs/`: Project report with docstrings.

## Setup Instructions

1. Clone the repository:
END
git clone <repository-url>
```

2. Install any missing dependencies required by ANSYS Fluent if not already installed.

Step 3: Configure simulation settings
- Change `config/boundary_conditions.json` and `config/solver_settings.json` according to your needs.

4. Run the Simulation:
YOU
./scripts/run_simulation.sh
```

5. Post-processing of results:

END

python scripts/post_process.py END ## Documentation For more thorough details regarding methodology and results, refer the `docs/report.md` document.
