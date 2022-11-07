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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEALARMRECEIVERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEALARMRECEIVERREQUEST_H_

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
                * DescribeAlarmReceiver请求参数结构体
                */
                class DescribeAlarmReceiverRequest : public AbstractModel
                {
                public:
                    DescribeAlarmReceiverRequest();
                    ~DescribeAlarmReceiverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警ID
                     * @return AlarmId 告警ID
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置告警ID
                     * @param AlarmId 告警ID
                     */
                    void SetAlarmId(const std::string& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     */
                    bool AlarmIdHasBeenSet() const;

                    /**
                     * 获取当前页
                     * @return PageNumber 当前页
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置当前页
                     * @param PageNumber 当前页
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页记录数
                     * @return PageSize 每页记录数
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页记录数
                     * @param PageSize 每页记录数
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param ProjectId 项目ID
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取消息ID
                     * @return MessageId 消息ID
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置消息ID
                     * @param MessageId 消息ID
                     */
                    void SetMessageId(const std::string& _messageId);

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return TaskType 类型
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置类型
                     * @param TaskType 类型
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取告警接收人ID(逗号分隔)
                     * @return AlarmRecipient 告警接收人ID(逗号分隔)
                     */
                    std::string GetAlarmRecipient() const;

                    /**
                     * 设置告警接收人ID(逗号分隔)
                     * @param AlarmRecipient 告警接收人ID(逗号分隔)
                     */
                    void SetAlarmRecipient(const std::string& _alarmRecipient);

                    /**
                     * 判断参数 AlarmRecipient 是否已赋值
                     * @return AlarmRecipient 是否已赋值
                     */
                    bool AlarmRecipientHasBeenSet() const;

                    /**
                     * 获取告警接收人姓名(逗号分隔)
                     * @return AlarmRecipientName 告警接收人姓名(逗号分隔)
                     */
                    std::string GetAlarmRecipientName() const;

                    /**
                     * 设置告警接收人姓名(逗号分隔)
                     * @param AlarmRecipientName 告警接收人姓名(逗号分隔)
                     */
                    void SetAlarmRecipientName(const std::string& _alarmRecipientName);

                    /**
                     * 判断参数 AlarmRecipientName 是否已赋值
                     * @return AlarmRecipientName 是否已赋值
                     */
                    bool AlarmRecipientNameHasBeenSet() const;

                    /**
                     * 获取告警时间
                     * @return AlarmTime 告警时间
                     */
                    std::string GetAlarmTime() const;

                    /**
                     * 设置告警时间
                     * @param AlarmTime 告警时间
                     */
                    void SetAlarmTime(const std::string& _alarmTime);

                    /**
                     * 判断参数 AlarmTime 是否已赋值
                     * @return AlarmTime 是否已赋值
                     */
                    bool AlarmTimeHasBeenSet() const;

                private:

                    /**
                     * 告警ID
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

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
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 消息ID
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * 类型
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 告警接收人ID(逗号分隔)
                     */
                    std::string m_alarmRecipient;
                    bool m_alarmRecipientHasBeenSet;

                    /**
                     * 告警接收人姓名(逗号分隔)
                     */
                    std::string m_alarmRecipientName;
                    bool m_alarmRecipientNameHasBeenSet;

                    /**
                     * 告警时间
                     */
                    std::string m_alarmTime;
                    bool m_alarmTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEALARMRECEIVERREQUEST_H_
