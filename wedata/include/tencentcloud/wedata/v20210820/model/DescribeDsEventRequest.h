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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSEVENTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * DescribeDsEvent请求参数结构体
                */
                class DescribeDsEventRequest : public AbstractModel
                {
                public:
                    DescribeDsEventRequest();
                    ~DescribeDsEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param _pageSize 分页大小
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
                     * 获取页码
                     * @return PageNumber 页码
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码
                     * @param _pageNumber 页码
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
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取事件名称/项目名称
                     * @return EventName 事件名称/项目名称
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置事件名称/项目名称
                     * @param _eventName 事件名称/项目名称
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取事件类型GENERAL、TIME_SERIES
                     * @return EventType 事件类型GENERAL、TIME_SERIES
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型GENERAL、TIME_SERIES
                     * @param _eventType 事件类型GENERAL、TIME_SERIES
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取事件子类型SECOND、MIN、HOUR、DAY
                     * @return EventSubType 事件子类型SECOND、MIN、HOUR、DAY
                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置事件子类型SECOND、MIN、HOUR、DAY
                     * @param _eventSubType 事件子类型SECOND、MIN、HOUR、DAY
                     * 
                     */
                    void SetEventSubType(const std::string& _eventSubType);

                    /**
                     * 判断参数 EventSubType 是否已赋值
                     * @return EventSubType 是否已赋值
                     * 
                     */
                    bool EventSubTypeHasBeenSet() const;

                    /**
                     * 获取日期格式
                     * @return DatetimeFormat 日期格式
                     * 
                     */
                    std::string GetDatetimeFormat() const;

                    /**
                     * 设置日期格式
                     * @param _datetimeFormat 日期格式
                     * 
                     */
                    void SetDatetimeFormat(const std::string& _datetimeFormat);

                    /**
                     * 判断参数 DatetimeFormat 是否已赋值
                     * @return DatetimeFormat 是否已赋值
                     * 
                     */
                    bool DatetimeFormatHasBeenSet() const;

                    /**
                     * 获取创建开始时间
                     * @return CreationTimeStart 创建开始时间
                     * 
                     */
                    std::string GetCreationTimeStart() const;

                    /**
                     * 设置创建开始时间
                     * @param _creationTimeStart 创建开始时间
                     * 
                     */
                    void SetCreationTimeStart(const std::string& _creationTimeStart);

                    /**
                     * 判断参数 CreationTimeStart 是否已赋值
                     * @return CreationTimeStart 是否已赋值
                     * 
                     */
                    bool CreationTimeStartHasBeenSet() const;

                    /**
                     * 获取创建结束时间
                     * @return CreationTimeEnd 创建结束时间
                     * 
                     */
                    std::string GetCreationTimeEnd() const;

                    /**
                     * 设置创建结束时间
                     * @param _creationTimeEnd 创建结束时间
                     * 
                     */
                    void SetCreationTimeEnd(const std::string& _creationTimeEnd);

                    /**
                     * 判断参数 CreationTimeEnd 是否已赋值
                     * @return CreationTimeEnd 是否已赋值
                     * 
                     */
                    bool CreationTimeEndHasBeenSet() const;

                    /**
                     * 获取排序参数
                     * @return OrderFields 排序参数
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置排序参数
                     * @param _orderFields 排序参数
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
                     * 获取责任人筛选
                     * @return OwnerNameList 责任人筛选
                     * 
                     */
                    std::vector<std::string> GetOwnerNameList() const;

                    /**
                     * 设置责任人筛选
                     * @param _ownerNameList 责任人筛选
                     * 
                     */
                    void SetOwnerNameList(const std::vector<std::string>& _ownerNameList);

                    /**
                     * 判断参数 OwnerNameList 是否已赋值
                     * @return OwnerNameList 是否已赋值
                     * 
                     */
                    bool OwnerNameListHasBeenSet() const;

                    /**
                     * 获取任务周期筛选
                     * @return TaskCycleType 任务周期筛选
                     * 
                     */
                    std::string GetTaskCycleType() const;

                    /**
                     * 设置任务周期筛选
                     * @param _taskCycleType 任务周期筛选
                     * 
                     */
                    void SetTaskCycleType(const std::string& _taskCycleType);

                    /**
                     * 判断参数 TaskCycleType 是否已赋值
                     * @return TaskCycleType 是否已赋值
                     * 
                     */
                    bool TaskCycleTypeHasBeenSet() const;

                    /**
                     * 获取0表示自定义，其他的表示固定参数，单位为天
                     * @return TimeToLive 0表示自定义，其他的表示固定参数，单位为天
                     * 
                     */
                    std::vector<int64_t> GetTimeToLive() const;

                    /**
                     * 设置0表示自定义，其他的表示固定参数，单位为天
                     * @param _timeToLive 0表示自定义，其他的表示固定参数，单位为天
                     * 
                     */
                    void SetTimeToLive(const std::vector<int64_t>& _timeToLive);

                    /**
                     * 判断参数 TimeToLive 是否已赋值
                     * @return TimeToLive 是否已赋值
                     * 
                     */
                    bool TimeToLiveHasBeenSet() const;

                private:

                    /**
                     * 分页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 事件名称/项目名称
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 事件类型GENERAL、TIME_SERIES
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 事件子类型SECOND、MIN、HOUR、DAY
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                    /**
                     * 日期格式
                     */
                    std::string m_datetimeFormat;
                    bool m_datetimeFormatHasBeenSet;

                    /**
                     * 创建开始时间
                     */
                    std::string m_creationTimeStart;
                    bool m_creationTimeStartHasBeenSet;

                    /**
                     * 创建结束时间
                     */
                    std::string m_creationTimeEnd;
                    bool m_creationTimeEndHasBeenSet;

                    /**
                     * 排序参数
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * 责任人筛选
                     */
                    std::vector<std::string> m_ownerNameList;
                    bool m_ownerNameListHasBeenSet;

                    /**
                     * 任务周期筛选
                     */
                    std::string m_taskCycleType;
                    bool m_taskCycleTypeHasBeenSet;

                    /**
                     * 0表示自定义，其他的表示固定参数，单位为天
                     */
                    std::vector<int64_t> m_timeToLive;
                    bool m_timeToLiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSEVENTREQUEST_H_
