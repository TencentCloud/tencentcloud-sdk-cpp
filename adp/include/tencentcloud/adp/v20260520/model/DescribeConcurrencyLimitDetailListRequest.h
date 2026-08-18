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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONCURRENCYLIMITDETAILLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONCURRENCYLIMITDETAILLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/TimeRange.h>
#include <tencentcloud/adp/v20260520/model/ViewScope.h>
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
                * DescribeConcurrencyLimitDetailList请求参数结构体
                */
                class DescribeConcurrencyLimitDetailListRequest : public AbstractModel
                {
                public:
                    DescribeConcurrencyLimitDetailListRequest();
                    ~DescribeConcurrencyLimitDetailListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询时间范围（Unix 秒）</p>
                     * @return TimeRange <p>查询时间范围（Unix 秒）</p>
                     * 
                     */
                    TimeRange GetTimeRange() const;

                    /**
                     * 设置<p>查询时间范围（Unix 秒）</p>
                     * @param _timeRange <p>查询时间范围（Unix 秒）</p>
                     * 
                     */
                    void SetTimeRange(const TimeRange& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取<p>视图范围：企业视图 / 空间视图/ 应用视图</p>
                     * @return ViewScope <p>视图范围：企业视图 / 空间视图/ 应用视图</p>
                     * 
                     */
                    ViewScope GetViewScope() const;

                    /**
                     * 设置<p>视图范围：企业视图 / 空间视图/ 应用视图</p>
                     * @param _viewScope <p>视图范围：企业视图 / 空间视图/ 应用视图</p>
                     * 
                     */
                    void SetViewScope(const ViewScope& _viewScope);

                    /**
                     * 判断参数 ViewScope 是否已赋值
                     * @return ViewScope 是否已赋值
                     * 
                     */
                    bool ViewScopeHasBeenSet() const;

                    /**
                     * 获取<p>扩展过滤。Filter 组合规则：多项 AND，同项 value_list OR。支持 Name：concurrency_type（qpm_tpm/dedicated，默认 qpm_tpm）、model_name（必填）、space_id、app_id/resource_id/source_id（应用ID，多选）、metric_source_type（METRIC_SOURCE_TYPE_* 枚举名或整数）</p>
                     * @return FilterList <p>扩展过滤。Filter 组合规则：多项 AND，同项 value_list OR。支持 Name：concurrency_type（qpm_tpm/dedicated，默认 qpm_tpm）、model_name（必填）、space_id、app_id/resource_id/source_id（应用ID，多选）、metric_source_type（METRIC_SOURCE_TYPE_* 枚举名或整数）</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>扩展过滤。Filter 组合规则：多项 AND，同项 value_list OR。支持 Name：concurrency_type（qpm_tpm/dedicated，默认 qpm_tpm）、model_name（必填）、space_id、app_id/resource_id/source_id（应用ID，多选）、metric_source_type（METRIC_SOURCE_TYPE_* 枚举名或整数）</p>
                     * @param _filterList <p>扩展过滤。Filter 组合规则：多项 AND，同项 value_list OR。支持 Name：concurrency_type（qpm_tpm/dedicated，默认 qpm_tpm）、model_name（必填）、space_id、app_id/resource_id/source_id（应用ID，多选）、metric_source_type（METRIC_SOURCE_TYPE_* 枚举名或整数）</p>
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
                     * 获取<p>页码，从 0 开始</p>
                     * @return PageNumber <p>页码，从 0 开始</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码，从 0 开始</p>
                     * @param _pageNumber <p>页码，从 0 开始</p>
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
                     * 获取<p>每页数量，最大 100</p>
                     * @return PageSize <p>每页数量，最大 100</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数量，最大 100</p>
                     * @param _pageSize <p>每页数量，最大 100</p>
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
                     * <p>查询时间范围（Unix 秒）</p>
                     */
                    TimeRange m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * <p>视图范围：企业视图 / 空间视图/ 应用视图</p>
                     */
                    ViewScope m_viewScope;
                    bool m_viewScopeHasBeenSet;

                    /**
                     * <p>扩展过滤。Filter 组合规则：多项 AND，同项 value_list OR。支持 Name：concurrency_type（qpm_tpm/dedicated，默认 qpm_tpm）、model_name（必填）、space_id、app_id/resource_id/source_id（应用ID，多选）、metric_source_type（METRIC_SOURCE_TYPE_* 枚举名或整数）</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * <p>页码，从 0 开始</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页数量，最大 100</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONCURRENCYLIMITDETAILLISTREQUEST_H_
