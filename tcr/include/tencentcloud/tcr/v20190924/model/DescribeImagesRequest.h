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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMAGESREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMAGESREQUEST_H_

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
                * DescribeImages请求参数结构体
                */
                class DescribeImagesRequest : public AbstractModel
                {
                public:
                    DescribeImagesRequest();
                    ~DescribeImagesRequest() = default;
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
                     * 获取指定镜像版本进行查找，当前为模糊搜索
                     * @return ImageVersion 指定镜像版本进行查找，当前为模糊搜索
                     * 
                     */
                    std::string GetImageVersion() const;

                    /**
                     * 设置指定镜像版本进行查找，当前为模糊搜索
                     * @param _imageVersion 指定镜像版本进行查找，当前为模糊搜索
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
                     * 获取每页个数，用于分页，默认20
                     * @return Limit 每页个数，用于分页，默认20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页个数，用于分页，默认20
                     * @param _limit 每页个数，用于分页，默认20
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
                     * 获取页数，默认值为1
补充说明：limit指的是每页的大小，offset指的是具体第几页。
举例：limit 20 offset 1指的是1-20；limit 20 offset 2 指的是21-40；limit 30 offset 4 是指 90-120。
                     * @return Offset 页数，默认值为1
补充说明：limit指的是每页的大小，offset指的是具体第几页。
举例：limit 20 offset 1指的是1-20；limit 20 offset 2 指的是21-40；limit 30 offset 4 是指 90-120。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页数，默认值为1
补充说明：limit指的是每页的大小，offset指的是具体第几页。
举例：limit 20 offset 1指的是1-20；limit 20 offset 2 指的是21-40；limit 30 offset 4 是指 90-120。
                     * @param _offset 页数，默认值为1
补充说明：limit指的是每页的大小，offset指的是具体第几页。
举例：limit 20 offset 1指的是1-20；limit 20 offset 2 指的是21-40；limit 30 offset 4 是指 90-120。
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
                     * 获取指定镜像 Digest 进行查找
                     * @return Digest 指定镜像 Digest 进行查找
                     * 
                     */
                    std::string GetDigest() const;

                    /**
                     * 设置指定镜像 Digest 进行查找
                     * @param _digest 指定镜像 Digest 进行查找
                     * 
                     */
                    void SetDigest(const std::string& _digest);

                    /**
                     * 判断参数 Digest 是否已赋值
                     * @return Digest 是否已赋值
                     * 
                     */
                    bool DigestHasBeenSet() const;

                    /**
                     * 获取指定是否为精准匹配，true为精准匹配，不填为模糊匹配
                     * @return ExactMatch 指定是否为精准匹配，true为精准匹配，不填为模糊匹配
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置指定是否为精准匹配，true为精准匹配，不填为模糊匹配
                     * @param _exactMatch 指定是否为精准匹配，true为精准匹配，不填为模糊匹配
                     * 
                     */
                    void SetExactMatch(const bool& _exactMatch);

                    /**
                     * 判断参数 ExactMatch 是否已赋值
                     * @return ExactMatch 是否已赋值
                     * 
                     */
                    bool ExactMatchHasBeenSet() const;

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
                     * 镜像仓库名称
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * 指定镜像版本进行查找，当前为模糊搜索
                     */
                    std::string m_imageVersion;
                    bool m_imageVersionHasBeenSet;

                    /**
                     * 每页个数，用于分页，默认20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 页数，默认值为1
补充说明：limit指的是每页的大小，offset指的是具体第几页。
举例：limit 20 offset 1指的是1-20；limit 20 offset 2 指的是21-40；limit 30 offset 4 是指 90-120。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 指定镜像 Digest 进行查找
                     */
                    std::string m_digest;
                    bool m_digestHasBeenSet;

                    /**
                     * 指定是否为精准匹配，true为精准匹配，不填为模糊匹配
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMAGESREQUEST_H_
