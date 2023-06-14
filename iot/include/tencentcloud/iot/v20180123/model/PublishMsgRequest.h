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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_PUBLISHMSGREQUEST_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_PUBLISHMSGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * PublishMsg请求参数结构体
                */
                class PublishMsgRequest : public AbstractModel
                {
                public:
                    PublishMsgRequest();
                    ~PublishMsgRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Topic
                     * @return Topic Topic
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Topic
                     * @param _topic Topic
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取消息内容
                     * @return Message 消息内容
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置消息内容
                     * @param _message 消息内容
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Qos(目前QoS支持0与1)
                     * @return Qos Qos(目前QoS支持0与1)
                     * 
                     */
                    int64_t GetQos() const;

                    /**
                     * 设置Qos(目前QoS支持0与1)
                     * @param _qos Qos(目前QoS支持0与1)
                     * 
                     */
                    void SetQos(const int64_t& _qos);

                    /**
                     * 判断参数 Qos 是否已赋值
                     * @return Qos 是否已赋值
                     * 
                     */
                    bool QosHasBeenSet() const;

                private:

                    /**
                     * Topic
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 消息内容
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Qos(目前QoS支持0与1)
                     */
                    int64_t m_qos;
                    bool m_qosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_PUBLISHMSGREQUEST_H_
