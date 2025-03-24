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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPOSITORIESREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPOSITORIESREQUEST_H_

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
                * DescribeRepositories请求参数结构体
                */
                class DescribeRepositoriesRequest : public AbstractModel
                {
                public:
                    DescribeRepositoriesRequest();
                    ~DescribeRepositoriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return RegistryId 实例Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例Id
                     * @param _registryId 实例Id
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
                     * 获取指定命名空间，不填写默认为查询所有命名空间下镜像仓库
                     * @return NamespaceName 指定命名空间，不填写默认为查询所有命名空间下镜像仓库
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置指定命名空间，不填写默认为查询所有命名空间下镜像仓库
                     * @param _namespaceName 指定命名空间，不填写默认为查询所有命名空间下镜像仓库
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
                     * 获取指定镜像仓库，不填写默认查询指定命名空间下所有镜像仓库
                     * @return RepositoryName 指定镜像仓库，不填写默认查询指定命名空间下所有镜像仓库
                     * 
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置指定镜像仓库，不填写默认查询指定命名空间下所有镜像仓库
                     * @param _repositoryName 指定镜像仓库，不填写默认查询指定命名空间下所有镜像仓库
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
                     * 获取页数，第几页，用于分页
                     * @return Offset 页数，第几页，用于分页
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页数，第几页，用于分页
                     * @param _offset 页数，第几页，用于分页
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页个数，用于分页，最大值为100
                     * @return Limit 每页个数，用于分页，最大值为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页个数，用于分页，最大值为100
                     * @param _limit 每页个数，用于分页，最大值为100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取基于字段排序，支持的值有-creation_time,-name, -update_time
                     * @return SortBy 基于字段排序，支持的值有-creation_time,-name, -update_time
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置基于字段排序，支持的值有-creation_time,-name, -update_time
                     * @param _sortBy 基于字段排序，支持的值有-creation_time,-name, -update_time
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 指定命名空间，不填写默认为查询所有命名空间下镜像仓库
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 指定镜像仓库，不填写默认查询指定命名空间下所有镜像仓库
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * 页数，第几页，用于分页
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页个数，用于分页，最大值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 基于字段排序，支持的值有-creation_time,-name, -update_time
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPOSITORIESREQUEST_H_
