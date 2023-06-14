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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCCHECKRESULTLISTREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCCHECKRESULTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/QueryFilter.h>
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
                * DescribeSocCheckResultList请求参数结构体
                */
                class DescribeSocCheckResultListRequest : public AbstractModel
                {
                public:
                    DescribeSocCheckResultListRequest();
                    ~DescribeSocCheckResultListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询参数,可支持的查询参数：
Name,Type,AssetType,Result,PloyName,PloyId
                     * @return Filter 查询参数,可支持的查询参数：
Name,Type,AssetType,Result,PloyName,PloyId
                     * 
                     */
                    std::vector<QueryFilter> GetFilter() const;

                    /**
                     * 设置查询参数,可支持的查询参数：
Name,Type,AssetType,Result,PloyName,PloyId
                     * @param _filter 查询参数,可支持的查询参数：
Name,Type,AssetType,Result,PloyName,PloyId
                     * 
                     */
                    void SetFilter(const std::vector<QueryFilter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取排序参数,可支持的排序参数：CheckStatus,RiskCount
                     * @return Sorter 排序参数,可支持的排序参数：CheckStatus,RiskCount
                     * 
                     */
                    std::vector<QuerySort> GetSorter() const;

                    /**
                     * 设置排序参数,可支持的排序参数：CheckStatus,RiskCount
                     * @param _sorter 排序参数,可支持的排序参数：CheckStatus,RiskCount
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
                     * 获取当前页码数据，默认值为10
                     * @return PageSize 当前页码数据，默认值为10
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置当前页码数据，默认值为10
                     * @param _pageSize 当前页码数据，默认值为10
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取当前页面索引，默认值为0
                     * @return PageIndex 当前页面索引，默认值为0
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置当前页面索引，默认值为0
                     * @param _pageIndex 当前页面索引，默认值为0
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取资产id
                     * @return AssetId 资产id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产id
                     * @param _assetId 资产id
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                private:

                    /**
                     * 查询参数,可支持的查询参数：
Name,Type,AssetType,Result,PloyName,PloyId
                     */
                    std::vector<QueryFilter> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 排序参数,可支持的排序参数：CheckStatus,RiskCount
                     */
                    std::vector<QuerySort> m_sorter;
                    bool m_sorterHasBeenSet;

                    /**
                     * 当前页码数据，默认值为10
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 当前页面索引，默认值为0
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 资产id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCCHECKRESULTLISTREQUEST_H_
