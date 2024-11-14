import os
import matplotlib.pyplot as plt
import numpy as np

def load_results(case_dir):
    """ Load results from the specified case directory. """
    result_file = os.path.join(case_dir, "solution_data.txt")
    
    if not os.path.exists(result_file):
        print(f"Results file not found: {result_file}")
        return None
    
    data = np.loadtxt(result_file)
    return data

def plot_results(data):
    """ Plot the results (e.g., velocity profile). """
    plt.plot(data[:, 0], data[:, 1])  # Assuming columns represent x and velocity
    plt.xlabel("Position (m)")
    plt.ylabel("Velocity (m/s)")
    plt.title("Velocity Profile")
    plt.show()

def main():
    case_dir = 'simulation/results/case_1'
    data = load_results(case_dir)
    
    if data is not None:
        plot_results(data)

if __name__ == "__main__":
    main()
