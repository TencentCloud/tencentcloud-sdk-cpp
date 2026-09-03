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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LISTTRAININGJOBSPECREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LISTTRAININGJOBSPECREQUEST_H_

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
                * ListTrainingJobSpec请求参数结构体
                */
                class ListTrainingJobSpecRequest : public AbstractModel
                {
                public:
                    ListTrainingJobSpecRequest();
                    ~ListTrainingJobSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>当前页码，从 1 开始（默认 1）</p>
                     * @return Page <p>当前页码，从 1 开始（默认 1）</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>当前页码，从 1 开始（默认 1）</p>
                     * @param _page <p>当前页码，从 1 开始（默认 1）</p>
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
                     * 获取<p>每页数量（默认 200，最大 200）</p>
                     * @return PageSize <p>每页数量（默认 200，最大 200）</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数量（默认 200，最大 200）</p>
                     * @param _pageSize <p>每页数量（默认 200，最大 200）</p>
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
                     * 获取<p>创建时间起始过滤（毫秒时间戳）</p><p>单位：ms</p>
                     * @return StartTime <p>创建时间起始过滤（毫秒时间戳）</p><p>单位：ms</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>创建时间起始过滤（毫秒时间戳）</p><p>单位：ms</p>
                     * @param _startTime <p>创建时间起始过滤（毫秒时间戳）</p><p>单位：ms</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间截止过滤（毫秒时间戳）</p><p>单位：ms</p>
                     * @return EndTime <p>创建时间截止过滤（毫秒时间戳）</p><p>单位：ms</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>创建时间截止过滤（毫秒时间戳）</p><p>单位：ms</p>
                     * @param _endTime <p>创建时间截止过滤（毫秒时间戳）</p><p>单位：ms</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件列表，每项含 Name、Operator、Values。</p><p>提交模式过滤：LAB / CUSTOM_CODE / POST_TRAINING。示例：{&quot;Name&quot;:&quot;kind&quot;,&quot;Operator&quot;:&quot;EQ&quot;,&quot;Values&quot;:[&quot;LAB&quot;]}</p>
                     * @return Filters <p>过滤条件列表，每项含 Name、Operator、Values。</p><p>提交模式过滤：LAB / CUSTOM_CODE / POST_TRAINING。示例：{&quot;Name&quot;:&quot;kind&quot;,&quot;Operator&quot;:&quot;EQ&quot;,&quot;Values&quot;:[&quot;LAB&quot;]}</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件列表，每项含 Name、Operator、Values。</p><p>提交模式过滤：LAB / CUSTOM_CODE / POST_TRAINING。示例：{&quot;Name&quot;:&quot;kind&quot;,&quot;Operator&quot;:&quot;EQ&quot;,&quot;Values&quot;:[&quot;LAB&quot;]}</p>
                     * @param _filters <p>过滤条件列表，每项含 Name、Operator、Values。</p><p>提交模式过滤：LAB / CUSTOM_CODE / POST_TRAINING。示例：{&quot;Name&quot;:&quot;kind&quot;,&quot;Operator&quot;:&quot;EQ&quot;,&quot;Values&quot;:[&quot;LAB&quot;]}</p>
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
                     * 获取<p>排序字段列表，每项含 Field、Order（ASC/DESC）。默认按 updateTime DESC</p>
                     * @return SortFields <p>排序字段列表，每项含 Field、Order（ASC/DESC）。默认按 updateTime DESC</p>
                     * 
                     */
                    std::vector<SortField> GetSortFields() const;

                    /**
                     * 设置<p>排序字段列表，每项含 Field、Order（ASC/DESC）。默认按 updateTime DESC</p>
                     * @param _sortFields <p>排序字段列表，每项含 Field、Order（ASC/DESC）。默认按 updateTime DESC</p>
                     * 
                     */
                    void SetSortFields(const std::vector<SortField>& _sortFields);

                    /**
                     * 判断参数 SortFields 是否已赋值
                     * @return SortFields 是否已赋值
                     * 
                     */
                    bool SortFieldsHasBeenSet() const;

                private:

                    /**
                     * <p>当前页码，从 1 开始（默认 1）</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>每页数量（默认 200，最大 200）</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>创建时间起始过滤（毫秒时间戳）</p><p>单位：ms</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>创建时间截止过滤（毫秒时间戳）</p><p>单位：ms</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>过滤条件列表，每项含 Name、Operator、Values。</p><p>提交模式过滤：LAB / CUSTOM_CODE / POST_TRAINING。示例：{&quot;Name&quot;:&quot;kind&quot;,&quot;Operator&quot;:&quot;EQ&quot;,&quot;Values&quot;:[&quot;LAB&quot;]}</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>排序字段列表，每项含 Field、Order（ASC/DESC）。默认按 updateTime DESC</p>
                     */
                    std::vector<SortField> m_sortFields;
                    bool m_sortFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LISTTRAININGJOBSPECREQUEST_H_
