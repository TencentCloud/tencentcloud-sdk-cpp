/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_PRESETIMAGEINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_PRESETIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/RuntimeLib.h>
#include <tencentcloud/tione/v20211111/model/Attribute.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 预制镜像详情
                */
                class PresetImageInfo : public AbstractModel
                {
                public:
                    PresetImageInfo();
                    ~PresetImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>镜像id</p>
                     * @return ImageId <p>镜像id</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>镜像id</p>
                     * @param _imageId <p>镜像id</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库名称</p>
                     * @return ImageRepo <p>镜像仓库名称</p>
                     * 
                     */
                    std::string GetImageRepo() const;

                    /**
                     * 设置<p>镜像仓库名称</p>
                     * @param _imageRepo <p>镜像仓库名称</p>
                     * 
                     */
                    void SetImageRepo(const std::string& _imageRepo);

                    /**
                     * 判断参数 ImageRepo 是否已赋值
                     * @return ImageRepo 是否已赋值
                     * 
                     */
                    bool ImageRepoHasBeenSet() const;

                    /**
                     * 获取<p>镜像标签</p>
                     * @return ImageTag <p>镜像标签</p>
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置<p>镜像标签</p>
                     * @param _imageTag <p>镜像标签</p>
                     * 
                     */
                    void SetImageTag(const std::string& _imageTag);

                    /**
                     * 判断参数 ImageTag 是否已赋值
                     * @return ImageTag 是否已赋值
                     * 
                     */
                    bool ImageTagHasBeenSet() const;

                    /**
                     * 获取<p>镜像url地址</p>
                     * @return ImageUrl <p>镜像url地址</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>镜像url地址</p>
                     * @param _imageUrl <p>镜像url地址</p>
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>镜像的大小</p>
                     * @return ImageSize <p>镜像的大小</p>
                     * 
                     */
                    std::string GetImageSize() const;

                    /**
                     * 设置<p>镜像的大小</p>
                     * @param _imageSize <p>镜像的大小</p>
                     * 
                     */
                    void SetImageSize(const std::string& _imageSize);

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取<p>镜像描述</p>
                     * @return Description <p>镜像描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>镜像描述</p>
                     * @param _description <p>镜像描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>适用模块</p>
                     * @return ApplicableModuleList <p>适用模块</p>
                     * 
                     */
                    std::vector<std::string> GetApplicableModuleList() const;

                    /**
                     * 设置<p>适用模块</p>
                     * @param _applicableModuleList <p>适用模块</p>
                     * 
                     */
                    void SetApplicableModuleList(const std::vector<std::string>& _applicableModuleList);

                    /**
                     * 判断参数 ApplicableModuleList 是否已赋值
                     * @return ApplicableModuleList 是否已赋值
                     * 
                     */
                    bool ApplicableModuleListHasBeenSet() const;

                    /**
                     * 获取<p>使用场景</p>
                     * @return Scenario <p>使用场景</p>
                     * 
                     */
                    std::string GetScenario() const;

                    /**
                     * 设置<p>使用场景</p>
                     * @param _scenario <p>使用场景</p>
                     * 
                     */
                    void SetScenario(const std::string& _scenario);

                    /**
                     * 判断参数 Scenario 是否已赋值
                     * @return Scenario 是否已赋值
                     * 
                     */
                    bool ScenarioHasBeenSet() const;

                    /**
                     * 获取<p>框架名称</p>
                     * @return Framework <p>框架名称</p>
                     * 
                     */
                    std::string GetFramework() const;

                    /**
                     * 设置<p>框架名称</p>
                     * @param _framework <p>框架名称</p>
                     * 
                     */
                    void SetFramework(const std::string& _framework);

                    /**
                     * 判断参数 Framework 是否已赋值
                     * @return Framework 是否已赋值
                     * 
                     */
                    bool FrameworkHasBeenSet() const;

                    /**
                     * 获取<p>框架版本</p>
                     * @return FrameworkVersion <p>框架版本</p>
                     * 
                     */
                    std::string GetFrameworkVersion() const;

                    /**
                     * 设置<p>框架版本</p>
                     * @param _frameworkVersion <p>框架版本</p>
                     * 
                     */
                    void SetFrameworkVersion(const std::string& _frameworkVersion);

                    /**
                     * 判断参数 FrameworkVersion 是否已赋值
                     * @return FrameworkVersion 是否已赋值
                     * 
                     */
                    bool FrameworkVersionHasBeenSet() const;

                    /**
                     * 获取<p>芯片类型</p>
                     * @return ChipTypeList <p>芯片类型</p>
                     * 
                     */
                    std::vector<std::string> GetChipTypeList() const;

                    /**
                     * 设置<p>芯片类型</p>
                     * @param _chipTypeList <p>芯片类型</p>
                     * 
                     */
                    void SetChipTypeList(const std::vector<std::string>& _chipTypeList);

                    /**
                     * 判断参数 ChipTypeList 是否已赋值
                     * @return ChipTypeList 是否已赋值
                     * 
                     */
                    bool ChipTypeListHasBeenSet() const;

                    /**
                     * 获取<p>运行库版本</p>
                     * @return ComputeLibVersion <p>运行库版本</p>
                     * 
                     */
                    std::string GetComputeLibVersion() const;

                    /**
                     * 设置<p>运行库版本</p>
                     * @param _computeLibVersion <p>运行库版本</p>
                     * 
                     */
                    void SetComputeLibVersion(const std::string& _computeLibVersion);

                    /**
                     * 判断参数 ComputeLibVersion 是否已赋值
                     * @return ComputeLibVersion 是否已赋值
                     * 
                     */
                    bool ComputeLibVersionHasBeenSet() const;

                    /**
                     * 获取<p>python版本</p>
                     * @return PythonVersion <p>python版本</p>
                     * 
                     */
                    std::string GetPythonVersion() const;

                    /**
                     * 设置<p>python版本</p>
                     * @param _pythonVersion <p>python版本</p>
                     * 
                     */
                    void SetPythonVersion(const std::string& _pythonVersion);

                    /**
                     * 判断参数 PythonVersion 是否已赋值
                     * @return PythonVersion 是否已赋值
                     * 
                     */
                    bool PythonVersionHasBeenSet() const;

                    /**
                     * 获取<p>操作系统</p>
                     * @return OS <p>操作系统</p>
                     * 
                     */
                    std::string GetOS() const;

                    /**
                     * 设置<p>操作系统</p>
                     * @param _oS <p>操作系统</p>
                     * 
                     */
                    void SetOS(const std::string& _oS);

                    /**
                     * 判断参数 OS 是否已赋值
                     * @return OS 是否已赋值
                     * 
                     */
                    bool OSHasBeenSet() const;

                    /**
                     * 获取<p>运行库列表</p>
                     * @return RuntimeLibList <p>运行库列表</p>
                     * 
                     */
                    std::vector<RuntimeLib> GetRuntimeLibList() const;

                    /**
                     * 设置<p>运行库列表</p>
                     * @param _runtimeLibList <p>运行库列表</p>
                     * 
                     */
                    void SetRuntimeLibList(const std::vector<RuntimeLib>& _runtimeLibList);

                    /**
                     * 判断参数 RuntimeLibList 是否已赋值
                     * @return RuntimeLibList 是否已赋值
                     * 
                     */
                    bool RuntimeLibListHasBeenSet() const;

                    /**
                     * 获取<p>支持的gpu列表</p>
                     * @return SupportGpuList <p>支持的gpu列表</p>
                     * 
                     */
                    std::vector<std::string> GetSupportGpuList() const;

                    /**
                     * 设置<p>支持的gpu列表</p>
                     * @param _supportGpuList <p>支持的gpu列表</p>
                     * 
                     */
                    void SetSupportGpuList(const std::vector<std::string>& _supportGpuList);

                    /**
                     * 判断参数 SupportGpuList 是否已赋值
                     * @return SupportGpuList 是否已赋值
                     * 
                     */
                    bool SupportGpuListHasBeenSet() const;

                    /**
                     * 获取<p>扩展属性</p>
                     * @return ExtraAttributeList <p>扩展属性</p>
                     * 
                     */
                    std::vector<Attribute> GetExtraAttributeList() const;

                    /**
                     * 设置<p>扩展属性</p>
                     * @param _extraAttributeList <p>扩展属性</p>
                     * 
                     */
                    void SetExtraAttributeList(const std::vector<Attribute>& _extraAttributeList);

                    /**
                     * 判断参数 ExtraAttributeList 是否已赋值
                     * @return ExtraAttributeList 是否已赋值
                     * 
                     */
                    bool ExtraAttributeListHasBeenSet() const;

                    /**
                     * 获取<p>是否支持分布式部署</p>
                     * @return SupportDistributedDeploy <p>是否支持分布式部署</p>
                     * 
                     */
                    bool GetSupportDistributedDeploy() const;

                    /**
                     * 设置<p>是否支持分布式部署</p>
                     * @param _supportDistributedDeploy <p>是否支持分布式部署</p>
                     * 
                     */
                    void SetSupportDistributedDeploy(const bool& _supportDistributedDeploy);

                    /**
                     * 判断参数 SupportDistributedDeploy 是否已赋值
                     * @return SupportDistributedDeploy 是否已赋值
                     * 
                     */
                    bool SupportDistributedDeployHasBeenSet() const;

                    /**
                     * 获取<p>是否最新稳定版本</p>
                     * @return IsLatestStable <p>是否最新稳定版本</p>
                     * 
                     */
                    bool GetIsLatestStable() const;

                    /**
                     * 设置<p>是否最新稳定版本</p>
                     * @param _isLatestStable <p>是否最新稳定版本</p>
                     * 
                     */
                    void SetIsLatestStable(const bool& _isLatestStable);

                    /**
                     * 判断参数 IsLatestStable 是否已赋值
                     * @return IsLatestStable 是否已赋值
                     * 
                     */
                    bool IsLatestStableHasBeenSet() const;

                    /**
                     * 获取<p>镜像的名称</p>
                     * @return ImageName <p>镜像的名称</p>
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置<p>镜像的名称</p>
                     * @param _imageName <p>镜像的名称</p>
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取<p>镜像版本号（内部）</p>
                     * @return Version <p>镜像版本号（内部）</p>
                     * 
                     */
                    uint64_t GetVersion() const;

                    /**
                     * 设置<p>镜像版本号（内部）</p>
                     * @param _version <p>镜像版本号（内部）</p>
                     * 
                     */
                    void SetVersion(const uint64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>录入时间</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * @return CreateTime <p>录入时间</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>录入时间</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * @param _createTime <p>录入时间</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * @return UpdateTime <p>更新时间</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * @param _updateTime <p>更新时间</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>镜像类型</p><p>枚举值：</p><ul><li>TCR： TCR类型的镜像</li></ul>
                     * @return ImageType <p>镜像类型</p><p>枚举值：</p><ul><li>TCR： TCR类型的镜像</li></ul>
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置<p>镜像类型</p><p>枚举值：</p><ul><li>TCR： TCR类型的镜像</li></ul>
                     * @param _imageType <p>镜像类型</p><p>枚举值：</p><ul><li>TCR： TCR类型的镜像</li></ul>
                     * 
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     * 
                     */
                    bool ImageTypeHasBeenSet() const;

                private:

                    /**
                     * <p>镜像id</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>镜像仓库名称</p>
                     */
                    std::string m_imageRepo;
                    bool m_imageRepoHasBeenSet;

                    /**
                     * <p>镜像标签</p>
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * <p>镜像url地址</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>镜像的大小</p>
                     */
                    std::string m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * <p>镜像描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>适用模块</p>
                     */
                    std::vector<std::string> m_applicableModuleList;
                    bool m_applicableModuleListHasBeenSet;

                    /**
                     * <p>使用场景</p>
                     */
                    std::string m_scenario;
                    bool m_scenarioHasBeenSet;

                    /**
                     * <p>框架名称</p>
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * <p>框架版本</p>
                     */
                    std::string m_frameworkVersion;
                    bool m_frameworkVersionHasBeenSet;

                    /**
                     * <p>芯片类型</p>
                     */
                    std::vector<std::string> m_chipTypeList;
                    bool m_chipTypeListHasBeenSet;

                    /**
                     * <p>运行库版本</p>
                     */
                    std::string m_computeLibVersion;
                    bool m_computeLibVersionHasBeenSet;

                    /**
                     * <p>python版本</p>
                     */
                    std::string m_pythonVersion;
                    bool m_pythonVersionHasBeenSet;

                    /**
                     * <p>操作系统</p>
                     */
                    std::string m_oS;
                    bool m_oSHasBeenSet;

                    /**
                     * <p>运行库列表</p>
                     */
                    std::vector<RuntimeLib> m_runtimeLibList;
                    bool m_runtimeLibListHasBeenSet;

                    /**
                     * <p>支持的gpu列表</p>
                     */
                    std::vector<std::string> m_supportGpuList;
                    bool m_supportGpuListHasBeenSet;

                    /**
                     * <p>扩展属性</p>
                     */
                    std::vector<Attribute> m_extraAttributeList;
                    bool m_extraAttributeListHasBeenSet;

                    /**
                     * <p>是否支持分布式部署</p>
                     */
                    bool m_supportDistributedDeploy;
                    bool m_supportDistributedDeployHasBeenSet;

                    /**
                     * <p>是否最新稳定版本</p>
                     */
                    bool m_isLatestStable;
                    bool m_isLatestStableHasBeenSet;

                    /**
                     * <p>镜像的名称</p>
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * <p>镜像版本号（内部）</p>
                     */
                    uint64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>录入时间</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>镜像类型</p><p>枚举值：</p><ul><li>TCR： TCR类型的镜像</li></ul>
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_PRESETIMAGEINFO_H_
