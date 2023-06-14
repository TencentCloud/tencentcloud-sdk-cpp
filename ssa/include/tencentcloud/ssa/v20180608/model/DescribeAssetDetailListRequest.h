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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEASSETDETAILLISTREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEASSETDETAILLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/AssetQueryFilter.h>
#include <tencentcloud/ssa/v20180608/model/QuerySort.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeAssetDetailList请求参数结构体
                */
                class DescribeAssetDetailListRequest : public AbstractModel
                {
                public:
                    DescribeAssetDetailListRequest();
                    ~DescribeAssetDetailListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询条件，可支持的查询字段：AssetUniqid,AssetName,AssetIpAll,AssetVpcid,Tag
                     * @return Filter 查询条件，可支持的查询字段：AssetUniqid,AssetName,AssetIpAll,AssetVpcid,Tag
                     * 
                     */
                    std::vector<AssetQueryFilter> GetFilter() const;

                    /**
                     * 设置查询条件，可支持的查询字段：AssetUniqid,AssetName,AssetIpAll,AssetVpcid,Tag
                     * @param _filter 查询条件，可支持的查询字段：AssetUniqid,AssetName,AssetIpAll,AssetVpcid,Tag
                     * 
                     */
                    void SetFilter(const std::vector<AssetQueryFilter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取排序条件，可支持的排序字段：
AssetCspmRiskNum,AssetVulNum,AssetEventNum,SsaAssetDiscoverTime
                     * @return Sorter 排序条件，可支持的排序字段：
AssetCspmRiskNum,AssetVulNum,AssetEventNum,SsaAssetDiscoverTime
                     * 
                     */
                    std::vector<QuerySort> GetSorter() const;

                    /**
                     * 设置排序条件，可支持的排序字段：
AssetCspmRiskNum,AssetVulNum,AssetEventNum,SsaAssetDiscoverTime
                     * @param _sorter 排序条件，可支持的排序字段：
AssetCspmRiskNum,AssetVulNum,AssetEventNum,SsaAssetDiscoverTime
                     * 
                     */
                    void SetSorter(const std::vector<QuerySort>& _sorter);

                    /**
                     * 判断参数 Sorter 是否已赋值
                     * @return Sorter 是否已赋值
                     * 
                     */
                    bool SorterHasBeenSet() const;

                    /**
                     * 获取风险标签
                     * @return RiskTags 风险标签
                     * 
                     */
                    std::vector<std::string> GetRiskTags() const;

                    /**
                     * 设置风险标签
                     * @param _riskTags 风险标签
                     * 
                     */
                    void SetRiskTags(const std::vector<std::string>& _riskTags);

                    /**
                     * 判断参数 RiskTags 是否已赋值
                     * @return RiskTags 是否已赋值
                     * 
                     */
                    bool RiskTagsHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取页
                     * @return PageIndex 页
                     * 
                     */
                    uint64_t GetPageIndex() const;

                    /**
                     * 设置页
                     * @param _pageIndex 页
                     * 
                     */
                    void SetPageIndex(const uint64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取页大小
                     * @return PageSize 页大小
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置页大小
                     * @param _pageSize 页大小
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 查询条件，可支持的查询字段：AssetUniqid,AssetName,AssetIpAll,AssetVpcid,Tag
                     */
                    std::vector<AssetQueryFilter> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 排序条件，可支持的排序字段：
AssetCspmRiskNum,AssetVulNum,AssetEventNum,SsaAssetDiscoverTime
                     */
                    std::vector<QuerySort> m_sorter;
                    bool m_sorterHasBeenSet;

                    /**
                     * 风险标签
                     */
                    std::vector<std::string> m_riskTags;
                    bool m_riskTagsHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 页
                     */
                    uint64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEASSETDETAILLISTREQUEST_H_
