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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDCMQMSGREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDCMQMSGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * SendCmqMsg请求参数结构体
                */
                class SendCmqMsgRequest : public AbstractModel
                {
                public:
                    SendCmqMsgRequest();
                    ~SendCmqMsgRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取队列名
                     * @return QueueName 队列名
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置队列名
                     * @param _queueName 队列名
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取消息内容
                     * @return MsgContent 消息内容
                     * 
                     */
                    std::string GetMsgContent() const;

                    /**
                     * 设置消息内容
                     * @param _msgContent 消息内容
                     * 
                     */
                    void SetMsgContent(const std::string& _msgContent);

                    /**
                     * 判断参数 MsgContent 是否已赋值
                     * @return MsgContent 是否已赋值
                     * 
                     */
                    bool MsgContentHasBeenSet() const;

                    /**
                     * 获取延迟时间。单位为秒，默认值为0秒，最大不能超过队列配置的消息最长未确认时间。
                     * @return DelaySeconds 延迟时间。单位为秒，默认值为0秒，最大不能超过队列配置的消息最长未确认时间。
                     * 
                     */
                    int64_t GetDelaySeconds() const;

                    /**
                     * 设置延迟时间。单位为秒，默认值为0秒，最大不能超过队列配置的消息最长未确认时间。
                     * @param _delaySeconds 延迟时间。单位为秒，默认值为0秒，最大不能超过队列配置的消息最长未确认时间。
                     * 
                     */
                    void SetDelaySeconds(const int64_t& _delaySeconds);

                    /**
                     * 判断参数 DelaySeconds 是否已赋值
                     * @return DelaySeconds 是否已赋值
                     * 
                     */
                    bool DelaySecondsHasBeenSet() const;

                private:

                    /**
                     * 队列名
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 消息内容
                     */
                    std::string m_msgContent;
                    bool m_msgContentHasBeenSet;

                    /**
                     * 延迟时间。单位为秒，默认值为0秒，最大不能超过队列配置的消息最长未确认时间。
                     */
                    int64_t m_delaySeconds;
                    bool m_delaySecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDCMQMSGREQUEST_H_
