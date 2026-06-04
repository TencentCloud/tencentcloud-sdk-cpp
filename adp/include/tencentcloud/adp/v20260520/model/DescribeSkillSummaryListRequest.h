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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLSUMMARYLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLSUMMARYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeSkillSummaryList请求参数结构体
                */
                class DescribeSkillSummaryListRequest : public AbstractModel
                {
                public:
                    DescribeSkillSummaryListRequest();
                    ~DescribeSkillSummaryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间ID，必填
                     * @return SpaceId 空间ID，必填
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置空间ID，必填
                     * @param _spaceId 空间ID，必填
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取仅查询当前用户收藏的 Skill
                     * @return FavoriteOnly 仅查询当前用户收藏的 Skill
                     * 
                     */
                    bool GetFavoriteOnly() const;

                    /**
                     * 设置仅查询当前用户收藏的 Skill
                     * @param _favoriteOnly 仅查询当前用户收藏的 Skill
                     * 
                     */
                    void SetFavoriteOnly(const bool& _favoriteOnly);

                    /**
                     * 判断参数 FavoriteOnly 是否已赋值
                     * @return FavoriteOnly 是否已赋值
                     * 
                     */
                    bool FavoriteOnlyHasBeenSet() const;

                    /**
                     * 获取过滤条件(多个Filter之间为AND关系,同一Filter的多个Values为OR关系): - SkillIdList: Skill ID列表,字符串数组,精确匹配 - ProviderType: Skill 提供方类型,枚举值数组,精确匹配 (SKILL_PROVIDER_TYPE_OFFICIAL=1/SKILL_PROVIDER_TYPE_THIRD_PARTY=2/SKILL_PROVIDER_TYPE_CUSTOM=3/SKILL_PROVIDER_TYPE_CUSTOM_SHARED=4) - CategoryKey: 分类标识,字符串数组,精确匹配 - AnalysisStatus: 安全检测状态,枚举值数组,精确匹配 (SKILL_ANALYSIS_PENDING=0/SKILL_ANALYSIS_RUNNING=1/SKILL_ANALYSIS_AVAILABLE=2/SKILL_ANALYSIS_UNAVAILABLE=3/SKILL_ANALYSIS_FAILED=4) - RiskLevel: 风险等级,枚举值数组,精确匹配 (SKILL_RISK_NONE=0/SKILL_RISK_LOW=1/SKILL_RISK_MEDIUM=2/SKILL_RISK_HIGH=3) - ShareStatus: 共享状态,枚举值数组,精确匹配,仅在ProviderType包含SKILL_PROVIDER_TYPE_CUSTOM/SKILL_PROVIDER_TYPE_CUSTOM_SHARED时生效 (SHARE_STATUS_UNSHARED=0/SHARE_STATUS_SHARED=1/SHARE_STATUS_APPROVING=2)
                     * @return FilterList 过滤条件(多个Filter之间为AND关系,同一Filter的多个Values为OR关系): - SkillIdList: Skill ID列表,字符串数组,精确匹配 - ProviderType: Skill 提供方类型,枚举值数组,精确匹配 (SKILL_PROVIDER_TYPE_OFFICIAL=1/SKILL_PROVIDER_TYPE_THIRD_PARTY=2/SKILL_PROVIDER_TYPE_CUSTOM=3/SKILL_PROVIDER_TYPE_CUSTOM_SHARED=4) - CategoryKey: 分类标识,字符串数组,精确匹配 - AnalysisStatus: 安全检测状态,枚举值数组,精确匹配 (SKILL_ANALYSIS_PENDING=0/SKILL_ANALYSIS_RUNNING=1/SKILL_ANALYSIS_AVAILABLE=2/SKILL_ANALYSIS_UNAVAILABLE=3/SKILL_ANALYSIS_FAILED=4) - RiskLevel: 风险等级,枚举值数组,精确匹配 (SKILL_RISK_NONE=0/SKILL_RISK_LOW=1/SKILL_RISK_MEDIUM=2/SKILL_RISK_HIGH=3) - ShareStatus: 共享状态,枚举值数组,精确匹配,仅在ProviderType包含SKILL_PROVIDER_TYPE_CUSTOM/SKILL_PROVIDER_TYPE_CUSTOM_SHARED时生效 (SHARE_STATUS_UNSHARED=0/SHARE_STATUS_SHARED=1/SHARE_STATUS_APPROVING=2)
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置过滤条件(多个Filter之间为AND关系,同一Filter的多个Values为OR关系): - SkillIdList: Skill ID列表,字符串数组,精确匹配 - ProviderType: Skill 提供方类型,枚举值数组,精确匹配 (SKILL_PROVIDER_TYPE_OFFICIAL=1/SKILL_PROVIDER_TYPE_THIRD_PARTY=2/SKILL_PROVIDER_TYPE_CUSTOM=3/SKILL_PROVIDER_TYPE_CUSTOM_SHARED=4) - CategoryKey: 分类标识,字符串数组,精确匹配 - AnalysisStatus: 安全检测状态,枚举值数组,精确匹配 (SKILL_ANALYSIS_PENDING=0/SKILL_ANALYSIS_RUNNING=1/SKILL_ANALYSIS_AVAILABLE=2/SKILL_ANALYSIS_UNAVAILABLE=3/SKILL_ANALYSIS_FAILED=4) - RiskLevel: 风险等级,枚举值数组,精确匹配 (SKILL_RISK_NONE=0/SKILL_RISK_LOW=1/SKILL_RISK_MEDIUM=2/SKILL_RISK_HIGH=3) - ShareStatus: 共享状态,枚举值数组,精确匹配,仅在ProviderType包含SKILL_PROVIDER_TYPE_CUSTOM/SKILL_PROVIDER_TYPE_CUSTOM_SHARED时生效 (SHARE_STATUS_UNSHARED=0/SHARE_STATUS_SHARED=1/SHARE_STATUS_APPROVING=2)
                     * @param _filterList 过滤条件(多个Filter之间为AND关系,同一Filter的多个Values为OR关系): - SkillIdList: Skill ID列表,字符串数组,精确匹配 - ProviderType: Skill 提供方类型,枚举值数组,精确匹配 (SKILL_PROVIDER_TYPE_OFFICIAL=1/SKILL_PROVIDER_TYPE_THIRD_PARTY=2/SKILL_PROVIDER_TYPE_CUSTOM=3/SKILL_PROVIDER_TYPE_CUSTOM_SHARED=4) - CategoryKey: 分类标识,字符串数组,精确匹配 - AnalysisStatus: 安全检测状态,枚举值数组,精确匹配 (SKILL_ANALYSIS_PENDING=0/SKILL_ANALYSIS_RUNNING=1/SKILL_ANALYSIS_AVAILABLE=2/SKILL_ANALYSIS_UNAVAILABLE=3/SKILL_ANALYSIS_FAILED=4) - RiskLevel: 风险等级,枚举值数组,精确匹配 (SKILL_RISK_NONE=0/SKILL_RISK_LOW=1/SKILL_RISK_MEDIUM=2/SKILL_RISK_HIGH=3) - ShareStatus: 共享状态,枚举值数组,精确匹配,仅在ProviderType包含SKILL_PROVIDER_TYPE_CUSTOM/SKILL_PROVIDER_TYPE_CUSTOM_SHARED时生效 (SHARE_STATUS_UNSHARED=0/SHARE_STATUS_SHARED=1/SHARE_STATUS_APPROVING=2)
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                    /**
                     * 获取页码，从 0 开始
                     * @return PageNumber 页码，从 0 开始
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码，从 0 开始
                     * @param _pageNumber 页码，从 0 开始
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页数量，最大值 100
                     * @return PageSize 每页数量，最大值 100
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数量，最大值 100
                     * @param _pageSize 每页数量，最大值 100
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取名称/展示名称模糊搜索
                     * @return Query 名称/展示名称模糊搜索
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置名称/展示名称模糊搜索
                     * @param _query 名称/展示名称模糊搜索
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * 空间ID，必填
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 仅查询当前用户收藏的 Skill
                     */
                    bool m_favoriteOnly;
                    bool m_favoriteOnlyHasBeenSet;

                    /**
                     * 过滤条件(多个Filter之间为AND关系,同一Filter的多个Values为OR关系): - SkillIdList: Skill ID列表,字符串数组,精确匹配 - ProviderType: Skill 提供方类型,枚举值数组,精确匹配 (SKILL_PROVIDER_TYPE_OFFICIAL=1/SKILL_PROVIDER_TYPE_THIRD_PARTY=2/SKILL_PROVIDER_TYPE_CUSTOM=3/SKILL_PROVIDER_TYPE_CUSTOM_SHARED=4) - CategoryKey: 分类标识,字符串数组,精确匹配 - AnalysisStatus: 安全检测状态,枚举值数组,精确匹配 (SKILL_ANALYSIS_PENDING=0/SKILL_ANALYSIS_RUNNING=1/SKILL_ANALYSIS_AVAILABLE=2/SKILL_ANALYSIS_UNAVAILABLE=3/SKILL_ANALYSIS_FAILED=4) - RiskLevel: 风险等级,枚举值数组,精确匹配 (SKILL_RISK_NONE=0/SKILL_RISK_LOW=1/SKILL_RISK_MEDIUM=2/SKILL_RISK_HIGH=3) - ShareStatus: 共享状态,枚举值数组,精确匹配,仅在ProviderType包含SKILL_PROVIDER_TYPE_CUSTOM/SKILL_PROVIDER_TYPE_CUSTOM_SHARED时生效 (SHARE_STATUS_UNSHARED=0/SHARE_STATUS_SHARED=1/SHARE_STATUS_APPROVING=2)
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * 页码，从 0 开始
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数量，最大值 100
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 名称/展示名称模糊搜索
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLSUMMARYLISTREQUEST_H_
