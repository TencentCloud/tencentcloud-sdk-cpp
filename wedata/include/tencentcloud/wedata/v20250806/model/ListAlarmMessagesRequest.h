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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTALARMMESSAGESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTALARMMESSAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListAlarmMessages请求参数结构体
                */
                class ListAlarmMessagesRequest : public AbstractModel
                {
                public:
                    ListAlarmMessagesRequest();
                    ~ListAlarmMessagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所属项目id
                     * @return ProjectId 所属项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置所属项目id
                     * @param _projectId 所属项目id
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
                     * 获取页码数，用于翻页，最小值为 1。
                     * @return PageNumber 页码数，用于翻页，最小值为 1。
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码数，用于翻页，最小值为 1。
                     * @param _pageNumber 页码数，用于翻页，最小值为 1。
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
                     * 获取每页显示的条数，最大 100 条
                     * @return PageSize 每页显示的条数，最大 100 条
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页显示的条数，最大 100 条
                     * @param _pageSize 每页显示的条数，最大 100 条
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
                     * 获取起始告警时间, 格式为yyyy-MM-dd HH:mm:ss
                     * @return StartTime 起始告警时间, 格式为yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始告警时间, 格式为yyyy-MM-dd HH:mm:ss
                     * @param _startTime 起始告警时间, 格式为yyyy-MM-dd HH:mm:ss
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
                     * 获取截止告警时间, 格式yyyy-MM-dd HH:mm:ss
                     * @return EndTime 截止告警时间, 格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置截止告警时间, 格式yyyy-MM-dd HH:mm:ss
                     * @param _endTime 截止告警时间, 格式yyyy-MM-dd HH:mm:ss
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
                     * 获取告警级别
                     * @return AlarmLevel 告警级别
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置告警级别
                     * @param _alarmLevel 告警级别
                     * 
                     */
                    void SetAlarmLevel(const uint64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取告警接收人Id
                     * @return AlarmRecipientId 告警接收人Id
                     * 
                     */
                    std::string GetAlarmRecipientId() const;

                    /**
                     * 设置告警接收人Id
                     * @param _alarmRecipientId 告警接收人Id
                     * 
                     */
                    void SetAlarmRecipientId(const std::string& _alarmRecipientId);

                    /**
                     * 判断参数 AlarmRecipientId 是否已赋值
                     * @return AlarmRecipientId 是否已赋值
                     * 
                     */
                    bool AlarmRecipientIdHasBeenSet() const;

                    /**
                     * 获取对于传入和返回的过滤时区, 默认UTC+8
                     * @return TimeZone 对于传入和返回的过滤时区, 默认UTC+8
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置对于传入和返回的过滤时区, 默认UTC+8
                     * @param _timeZone 对于传入和返回的过滤时区, 默认UTC+8
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * 所属项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页码数，用于翻页，最小值为 1。
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页显示的条数，最大 100 条
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 起始告警时间, 格式为yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 截止告警时间, 格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 告警级别
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 告警接收人Id
                     */
                    std::string m_alarmRecipientId;
                    bool m_alarmRecipientIdHasBeenSet;

                    /**
                     * 对于传入和返回的过滤时区, 默认UTC+8
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTALARMMESSAGESREQUEST_H_
