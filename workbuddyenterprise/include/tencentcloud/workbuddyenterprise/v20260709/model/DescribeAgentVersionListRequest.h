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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEAGENTVERSIONLISTREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEAGENTVERSIONLISTREQUEST_H_

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
                * DescribeAgentVersionList请求参数结构体
                */
                class DescribeAgentVersionListRequest : public AbstractModel
                {
                public:
                    DescribeAgentVersionListRequest();
                    ~DescribeAgentVersionListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Agent 业务 ID</p>
                     * @return AgentId <p>Agent 业务 ID</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>Agent 业务 ID</p>
                     * @param _agentId <p>Agent 业务 ID</p>
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取<p>偏移量，从 0 开始</p>
                     * @return Offset <p>偏移量，从 0 开始</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，从 0 开始</p>
                     * @param _offset <p>偏移量，从 0 开始</p>
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
                     * 获取<p>返回数量，缺省为 20，最大 100</p>
                     * @return Limit <p>返回数量，缺省为 20，最大 100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，缺省为 20，最大 100</p>
                     * @param _limit <p>返回数量，缺省为 20，最大 100</p>
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
                     * 获取<p>过滤条件数组，多个 Filter 之间为 AND 关系，同一 Filter 内多个 Values 为 OR 关系</p>
                     * @return Filters <p>过滤条件数组，多个 Filter 之间为 AND 关系，同一 Filter 内多个 Values 为 OR 关系</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件数组，多个 Filter 之间为 AND 关系，同一 Filter 内多个 Values 为 OR 关系</p>
                     * @param _filters <p>过滤条件数组，多个 Filter 之间为 AND 关系，同一 Filter 内多个 Values 为 OR 关系</p>
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
                     * <p>Agent 业务 ID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>偏移量，从 0 开始</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，缺省为 20，最大 100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤条件数组，多个 Filter 之间为 AND 关系，同一 Filter 内多个 Values 为 OR 关系</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEAGENTVERSIONLISTREQUEST_H_
