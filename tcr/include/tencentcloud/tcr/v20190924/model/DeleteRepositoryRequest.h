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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DELETEREPOSITORYREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DELETEREPOSITORYREQUEST_H_

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
                * DeleteRepository请求参数结构体
                */
                class DeleteRepositoryRequest : public AbstractModel
                {
                public:
                    DeleteRepositoryRequest();
                    ~DeleteRepositoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例Id</p>
                     * @return RegistryId <p>实例Id</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>实例Id</p>
                     * @param _registryId <p>实例Id</p>
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
                     * 获取<p>命名空间的名称</p>
                     * @return NamespaceName <p>命名空间的名称</p>
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置<p>命名空间的名称</p>
                     * @param _namespaceName <p>命名空间的名称</p>
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
                     * 获取<p>镜像仓库的名称</p>
                     * @return RepositoryName <p>镜像仓库的名称</p>
                     * 
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置<p>镜像仓库的名称</p>
                     * @param _repositoryName <p>镜像仓库的名称</p>
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
                     * 获取<p>默认值为true，表示无论仓库是否存在镜像都直接删除；false代表删除仓库前需检查是否存在镜像。</p>
                     * @return ForceDelete <p>默认值为true，表示无论仓库是否存在镜像都直接删除；false代表删除仓库前需检查是否存在镜像。</p>
                     * 
                     */
                    bool GetForceDelete() const;

                    /**
                     * 设置<p>默认值为true，表示无论仓库是否存在镜像都直接删除；false代表删除仓库前需检查是否存在镜像。</p>
                     * @param _forceDelete <p>默认值为true，表示无论仓库是否存在镜像都直接删除；false代表删除仓库前需检查是否存在镜像。</p>
                     * 
                     */
                    void SetForceDelete(const bool& _forceDelete);

                    /**
                     * 判断参数 ForceDelete 是否已赋值
                     * @return ForceDelete 是否已赋值
                     * 
                     */
                    bool ForceDeleteHasBeenSet() const;

                private:

                    /**
                     * <p>实例Id</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>命名空间的名称</p>
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * <p>镜像仓库的名称</p>
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * <p>默认值为true，表示无论仓库是否存在镜像都直接删除；false代表删除仓库前需检查是否存在镜像。</p>
                     */
                    bool m_forceDelete;
                    bool m_forceDeleteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DELETEREPOSITORYREQUEST_H_
