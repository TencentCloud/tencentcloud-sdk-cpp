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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEALARMEVENTSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEALARMEVENTSREQUEST_H_

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
                * DescribeAlarmEvents请求参数结构体
                */
                class DescribeAlarmEventsRequest : public AbstractModel
                {
                public:
                    DescribeAlarmEventsRequest();
                    ~DescribeAlarmEventsRequest() = default;
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
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置当前页
                     * @param _pageNumber 当前页
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
                     * 获取每页记录数
                     * @return PageSize 每页记录数
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页记录数
                     * @param _pageSize 每页记录数
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
                     * 获取过滤条件(key可以是：AlarmLevel,AlarmIndicator,KeyWord)
                     * @return Filters 过滤条件(key可以是：AlarmLevel,AlarmIndicator,KeyWord)
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件(key可以是：AlarmLevel,AlarmIndicator,KeyWord)
                     * @param _filters 过滤条件(key可以是：AlarmLevel,AlarmIndicator,KeyWord)
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
                     * 获取排序字段（AlarmTime）
                     * @return OrderFields 排序字段（AlarmTime）
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置排序字段（AlarmTime）
                     * @param _orderFields 排序字段（AlarmTime）
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
                     * 获取类型(201表示实时，202表示离线)
                     * @return TaskType 类型(201表示实时，202表示离线)
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置类型(201表示实时，202表示离线)
                     * @param _taskType 类型(201表示实时，202表示离线)
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取监控对象类型(1:所有任务,2:指定任务,3:指定责任人,4:指定资源组)
                     * @return MonitorType 监控对象类型(1:所有任务,2:指定任务,3:指定责任人,4:指定资源组)
                     * 
                     */
                    uint64_t GetMonitorType() const;

                    /**
                     * 设置监控对象类型(1:所有任务,2:指定任务,3:指定责任人,4:指定资源组)
                     * @param _monitorType 监控对象类型(1:所有任务,2:指定任务,3:指定责任人,4:指定资源组)
                     * 
                     */
                    void SetMonitorType(const uint64_t& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 当前页
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页记录数
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 过滤条件(key可以是：AlarmLevel,AlarmIndicator,KeyWord)
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段（AlarmTime）
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * 类型(201表示实时，202表示离线)
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 监控对象类型(1:所有任务,2:指定任务,3:指定责任人,4:指定资源组)
                     */
                    uint64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEALARMEVENTSREQUEST_H_
