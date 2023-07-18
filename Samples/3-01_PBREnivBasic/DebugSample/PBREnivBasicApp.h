#pragma once
#include "../../3-00_SharedLibrary/Application.h"

VK_DEFINE_HANDLE(VmaAllocation);

namespace SharedLib
{
    class Camera;
}

class PBREnivBasicApp : public SharedLib::GlfwApplication
{
public:
    PBREnivBasicApp();
    ~PBREnivBasicApp();

    virtual void AppInit() override;

private:
    void InitSkyboxPipeline();
    void InitSkyboxPipelineDescriptorSetLayout();
    void InitSkyboxPipelineLayout();
    void InitSkyboxShaderModules();

    void InitHdrRenderObjects();

    VkImage       m_hdrCubeMapImage;
    VkImageView   m_hdrCubeMapView;
    VkSampler     m_hdrSampler;
    VmaAllocation m_hdrCubeMapAlloc;

    SharedLib::Camera*           m_pCamera;
    std::vector<VkBuffer>        m_cameraParaBuffers;
    std::vector<VmaAllocation>   m_cameraParaBufferAllocs;
    std::vector<VkDescriptorSet> m_skyboxPipelineDescriptorSet0s;

    VkShaderModule m_vsSkyboxShaderModule;
    VkShaderModule m_psSkyboxShaderModule;
    VkDescriptorSetLayout m_skyboxPipelineDesSet0Layout;
    VkPipelineLayout m_skyboxPipelineLayout;
    VkPipeline m_skyboxPipeline;
};
