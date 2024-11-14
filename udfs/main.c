#include "udf.h"
#include "wind_catcher.h"

// Define a UDF for velocity inlet boundary condition
DEFINE_PROFILE(inlet_velocity, thread, position)
{
    real x[ND_ND];  // Array for coordinates
    real velocity;

    // Retrieve coordinates and set the inlet velocity
    face_t f;
    begin_f_loop(f, thread)
    {
        F_CENTROID(x, f, thread);
        // Set the velocity based on the wind speed from config (e.g., from a JSON file)
        velocity = 10.0; // Placeholder value, should come from config
        F_PROFILE(f, thread, position) = velocity;
    }
    end_f_loop(f, thread)
}

// Define a UDF for the wind catcher surface (wall)
DEFINE_PROFILE(wind_catcher_wall, thread, position)
{
    face_t f;
    begin_f_loop(f, thread)
    {
        F_PROFILE(f, thread, position) = 0.0;  // No-slip wall
    }
    end_f_loop(f, thread)
}
