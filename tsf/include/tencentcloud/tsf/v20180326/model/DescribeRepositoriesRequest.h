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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEREPOSITORIESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEREPOSITORIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
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
                     * 获取查询关键字（按照仓库名称搜索）
                     * @return SearchWord 查询关键字（按照仓库名称搜索）
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置查询关键字（按照仓库名称搜索）
                     * @param _searchWord 查询关键字（按照仓库名称搜索）
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取查询起始偏移
                     * @return Offset 查询起始偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询起始偏移
                     * @param _offset 查询起始偏移
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量限制
                     * @return Limit 返回数量限制
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量限制
                     * @param _limit 返回数量限制
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取仓库类型（默认仓库：default，私有仓库：private）
                     * @return RepositoryType 仓库类型（默认仓库：default，私有仓库：private）
                     * 
                     */
                    std::string GetRepositoryType() const;

                    /**
                     * 设置仓库类型（默认仓库：default，私有仓库：private）
                     * @param _repositoryType 仓库类型（默认仓库：default，私有仓库：private）
                     * 
                     */
                    void SetRepositoryType(const std::string& _repositoryType);

                    /**
                     * 判断参数 RepositoryType 是否已赋值
                     * @return RepositoryType 是否已赋值
                     * 
                     */
                    bool RepositoryTypeHasBeenSet() const;

                private:

                    /**
                     * 查询关键字（按照仓库名称搜索）
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 查询起始偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量限制
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 仓库类型（默认仓库：default，私有仓库：private）
                     */
                    std::string m_repositoryType;
                    bool m_repositoryTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEREPOSITORIESREQUEST_H_
