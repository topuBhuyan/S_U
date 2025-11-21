// User Coordinate 

#include <GL/glew.h> // Include glew before glfw
#include <GLFW/glfw3.h>
#include <iostream>

// Callback function to handle mouse button events
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods)
{
    if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS)
    {
        double xpos, ypos;
        // Get cursor position in screen coordinates (pixels, top-left origin)
        glfwGetCursorPos(window, &xpos, &ypos);

        int width, height;
        glfwGetWindowSize(window, &width, &height);

        // Convert window coordinates to OpenGL's Normalized Device Coordinates (NDC)
        // OpenGL's Y-axis is typically positive upwards, unlike window coordinates
        float openglX = (float)(xpos / width) * 2.0f - 1.0f;
        float openglY = (float)(height - ypos) / height * 2.0f - 1.0f; // Flip Y-axis

        std::cout << "Mouse clicked at NDC coordinates: (" 
                  << openglX << ", " << openglY << ")" << std::endl;
    }
}

int main() {
    // ... GLFW initialization code ...
    if (!glfwInit()) return -1;

    GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL Coordinates", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    // Set the mouse button callback
    glfwSetMouseButtonCallback(window, mouse_button_callback);

    // ... Rendering loop ...
    while (!glfwWindowShouldClose(window))
    {
        // Render here
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}