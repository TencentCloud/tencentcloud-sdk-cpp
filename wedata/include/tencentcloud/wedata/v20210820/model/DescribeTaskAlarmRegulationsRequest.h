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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKALARMREGULATIONSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKALARMREGULATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>
#include <tencentcloud/wedata/v20210820/model/OrderField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTaskAlarmRegulations请求参数结构体
                */
                class DescribeTaskAlarmRegulationsRequest : public AbstractModel
                {
                public:
                    DescribeTaskAlarmRegulationsRequest();
                    ~DescribeTaskAlarmRegulationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取当前页
                     * @return PageNumber 当前页
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置当前页
                     * @param _pageNumber 当前页
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页记录数
                     * @return PageSize 每页记录数
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页记录数
                     * @param _pageSize 每页记录数
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
                     * 获取过滤条件(name有RegularStatus、AlarmLevel、AlarmIndicator、RegularName)
                     * @return Filters 过滤条件(name有RegularStatus、AlarmLevel、AlarmIndicator、RegularName)
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件(name有RegularStatus、AlarmLevel、AlarmIndicator、RegularName)
                     * @param _filters 过滤条件(name有RegularStatus、AlarmLevel、AlarmIndicator、RegularName)
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
                     * 获取排序条件(RegularId)
                     * @return OrderFields 排序条件(RegularId)
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置排序条件(RegularId)
                     * @param _orderFields 排序条件(RegularId)
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderField>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务类型(201代表实时任务，202代表离线任务)
                     * @return TaskType 任务类型(201代表实时任务，202代表离线任务)
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型(201代表实时任务，202代表离线任务)
                     * @param _taskType 任务类型(201代表实时任务，202代表离线任务)
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 当前页
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页记录数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 过滤条件(name有RegularStatus、AlarmLevel、AlarmIndicator、RegularName)
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序条件(RegularId)
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务类型(201代表实时任务，202代表离线任务)
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKALARMREGULATIONSREQUEST_H_
