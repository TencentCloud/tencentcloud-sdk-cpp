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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEMAPPINGRESULTSREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEMAPPINGRESULTSREQUEST_H_

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
                * DescribeMappingResults请求参数结构体
                */
                class DescribeMappingResultsRequest : public AbstractModel
                {
                public:
                    DescribeMappingResultsRequest();
                    ~DescribeMappingResultsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件，FilterKey 取值范围：AssetId，AssetIp，PrivateIp，Protocol，Service，OS，Process，Component，AssetType，Domain，Port，LastMappingTime，MappingType，Disposal，Vpc
                     * @return Filter 过滤条件，FilterKey 取值范围：AssetId，AssetIp，PrivateIp，Protocol，Service，OS，Process，Component，AssetType，Domain，Port，LastMappingTime，MappingType，Disposal，Vpc
                     * 
                     */
                    std::vector<AssetQueryFilter> GetFilter() const;

                    /**
                     * 设置过滤条件，FilterKey 取值范围：AssetId，AssetIp，PrivateIp，Protocol，Service，OS，Process，Component，AssetType，Domain，Port，LastMappingTime，MappingType，Disposal，Vpc
                     * @param _filter 过滤条件，FilterKey 取值范围：AssetId，AssetIp，PrivateIp，Protocol，Service，OS，Process，Component，AssetType，Domain，Port，LastMappingTime，MappingType，Disposal，Vpc
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
                     * 获取排序条件，SortKey取值范围：CreateTime，LastMappingTime
                     * @return Sorter 排序条件，SortKey取值范围：CreateTime，LastMappingTime
                     * 
                     */
                    std::vector<QuerySort> GetSorter() const;

                    /**
                     * 设置排序条件，SortKey取值范围：CreateTime，LastMappingTime
                     * @param _sorter 排序条件，SortKey取值范围：CreateTime，LastMappingTime
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
                     * 获取页码
                     * @return PageIndex 页码
                     * 
                     */
                    uint64_t GetPageIndex() const;

                    /**
                     * 设置页码
                     * @param _pageIndex 页码
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
                     * 获取页大小，默认大小20
                     * @return PageSize 页大小，默认大小20
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置页大小，默认大小20
                     * @param _pageSize 页大小，默认大小20
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
                     * 过滤条件，FilterKey 取值范围：AssetId，AssetIp，PrivateIp，Protocol，Service，OS，Process，Component，AssetType，Domain，Port，LastMappingTime，MappingType，Disposal，Vpc
                     */
                    std::vector<AssetQueryFilter> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 排序条件，SortKey取值范围：CreateTime，LastMappingTime
                     */
                    std::vector<QuerySort> m_sorter;
                    bool m_sorterHasBeenSet;

                    /**
                     * 页码
                     */
                    uint64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 页大小，默认大小20
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEMAPPINGRESULTSREQUEST_H_
