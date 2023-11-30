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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEEVENTCASESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEEVENTCASESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeEventCases请求参数结构体
                */
                class DescribeEventCasesRequest : public AbstractModel
                {
                public:
                    DescribeEventCasesRequest();
                    ~DescribeEventCasesRequest() = default;
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
                     * 获取事件实例目录,示例取值:
- 已过期: expired
- 未过期: consuming
- 全部: all

                     * @return Category 事件实例目录,示例取值:
- 已过期: expired
- 未过期: consuming
- 全部: all

                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置事件实例目录,示例取值:
- 已过期: expired
- 未过期: consuming
- 全部: all

                     * @param _category 事件实例目录,示例取值:
- 已过期: expired
- 未过期: consuming
- 全部: all

                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return PageNumber 页码
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码
                     * @param _pageNumber 页码
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
                     * 获取每页数目
                     * @return PageSize 每页数目
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数目
                     * @param _pageSize 每页数目
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
                     * 获取事件名称
                     * @return EventName 事件名称
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置事件名称
                     * @param _eventName 事件名称
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
                     * 获取事件类型
                     * @return EventType 事件类型
                     * @deprecated
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型
                     * @param _eventType 事件类型
                     * @deprecated
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * @deprecated
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取事件分割类型
                     * @return EventSubType 事件分割类型
                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置事件分割类型
                     * @param _eventSubType 事件分割类型
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
                     * 获取事件广播类型
                     * @return EventBroadcastType 事件广播类型
                     * @deprecated
                     */
                    std::string GetEventBroadcastType() const;

                    /**
                     * 设置事件广播类型
                     * @param _eventBroadcastType 事件广播类型
                     * @deprecated
                     */
                    void SetEventBroadcastType(const std::string& _eventBroadcastType);

                    /**
                     * 判断参数 EventBroadcastType 是否已赋值
                     * @return EventBroadcastType 是否已赋值
                     * @deprecated
                     */
                    bool EventBroadcastTypeHasBeenSet() const;

                    /**
                     * 获取事件实例状态,示例取值:
- 已消费: COMSUMED
- 已过期: EXPIRED
- 待消费: ACTIVE
- 消费中: CONSUMING
                     * @return Status 事件实例状态,示例取值:
- 已消费: COMSUMED
- 已过期: EXPIRED
- 待消费: ACTIVE
- 消费中: CONSUMING
                     * @deprecated
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置事件实例状态,示例取值:
- 已消费: COMSUMED
- 已过期: EXPIRED
- 待消费: ACTIVE
- 消费中: CONSUMING
                     * @param _status 事件实例状态,示例取值:
- 已消费: COMSUMED
- 已过期: EXPIRED
- 待消费: ACTIVE
- 消费中: CONSUMING
                     * @deprecated
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * @deprecated
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取事件实例最小创建时间
                     * @return CreationTimeStart 事件实例最小创建时间
                     * 
                     */
                    std::string GetCreationTimeStart() const;

                    /**
                     * 设置事件实例最小创建时间
                     * @param _creationTimeStart 事件实例最小创建时间
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
                     * 获取事件实例最大创建时间
                     * @return CreationTimeEnd 事件实例最大创建时间
                     * 
                     */
                    std::string GetCreationTimeEnd() const;

                    /**
                     * 设置事件实例最大创建时间
                     * @param _creationTimeEnd 事件实例最大创建时间
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
                     * 获取事件实例最小触发时间
                     * @return EventTriggeredTimeStart 事件实例最小触发时间
                     * 
                     */
                    std::string GetEventTriggeredTimeStart() const;

                    /**
                     * 设置事件实例最小触发时间
                     * @param _eventTriggeredTimeStart 事件实例最小触发时间
                     * 
                     */
                    void SetEventTriggeredTimeStart(const std::string& _eventTriggeredTimeStart);

                    /**
                     * 判断参数 EventTriggeredTimeStart 是否已赋值
                     * @return EventTriggeredTimeStart 是否已赋值
                     * 
                     */
                    bool EventTriggeredTimeStartHasBeenSet() const;

                    /**
                     * 获取事件实例最大触发时间
                     * @return EventTriggeredTimeEnd 事件实例最大触发时间
                     * 
                     */
                    std::string GetEventTriggeredTimeEnd() const;

                    /**
                     * 设置事件实例最大触发时间
                     * @param _eventTriggeredTimeEnd 事件实例最大触发时间
                     * 
                     */
                    void SetEventTriggeredTimeEnd(const std::string& _eventTriggeredTimeEnd);

                    /**
                     * 判断参数 EventTriggeredTimeEnd 是否已赋值
                     * @return EventTriggeredTimeEnd 是否已赋值
                     * 
                     */
                    bool EventTriggeredTimeEndHasBeenSet() const;

                    /**
                     * 获取事件实例最小消费时间
                     * @return LogTimeStart 事件实例最小消费时间
                     * 
                     */
                    std::string GetLogTimeStart() const;

                    /**
                     * 设置事件实例最小消费时间
                     * @param _logTimeStart 事件实例最小消费时间
                     * 
                     */
                    void SetLogTimeStart(const std::string& _logTimeStart);

                    /**
                     * 判断参数 LogTimeStart 是否已赋值
                     * @return LogTimeStart 是否已赋值
                     * 
                     */
                    bool LogTimeStartHasBeenSet() const;

                    /**
                     * 获取事件实例最大消费时间
                     * @return LogTimeEnd 事件实例最大消费时间
                     * 
                     */
                    std::string GetLogTimeEnd() const;

                    /**
                     * 设置事件实例最大消费时间
                     * @param _logTimeEnd 事件实例最大消费时间
                     * 
                     */
                    void SetLogTimeEnd(const std::string& _logTimeEnd);

                    /**
                     * 判断参数 LogTimeEnd 是否已赋值
                     * @return LogTimeEnd 是否已赋值
                     * 
                     */
                    bool LogTimeEndHasBeenSet() const;

                    /**
                     * 获取事件实例数据时间
                     * @return Dimension 事件实例数据时间
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置事件实例数据时间
                     * @param _dimension 事件实例数据时间
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取事件实例有效时间
                     * @return TimeToLive 事件实例有效时间
                     * 
                     */
                    std::string GetTimeToLive() const;

                    /**
                     * 设置事件实例有效时间
                     * @param _timeToLive 事件实例有效时间
                     * 
                     */
                    void SetTimeToLive(const std::string& _timeToLive);

                    /**
                     * 判断参数 TimeToLive 是否已赋值
                     * @return TimeToLive 是否已赋值
                     * 
                     */
                    bool TimeToLiveHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return SortItem 排序字段
                     * 
                     */
                    std::string GetSortItem() const;

                    /**
                     * 设置排序字段
                     * @param _sortItem 排序字段
                     * 
                     */
                    void SetSortItem(const std::string& _sortItem);

                    /**
                     * 判断参数 SortItem 是否已赋值
                     * @return SortItem 是否已赋值
                     * 
                     */
                    bool SortItemHasBeenSet() const;

                    /**
                     * 获取排序顺序
                     * @return SortType 排序顺序
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置排序顺序
                     * @param _sortType 排序顺序
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 事件实例目录,示例取值:
- 已过期: expired
- 未过期: consuming
- 全部: all

                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 页码
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数目
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 事件名称
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 事件类型
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 事件分割类型
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                    /**
                     * 事件广播类型
                     */
                    std::string m_eventBroadcastType;
                    bool m_eventBroadcastTypeHasBeenSet;

                    /**
                     * 事件实例状态,示例取值:
- 已消费: COMSUMED
- 已过期: EXPIRED
- 待消费: ACTIVE
- 消费中: CONSUMING
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 事件实例最小创建时间
                     */
                    std::string m_creationTimeStart;
                    bool m_creationTimeStartHasBeenSet;

                    /**
                     * 事件实例最大创建时间
                     */
                    std::string m_creationTimeEnd;
                    bool m_creationTimeEndHasBeenSet;

                    /**
                     * 事件实例最小触发时间
                     */
                    std::string m_eventTriggeredTimeStart;
                    bool m_eventTriggeredTimeStartHasBeenSet;

                    /**
                     * 事件实例最大触发时间
                     */
                    std::string m_eventTriggeredTimeEnd;
                    bool m_eventTriggeredTimeEndHasBeenSet;

                    /**
                     * 事件实例最小消费时间
                     */
                    std::string m_logTimeStart;
                    bool m_logTimeStartHasBeenSet;

                    /**
                     * 事件实例最大消费时间
                     */
                    std::string m_logTimeEnd;
                    bool m_logTimeEndHasBeenSet;

                    /**
                     * 事件实例数据时间
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * 事件实例有效时间
                     */
                    std::string m_timeToLive;
                    bool m_timeToLiveHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_sortItem;
                    bool m_sortItemHasBeenSet;

                    /**
                     * 排序顺序
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEEVENTCASESREQUEST_H_
