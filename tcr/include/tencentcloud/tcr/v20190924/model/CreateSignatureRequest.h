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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATESIGNATUREREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATESIGNATUREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateSignature请求参数结构体
                */
                class CreateSignatureRequest : public AbstractModel
                {
                public:
                    CreateSignatureRequest();
                    ~CreateSignatureRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return RegistryId 实例ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例ID
                     * @param _registryId 实例ID
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
                     * 获取命名空间名称
                     * @return NamespaceName 命名空间名称
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespaceName 命名空间名称
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
                     * 获取仓库名称
                     * @return RepositoryName 仓库名称
                     * 
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置仓库名称
                     * @param _repositoryName 仓库名称
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
                     * 获取Tag名称
                     * @return ImageVersion Tag名称
                     * 
                     */
                    std::string GetImageVersion() const;

                    /**
                     * 设置Tag名称
                     * @param _imageVersion Tag名称
                     * 
                     */
                    void SetImageVersion(const std::string& _imageVersion);

                    /**
                     * 判断参数 ImageVersion 是否已赋值
                     * @return ImageVersion 是否已赋值
                     * 
                     */
                    bool ImageVersionHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 仓库名称
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * Tag名称
                     */
                    std::string m_imageVersion;
                    bool m_imageVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATESIGNATUREREQUEST_H_
