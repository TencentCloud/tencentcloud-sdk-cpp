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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LISTINFERENCEMODELSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LISTINFERENCEMODELSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>
#include <tencentcloud/dlc/v20210125/model/SortField.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ListInferenceModels请求参数结构体
                */
                class ListInferenceModelsRequest : public AbstractModel
                {
                public:
                    ListInferenceModelsRequest();
                    ~ListInferenceModelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>页码（从1开始）</p>
                     * @return Page <p>页码（从1开始）</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>页码（从1开始）</p>
                     * @param _page <p>页码（从1开始）</p>
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>每页数量（最大 200）</p>
                     * @return PageSize <p>每页数量（最大 200）</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数量（最大 200）</p>
                     * @param _pageSize <p>每页数量（最大 200）</p>
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
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>过滤器</p>
                     * @return Filters <p>过滤器</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤器</p>
                     * @param _filters <p>过滤器</p>
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
                     * 获取<p>排序字段</p>
                     * @return SortFields <p>排序字段</p>
                     * 
                     */
                    std::vector<SortField> GetSortFields() const;

                    /**
                     * 设置<p>排序字段</p>
                     * @param _sortFields <p>排序字段</p>
                     * 
                     */
                    void SetSortFields(const std::vector<SortField>& _sortFields);

                    /**
                     * 判断参数 SortFields 是否已赋值
                     * @return SortFields 是否已赋值
                     * 
                     */
                    bool SortFieldsHasBeenSet() const;

                    /**
                     * 获取<p>模型参数最小值</p>
                     * @return ParameterSizeMin <p>模型参数最小值</p>
                     * 
                     */
                    double GetParameterSizeMin() const;

                    /**
                     * 设置<p>模型参数最小值</p>
                     * @param _parameterSizeMin <p>模型参数最小值</p>
                     * 
                     */
                    void SetParameterSizeMin(const double& _parameterSizeMin);

                    /**
                     * 判断参数 ParameterSizeMin 是否已赋值
                     * @return ParameterSizeMin 是否已赋值
                     * 
                     */
                    bool ParameterSizeMinHasBeenSet() const;

                    /**
                     * 获取<p>模型参数最大值</p>
                     * @return ParameterSizeMax <p>模型参数最大值</p>
                     * 
                     */
                    double GetParameterSizeMax() const;

                    /**
                     * 设置<p>模型参数最大值</p>
                     * @param _parameterSizeMax <p>模型参数最大值</p>
                     * 
                     */
                    void SetParameterSizeMax(const double& _parameterSizeMax);

                    /**
                     * 判断参数 ParameterSizeMax 是否已赋值
                     * @return ParameterSizeMax 是否已赋值
                     * 
                     */
                    bool ParameterSizeMaxHasBeenSet() const;

                private:

                    /**
                     * <p>页码（从1开始）</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>每页数量（最大 200）</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>过滤器</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>排序字段</p>
                     */
                    std::vector<SortField> m_sortFields;
                    bool m_sortFieldsHasBeenSet;

                    /**
                     * <p>模型参数最小值</p>
                     */
                    double m_parameterSizeMin;
                    bool m_parameterSizeMinHasBeenSet;

                    /**
                     * <p>模型参数最大值</p>
                     */
                    double m_parameterSizeMax;
                    bool m_parameterSizeMaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LISTINFERENCEMODELSREQUEST_H_
