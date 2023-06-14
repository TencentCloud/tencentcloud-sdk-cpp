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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTSENDTASKSREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTSENDTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListSendTasks请求参数结构体
                */
                class ListSendTasksRequest : public AbstractModel
                {
                public:
                    ListSendTasksRequest();
                    ~ListSendTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，整型，从0开始，0代表跳过0行
                     * @return Offset 偏移量，整型，从0开始，0代表跳过0行
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，整型，从0开始，0代表跳过0行
                     * @param _offset 偏移量，整型，从0开始，0代表跳过0行
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制数目，整型,不超过100
                     * @return Limit 限制数目，整型,不超过100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目，整型,不超过100
                     * @param _limit 限制数目，整型,不超过100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取任务状态 1 待开始 5 发送中 6 今日暂停发送  7 发信异常 10 发送完成。查询所有状态，则不传这个字段
                     * @return Status 任务状态 1 待开始 5 发送中 6 今日暂停发送  7 发信异常 10 发送完成。查询所有状态，则不传这个字段
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置任务状态 1 待开始 5 发送中 6 今日暂停发送  7 发信异常 10 发送完成。查询所有状态，则不传这个字段
                     * @param _status 任务状态 1 待开始 5 发送中 6 今日暂停发送  7 发信异常 10 发送完成。查询所有状态，则不传这个字段
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取收件人列表ID
                     * @return ReceiverId 收件人列表ID
                     * 
                     */
                    uint64_t GetReceiverId() const;

                    /**
                     * 设置收件人列表ID
                     * @param _receiverId 收件人列表ID
                     * 
                     */
                    void SetReceiverId(const uint64_t& _receiverId);

                    /**
                     * 判断参数 ReceiverId 是否已赋值
                     * @return ReceiverId 是否已赋值
                     * 
                     */
                    bool ReceiverIdHasBeenSet() const;

                    /**
                     * 获取任务类型 1即时 2定时 3周期，查询所有类型则不传这个字段
                     * @return TaskType 任务类型 1即时 2定时 3周期，查询所有类型则不传这个字段
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置任务类型 1即时 2定时 3周期，查询所有类型则不传这个字段
                     * @param _taskType 任务类型 1即时 2定时 3周期，查询所有类型则不传这个字段
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * 偏移量，整型，从0开始，0代表跳过0行
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目，整型,不超过100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 任务状态 1 待开始 5 发送中 6 今日暂停发送  7 发信异常 10 发送完成。查询所有状态，则不传这个字段
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 收件人列表ID
                     */
                    uint64_t m_receiverId;
                    bool m_receiverIdHasBeenSet;

                    /**
                     * 任务类型 1即时 2定时 3周期，查询所有类型则不传这个字段
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTSENDTASKSREQUEST_H_
