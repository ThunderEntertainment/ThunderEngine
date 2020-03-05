#include <GLFW/glfw3.h>

int main(void)
{
    const int Width = 1600, Height = 900;

    GLFWwindow* windows;

    if(!glfwInit())
        return -1;
    windows = glfwCreateWindow(Width, Height, "Thunder Engine", NULL, NULL);

    if(!windows)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(windows);

    while(!glfwWindowShouldClose(windows))
    {

        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(windows);

        glfwSwapBuffers(windows);

                /* Poll for and process events */
                glfwPollEvents();

    }
return 0;
}
