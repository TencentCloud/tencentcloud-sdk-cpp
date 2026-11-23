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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESESSIONARTIFACTLISTREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESESSIONARTIFACTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/Filter.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * DescribeSessionArtifactList请求参数结构体
                */
                class DescribeSessionArtifactListRequest : public AbstractModel
                {
                public:
                    DescribeSessionArtifactListRequest();
                    ~DescribeSessionArtifactListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>会话ID</p>
                     * @return SessionId <p>会话ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话ID</p>
                     * @param _sessionId <p>会话ID</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>偏移量，从 0 开始，默认 0（按 ID 批量查询时忽略）</p>
                     * @return Offset <p>偏移量，从 0 开始，默认 0（按 ID 批量查询时忽略）</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，从 0 开始，默认 0（按 ID 批量查询时忽略）</p>
                     * @param _offset <p>偏移量，从 0 开始，默认 0（按 ID 批量查询时忽略）</p>
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
                     * 获取<p>每页数量，默认 20，最大 200（按 ID 批量查询时忽略）</p>
                     * @return Limit <p>每页数量，默认 20，最大 200（按 ID 批量查询时忽略）</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页数量，默认 20，最大 200（按 ID 批量查询时忽略）</p>
                     * @param _limit <p>每页数量，默认 20，最大 200（按 ID 批量查询时忽略）</p>
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
                     * 获取<p>标准过滤条件：ArtifactId（精确，多值 OR，携带即按 ID 批量查询，忽略分页）/ Keyword（模糊）</p>
                     * @return Filters <p>标准过滤条件：ArtifactId（精确，多值 OR，携带即按 ID 批量查询，忽略分页）/ Keyword（模糊）</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>标准过滤条件：ArtifactId（精确，多值 OR，携带即按 ID 批量查询，忽略分页）/ Keyword（模糊）</p>
                     * @param _filters <p>标准过滤条件：ArtifactId（精确，多值 OR，携带即按 ID 批量查询，忽略分页）/ Keyword（模糊）</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>会话ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>偏移量，从 0 开始，默认 0（按 ID 批量查询时忽略）</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页数量，默认 20，最大 200（按 ID 批量查询时忽略）</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>标准过滤条件：ArtifactId（精确，多值 OR，携带即按 ID 批量查询，忽略分页）/ Keyword（模糊）</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESESSIONARTIFACTLISTREQUEST_H_
