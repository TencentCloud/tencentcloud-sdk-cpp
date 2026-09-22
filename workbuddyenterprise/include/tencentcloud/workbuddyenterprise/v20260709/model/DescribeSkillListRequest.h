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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESKILLLISTREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESKILLLISTREQUEST_H_

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
                * DescribeSkillList请求参数结构体
                */
                class DescribeSkillListRequest : public AbstractModel
                {
                public:
                    DescribeSkillListRequest();
                    ~DescribeSkillListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取技能来源，必填：BUILTIN（内置）/ CUSTOM（自建）/ AUTHORIZED（企业授权）。数据通路判别，非筛选条件
                     * @return Source 技能来源，必填：BUILTIN（内置）/ CUSTOM（自建）/ AUTHORIZED（企业授权）。数据通路判别，非筛选条件
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置技能来源，必填：BUILTIN（内置）/ CUSTOM（自建）/ AUTHORIZED（企业授权）。数据通路判别，非筛选条件
                     * @param _source 技能来源，必填：BUILTIN（内置）/ CUSTOM（自建）/ AUTHORIZED（企业授权）。数据通路判别，非筛选条件
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取标准过滤条件：SkillId（精确，多值 OR ≤100，携带即按 ID 批量查询）/ Keyword（模糊）/ PublishStatus（DRAFT/PUBLISHED/ALL）/ Status（ENABLED/DISABLED/ALL）
                     * @return Filters 标准过滤条件：SkillId（精确，多值 OR ≤100，携带即按 ID 批量查询）/ Keyword（模糊）/ PublishStatus（DRAFT/PUBLISHED/ALL）/ Status（ENABLED/DISABLED/ALL）
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置标准过滤条件：SkillId（精确，多值 OR ≤100，携带即按 ID 批量查询）/ Keyword（模糊）/ PublishStatus（DRAFT/PUBLISHED/ALL）/ Status（ENABLED/DISABLED/ALL）
                     * @param _filters 标准过滤条件：SkillId（精确，多值 OR ≤100，携带即按 ID 批量查询）/ Keyword（模糊）/ PublishStatus（DRAFT/PUBLISHED/ALL）/ Status（ENABLED/DISABLED/ALL）
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
                     * 获取偏移量，默认 0（按 ID 批量查询时忽略）
                     * @return Offset 偏移量，默认 0（按 ID 批量查询时忽略）
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认 0（按 ID 批量查询时忽略）
                     * @param _offset 偏移量，默认 0（按 ID 批量查询时忽略）
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
                     * 获取每页数量，默认 20，最大 200（按 ID 批量查询时忽略）
                     * @return Limit 每页数量，默认 20，最大 200（按 ID 批量查询时忽略）
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量，默认 20，最大 200（按 ID 批量查询时忽略）
                     * @param _limit 每页数量，默认 20，最大 200（按 ID 批量查询时忽略）
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
                     * 获取授权方企业账号标识；仅 Source=AUTHORIZED 时生效。不传则由后端用 Uin 推导全部已授权范围；未携带 SkillId 的分页查询必传
                     * @return AccountId 授权方企业账号标识；仅 Source=AUTHORIZED 时生效。不传则由后端用 Uin 推导全部已授权范围；未携带 SkillId 的分页查询必传
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置授权方企业账号标识；仅 Source=AUTHORIZED 时生效。不传则由后端用 Uin 推导全部已授权范围；未携带 SkillId 的分页查询必传
                     * @param _accountId 授权方企业账号标识；仅 Source=AUTHORIZED 时生效。不传则由后端用 Uin 推导全部已授权范围；未携带 SkillId 的分页查询必传
                     * 
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取仅 Source=AUTHORIZED 时生效。Agent 绑定了 OneID 租户时，授权集合强制收窄到绑定租户；显式传入的 AccountId 必须等于绑定值，否则请求被拒绝。绑定 Agent 的分页查询可不传 AccountId（服务端按绑定值收窄到单一授权方）
                     * @return AgentId 仅 Source=AUTHORIZED 时生效。Agent 绑定了 OneID 租户时，授权集合强制收窄到绑定租户；显式传入的 AccountId 必须等于绑定值，否则请求被拒绝。绑定 Agent 的分页查询可不传 AccountId（服务端按绑定值收窄到单一授权方）
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置仅 Source=AUTHORIZED 时生效。Agent 绑定了 OneID 租户时，授权集合强制收窄到绑定租户；显式传入的 AccountId 必须等于绑定值，否则请求被拒绝。绑定 Agent 的分页查询可不传 AccountId（服务端按绑定值收窄到单一授权方）
                     * @param _agentId 仅 Source=AUTHORIZED 时生效。Agent 绑定了 OneID 租户时，授权集合强制收窄到绑定租户；显式传入的 AccountId 必须等于绑定值，否则请求被拒绝。绑定 Agent 的分页查询可不传 AccountId（服务端按绑定值收窄到单一授权方）
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                private:

                    /**
                     * 技能来源，必填：BUILTIN（内置）/ CUSTOM（自建）/ AUTHORIZED（企业授权）。数据通路判别，非筛选条件
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 标准过滤条件：SkillId（精确，多值 OR ≤100，携带即按 ID 批量查询）/ Keyword（模糊）/ PublishStatus（DRAFT/PUBLISHED/ALL）/ Status（ENABLED/DISABLED/ALL）
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认 0（按 ID 批量查询时忽略）
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数量，默认 20，最大 200（按 ID 批量查询时忽略）
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 授权方企业账号标识；仅 Source=AUTHORIZED 时生效。不传则由后端用 Uin 推导全部已授权范围；未携带 SkillId 的分页查询必传
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 仅 Source=AUTHORIZED 时生效。Agent 绑定了 OneID 租户时，授权集合强制收窄到绑定租户；显式传入的 AccountId 必须等于绑定值，否则请求被拒绝。绑定 Agent 的分页查询可不传 AccountId（服务端按绑定值收窄到单一授权方）
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESKILLLISTREQUEST_H_
