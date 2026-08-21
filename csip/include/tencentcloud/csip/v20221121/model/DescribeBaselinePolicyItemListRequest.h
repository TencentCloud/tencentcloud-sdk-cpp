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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEPOLICYITEMLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEPOLICYITEMLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeBaselinePolicyItemList请求参数结构体
                */
                class DescribeBaselinePolicyItemListRequest : public AbstractModel
                {
                public:
                    DescribeBaselinePolicyItemListRequest();
                    ~DescribeBaselinePolicyItemListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>基线策略ID</p>
                     * @return PolicyID <p>基线策略ID</p>
                     * 
                     */
                    uint64_t GetPolicyID() const;

                    /**
                     * 设置<p>基线策略ID</p>
                     * @param _policyID <p>基线策略ID</p>
                     * 
                     */
                    void SetPolicyID(const uint64_t& _policyID);

                    /**
                     * 判断参数 PolicyID 是否已赋值
                     * @return PolicyID 是否已赋值
                     * 
                     */
                    bool PolicyIDHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>基线父分类 ID，用于筛选指定父分类下的检测项。</p>
                     * @return ParentCategoryID <p>基线父分类 ID，用于筛选指定父分类下的检测项。</p>
                     * 
                     */
                    uint64_t GetParentCategoryID() const;

                    /**
                     * 设置<p>基线父分类 ID，用于筛选指定父分类下的检测项。</p>
                     * @param _parentCategoryID <p>基线父分类 ID，用于筛选指定父分类下的检测项。</p>
                     * 
                     */
                    void SetParentCategoryID(const uint64_t& _parentCategoryID);

                    /**
                     * 判断参数 ParentCategoryID 是否已赋值
                     * @return ParentCategoryID 是否已赋值
                     * 
                     */
                    bool ParentCategoryIDHasBeenSet() const;

                    /**
                     * 获取<p>分页查询每页返回条数，默认值 10，最大值 100。</p>
                     * @return Limit <p>分页查询每页返回条数，默认值 10，最大值 100。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页查询每页返回条数，默认值 10，最大值 100。</p>
                     * @param _limit <p>分页查询每页返回条数，默认值 10，最大值 100。</p>
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
                     * 获取<p>分页查询偏移量，默认值 0。</p>
                     * @return Offset <p>分页查询偏移量，默认值 0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页查询偏移量，默认值 0。</p>
                     * @param _offset <p>分页查询偏移量，默认值 0。</p>
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
                     * 获取<p>通用过滤条件列表。支持的过滤字段：</p><ul><li>CategoryID：子分类 ID，精确匹配</li><li>Name：检测项名称，模糊匹配</li><li>RiskLevel：风险等级，精确匹配。取值：LOW、MEDIUM、HIGH、CRITICAL</li><li>SupportCustomValue：是否支持编辑，精确匹配。取值：true、false</li></ul>
                     * @return Filters <p>通用过滤条件列表。支持的过滤字段：</p><ul><li>CategoryID：子分类 ID，精确匹配</li><li>Name：检测项名称，模糊匹配</li><li>RiskLevel：风险等级，精确匹配。取值：LOW、MEDIUM、HIGH、CRITICAL</li><li>SupportCustomValue：是否支持编辑，精确匹配。取值：true、false</li></ul>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>通用过滤条件列表。支持的过滤字段：</p><ul><li>CategoryID：子分类 ID，精确匹配</li><li>Name：检测项名称，模糊匹配</li><li>RiskLevel：风险等级，精确匹配。取值：LOW、MEDIUM、HIGH、CRITICAL</li><li>SupportCustomValue：是否支持编辑，精确匹配。取值：true、false</li></ul>
                     * @param _filters <p>通用过滤条件列表。支持的过滤字段：</p><ul><li>CategoryID：子分类 ID，精确匹配</li><li>Name：检测项名称，模糊匹配</li><li>RiskLevel：风险等级，精确匹配。取值：LOW、MEDIUM、HIGH、CRITICAL</li><li>SupportCustomValue：是否支持编辑，精确匹配。取值：true、false</li></ul>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>基线策略ID</p>
                     */
                    uint64_t m_policyID;
                    bool m_policyIDHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>基线父分类 ID，用于筛选指定父分类下的检测项。</p>
                     */
                    uint64_t m_parentCategoryID;
                    bool m_parentCategoryIDHasBeenSet;

                    /**
                     * <p>分页查询每页返回条数，默认值 10，最大值 100。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页查询偏移量，默认值 0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>通用过滤条件列表。支持的过滤字段：</p><ul><li>CategoryID：子分类 ID，精确匹配</li><li>Name：检测项名称，模糊匹配</li><li>RiskLevel：风险等级，精确匹配。取值：LOW、MEDIUM、HIGH、CRITICAL</li><li>SupportCustomValue：是否支持编辑，精确匹配。取值：true、false</li></ul>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEPOLICYITEMLISTREQUEST_H_
