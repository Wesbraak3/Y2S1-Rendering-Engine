#pragma once
#include <glm/fwd.hpp>
#include <glm/geometric.hpp>
#include <glm/vec3.hpp>
#include <glm/ext/matrix_transform.hpp>

//
// Created by wesbr on 09/10/2026.
//

namespace core {
    class Camera {
    public:
        Camera(glm::vec3 pos, glm::vec3 target, glm::vec3 ,float viewAngle, float near, float far, int width, int height);

        void Translate(glm::vec3 direction, float speed);

        glm::mat4 GetViewMatrix() const;
        glm::mat4 GetProjectionMatrix() const;
        glm::mat4 GetPVMatrix() const;

    private:
        glm::vec3 cameraPos;
        glm::vec3 cameraTarget;
        glm::vec3 cameraUp;

        float aspectRatio;


        // glm::vec3 cameraDirection;
        // glm::vec3 cameraRight;
        // glm::vec3 cameraUp;

        glm::mat4 view;
        glm::mat4 projection;
        glm::mat4 PVMatrix;

        void CalculateTransform();
        void CalculatePVMatrix();
    };
}