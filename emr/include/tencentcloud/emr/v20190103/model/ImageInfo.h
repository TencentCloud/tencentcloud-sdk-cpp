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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_IMAGEINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_IMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 镜像信息
                */
                class ImageInfo : public AbstractModel
                {
                public:
                    ImageInfo();
                    ~ImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像所属地域
                     * @return Region 镜像所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置镜像所属地域
                     * @param _region 镜像所属地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取tcr实例Id
                     * @return RegistryId tcr实例Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置tcr实例Id
                     * @param _registryId tcr实例Id
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
                     * 获取域名
                     * @return DomainName 域名
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置域名
                     * @param _domainName 域名
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return NamespaceName 命名空间
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间
                     * @param _namespaceName 命名空间
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取镜像仓库名称
                     * @return RepositoryName 镜像仓库名称
                     * 
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置镜像仓库名称
                     * @param _repositoryName 镜像仓库名称
                     * 
                     */
                    void SetRepositoryName(const std::string& _repositoryName);

                    /**
                     * 判断参数 RepositoryName 是否已赋值
                     * @return RepositoryName 是否已赋值
                     * 
                     */
                    bool RepositoryNameHasBeenSet() const;

                    /**
                     * 获取镜像版本
                     * @return ImageVersion 镜像版本
                     * 
                     */
                    std::string GetImageVersion() const;

                    /**
                     * 设置镜像版本
                     * @param _imageVersion 镜像版本
                     * 
                     */
                    void SetImageVersion(const std::string& _imageVersion);

                    /**
                     * 判断参数 ImageVersion 是否已赋值
                     * @return ImageVersion 是否已赋值
                     * 
                     */
                    bool ImageVersionHasBeenSet() const;

                    /**
                     * 获取镜像拉取策略
                     * @return ImagePullPolicy 镜像拉取策略
                     * 
                     */
                    std::string GetImagePullPolicy() const;

                    /**
                     * 设置镜像拉取策略
                     * @param _imagePullPolicy 镜像拉取策略
                     * 
                     */
                    void SetImagePullPolicy(const std::string& _imagePullPolicy);

                    /**
                     * 判断参数 ImagePullPolicy 是否已赋值
                     * @return ImagePullPolicy 是否已赋值
                     * 
                     */
                    bool ImagePullPolicyHasBeenSet() const;

                    /**
                     * 获取镜像地址
                     * @return Image 镜像地址
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置镜像地址
                     * @param _image 镜像地址
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                private:

                    /**
                     * 镜像所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * tcr实例Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 镜像仓库名称
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * 镜像版本
                     */
                    std::string m_imageVersion;
                    bool m_imageVersionHasBeenSet;

                    /**
                     * 镜像拉取策略
                     */
                    std::string m_imagePullPolicy;
                    bool m_imagePullPolicyHasBeenSet;

                    /**
                     * 镜像地址
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_IMAGEINFO_H_
