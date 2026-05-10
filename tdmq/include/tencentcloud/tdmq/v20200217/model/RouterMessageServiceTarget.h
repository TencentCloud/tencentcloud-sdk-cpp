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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROUTERMESSAGESERVICETARGET_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROUTERMESSAGESERVICETARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * rocketmq router mns 目标信息
                */
                class RouterMessageServiceTarget : public AbstractModel
                {
                public:
                    RouterMessageServiceTarget();
                    ~RouterMessageServiceTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>access key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessKey <p>access key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置<p>access key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessKey <p>access key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取<p>mns接入点，需要和router内网联通，一般是公网接入点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Endpoint <p>mns接入点，需要和router内网联通，一般是公网接入点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置<p>mns接入点，需要和router内网联通，一般是公网接入点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endpoint <p>mns接入点，需要和router内网联通，一般是公网接入点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取<p>secret key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretKey <p>secret key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置<p>secret key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretKey <p>secret key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取<p>mns queue名字。可以在https://mns.console.aliyun.com/region/cn-shenzhen/queues 看到</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Queue <p>mns queue名字。可以在https://mns.console.aliyun.com/region/cn-shenzhen/queues 看到</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置<p>mns queue名字。可以在https://mns.console.aliyun.com/region/cn-shenzhen/queues 看到</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queue <p>mns queue名字。可以在https://mns.console.aliyun.com/region/cn-shenzhen/queues 看到</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueue(const std::string& _queue);

                    /**
                     * 判断参数 Queue 是否已赋值
                     * @return Queue 是否已赋值
                     * 
                     */
                    bool QueueHasBeenSet() const;

                    /**
                     * 获取<p>是否用base64编码发送mns消息。<br> ON：发送base64编码的消息体到mns</p><p>OFF：将原始消息体发送到mns</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SendWithBase64 <p>是否用base64编码发送mns消息。<br> ON：发送base64编码的消息体到mns</p><p>OFF：将原始消息体发送到mns</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSendWithBase64() const;

                    /**
                     * 设置<p>是否用base64编码发送mns消息。<br> ON：发送base64编码的消息体到mns</p><p>OFF：将原始消息体发送到mns</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sendWithBase64 <p>是否用base64编码发送mns消息。<br> ON：发送base64编码的消息体到mns</p><p>OFF：将原始消息体发送到mns</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSendWithBase64(const std::string& _sendWithBase64);

                    /**
                     * 判断参数 SendWithBase64 是否已赋值
                     * @return SendWithBase64 是否已赋值
                     * 
                     */
                    bool SendWithBase64HasBeenSet() const;

                    /**
                     * 获取<p>发送mns的并发数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetProduceConcurrentThreadCount <p>发送mns的并发数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTargetProduceConcurrentThreadCount() const;

                    /**
                     * 设置<p>发送mns的并发数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetProduceConcurrentThreadCount <p>发送mns的并发数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetProduceConcurrentThreadCount(const int64_t& _targetProduceConcurrentThreadCount);

                    /**
                     * 判断参数 TargetProduceConcurrentThreadCount 是否已赋值
                     * @return TargetProduceConcurrentThreadCount 是否已赋值
                     * 
                     */
                    bool TargetProduceConcurrentThreadCountHasBeenSet() const;

                    /**
                     * 获取<p>topic名字。可以在https://mns.console.aliyun.com/region/cn-shenzhen/topics 看到</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Topic <p>topic名字。可以在https://mns.console.aliyun.com/region/cn-shenzhen/topics 看到</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>topic名字。可以在https://mns.console.aliyun.com/region/cn-shenzhen/topics 看到</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topic <p>topic名字。可以在https://mns.console.aliyun.com/region/cn-shenzhen/topics 看到</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                private:

                    /**
                     * <p>access key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * <p>mns接入点，需要和router内网联通，一般是公网接入点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * <p>secret key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * <p>mns queue名字。可以在https://mns.console.aliyun.com/region/cn-shenzhen/queues 看到</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>是否用base64编码发送mns消息。<br> ON：发送base64编码的消息体到mns</p><p>OFF：将原始消息体发送到mns</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sendWithBase64;
                    bool m_sendWithBase64HasBeenSet;

                    /**
                     * <p>发送mns的并发数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_targetProduceConcurrentThreadCount;
                    bool m_targetProduceConcurrentThreadCountHasBeenSet;

                    /**
                     * <p>topic名字。可以在https://mns.console.aliyun.com/region/cn-shenzhen/topics 看到</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROUTERMESSAGESERVICETARGET_H_
