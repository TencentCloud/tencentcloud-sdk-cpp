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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEEVENTTASKSREQUEST_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEEVENTTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * DescribeEventTasks请求参数结构体
                */
                class DescribeEventTasksRequest : public AbstractModel
                {
                public:
                    DescribeEventTasksRequest();
                    ~DescribeEventTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id
                     * @param _instanceId 集群id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取过滤的事件任务id
                     * @return EventTaskId 过滤的事件任务id
                     * 
                     */
                    int64_t GetEventTaskId() const;

                    /**
                     * 设置过滤的事件任务id
                     * @param _eventTaskId 过滤的事件任务id
                     * 
                     */
                    void SetEventTaskId(const int64_t& _eventTaskId);

                    /**
                     * 判断参数 EventTaskId 是否已赋值
                     * @return EventTaskId 是否已赋值
                     * 
                     */
                    bool EventTaskIdHasBeenSet() const;

                    /**
                     * 获取页码，默认为1
                     * @return PageNumber 页码，默认为1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码，默认为1
                     * @param _pageNumber 页码，默认为1
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
                     * 获取每页数量（支持10、20、30、50、100、200），默认为100
                     * @return PageSize 每页数量（支持10、20、30、50、100、200），默认为100
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页数量（支持10、20、30、50、100、200），默认为100
                     * @param _pageSize 每页数量（支持10、20、30、50、100、200），默认为100
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
                     * 获取事件名称过滤
                     * @return EventCode 事件名称过滤
                     * 
                     */
                    std::string GetEventCode() const;

                    /**
                     * 设置事件名称过滤
                     * @param _eventCode 事件名称过滤
                     * 
                     */
                    void SetEventCode(const std::string& _eventCode);

                    /**
                     * 判断参数 EventCode 是否已赋值
                     * @return EventCode 是否已赋值
                     * 
                     */
                    bool EventCodeHasBeenSet() const;

                    /**
                     * 获取(1-待处理;2-已预约;3-处理中;4-已结束;5-处理中;-1-已忽略;-2-已删除)
                     * @return Status (1-待处理;2-已预约;3-处理中;4-已结束;5-处理中;-1-已忽略;-2-已删除)
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置(1-待处理;2-已预约;3-处理中;4-已结束;5-处理中;-1-已忽略;-2-已删除)
                     * @param _status (1-待处理;2-已预约;3-处理中;4-已结束;5-处理中;-1-已忽略;-2-已删除)
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间范围开始 (格式: YYYY-MM-DD HH:MM:SS)，最大支持查询180天信息
                     * @return StartTime 创建时间范围开始 (格式: YYYY-MM-DD HH:MM:SS)，最大支持查询180天信息
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置创建时间范围开始 (格式: YYYY-MM-DD HH:MM:SS)，最大支持查询180天信息
                     * @param _startTime 创建时间范围开始 (格式: YYYY-MM-DD HH:MM:SS)，最大支持查询180天信息
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
                     * 获取创建时间范围结束 (格式: YYYY-MM-DD HH:MM:SS)
                     * @return EndTime 创建时间范围结束 (格式: YYYY-MM-DD HH:MM:SS)
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置创建时间范围结束 (格式: YYYY-MM-DD HH:MM:SS)
                     * @param _endTime 创建时间范围结束 (格式: YYYY-MM-DD HH:MM:SS)
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
                     * 获取排序字段（事件类型：event_code；触发时间：create_time；完成时间：end_time）
                     * @return SortField 排序字段（事件类型：event_code；触发时间：create_time；完成时间：end_time）
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置排序字段（事件类型：event_code；触发时间：create_time；完成时间：end_time）
                     * @param _sortField 排序字段（事件类型：event_code；触发时间：create_time；完成时间：end_time）
                     * 
                     */
                    void SetSortField(const std::string& _sortField);

                    /**
                     * 判断参数 SortField 是否已赋值
                     * @return SortField 是否已赋值
                     * 
                     */
                    bool SortFieldHasBeenSet() const;

                    /**
                     * 获取排序顺序 (asc/desc)
                     * @return SortOrder 排序顺序 (asc/desc)
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置排序顺序 (asc/desc)
                     * @param _sortOrder 排序顺序 (asc/desc)
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 过滤的事件任务id
                     */
                    int64_t m_eventTaskId;
                    bool m_eventTaskIdHasBeenSet;

                    /**
                     * 页码，默认为1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数量（支持10、20、30、50、100、200），默认为100
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 事件名称过滤
                     */
                    std::string m_eventCode;
                    bool m_eventCodeHasBeenSet;

                    /**
                     * (1-待处理;2-已预约;3-处理中;4-已结束;5-处理中;-1-已忽略;-2-已删除)
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间范围开始 (格式: YYYY-MM-DD HH:MM:SS)，最大支持查询180天信息
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 创建时间范围结束 (格式: YYYY-MM-DD HH:MM:SS)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 排序字段（事件类型：event_code；触发时间：create_time；完成时间：end_time）
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * 排序顺序 (asc/desc)
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEEVENTTASKSREQUEST_H_
