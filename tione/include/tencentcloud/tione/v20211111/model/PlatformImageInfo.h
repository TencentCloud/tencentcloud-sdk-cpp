/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_PLATFORMIMAGEINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_PLATFORMIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 平台镜像信息详情
                */
                class PlatformImageInfo : public AbstractModel
                {
                public:
                    PlatformImageInfo();
                    ~PlatformImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取框架名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Framework 框架名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFramework() const;

                    /**
                     * 设置框架名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _framework 框架名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取镜像类型: ccr or tcr
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageType 镜像类型: ccr or tcr
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置镜像类型: ccr or tcr
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageType 镜像类型: ccr or tcr
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     * 
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageUrl 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageUrl 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取TCR镜像示例所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegistryRegion TCR镜像示例所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置TCR镜像示例所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _registryRegion TCR镜像示例所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegistryRegion(const std::string& _registryRegion);

                    /**
                     * 判断参数 RegistryRegion 是否已赋值
                     * @return RegistryRegion 是否已赋值
                     * 
                     */
                    bool RegistryRegionHasBeenSet() const;

                    /**
                     * 获取TCR镜像所属实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegistryId TCR镜像所属实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置TCR镜像所属实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _registryId TCR镜像所属实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageName 镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageName 镜像名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取镜像Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageId 镜像Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageId 镜像Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取框架版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameworkVersion 框架版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrameworkVersion() const;

                    /**
                     * 设置框架版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frameworkVersion 框架版本
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取支持的gpu列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportGpuList 支持的gpu列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSupportGpuList() const;

                    /**
                     * 设置支持的gpu列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportGpuList 支持的gpu列表
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取业务属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraAttributes 业务属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Attribute> GetExtraAttributes() const;

                    /**
                     * 设置业务属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraAttributes 业务属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraAttributes(const std::vector<Attribute>& _extraAttributes);

                    /**
                     * 判断参数 ExtraAttributes 是否已赋值
                     * @return ExtraAttributes 是否已赋值
                     * 
                     */
                    bool ExtraAttributesHasBeenSet() const;

                    /**
                     * 获取镜像适用场景Train/Inference/Notebook
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageRange 镜像适用场景Train/Inference/Notebook
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetImageRange() const;

                    /**
                     * 设置镜像适用场景Train/Inference/Notebook
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageRange 镜像适用场景Train/Inference/Notebook
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageRange(const std::vector<std::string>& _imageRange);

                    /**
                     * 判断参数 ImageRange 是否已赋值
                     * @return ImageRange 是否已赋值
                     * 
                     */
                    bool ImageRangeHasBeenSet() const;

                    /**
                     * 获取是否支持分布式部署
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportDistributedDeploy 是否支持分布式部署
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSupportDistributedDeploy() const;

                    /**
                     * 设置是否支持分布式部署
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportDistributedDeploy 是否支持分布式部署
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取支持的地域 all(所有地域)/autonomous(自动驾驶地域)/general(通用地域)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionScope 支持的地域 all(所有地域)/autonomous(自动驾驶地域)/general(通用地域)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionScope() const;

                    /**
                     * 设置支持的地域 all(所有地域)/autonomous(自动驾驶地域)/general(通用地域)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionScope 支持的地域 all(所有地域)/autonomous(自动驾驶地域)/general(通用地域)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionScope(const std::string& _regionScope);

                    /**
                     * 判断参数 RegionScope 是否已赋值
                     * @return RegionScope 是否已赋值
                     * 
                     */
                    bool RegionScopeHasBeenSet() const;

                private:

                    /**
                     * 框架名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * 镜像类型: ccr or tcr
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * TCR镜像示例所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * TCR镜像所属实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 框架版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frameworkVersion;
                    bool m_frameworkVersionHasBeenSet;

                    /**
                     * 支持的gpu列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_supportGpuList;
                    bool m_supportGpuListHasBeenSet;

                    /**
                     * 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 业务属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Attribute> m_extraAttributes;
                    bool m_extraAttributesHasBeenSet;

                    /**
                     * 镜像适用场景Train/Inference/Notebook
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_imageRange;
                    bool m_imageRangeHasBeenSet;

                    /**
                     * 是否支持分布式部署
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportDistributedDeploy;
                    bool m_supportDistributedDeployHasBeenSet;

                    /**
                     * 支持的地域 all(所有地域)/autonomous(自动驾驶地域)/general(通用地域)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionScope;
                    bool m_regionScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_PLATFORMIMAGEINFO_H_
