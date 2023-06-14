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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULAFFECTEDREGISTRYIMAGEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULAFFECTEDREGISTRYIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/VulAffectedImageComponentInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 漏洞影响的仓库镜像列表
                */
                class VulAffectedRegistryImageInfo : public AbstractModel
                {
                public:
                    VulAffectedRegistryImageInfo();
                    ~VulAffectedRegistryImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像ID
                     * @return ImageID 镜像ID
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置镜像ID
                     * @param _imageID 镜像ID
                     * 
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取镜像名称
                     * @return ImageName 镜像名称
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
                     * @param _imageName 镜像名称
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
                     * 获取镜像版本
                     * @return ImageTag 镜像版本
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置镜像版本
                     * @param _imageTag 镜像版本
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
                     * 获取镜像命名空间
                     * @return Namespace 镜像命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置镜像命名空间
                     * @param _namespace 镜像命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取镜像地址
                     * @return ImageRepoAddress 镜像地址
                     * 
                     */
                    std::string GetImageRepoAddress() const;

                    /**
                     * 设置镜像地址
                     * @param _imageRepoAddress 镜像地址
                     * 
                     */
                    void SetImageRepoAddress(const std::string& _imageRepoAddress);

                    /**
                     * 判断参数 ImageRepoAddress 是否已赋值
                     * @return ImageRepoAddress 是否已赋值
                     * 
                     */
                    bool ImageRepoAddressHasBeenSet() const;

                    /**
                     * 获取组件列表
                     * @return ComponentList 组件列表
                     * 
                     */
                    std::vector<VulAffectedImageComponentInfo> GetComponentList() const;

                    /**
                     * 设置组件列表
                     * @param _componentList 组件列表
                     * 
                     */
                    void SetComponentList(const std::vector<VulAffectedImageComponentInfo>& _componentList);

                    /**
                     * 判断参数 ComponentList 是否已赋值
                     * @return ComponentList 是否已赋值
                     * 
                     */
                    bool ComponentListHasBeenSet() const;

                    /**
                     * 获取是否为镜像的最新版本
                     * @return IsLatestImage 是否为镜像的最新版本
                     * 
                     */
                    bool GetIsLatestImage() const;

                    /**
                     * 设置是否为镜像的最新版本
                     * @param _isLatestImage 是否为镜像的最新版本
                     * 
                     */
                    void SetIsLatestImage(const bool& _isLatestImage);

                    /**
                     * 判断参数 IsLatestImage 是否已赋值
                     * @return IsLatestImage 是否已赋值
                     * 
                     */
                    bool IsLatestImageHasBeenSet() const;

                    /**
                     * 获取内部镜像资产ID
                     * @return ImageAssetId 内部镜像资产ID
                     * 
                     */
                    int64_t GetImageAssetId() const;

                    /**
                     * 设置内部镜像资产ID
                     * @param _imageAssetId 内部镜像资产ID
                     * 
                     */
                    void SetImageAssetId(const int64_t& _imageAssetId);

                    /**
                     * 判断参数 ImageAssetId 是否已赋值
                     * @return ImageAssetId 是否已赋值
                     * 
                     */
                    bool ImageAssetIdHasBeenSet() const;

                private:

                    /**
                     * 镜像ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像版本
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * 镜像命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 镜像地址
                     */
                    std::string m_imageRepoAddress;
                    bool m_imageRepoAddressHasBeenSet;

                    /**
                     * 组件列表
                     */
                    std::vector<VulAffectedImageComponentInfo> m_componentList;
                    bool m_componentListHasBeenSet;

                    /**
                     * 是否为镜像的最新版本
                     */
                    bool m_isLatestImage;
                    bool m_isLatestImageHasBeenSet;

                    /**
                     * 内部镜像资产ID
                     */
                    int64_t m_imageAssetId;
                    bool m_imageAssetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULAFFECTEDREGISTRYIMAGEINFO_H_
