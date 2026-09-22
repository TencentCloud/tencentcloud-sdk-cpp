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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEEXTERNALAGENTLISTREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEEXTERNALAGENTLISTREQUEST_H_

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
                * DescribeExternalAgentList请求参数结构体
                */
                class DescribeExternalAgentListRequest : public AbstractModel
                {
                public:
                    DescribeExternalAgentListRequest();
                    ~DescribeExternalAgentListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Agent 业务 ID（必填：绑定状态的归属主体）
                     * @return AgentId Agent 业务 ID（必填：绑定状态的归属主体）
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置Agent 业务 ID（必填：绑定状态的归属主体）
                     * @param _agentId Agent 业务 ID（必填：绑定状态的归属主体）
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
                     * 获取标准过滤条件，支持的 Name：Bound（BOUND=仅已绑定 / UNBOUND=仅未绑定 / ALL=全部，缺省 ALL）
                     * @return Filters 标准过滤条件，支持的 Name：Bound（BOUND=仅已绑定 / UNBOUND=仅未绑定 / ALL=全部，缺省 ALL）
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置标准过滤条件，支持的 Name：Bound（BOUND=仅已绑定 / UNBOUND=仅未绑定 / ALL=全部，缺省 ALL）
                     * @param _filters 标准过滤条件，支持的 Name：Bound（BOUND=仅已绑定 / UNBOUND=仅未绑定 / ALL=全部，缺省 ALL）
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，从 0 开始，默认 0
                     * @return Offset 偏移量，从 0 开始，默认 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，从 0 开始，默认 0
                     * @param _offset 偏移量，从 0 开始，默认 0
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
                     * 获取每页数量，默认 20，最大 200
                     * @return Limit 每页数量，默认 20，最大 200
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量，默认 20，最大 200
                     * @param _limit 每页数量，默认 20，最大 200
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
                     * 获取外部 Agent 列表查询关键字
                     * @return DescribeExternalAgentList 外部 Agent 列表查询关键字
                     * 
                     */
                    std::string GetDescribeExternalAgentList() const;

                    /**
                     * 设置外部 Agent 列表查询关键字
                     * @param _describeExternalAgentList 外部 Agent 列表查询关键字
                     * 
                     */
                    void SetDescribeExternalAgentList(const std::string& _describeExternalAgentList);

                    /**
                     * 判断参数 DescribeExternalAgentList 是否已赋值
                     * @return DescribeExternalAgentList 是否已赋值
                     * 
                     */
                    bool DescribeExternalAgentListHasBeenSet() const;

                    /**
                     * 获取版本 ID
                     * @return VersionId 版本 ID
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置版本 ID
                     * @param _versionId 版本 ID
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                private:

                    /**
                     * Agent 业务 ID（必填：绑定状态的归属主体）
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 标准过滤条件，支持的 Name：Bound（BOUND=仅已绑定 / UNBOUND=仅未绑定 / ALL=全部，缺省 ALL）
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，从 0 开始，默认 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数量，默认 20，最大 200
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 外部 Agent 列表查询关键字
                     */
                    std::string m_describeExternalAgentList;
                    bool m_describeExternalAgentListHasBeenSet;

                    /**
                     * 版本 ID
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEEXTERNALAGENTLISTREQUEST_H_
