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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_BATCHPUBLISHMESSAGE_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_BATCHPUBLISHMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * 批量发消息请求
                */
                class BatchPublishMessage : public AbstractModel
                {
                public:
                    BatchPublishMessage();
                    ~BatchPublishMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息发往的主题。为 Topic 权限中去除 ProductID 和 DeviceName 的部分，如 “event”
                     * @return Topic 消息发往的主题。为 Topic 权限中去除 ProductID 和 DeviceName 的部分，如 “event”
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置消息发往的主题。为 Topic 权限中去除 ProductID 和 DeviceName 的部分，如 “event”
                     * @param _topic 消息发往的主题。为 Topic 权限中去除 ProductID 和 DeviceName 的部分，如 “event”
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
                     * @return Payload 消息内容
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置消息内容
                     * @param _payload 消息内容
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                private:

                    /**
                     * 消息发往的主题。为 Topic 权限中去除 ProductID 和 DeviceName 的部分，如 “event”
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 消息内容
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_BATCHPUBLISHMESSAGE_H_
