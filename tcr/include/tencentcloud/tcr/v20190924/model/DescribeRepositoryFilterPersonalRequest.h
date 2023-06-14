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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPOSITORYFILTERPERSONALREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPOSITORYFILTERPERSONALREQUEST_H_

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
                * DescribeRepositoryFilterPersonal请求参数结构体
                */
                class DescribeRepositoryFilterPersonalRequest : public AbstractModel
                {
                public:
                    DescribeRepositoryFilterPersonalRequest();
                    ~DescribeRepositoryFilterPersonalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索镜像名
                     * @return RepoName 搜索镜像名
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置搜索镜像名
                     * @param _repoName 搜索镜像名
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取返回最大数量，默认 20，最大100
                     * @return Limit 返回最大数量，默认 20，最大100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回最大数量，默认 20，最大100
                     * @param _limit 返回最大数量，默认 20，最大100
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
                     * 获取筛选条件：1表示public，0表示private
                     * @return Public 筛选条件：1表示public，0表示private
                     * 
                     */
                    int64_t GetPublic() const;

                    /**
                     * 设置筛选条件：1表示public，0表示private
                     * @param _public 筛选条件：1表示public，0表示private
                     * 
                     */
                    void SetPublic(const int64_t& _public);

                    /**
                     * 判断参数 Public 是否已赋值
                     * @return Public 是否已赋值
                     * 
                     */
                    bool PublicHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * 搜索镜像名
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回最大数量，默认 20，最大100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 筛选条件：1表示public，0表示private
                     */
                    int64_t m_public;
                    bool m_publicHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPOSITORYFILTERPERSONALREQUEST_H_
